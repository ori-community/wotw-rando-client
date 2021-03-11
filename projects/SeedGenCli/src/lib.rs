pub mod tokenizer;
pub mod parser;
pub mod emitter;
pub mod world;
pub mod player;
pub mod requirements;
pub mod util;

use std::path::PathBuf;
use std::collections::HashMap;
// use std::io::prelude::*;

use parser::ParseError;
use world::Node;
use util::Pathset;

pub fn parse_logic(areas: &PathBuf, locations: &PathBuf, pathsets: &[Pathset], validate: bool) -> HashMap<String, Node> {
    let tokens = tokenizer::tokenize(areas).expect("Error parsing areas.wotw");

    // let mut file = File::create("tokens.txt").unwrap();
    // for token in &tokens {
    //     let name = format!("{}, {:?} ({}) ", token.line, token.name, token.value);
    //     file.write_all(name.as_bytes()).unwrap();
    // }

    let (areas, metadata) = match parser::parse_areas(&tokens) {
        Ok(areas) => areas,
        Err(error) => {
            let ParseError { description, position } = error;
            panic!("Error parsing areas.wotw: {}: {}", description, util::trace_parse_error(areas, position));
        }
    };

    let locations = parser::parse_locations(locations, validate).expect("Error parsing loc_data.csv");

    emitter::emit(&areas, &metadata, &locations, pathsets, validate).expect("Error building the logic")
}

pub fn generate_seed(graph: &HashMap<String, Node>, output: &PathBuf, spoilers: bool, pathsets: &[Pathset], headers: &[String]) {
    // std::fs::write(output, format!("{:#?}", graph)).unwrap();

    // TODO: Generate a seed
}
