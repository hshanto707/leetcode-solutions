class MyQueue {
  queue;

  constructor() {
    this.queue = [];
  }

  enqueue(x) {
    this.queue.push(x);
  }

  dequeue() {
    const peek = this.peek();
    this.queue.shift();

    return peek;
  }

  peek() {
    return this.queue[0];
  }

  size() {
    return this.queue.length;
  }

  isEmpty() {
    return this.size() === 0;
  }
}

class MyStack {
  public Q;
  constructor() {
    this.Q = new MyQueue();
  }

  push(x: number): void {
    this.Q.enqueue(x);

    for (let i = 1; i <= this.Q.size() - 1; i++) {
      let r = this.Q.dequeue();
      this.Q.enqueue(r);
    }
  }

  pop(): number {
    return this.Q.dequeue();
  }

  top(): number {
    return this.Q.peek();
  }

  empty(): boolean {
    return this.Q.isEmpty();
  }
}
