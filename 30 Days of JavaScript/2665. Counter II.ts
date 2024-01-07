type Counter = {
  increment: () => number;
  decrement: () => number;
  reset: () => number;
};

function createCounter(init: number): Counter {
  let curr = init;
  return {
    increment: (): number => ++curr,
    decrement: (): number => --curr,
    reset: (): number => {
      curr = init;
      return init;
    },
  };
}
