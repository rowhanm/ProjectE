fn main() {
    let mut i:u32 = 0;
    let mut sum = 0u32;

    loop {
        i = i + 1;
        if i > 1000 {
            break;
        }
        if (i%3==0) || (i%5==0) {
            sum = sum + i
        }
    }
    println!("{}", sum);

}
