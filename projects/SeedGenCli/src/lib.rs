pub mod lexer;
pub mod world;
pub mod uberstate;
pub mod pool;
pub mod player;
pub mod inventory;
pub mod requirements;
pub mod generator;
pub mod headers;
pub mod util;

use std::collections::HashSet;

use rand::seq::IteratorRandom;
use rand::rngs::StdRng;

use world::{World, WorldGraph, Node, Anchor, Position};
use pool::ItemPool;
use generator::Placement;
use util::settings::{Settings, Spawn};
use util::{Pathset, NodeType, DEFAULTSPAWN, MOKI_SPAWNS, GORLEK_SPAWNS};

// TODO centralize the scattered constants
const RETRIES: u16 = 5;

fn pick_spawn<'a>(graph: &'a WorldGraph, settings: &Settings, rng: &mut StdRng) -> Result<&'a Anchor, String> {
    let mut valid = graph.nodes.iter().filter(|&node| {
        if let Node::Anchor(anchor) = node { anchor.position.is_some() }
        else { false }
    });
    let spawn = match &settings.spawn_loc {
        Spawn::Random => valid
            .filter(|&node| {
                let identifier = node.identifier();
                settings.pathsets.contains(&Pathset::Gorlek) && GORLEK_SPAWNS.contains(&identifier)
                || MOKI_SPAWNS.contains(&identifier)
            })
            .choose(rng)
            .ok_or_else(|| String::from("Tried to generate a seed on an empty logic graph."))?,
        Spawn::FullyRandom => valid
            .filter(|&node| node.node_type() == NodeType::Anchor)
            .choose(rng)
            .ok_or_else(|| String::from("Tried to generate a seed on an empty logic graph."))?,
        Spawn::Set(spawn_loc) => valid
            .find(|&node| node.identifier() == spawn_loc)
            .ok_or_else(|| format!("Spawn '{}' not found", spawn_loc))?
    };
    if let Node::Anchor(anchor) = spawn {
        return Ok(anchor);
    }
    Err(String::from("Picked a non-anchor node as spawn - this should be impossible"))
}

fn write_flags(settings: &Settings) -> String {
    let mut flags = String::from("Flags: ");
    // let empty_len = flags.len();
    if settings.flags.force_wisps { flags += "ForceWisps, "; }
    if settings.flags.force_trees { flags += "ForceTrees, "; }
    if settings.flags.force_quests { flags += "ForceQuests, "; }
    if settings.flags.world_tour { flags += "WorldTour, "; }
    if matches!(settings.spawn_loc, Spawn::Random) { flags += "RandomSpawn, "; }
    // TODO fully random?
    // TODO this isn't needed post the rando versioning changes
    flags += "NoFreeSword, ";
    // if flags.len() == empty_len { return String::new(); }
    for _ in 0..2 { flags.pop(); }  // remove the last comma
    flags.push('\n');
    flags
}

#[derive(Debug, Default)]
struct SpawnLoc {
    identifier: String,
    position: Position,
}

pub fn generate_seed(graph: &WorldGraph, settings: &Settings, headers: &[String], mut rng: StdRng, verbose: bool) -> Result<String, String> {
    let mut world = World::new(graph);
    world.pool = ItemPool::preset(&settings.pathsets);
    world.player.spawn(settings);

    let flag_line = write_flags(settings);

    let mut header_block = String::new();
    let mut total_dependencies = HashSet::new();
    for header in headers {
        let (header, dependencies) = headers::parse_header(header, &mut world, verbose, &settings.pathsets).map_err(|err| format!("{} in inline header", err))?;
        header_block += &header;
        total_dependencies = total_dependencies.union(&dependencies).cloned().collect();
    }
    for mut path in settings.header_list.clone() {
        path.set_extension("wotwrh");
        let header = util::read_file(&path, "headers").map_err(|err| format!("Error reading header from {:?}: {}", path, err))?;
        let (header, dependencies) = headers::parse_header(&header, &mut world, verbose, &settings.pathsets).map_err(|err| format!("{} in header '{:?}'", err, path))?;
        header_block += &header;
        total_dependencies = total_dependencies.union(&dependencies).cloned().collect();
    }

    let mut depth = 0;
    while !total_dependencies.is_empty() {
        let mut nested_dependencies = HashSet::new();
        for dependency in total_dependencies.drain() {
            let header = util::read_file(&dependency, "headers").map_err(|err| format!("Error reading header from {:?}: {}", dependency, err))?;
            let (header, dependencies) = &headers::parse_header(&header, &mut world, verbose, &settings.pathsets)?;
            header_block += &header;
            nested_dependencies = nested_dependencies.union(&dependencies).cloned().collect();
        }
        total_dependencies = nested_dependencies;
        depth += 1;
        if depth > 100 {
            return Err(String::from("More than 100 nested dependencies. Is there a circular !!include?"));
        }
    }

    let mut spawn;
    let mut spawn_loc = SpawnLoc::default();

    let mut placements = Vec::<Placement>::new();
    for index in 0..RETRIES {
        spawn = pick_spawn(graph, &settings, &mut rng)?;
        spawn_loc = SpawnLoc {
            identifier: spawn.identifier.clone(),
            position: spawn.position.clone().unwrap(),
        };
        if verbose { eprintln!("Spawning on {}", spawn_loc.identifier); }

        match generator::generate_placements(world.clone(), &spawn_loc.identifier, settings, &mut rng, verbose) {
            Ok(seed) => {
                placements = seed;
                eprintln!("Generated seed after {} {}{}", index + 1, if index == 0 { "try" } else { "tries" }, if index > RETRIES / 2 { " (phew)" } else { "" });
                break;
            },
            Err(err) => {
                eprintln!("Failed to place items: {}\nRetrying...", err);
            }
        }
    };
    if placements.is_empty() { return Err(format!("All {} attempts to generate a seed failed :(", RETRIES)); }

    let mut spawn_line = String::from('\n');
    if spawn_loc.identifier != DEFAULTSPAWN {
        spawn_line = format!("Spawn: {}  // {}\n", spawn_loc.position, spawn_loc.identifier);
    }

    let placement_block = placements.iter().fold(String::with_capacity(placements.len() * 20), |acc, placement| acc + &format!("{}//\n", placement));

    let config_line = format!("\n// Config: {}", util::settings::write(&settings).map_err(|_| String::from("Invalid Settings"))?);

    Ok(flag_line + &spawn_line + &header_block + &placement_block + &config_line)
}
