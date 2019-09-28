static SOUNDS: [(u32, &str); 3] = [
    (3, "Pling"),
    (5, "Plang"),
    (7, "Plong")];

pub fn raindrops(n: u32) -> String {
    let mut result: String = String::new();
    for (div, sound) in SOUNDS.iter() {
        if n % div == 0 {
            result.push_str(sound);
        }
    }
    if result == "" {
        result = n.to_string();
    }
    return result;
}
