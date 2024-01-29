class MyStack {
  arr: number[] = [];
  constructor() {}

  push(x: number): void {
      this.arr.push(x);
  }

  pop(): number {
      return this.arr.pop()
  }

  top(): number {
      const lastIdx = this.arr.length - 1;
      return this.arr[lastIdx];
  }

  empty(): boolean {
      return (this.arr.length === 0)
  }
}