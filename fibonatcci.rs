// function to print the fibonatcci series
fn fibonacci(n: u32) -> u32 {
    if n == 0 {
        return 0;
    } else if n == 1 {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}
//test fibonacci with a while loop
fn test_fibonacci() {
    let mut n = 0;
    while n < 100 {
        println!("{}", fibonacci(n));
        n += 1;
    }
}
// main function
fn main() {
    test_fibonacci();
}

// how to compile rust code
// rustc learn.rs
// rustc learn.rs -o learn
