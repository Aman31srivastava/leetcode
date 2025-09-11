/**
 * @param {integer} init
 * @return { increment: Function, decrement: Function, reset: Function }
 */
var createCounter = function (init) {
    let current = init;
    let original = init;
    return {
        increment: () => {
            current++;
            return current;
        },
        reset: () => {
            current = original;
            return current;
        },
        decrement: (init) => {
            current--;
            return current;
        }
    }
};

/**
 * const counter = createCounter(5)
 * counter.increment(); // 6
 * counter.reset(); // 5
 * counter.decrement(); // 4
 */