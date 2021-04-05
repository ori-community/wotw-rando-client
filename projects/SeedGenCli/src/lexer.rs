pub mod tokenizer;
pub mod parser;
pub mod emitter;

use std::path::PathBuf;

use parser::ParseError;
use crate::util::{self, Pathset};
use crate::world::WorldGraph;

fn trace_parse_error(areas: &PathBuf, position: usize) -> String {
    let input = util::read_file(areas, "logic").unwrap();
    let mut input = &input[position..];
    if input.starts_with('\n') {
        input = &input[1..];
    }
    if let Some(index) = input.find(&['\n', '\r'][..]) {
        return input[..index].to_string();
    }
    input.to_string()
}

pub fn parse_logic(areas: &PathBuf, locations: &PathBuf, states: &PathBuf, pathsets: &[Pathset], validate: bool) -> Result<WorldGraph, String> {
    let tokens = tokenizer::tokenize(areas).map_err(|err| format!("Error parsing areas from {:?}: {}", areas, err))?;

    let (areas, metadata) = parser::parse_areas(&tokens).map_err(|err| {
        let ParseError { description, position } = err;
        format!("Error parsing areas.wotw: {}: {}", description, trace_parse_error(areas, position))
    })?;

    let locations = parser::parse_locations(locations, validate).map_err(|err| format!("Error parsing locations from {:?}: {}", locations, err))?;

    let state_map = parser::parse_states(states, validate).map_err(|err| format!("Error parsing states from {:?}: {}", states, err))?;

    emitter::emit(&areas, &metadata, &locations, &state_map, pathsets, validate).map_err(|err| panic!("Error building the logic: {}", err))
}
