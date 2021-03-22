pub mod tokenizer;
pub mod parser;
pub mod emitter;
pub mod world;
pub mod player;
pub mod requirements;
pub mod util;

use std::path::PathBuf;
// use std::io::prelude::*;

use rand::seq::IteratorRandom;
use rand_pcg::Pcg32;

use parser::ParseError;
use world::Node;
use util::{Pathset, NodeType, Settings, MOKI_SPAWNS, GORLEK_SPAWNS};

pub fn parse_logic(areas: &PathBuf, locations: &PathBuf, pathsets: &[Pathset], validate: bool) -> Vec<Node> {
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

pub fn generate_seed(graph: &[Node], settings: Settings, mut rng: Pcg32) -> Result<String, String> {
    let spawn = if settings.spawn_loc == "random" {
        graph.iter()
            .filter(|node| {
                let identifier = node.identifier();
                settings.pathsets.contains(&Pathset::Gorlek) && GORLEK_SPAWNS.contains(&identifier)
                || MOKI_SPAWNS.contains(&identifier)
            })
            .choose(&mut rng)
            .ok_or(String::from("Tried to generate a seed on an empty logic graph."))?
    } else if settings.spawn_loc == "fullyrandom" {
        graph.iter()
            .filter(|node| node.node_type() == NodeType::Anchor)
            .choose(&mut rng)
            .ok_or(String::from("Tried to generate a seed on an empty logic graph."))?
    } else {
        graph.iter()
            .find(|node| node.identifier() == settings.spawn_loc)
            .ok_or_else(|| format!("Spawn '{}' not found", settings.spawn_loc))?
    };

    println!("seed: {:?}", rng);
    println!("Chosen spawn: {}", spawn.identifier());

    // TODO: Generate a seed
    util::write_settings(&settings).map_err(|_| String::from("Invalid Settings"))
}
