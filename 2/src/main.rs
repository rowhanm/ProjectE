fn main() {
    let mut fib0 = 0u32;
    let mut fib1 = 1u32;
    let mut sum = 0u32;
    let n = 4000000u32;
    let mut temp0; 
    loop {
        if fib0 >= n {
            break;
        }
        if fib1 % 2 == 0 {
            sum = sum + fib1;
        }
        temp0 = fib0 + fib1;
        fib0 = fib1;
        fib1 = temp0;
    }
    println!("{}", sum);
}
