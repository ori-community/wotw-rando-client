pub mod tokenizer;
pub mod parser;
pub mod emitter;

use std::path::Path;

use parser::ParseError;
use crate::world::graph::Graph;
use crate::util::{self, settings::Settings};

fn trace_parse_error(areas: &Path, position: usize) -> String {
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

pub fn parse_logic(areas: &Path, locations: &Path, states: &Path, settings: &Settings, validate: bool) -> Result<Graph, String> {
    let tokens = tokenizer::tokenize(areas).map_err(|err| format!("Error parsing areas from {}: {}", areas.display(), err))?;

    let (areas, metadata) = parser::parse_areas(&tokens).map_err(|err| {
        let ParseError { description, position } = err;
        format!("Error parsing areas.wotw: {}: {}", description, trace_parse_error(areas, position))
    })?;

    let locations = parser::parse_locations(locations, validate).map_err(|err| format!("Error parsing locations from {}: {}", locations.display(), err))?;

    let state_map = parser::parse_states(states, validate).map_err(|err| format!("Error parsing states from {}: {}", states.display(), err))?;

    emitter::emit(&areas, &metadata, &locations, &state_map, settings, validate).map_err(|err| format!("Error building the logic: {}", err))
}
