pub mod tokenizer;
pub mod parser;
pub mod emitter;
pub mod world;
pub mod player;
pub mod requirements;
pub mod util;

use std::path::PathBuf;

use player::Player;
use util::Pathset;

pub fn reach_check(seed: &PathBuf, player: &Player, pathsets: &[Pathset]) {
    println!("{:?} - {:?} - {:?}", seed, player, pathsets);
}
