pub mod lexer;
pub mod world;
pub mod inventory;
pub mod generator;
pub mod headers;
pub mod util;

use std::collections::HashSet;

use rand_seeder::Seeder;
use rand::{Rng, rngs::StdRng, seq::IteratorRandom};

use log::LevelFilter;
use log4rs::{
    append::{
        console::{ConsoleAppender, Target},
        file::FileAppender,
    },
    encode::pattern::PatternEncoder,
    config::{Appender, Config, Root},
    filter::threshold::ThresholdFilter,
};

use world::{
    World,
    graph::{Graph, Node, Pickup},
    pool::Pool
};
use util::{
    Pathset, NodeType, Position,
    settings::{Settings, Spawn},
    uberstate::UberState,
    constants::{DEFAULT_SPAWN, MOKI_SPAWNS, GORLEK_SPAWNS, RETRIES},
};

fn pick_spawn<'a, R>(graph: &'a Graph, settings: &Settings, rng: &mut R) -> Result<&'a Node, String>
where
    R: Rng
{
    let mut valid = graph.nodes.iter().filter(|&node| {
        if let Node::Anchor(anchor) = node { anchor.position.is_some() }
        else { false }
    });
    let spawn = match &settings.spawn_loc {
        Spawn::Random => valid
            .filter(|&node| {
                let identifier = node.identifier();
                settings.pathsets.contains(Pathset::Gorlek) && GORLEK_SPAWNS.contains(&identifier)
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
            .ok_or_else(|| format!("Spawn {} not found", spawn_loc))?
    };
    return Ok(spawn);
}

fn write_flags(settings: &Settings, mut flags: Vec<String>) -> String {
    for flag in settings.goalmodes.iter().map(|goal| format!("{}", goal)) {
        flags.push(flag);
    }

    if matches!(settings.spawn_loc, Spawn::Random | Spawn::FullyRandom) { flags.push(String::from("RandomSpawn")); }

    let flags = flags.join(", ");

    log::trace!("Derived Flags from Settings: {}", flags);

    if flags.is_empty() {
        return String::default();
    }

    format!("Flags: {}\n", flags)
}

#[derive(Debug, Default, Clone)]
struct SpawnLoc {
    identifier: String,
    position: Position,
}

pub fn initialize_log(use_file: bool, stderr_log_level: LevelFilter) -> Result<(), String> {
    let stderr = ConsoleAppender::builder()
        .target(Target::Stderr)
        .encoder(Box::new(PatternEncoder::new("{h({l}):5}  {m}{n}")))
        .build();

    let log_config = if use_file {
        let log_file = FileAppender::builder()
        .append(false)
        .encoder(Box::new(PatternEncoder::new("{l:5}  {m}{n}")))
        .build("generator.log")
        .map_err(|err| format!("Failed to create log file: {}", err))?;

        Config::builder()
            .appender(Appender::builder().build("log_file", Box::new(log_file)))
            .appender(
                Appender::builder()
                    .filter(Box::new(ThresholdFilter::new(stderr_log_level)))
                    .build("stderr", Box::new(stderr))
            )
            .build(
                Root::builder()
                    .appender("stderr")
                    .appender("log_file")
                    .build(LevelFilter::Trace)
            )
            .map_err(|err| format!("Failed to configure logger: {}", err))?
    } else {
        Config::builder()
            .appender(Appender::builder().build("stderr", Box::new(stderr)))
            .build(Root::builder().appender("stderr").build(stderr_log_level))
            .map_err(|err| format!("Failed to configure logger: {}", err))?
    };

    log4rs::init_config(log_config).map_err(|err| format!("Failed to initialize logger: {}", err))?;
    #[cfg(target_os = "windows")]
    ansi_term::enable_ansi_support().unwrap_or_else(|err| log::warn!("Failed to enable ansi support: {}", err));

    Ok(())
}

fn parse_headers<R>(world: &mut World, headers: &[String], settings: &Settings, rng: &mut R) -> Result<(String, Vec<String>), String>
where R: Rng + ?Sized
{
    let mut header_block = String::new();
    let mut custom_flags = Vec::new();
    let mut total_dependencies = HashSet::new();

    for header in headers {
        log::trace!("Parsing inline header");

        let (header, mut flags, dependencies) = headers::parser::parse_header(header, world, &settings.pathsets, rng).map_err(|err| format!("{} in inline header", err))?;

        header_block += &header;
        custom_flags.append(&mut flags);
        total_dependencies = total_dependencies.union(&dependencies).cloned().collect();
    }
    for mut path in settings.header_list.clone() {
        path.set_extension("wotwrh");

        log::trace!("Parsing header {}", path.file_stem().ok_or_else(|| format!("Invalid Header path: {}", path.display()))?.to_string_lossy());

        let header = util::read_file(&path, "headers")?;
        let (header, mut flags, dependencies) = headers::parser::parse_header(&header, world, &settings.pathsets, rng).map_err(|err| format!("{} in header '{}'", err, path.display()))?;

        header_block += &header;
        custom_flags.append(&mut flags);
        total_dependencies = total_dependencies.union(&dependencies).cloned().collect();
    }

    let mut depth = 0;
    while !total_dependencies.is_empty() {
        let mut nested_dependencies = HashSet::new();
        for dependency in total_dependencies.into_iter() {
            log::trace!("Parsing included header {}", dependency.file_stem().ok_or_else(|| format!("Invalid Header path: {}", dependency.display()))?.to_string_lossy());

            let header = util::read_file(&dependency, "headers")?;
            let (header, mut flags, dependencies) = headers::parser::parse_header(&header, world, &settings.pathsets, rng)?;

            header_block += &header;
            custom_flags.append(&mut flags);
            nested_dependencies = nested_dependencies.union(&dependencies).cloned().collect();
        }
        total_dependencies = nested_dependencies;

        depth += 1;
        if depth > 100 {
            return Err(String::from("More than 100 nested dependencies. Is there a circular !!include?"));
        }
    }

    Ok((header_block, custom_flags))
}

pub fn generate_seed(graph: &Graph, settings: &Settings, headers: &[String], seed: &str) -> Result<Vec<String>, String> {
    let mut rng: StdRng = Seeder::from(seed).make_rng();
    log::trace!("Seeded RNG with {}", seed);

    let mut world = World::new(graph);
    world.pool = Pool::preset(&settings.pathsets);
    world.player.spawn(settings);

    let (header_block, custom_flags) = parse_headers(&mut world, headers, settings, &mut rng)?;

    let flag_line = write_flags(settings, custom_flags);

    let mut worlds = vec![world];
    for _ in 1..settings.worlds {
        worlds.push(worlds[0].clone());
    }

    let spawn_state = UberState::spawn();
    let spawn_pickup_node = Node::Pickup(Pickup {
        identifier: String::from("Spawn"),
        zone: String::new(),
        index: usize::MAX,
        uber_state: spawn_state,
        position: Position { x: 0, y: 0 },
    });

    let mut index = 0;
    let (placements, spawn_locs) = loop {
        let spawn_locs = (0..settings.worlds)
            .map(|_| pick_spawn(graph, &settings, &mut rng))
            .collect::<Result<Vec<_>, String>>()?;
        let identifiers = spawn_locs.iter().map(|spawn_loc| spawn_loc.identifier()).collect::<Vec<_>>();
        log::trace!("Spawning on {}", identifiers.join(", "));

        match generator::generate_placements(worlds.clone(), &spawn_locs, &spawn_pickup_node, settings, &mut rng) {
            Ok(seed) => {
                if index > 0 {
                    log::info!("Generated seed after {} tries{}", index + 1, if index < RETRIES / 2 { "" } else { " (phew)" });
                }
                break (seed, spawn_locs);
            },
            Err(err) => log::error!("{}\nRetrying...", err),
        }

        index += 1;
        if index == RETRIES {
            return Err(format!("All {} attempts to generate a seed failed :(", RETRIES));
        }
    };

    let spawn_lines = spawn_locs.into_iter().map(|spawn_loc| {
        if spawn_loc.identifier() != DEFAULT_SPAWN {
            let position = spawn_loc.position().ok_or_else(|| format!("Tried to spawn on {} which has no specified coordinates", spawn_loc.identifier()))?;
            return Ok(format!("Spawn: {}  // {}\n", position, spawn_loc.identifier()));
        }
        Ok(String::new())
    }).collect::<Result<Vec<_>, String>>()?;

    let placement_blocks = placements.into_iter().map(|world_placements| {
        let mut placement_block = String::with_capacity(world_placements.len() * 20);

        for placement in world_placements {
            let mut placement_line = format!("{}", placement);

            if settings.spoilers {
                let location = placement.node.map_or_else(
                    || placement.uber_state.to_string(),
                    |node| {
                        let mut location = node.to_string();
                        util::add_trailing_spaces(&mut location, 33);
                        let mut position = format!("({})", node.position().unwrap());
                        util::add_trailing_spaces(&mut position, 15);
                        format!("{}  {} {}", location, position, node.zone().unwrap())
                    }
                );

                util::add_trailing_spaces(&mut placement_line, 42);
                let item = util::with_leading_spaces(&format!("{}", placement.item), 30);
                placement_line += &format!("  // {} from {}", item, location);
            }

            placement_line.push('\n');
            placement_block.push_str(&placement_line);
        }

        placement_block
    }).collect::<Vec<_>>();

    let seed_line = format!("// Seed: {}", seed);
    let config_line = format!("// Config: {}", Settings::write(&settings)?);

    let seeds = (0..settings.worlds).map(|index| {
        format!("{}{}\n{}\n{}{}\n{}", flag_line, &spawn_lines[index], &placement_blocks[index], &header_block, &seed_line, &config_line)
    }).collect::<Vec<_>>();

    Ok(seeds)
}
