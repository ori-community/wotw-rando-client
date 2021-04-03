use std::path::{Path, PathBuf};
use std::fs;
use std::io::{self, Read};
use std::time::Instant;

use structopt::StructOpt;
use bugsalot::debugger;

use rand_seeder::Seeder;
use rand::rngs::StdRng;

use seedgen::{generate_seed, lexer, inventory, world, util};

use inventory::Item;
use world::{World, UberState, UberValue};
use util::settings::{Settings, Spawn, SeedFlags};
use util::{Pathset, Resource, Skill, Teleporter, Shard};

#[derive(StructOpt)]
/// Generate seeds for the Ori 2 randomizer. Type seedgen.exe seed --help for instructions
struct SeedGen {
    #[structopt(subcommand)]
    command: Command,
}

// TODO header tools?
#[derive(StructOpt)]
enum Command {
    /// Generate a seed
    /// 
    /// Example: seedgen.exe seed filename --spawn random --flags moki trees --headers teleporters hints skippable_cutscenes
    Seed {
        /// the output location to write the seed into. The file name will also seed the rng
        #[structopt(parse(from_os_str))]
        output: PathBuf,
        /// if you don't want the output to be used as seed, specify a seed here instead
        #[structopt(long)]
        seed: Option<String>,
        /// the input file representing the logic
        #[structopt(parse(from_os_str), default_value = "areas.wotw", short, long)]
        areas: PathBuf,
        /// the input file representing pickup locations
        #[structopt(parse(from_os_str), default_value = "loc_data.csv", short, long)]
        locations: PathBuf,
        /// the input file representing state namings
        #[structopt(parse(from_os_str), default_value = "state_data.csv", short, long)]
        uber_states: PathBuf,
        /// skip validating the input files for a slight performance gain
        #[structopt(short, long)]
        trust: bool,
        /// print additional output detailing the generation process
        #[structopt(short, long)]
        verbose: bool,
        /// wait for a debugger to attach before running
        #[structopt(short = "d", long = "debug")]
        wait_on_debugger: bool,
        /// hides spoilers and makes the black market more expensive
        #[structopt(short, long)]
        race: bool,
        /// required for coop and bingo
        #[structopt(short, long)]
        netcode: bool,
        /// Where to spawn the player in, or "r" / "random" to spawn on a random teleporter, or "f" / "fullyrandom"...
        /// 
        /// Has to be an anchor name from the areas file, defaults to "MarshSpawn.Main"
        #[structopt(short, long)]
        spawn: Option<String>,
        /// which pathsets and goal modes to use
        /// 
        /// valid inputs are "mo", "moki", "go", "gorlek", "gl", "glitch", "un", "unsafe", "t", "trees", "w", "wisps", "q", "quests", "r", "relics"
        #[structopt(short = "f", long = "flags")]
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
        /// the input file representing the logic
        #[structopt(parse(from_os_str), default_value = "areas.wotw", short, long)]
        areas: PathBuf,
        /// the input file representing pickup locations
        #[structopt(parse(from_os_str), default_value = "loc_data.csv", short, long)]
        locations: PathBuf,
        /// the input file representing state namings
        #[structopt(parse(from_os_str), default_value = "state_data.csv", short, long)]
        uber_states: PathBuf,
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
        /// any additional player items in the format s:<skill id>, t:<teleporter id>, sh:<shard id>, w:<world event id> or u:<ubergroup>,<uberid>
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

struct GenFlags {
    gorlek_paths: bool,
    unsafe_paths: bool,
    glitch_paths: bool,
    force_trees: bool,
    force_wisps: bool,
    force_quests: bool,
    world_tour: bool,
}
impl GenFlags {
    fn pathsets(&self) -> Vec<Pathset> {
        let mut pathsets = vec![Pathset::Moki];
        if self.unsafe_paths {
            pathsets.push(Pathset::Unsafe);
            pathsets.push(Pathset::Gorlek);
        }
        else if self.gorlek_paths { pathsets.push(Pathset::Gorlek); }
        if self.glitch_paths { pathsets.push(Pathset::Glitch); }

        pathsets
    }
}

fn parse_flags(generation_flags: &[String]) -> GenFlags {
    let mut flags = GenFlags {
        gorlek_paths: false,
        unsafe_paths: false,
        glitch_paths: false,
        force_trees: false,
        force_wisps: false,
        force_quests: false,
        world_tour: false,
    };

    for flag in generation_flags {
        match &flag[..] {
            "mo" | "moki" => {},
            "go" | "gorlek" => flags.gorlek_paths = true,
            "un" | "unsafe" => {
                flags.unsafe_paths = true;
                flags.gorlek_paths = true;
            },
            "gl" | "glitch" => flags.glitch_paths = true,
            "t" | "trees" => flags.force_trees = true,
            "w" | "wisps" => flags.force_wisps = true,
            "q" | "quests" => flags.force_quests = true,
            "r" | "relics" => flags.world_tour = true,
            other => eprintln!("Unknown generation flag '{}'", other),
        }
    }

    flags
}

fn main() {
    match SeedGen::from_args().command {
        Command::Seed { mut output, seed, areas, locations, uber_states, trust, verbose, wait_on_debugger, race, netcode, spawn, generation_flags, header_paths, mut headers } => {
            if wait_on_debugger {
                eprintln!("waiting for debugger...");
                debugger::wait_until_attached(None).expect("state() not implemented on this platform");
            }

            let now = Instant::now();

            let flags = parse_flags(&generation_flags);
            let pathsets = flags.pathsets();

            let graph = lexer::parse_logic(&areas, &locations, &uber_states, &pathsets, !trust).unwrap();
            eprintln!("Parsed logic in {:?}", now.elapsed());

            output.set_extension("wotwr");
            // TODO default into a seeds folder?

            let rng: StdRng = if let Some(seed) = seed {
                Seeder::from(seed).make_rng()
            } else {
                Seeder::from(output.file_name()).make_rng()
            };

            let spawn = spawn.unwrap_or_else(|| util::DEFAULTSPAWN.to_string());
            let spawn = if spawn == "r" || spawn == "random" { Spawn::Random }
            else if spawn == "f" || spawn == "fullyrandom" { Spawn::FullyRandom }
            else { Spawn::Set(spawn) };

            let header = read_header();
            if !header.is_empty() {
                headers.push(header)
            }

            let settings = Settings {
                version: env!("CARGO_PKG_VERSION").to_string(),
                spoilers: !race,
                pathsets,
                output_folder: output.parent().unwrap_or(Path::new("")).to_path_buf(),
                flags: SeedFlags {
                    force_wisps: flags.force_wisps,
                    force_trees: flags.force_trees,
                    force_quests: flags.force_quests,
                    world_tour: flags.world_tour,
                },
                web_conn: netcode,
                spawn_loc: spawn,
                header_list: header_paths,
                debug_info: verbose,
            };

            let seed = generate_seed(&graph, &settings, &headers, rng, verbose).unwrap_or_else(|err| panic!("Error generating seed: {}", err));
            eprintln!("Generated seed in {:?}", now.elapsed());
            // TODO spoilers

            fs::write(output, seed).unwrap_or_else(|err| panic!("Failed to write seed file: {}", err));
        },
        Command::ReachCheck { mut seed_file, areas, locations, uber_states, health, energy, keystones, ore, spirit_light, items } => {
            seed_file.set_extension("wotwr");
            let settings = util::settings::read_settings(&seed_file).unwrap_or_else(|err| panic!("Failed to read settings from {:?}: {}", seed_file, err));
            let graph = &lexer::parse_logic(&areas, &locations, &uber_states, &settings.pathsets, false).unwrap();
            let mut world = World::new(graph);

            world.player.apply_pathsets(&settings);
            world.player.inventory.grant(Item::Resource(Resource::Health, 1), health / 5);
            if energy < 0.0 { panic!("Energy has to be positive, passed {}", energy); }
            world.player.inventory.grant(Item::Resource(Resource::Energy, 1), (energy * 2.0) as u16);
            world.player.inventory.grant(Item::Resource(Resource::Keystone, 1), keystones);
            world.player.inventory.grant(Item::Resource(Resource::Ore, 1), ore);
            world.player.inventory.grant(Item::Resource(Resource::SpiritLight, 1), spirit_light);

            for item in items {
                if let Some(skill) = item.strip_prefix("s:") {
                    let id: u8 = skill.parse().unwrap_or_else(|_| panic!("expected numeric skill id in {}", item));
                    world.player.inventory.grant(Item::Skill(Skill::from_id(id).unwrap_or_else(|| panic!("{} is not a valid skill id", id))), 1);
                }
                else if let Some(teleporter) = item.strip_prefix("t:") {
                    let id: u8 = teleporter.parse().unwrap_or_else(|_| panic!("expected numeric teleporter id in {}", item));
                    world.player.inventory.grant(Item::Teleporter(Teleporter::from_id(id).unwrap_or_else(|| panic!("{} is not a valid teleporter id", id))), 1);
                }
                else if let Some(shard) = item.strip_prefix("sh:") {
                    let id: u8 = shard.parse().unwrap_or_else(|_| panic!("expected numeric shard id in {}", item));
                    world.player.inventory.grant(Item::Shard(Shard::from_id(id).unwrap_or_else(|| panic!("{} is not a valid shard id", id))), 1);
                }
                else if let Some(world_event) = item.strip_prefix("w:") {
                    let id: u8 = world_event.parse().unwrap_or_else(|_| panic!("expected numeric world event id in {}", item));
                    if id != 0 { panic!("{} is not a valid world event id (only 0 is)", id); } 
                    world.player.inventory.grant(Item::Water, 1);
                }
                else if let Some(uber_state) = item.strip_prefix("u:") {
                    let mut parts = uber_state.split(&['|', ','][..]);
                    let uber_group = parts.next().unwrap_or_else(|| panic!("expected uber group in {}", item));
                    let uber_id = parts.next().unwrap_or_else(|| panic!("expected uber id in {}", item));
                    if parts.next().is_some() { panic!("expected only two parts in {}", item); }

                    let uber_state = UberState::from_parts(uber_group, uber_id).unwrap_or_else(|err| panic!("failed to parse uber state in {}: {}", item, err));
                    let value = if uber_state.value.is_empty() {
                        UberValue::Bool(true)
                    } else {
                        let value: i32 = uber_state.value.parse().unwrap_or_else(|_| panic!("failed to parse uber state value in {}", item));
                        UberValue::Int(value)  // currently no floats are used in logic
                    };

                    world.uber_states.insert(uber_state.identifier, value);
                }
                else {
                    panic!("items have to start with s:, t:, sh:, w: or u: (for skill, teleporter, shard, world event or uber state), except found {}", item);
                }
            }

            let spawn = &util::settings::read_spawn(&seed_file).unwrap_or_else(|err| panic!("error reading spawn from seed: {}", err));

            let reached = world.graph.reached_locations(&world.player, spawn, &world.uber_states).expect("Invalid Reach Check");
            let reached: Vec<_> = reached.iter().filter_map(|node| node.uber_state()).collect();
            let mut reached = reached.iter().fold(String::new(), |acc, uber_state| acc + &format!("{}, ", uber_state));
            for _ in 0..2 { reached.pop(); }  // remove the last comma
            println!("{}", reached);
        },
    }
}
