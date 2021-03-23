pub mod tokenizer;
pub mod parser;
pub mod emitter;
pub mod world;
pub mod player;
pub mod requirements;
pub mod util;

use std::path::PathBuf;

use rand::seq::IteratorRandom;
use rand_pcg::Pcg32;

use parser::ParseError;
use world::{Node, Anchor};
use util::{Pathset, NodeType, Settings, DEFAULTSPAWN, MOKI_SPAWNS, GORLEK_SPAWNS};

pub fn parse_logic(areas: &PathBuf, locations: &PathBuf, pathsets: &[Pathset], validate: bool) -> Vec<Node> {
    let tokens = tokenizer::tokenize(areas).unwrap_or_else(|err| panic!("Error parsing areas from {:?}: {}", areas, err));

    let (areas, metadata) = match parser::parse_areas(&tokens) {
        Ok(areas) => areas,
        Err(error) => {
            let ParseError { description, position } = error;
            panic!("Error parsing areas.wotw: {}: {}", description, util::trace_parse_error(areas, position));
        }
    };

    let locations = parser::parse_locations(locations, validate).unwrap_or_else(|err| panic!("Error parsing locations from {:?}: {}", locations, err));

    emitter::emit(&areas, &metadata, &locations, pathsets, validate).unwrap_or_else(|err| panic!("Error building the logic: {}", err))
}

fn pick_spawn<'a>(graph: &'a [Node], settings: &'a Settings, rng: &'a mut Pcg32) -> Result<&'a Anchor, String> {
    let spawn = if settings.spawn_loc == "random" {
        graph.iter()
            .filter(|node| {
                let identifier = node.identifier();
                settings.pathsets.contains(&Pathset::Gorlek) && GORLEK_SPAWNS.contains(&identifier)
                || MOKI_SPAWNS.contains(&identifier)
            })
            .choose(rng)
            .ok_or_else(|| String::from("Tried to generate a seed on an empty logic graph."))?
    } else if settings.spawn_loc == "fullyrandom" {
        graph.iter()
            .filter(|node| node.node_type() == NodeType::Anchor)
            .choose(rng)
            .ok_or_else(|| String::from("Tried to generate a seed on an empty logic graph."))?
    } else {
        graph.iter()
            .find(|node| node.identifier() == settings.spawn_loc)
            .ok_or_else(|| format!("Spawn '{}' not found", settings.spawn_loc))?
    };
    match spawn {
        Node::Anchor(anchor) => Ok(anchor),
        _ => Err(String::from("Tried to spawn on a non-anchor node")),
    }
}

fn write_flags(settings: &Settings) -> String {
    let mut flags = String::from("Flags: ");
    let empty_len = flags.len();
    if settings.flags.force_wisps { flags += "ForceWisps, "; }
    if settings.flags.force_trees { flags += "ForceTrees, "; }
    if settings.flags.force_quests { flags += "ForceQuests, "; }
    if settings.flags.no_hints { flags += "NoHints, "; }
    if settings.flags.no_sword { flags += "NoSword, "; }
    if settings.flags.rain { flags += "RainyMarsh, "; }
    if settings.flags.no_k_s_doors { flags += "NoKSDoors, "; }
    if settings.flags.random_spawn { flags += "RandomSpawn, "; }
    if settings.flags.world_tour { flags += "WorldTour, "; }
    if flags.len() == empty_len { return String::new(); }
    for _ in 0..2 { flags.pop(); }  // remove the last comma
    flags.push('\n');
    flags
}

fn parse_header(header: &str) -> Result<String, String> {
    let mut processed = String::new();
    for line in header.lines() {
        if let Some(command) = line.strip_prefix("!!") {
            if let Some(_) = command.strip_prefix("add ") {
                println!("Sorry but I wasn't taught to add items to the pool yet ;_;");
            } else if let Some(_) = command.strip_prefix("remove ") {
                println!("Sorry but I wasn't taught to remove items from the pool yet ;_;");
            } else if let Some(_) = command.strip_prefix("set ") {
                println!("Man I really gotta learn some stuff");
            } else {
                return Err(format!("Unknown command '{}'", command))
            }
        } else if let Some(ignored) = line.strip_prefix("!") {
            processed += ignored;
            processed.push('\n');
        } else {
            processed += line;
            processed.push('\n');
        }
    }
    processed.push('\n');
    Ok(processed)
}

pub fn generate_seed(graph: &[Node], settings: &Settings, headers: &[String], mut rng: Pcg32) -> Result<String, String> {
    let mut seed = String::new();

    seed += &write_flags(settings);
    let spawn = pick_spawn(graph, &settings, &mut rng)?;
    if spawn.identifier != DEFAULTSPAWN {
        let position = spawn.position.as_ref().ok_or_else(|| format!("Tried to spawn on {} which has no specified coordinates", spawn.identifier))?;
        seed += &format!("Spawn: {}  // {}\n", position, spawn.identifier);
    }
    if !seed.is_empty() {
        seed.push('\n');
    }

    for header in headers {
        seed += &parse_header(header).unwrap_or_else(|err| panic!("{} in inline header", err));
    }
    for mut path in settings.header_list.clone() {
        path.set_extension("wotwrh");
        let header = util::read_file(&path, "headers").unwrap_or_else(|err| panic!("Error reading header from {:?}: {}", path, err));
        seed += &parse_header(&header).unwrap_or_else(|err| panic!("{} in header '{:?}'", err, path));
    }

    // TODO: Generate a seed
    seed += &util::write_settings(&settings).map_err(|_| String::from("Invalid Settings"))?;
    Ok(seed)
}
