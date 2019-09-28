fn main() {
    let str = "Hello, World!";
    let rev_str = str.chars().rev().collect::<String>();
    println!("{}", rev_str);
}
