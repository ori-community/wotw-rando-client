use std::path::PathBuf;
use std::fs;
use std::io::{self, Read};

use structopt::StructOpt;
use bugsalot::debugger;

use rand_seeder::Seeder;
use rand_pcg::Pcg32;

use seed_gen_cli::{generate_seed, parse_logic, player, util, world};

use player::Item;
use world::{World};
use util::{Pathset, Resource, Skill, Teleporter, Shard, Settings, Spawn, SeedFlags};

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
        /// the output location to write the seed into. The file name will also seed the rng
        #[structopt(parse(from_os_str))]
        output: PathBuf,
        /// if you don't want the output to be used as seed, specify a seed here instead
        #[structopt(long)]
        seed: Option<String>,
        /// the input file representing the logic, usually called areas.wotw
        #[structopt(parse(from_os_str), default_value = "areas.wotw", short, long)]
        areas: PathBuf,
        /// the input file representing pickup locations, usually called loc_data.csv
        #[structopt(parse(from_os_str), default_value = "loc_data.csv", short, long)]
        locations: PathBuf,
        /// validate the input files at a slight performance cost
        #[structopt(short, long)]
        validate: bool,
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
        /// valid inputs are pathsets and goal modes
        /// 
        /// mo, moki, go, gorlek, gl, glitch, un, unsafe, t, trees, w, wisps, q, quests, r, relics
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
        /// the input file representing the logic, usually called areas.wotw
        #[structopt(parse(from_os_str), default_value = "areas.wotw", short, long)]
        areas: PathBuf,
        /// the input file representing pickup locations, usually called loc_data.csv
        #[structopt(parse(from_os_str), default_value = "loc_data.csv", short, long)]
        locations: PathBuf,
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
            other => println!("Unknown generation flag '{}'", other),
        }
    }

    flags
}

fn main() {
    match SeedGen::from_args().command {
        Command::Seed { mut output, seed, areas, locations, validate, wait_on_debugger, race, netcode, spawn, generation_flags, header_paths, mut headers } => {
            if wait_on_debugger {
                debugger::wait_until_attached(None).expect("state() not implemented on this platform");
            }

            output.set_extension("wotwr");

            let rng: Pcg32 = if let Some(seed) = seed {
                Seeder::from(seed).make_rng()
            } else {
                Seeder::from(output.file_name()).make_rng()
            };

            let spawn = spawn.unwrap_or_else(|| util::DEFAULTSPAWN.to_string());
            let spawn = if spawn == "r" || spawn == "random" { Spawn::Random }
            else if spawn == "f" || spawn == "fullyrandom" { Spawn::FullyRandom }
            else { Spawn::Set(spawn) };

            let flags = parse_flags(&generation_flags);
            let pathsets = flags.pathsets();

            let graph = parse_logic(&areas, &locations, &pathsets, validate);

            let header = read_header();
            if !header.is_empty() {
                headers.push(header)
            }

            let settings = Settings {
                spoilers: !race,
                pathsets,
                output_folder: output.clone(),
                flags: SeedFlags {
                    force_wisps: flags.force_wisps,
                    force_trees: flags.force_trees,
                    force_quests: flags.force_quests,
                    world_tour: flags.world_tour,
                },
                web_conn: netcode,
                spawn_loc: spawn,
                header_list: header_paths,
                debug_info: false,  // TODO implement
            };

            let seed = generate_seed(&graph, &settings, &headers, rng).unwrap_or_else(|err| panic!("Error generating seed: {}", err));
            fs::write(output, seed).unwrap_or_else(|err| panic!("Failed to write seed file: {}", err));
        },
        Command::ReachCheck { areas, locations, seed_file, health, energy, keystones, ore, spirit_light, items } => {
            let settings = util::read_settings(&seed_file).unwrap_or_else(|err| panic!("Failed to read settings from {:?}: {}", seed_file, err));
            let graph = &parse_logic(&areas, &locations, &settings.pathsets, false);
            let mut world = World::new(graph);

            world.player.apply_pathsets(&settings);
            world.player.inventory.grant(Item::Resource(Resource::Health), health / 5);
            if energy < 0.0 { panic!("Energy has to be positive, passed {}", energy); }
            world.player.inventory.grant(Item::Resource(Resource::Energy), (energy * 2.0) as u16);
            world.player.inventory.grant(Item::Resource(Resource::Keystone), keystones);
            world.player.inventory.grant(Item::Resource(Resource::Ore), ore);
            world.player.inventory.grant(Item::Resource(Resource::SpiritLight), spirit_light);
            for item in items {
                if let Some(skill) = item.strip_prefix("s:") {
                    let id: u8 = skill.parse().unwrap_or_else(|_| panic!("expected numeric skill id, except found {}", item));
                    world.player.inventory.grant(Item::Skill(Skill::from_id(id).unwrap_or_else(|| panic!("{} is not a valid skill id", id))), 1);
                }
                else if let Some(teleporter) = item.strip_prefix("t:") {
                    let id: u8 = teleporter.parse().unwrap_or_else(|_| panic!("expected numeric teleporter id, except found {}", item));
                    world.player.inventory.grant(Item::Teleporter(Teleporter::from_id(id).unwrap_or_else(|| panic!("{} is not a valid teleporter id", id))), 1);
                }
                else if let Some(shard) = item.strip_prefix("sh:") {
                    let id: u8 = shard.parse().unwrap_or_else(|_| panic!("expected numeric shard id, except found {}", item));
                    world.player.inventory.grant(Item::Shard(Shard::from_id(id).unwrap_or_else(|| panic!("{} is not a valid shard id", id))), 1);
                }
                else if let Some(world_event) = item.strip_prefix("w:") {
                    let id: u8 = world_event.parse().unwrap_or_else(|_| panic!("expected numeric world event id, except found {}", item));
                    if id != 0 { panic!("{} is not a valid world event id (only 0 is)", id); } 
                    world.player.inventory.grant(Item::Water, 1);
                }
                else {
                    panic!("items have to start with s:, t:, sh: or w: (for skill, teleporter, shard or world event), except found {}", item);
                }
            }

            let spawn = &util::read_spawn(&seed_file).unwrap_or_else(|err| panic!("error reading spawn from seed: {}", err));

            let reached = world.graph.reached_locations(&world.player, spawn, &world.spawn_states).expect("Invalid Reach Check");
            let mut reached = reached.iter().fold(String::new(), |acc, &uber_state| acc + &format!("{}, ", uber_state));
            for _ in 0..2 { reached.pop(); }  // remove the last comma
            println!("{}", reached);
        },
    }
}
