pub mod tokenizer;
pub mod parser;
pub mod emitter;
pub mod world;
pub mod player;
pub mod requirements;
pub mod generator;
pub mod util;

use std::path::PathBuf;

use rand::seq::IteratorRandom;
use rand_pcg::Pcg32;

use parser::ParseError;
use world::{World, WorldGraph, Node, Anchor, Position, UberState};
use player::Inventory;
use generator::Placement;
use util::{Pathset, NodeType, Settings, Spawn, DEFAULTSPAWN, MOKI_SPAWNS, GORLEK_SPAWNS};

pub fn parse_logic(areas: &PathBuf, locations: &PathBuf, pathsets: &[Pathset], validate: bool) -> WorldGraph {
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

fn pick_spawn<'a>(graph: &'a WorldGraph, settings: &Settings, rng: &mut Pcg32) -> Result<&'a Anchor, String> {
    let mut valid = graph.graph.iter().filter(|&node| {
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
    flags += "NoFreeSword, ";
    // if flags.len() == empty_len { return String::new(); }
    for _ in 0..2 { flags.pop(); }  // remove the last comma
    flags.push('\n');
    flags
}

fn parse_count(pickup: &mut &str) -> u16 {
    if let Some(index) = pickup.find("x") {
        let amount = pickup[..index].trim();
        if let Ok(amount) = amount.parse::<u16>() {
            *pickup = &pickup[index + 1..];
            return amount;
        }
    }
    return 1;
}

fn parse_header(header: &str, world: &mut World) -> Result<String, String> {
    let mut processed = String::new();
    for line in header.lines() {
        if let Some(command) = line.strip_prefix("!!") {
            if let Some(mut pickup) = command.strip_prefix("add ") {
                let count = parse_count(&mut pickup);
                let (item, amount) = util::parse_pickup(pickup)?;
                world.pool.grant(item, count * amount);
            } else if let Some(mut pickup) = command.strip_prefix("remove ") {
                let count = parse_count(&mut pickup);
                let (item, amount) = util::parse_pickup(pickup)?;
                world.pool.remove(item, count * amount);
            } else if let Some(state) = command.strip_prefix("set ") {
                let state_node = world.graph.graph.iter().find(|&node| node.identifier() == state);
                if let Some(state_node) = state_node {
                    world.add_spawn_state(state_node.index());
                } else {
                    println!("couldn't find state '{}' set by a header, ignoring...", state);
                }
            } else {
                return Err(format!("Unknown command '{}'", command))
            }
        } else if let Some(ignored) = line.strip_prefix('!') {
            processed += ignored;
            processed.push('\n');
        } else {
            if !line.is_empty() {
                let mut parts = line.splitn(3, '|');
                let uber_group = parts.next().unwrap();
                let uber_id = parts.next().ok_or_else(|| format!("malformed pickup '{}'", line))?;
                let item = parts.next().ok_or_else(|| format!("malformed pickup '{}'", line))?;
                let (item, amount) = util::parse_pickup(item)?;

                let preplacement = world.preplacements.entry(UberState::from_parts(uber_group, uber_id)?).or_insert(Inventory::default());
                preplacement.grant(item.clone(), amount);

                world.pool.remove(item, amount);

                processed += line;
            }
            processed.push('\n');
        }
    }
    processed.push('\n');
    Ok(processed)
}

#[derive(Debug, Default)]
struct SpawnLoc {
    identifier: String,
    position: Position,
}

pub fn generate_seed(graph: &WorldGraph, settings: &Settings, headers: &[String], mut rng: Pcg32) -> Result<String, String> {
    let mut world = World::new(graph);
    world.pool = world::default_pool();
    world.player.spawn(settings);

    let mut header_block = String::new();
    for header in headers {
        header_block += &parse_header(header, &mut world).map_err(|err| format!("{} in inline header", err))?;
    }
    for mut path in settings.header_list.clone() {
        path.set_extension("wotwrh");
        let header = util::read_file(&path, "headers").map_err(|err| format!("Error reading header from {:?}: {}", path, err))?;
        header_block += &parse_header(&header, &mut world).map_err(|err| format!("{} in header '{:?}'", err, path))?;
    }

    let flag_line = write_flags(settings);

    let mut spawn;
    let mut spawn_loc = SpawnLoc::default();

    let mut placements = Vec::<Placement>::new();
    for index in 1..100001 {
        spawn = pick_spawn(graph, &settings, &mut rng)?;
        spawn_loc = SpawnLoc {
            identifier: spawn.identifier.clone(),
            position: spawn.position.clone().unwrap(),
        };

        if let Ok(ok) = generator::generate_placements(world.clone(), &spawn_loc.identifier, settings, &mut rng) {
            placements = ok;
            println!("Generated seed after {} {}{}", index, if index == 1 { "try" } else { "tries" }, if index > 50000 { " (phew)" } else { "" });
            break;
        }
    };
    if placements.is_empty() { return Err(String::from("All 100000 attempts to generate a seed failed :(")); }

    let mut spawn_line = String::new();
    if spawn_loc.identifier != DEFAULTSPAWN {
        spawn_line = format!("Spawn: {}  // {}\n", spawn_loc.position, spawn_loc.identifier);
    }

    let placement_block = placements.iter().fold(String::with_capacity(placements.len() * 20), |acc, placement| acc + &format!("{}\n", placement));

    let config_line = format!("\n// Config: {}", util::write_settings(&settings).map_err(|_| String::from("Invalid Settings"))?);

    Ok(flag_line + &spawn_line + &header_block + &placement_block + &config_line)
}

#[cfg(test)]
mod tests {
    use super::*;
    use player::Item;
    use util::BonusItem;

    #[test]
    fn header_parsing() {
        let graph = parse_logic(&PathBuf::from("areas.wotw"), &PathBuf::from("loc_data.csv"), &[Pathset::Moki], false);
        let mut world = World::new(&graph);
        let header = util::read_file(&PathBuf::from("bonus_items.wotwrh"), "headers").unwrap();
        parse_header(&header, &mut world).unwrap();
        let mut expected = Inventory::default();
        expected.grant(Item::BonusItem(BonusItem::ExtraDoubleJump), 1);
        expected.grant(Item::BonusItem(BonusItem::ExtraAirDash), 1);
        expected.grant(Item::BonusItem(BonusItem::EnergyRegen), 3);
        expected.grant(Item::BonusItem(BonusItem::HealthRegen), 3);
        assert_eq!(world.pool, expected);
        assert!(world.preplacements.contains_key(&UberState::from_parts("1", "106").unwrap()));
        assert!(!world.preplacements.contains_key(&UberState::from_parts("1", "105").unwrap()));
    }
}