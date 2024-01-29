class MyStack {
  stack;
  constructor() {
    this.stack = [];
  }

  push(x: number): void {
    this.stack.push(x);
  }

  pop(): void {
    this.stack.shift();
  }

  peek(): number {
    return this.stack[0];
  }

  size(): number {
    return this.stack.length;
  }

  isEmpty(): boolean {
    return this.size() === 0;
  }
}

class MyQueue {
  public M;

  constructor() {
    this.M = new MyStack();
  }

  push(x: number): void {
    this.M.push(x);
  }

  pop(): number {
    const p = this.M.peek();
    this.M.pop();

    return p;
  }

  peek(): number {
    return this.M.peek();
  }

  empty(): boolean {
    return this.M.isEmpty();
  }
}
