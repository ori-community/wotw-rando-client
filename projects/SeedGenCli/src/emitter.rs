use crate::parser::{AreaTree, Metadata, Location};
use crate::world::AreaGraph;

pub fn emit(areas: &AreaTree, metadata: &Metadata, locations: &Vec<Location>, validate: bool) -> Result<AreaGraph, String> {
    // TODO: Design the Graph to know what data structure should be forged here

    Err("not implemented!".to_string())
}
