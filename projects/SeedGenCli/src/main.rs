use std::path::PathBuf;
use std::fs::File;
use std::io::{self, Read, BufReader, Error, ErrorKind};

use structopt::StructOpt;
use bugsalot::debugger;

use seed_gen_cli::{generate_seed, parse_logic, player, util, world};

use player::{Player, Item};
use world::{World, Node};
use util::{Pathset, Resource, Skill, Teleporter, Shard, read_settings, pathsets_from_settings};

#[derive(StructOpt)]
/// Generate seeds for the Ori 2 randomizer
struct SeedGen {
    #[structopt(subcommand)]
    command: Command,
}

#[derive(StructOpt)]
enum Command {
    /// Generate a seed
    /// 
    /// You can pipe headers, they will be added to the file and inline headers
    Seed {
        /// the output location to write the seed into
        #[structopt(parse(from_os_str))]
        output: PathBuf,
        /// the input file representing the logic, usually called areas.wotw
        #[structopt(parse(from_os_str), short, long)]
        areas: PathBuf,
        /// the input file representing pickup locations, usually called loc_data.csv
        #[structopt(parse(from_os_str), short, long)]
        locations: PathBuf,
        /// validate the input files at a slight performance cost
        #[structopt(short, long)]
        validate: bool,
        /// wait for a debugger to attach before running
        #[structopt(short = "d", long = "debug")]
        wait_on_debugger: bool,
        /// whether spoilers should be written into the seed file
        #[structopt(short, long)]
        spoilers: bool,
        /// which logical pathsets and difficulties to allow
        #[structopt(short, long = "gen_flags")]
        generation_flags: Vec<String>,
        /// paths to headers stored in files
        #[structopt(parse(from_os_str), short, long = "headers")]
        header_paths: Vec<PathBuf>,
        /// inline headers
        headers: Vec<String>
    },
    /// Check which locations are in logic
    ReachCheck {
        /// the input file representing the logic, usually called areas.wotw
        #[structopt(parse(from_os_str), short, long)]
        areas: PathBuf,
        /// the input file representing pickup locations, usually called loc_data.csv
        #[structopt(parse(from_os_str), short, long)]
        locations: PathBuf,
        /// the seed file for which logical reach should be checked
        #[structopt(parse(from_os_str))]
        seed_file: PathBuf,
        /// player health (one orb is 10 health)
        health: u16,
        /// player energy (one orb is 1 energy)
        energy: f32,
        /// player keystones
        keystones: u16,
        /// player ore
        ore: u16,
        /// player spirit light
        spirit_light: u16,
        /// any additional player items in the format s:<skill id>, t:<teleporter id> or sh:<shard id>
        items: Vec<String>,
    }
}

fn read_header() -> String {
    // If we do not have input, skip.
    if atty::is(atty::Stream::Stdin) {
        return String::new();
    }

    let stdin = io::stdin();
    let mut stdin = stdin.lock(); // locking is optional
    let mut output = String::new();

    // Could also `match` on the `Result` if you wanted to handle `Err` 
    loop {
        let result = stdin.read_to_string(&mut output).expect("failed to read standard input");
        if result == 0 {
            break;
        }

        output += "\n";
    }

    output
}

fn read_header_from_file(path: &PathBuf) -> Result<String, io::Error> {
    let file = File::open(path)?;
    let mut buf_reader = BufReader::new(file);
    let mut contents = String::new();
    buf_reader.read_to_string(&mut contents)?;
    if contents.is_empty() {
        return Err(Error::new(ErrorKind::InvalidData, "Empty header"));
    }

    Ok(contents)
}

