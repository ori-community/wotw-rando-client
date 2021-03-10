use std::path::PathBuf;
use std::fs::File;
use std::io::{self, Read, BufReader, Error, ErrorKind};
// use std::io::prelude::*;
use std::collections::HashMap;

use structopt::StructOpt;
use bugsalot::debugger;

use seed_gen_cli::*;

use parser::ParseError;
use player::{Player, Item};
use world::Node;
use util::{Pathset, Resource, Skill, Teleporter, Shard};

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
        let result = stdin.read_to_string(&mut output).expect("failed to read standard input ({:?})");
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

fn parse_logic(areas: &PathBuf, locations: &PathBuf, pathsets: &[Pathset], validate: bool) -> HashMap<String, Node> {
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

fn generate_seed(validate: bool, wait_on_debugger: bool, spoilers: bool, areas: PathBuf, locations: PathBuf, output: PathBuf, generation_flags: Vec<String>, header_paths: Vec<PathBuf>, mut headers: Vec<String>) {
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

    let mut pathsets = Vec::new();
    for flag in &generation_flags {
        match &flag[..] {
            "moki" => pathsets.push(Pathset::Moki),
            "gorlek" => {
                pathsets.push(Pathset::Moki);
                pathsets.push(Pathset::Gorlek);
            },
            "glitch" => pathsets.push(Pathset::Glitch),
            "unsafe" => pathsets.push(Pathset::Unsafe),
            other => println!("Unknown generation flag '{}'", other),
        }
    }

    let areas = parse_logic(&areas, &locations, &pathsets, validate);

    // std::fs::write(&args.output, format!("{:#?}", areas)).unwrap();

    // TODO: Generate a seed
}

fn invoke_reach_check(seed_file: PathBuf, health: u16, energy: f32, keystones: u16, ore: u16, spirit_light: u16, items: Vec<String>) {
    let mut player: Player = Default::default();
    player.grant(Item::Resource(Resource::Health), health / 5);
    player.grant(Item::Resource(Resource::Energy), (energy * 2.0) as u16);
    player.grant(Item::Resource(Resource::Keystone), keystones);
    player.grant(Item::Resource(Resource::Ore), ore);
    player.grant(Item::Resource(Resource::SpiritLight), spirit_light);
    for item in items {
        if let Some(skill) = item.strip_prefix("s:") {
            let id: u8 = skill.parse().expect(&format!("expected numeric skill id, except found {}", item));
            player.grant(Item::Skill(Skill::from_id(id).expect(&format!("{} is not a valid skill id", id))), 1);
        }
        else if let Some(teleporter) = item.strip_prefix("t:") {
            let id: u8 = teleporter.parse().expect(&format!("expected numeric teleporter id, except found {}", item));
            player.grant(Item::Teleporter(Teleporter::from_id(id).expect(&format!("{} is not a valid teleporter id", id))), 1);
        }
        else if let Some(shard) = item.strip_prefix("sh:") {
            let id: u8 = shard.parse().expect(&format!("expected numeric shard id, except found {}", item));
            player.grant(Item::Shard(Shard::from_id(id).expect(&format!("{} is not a valid shard id", id))), 1);
        }
        else {
            panic!("items have to start with s:, t: or sh: (for skill, teleporter or shard), except found {}", item);
        }
    }
    reach_check(&seed_file, &player, &vec![Pathset::Moki]);
}

fn main() {
    match SeedGen::from_args().command {
        Command::Seed { validate, wait_on_debugger, spoilers, areas, locations, output, generation_flags, header_paths, headers } => generate_seed(validate, wait_on_debugger, spoilers, areas, locations, output, generation_flags, header_paths, headers),
        Command::ReachCheck { seed_file, health, energy, keystones, ore, spirit_light, items } => invoke_reach_check(seed_file, health, energy, keystones, ore, spirit_light, items),
    }
}