fn main() {
    match SeedGen::from_args().command {
        Command::Seed { validate, wait_on_debugger, spoilers, areas, locations, output, generation_flags, header_paths, mut headers } => {
            if wait_on_debugger {
                debugger::wait_until_attached(None).expect("state() not implemented on this platform");
            }
        
            let header = read_header();
            if !header.is_empty() {
                headers.push(header)
            }
        
            for path in header_paths {
                match read_header_from_file(&path) {
                    Ok(header) => headers.push(header),
                    Err(error) => println!("Error from {}: {:?}", path.display(), error)
                }
            }
        
            let mut pathsets = vec![Pathset::Moki];
            for flag in &generation_flags {
                match &flag[..] {
                    "moki" => {},
                    "gorlek" => {
                        pathsets.push(Pathset::Gorlek);
                    },
                    "glitch" => pathsets.push(Pathset::Glitch),
                    "unsafe" => pathsets.push(Pathset::Unsafe),
                    other => println!("Unknown generation flag '{}'", other),
                }
            }
        
            let graph = parse_logic(&areas, &locations, &pathsets, validate);
            generate_seed(&graph, &output, spoilers, &pathsets, &headers);
        }
        Command::ReachCheck { areas, locations, seed_file, health, energy, keystones, ore, spirit_light, items } => {
            let settings = read_settings(&seed_file).unwrap_or_else(|err| panic!("Failed to read settings from {:?}: {}", seed_file, err));
            let pathsets = pathsets_from_settings(&settings);
        
            let mut player = Player {
                gorlek_paths: pathsets.contains(&Pathset::Gorlek),
                unsafe_paths: pathsets.contains(&Pathset::Unsafe),
                ..Player::default()
            };
            player.grant(Item::Resource(Resource::Health), health / 5);
            if energy < 0.0 { panic!("Energy has to be positive, passed {}", energy); }
            player.grant(Item::Resource(Resource::Energy), (energy * 2.0) as u16);
            player.grant(Item::Resource(Resource::Keystone), keystones);
            player.grant(Item::Resource(Resource::Ore), ore);
            player.grant(Item::Resource(Resource::SpiritLight), spirit_light);
            for item in items {
                if let Some(skill) = item.strip_prefix("s:") {
                    let id: u8 = skill.parse().unwrap_or_else(|_| panic!("expected numeric skill id, except found {}", item));
                    player.grant(Item::Skill(Skill::from_id(id).unwrap_or_else(|| panic!("{} is not a valid skill id", id))), 1);
                }
                else if let Some(teleporter) = item.strip_prefix("t:") {
                    let id: u8 = teleporter.parse().unwrap_or_else(|_| panic!("expected numeric teleporter id, except found {}", item));
                    player.grant(Item::Teleporter(Teleporter::from_id(id).unwrap_or_else(|| panic!("{} is not a valid teleporter id", id))), 1);
                }
                else if let Some(shard) = item.strip_prefix("sh:") {
                    let id: u8 = shard.parse().unwrap_or_else(|_| panic!("expected numeric shard id, except found {}", item));
                    player.grant(Item::Shard(Shard::from_id(id).unwrap_or_else(|| panic!("{} is not a valid shard id", id))), 1);
                }
                else if let Some(world_event) = item.strip_prefix("w:") {
                    let id: u8 = world_event.parse().unwrap_or_else(|_| panic!("expected numeric world event id, except found {}", item));
                    if id != 0 { panic!("{} is not a valid world event id (only 0 is)", id); } 
                    player.grant(Item::Skill(Skill::Water), 1);
                }
                else {
                    panic!("items have to start with s:, t:, sh: or w: (for skill, teleporter, shard or world event), except found {}", item);
                }
            }
        
            let graph = &parse_logic(&areas, &locations, &pathsets, false);
            let mut world = World {
                graph,
                player,
            };
        
            let reached = world.reached_locations(&settings.spawn_loc).expect("Invalid Reach Check");
            let mut reached = reached.iter().fold(String::new(), |acc, node| match node {
                Node::Pickup(pickup) => acc + &format!("{}|{}, ", pickup.uber_group, pickup.uber_id),
                Node::Quest(quest) => acc + &format!("{}|{}, ", quest.uber_group, quest.uber_id),
                _ => panic!("reach check returned {} which is a {:?} - this should be impossible", node.identifier(), node.node_type()),
            });
            for _ in 0..2 { reached.pop(); }  // remove the last comma
            println!("{}", reached);
        }
    }
}
