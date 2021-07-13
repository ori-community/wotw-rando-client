use std::{
    fs,
    path::PathBuf,
    convert::TryFrom,
    io::{self, Read},
    time::Instant,
    collections::HashMap,
    process,
};

use structopt::StructOpt;
use bugsalot::debugger;

use rustc_hash::FxHashSet;
use log::LevelFilter;

use seedgen::{self, lexer, inventory, world, headers, util};

use inventory::Item;
use world::{
    World,
    graph::Graph,
};
use headers::parser::HeaderContext;
use util::{
    Pathsets, Pathset, GoalMode, Resource, Skill, Teleporter, Shard,
    settings::{Settings, Spawn},
    uberstate::UberState,
};

#[derive(StructOpt)]
/// Generate seeds for the Ori 2 randomizer.
///
/// Type seedgen.exe seed --help for further instructions
struct SeedGen {
    /// wait for a debugger to attach before running
    #[structopt(short = "d", long = "debug")]
    wait_on_debugger: bool,
    #[structopt(subcommand)]
    command: SeedGenCommand,
}

#[derive(StructOpt)]
enum SeedGenCommand {
    /// Generate a seed
    Seed {
        #[structopt(flatten)]
        args: SeedArgs,
        /// create a generator.log with verbose output about the generation process
        #[structopt(short, long)]
        verbose: bool,
        /// write the seed to stdout instead of a file
        #[structopt(long)]
        tostdout: bool,
    },
    /// Play the most recent generated seed
    Play,
    /// Create a preset of the given settings
    Preset {
        #[structopt(flatten)]
        args: PresetArgs,
    },
    /// Check which locations are in logic
    ReachCheck {
        #[structopt(flatten)]
        args: ReachCheckArgs,
    },
    /// Inspect the available headers
    Headers {
        /// headers to look at in detail
        #[structopt(parse(from_os_str))]
        headers: Vec<PathBuf>,
        #[structopt(subcommand)]
        subcommand: Option<HeaderCommand>,
    },
}

#[derive(StructOpt)]
struct SeedArgs {
    /// the seed's name and name of the file it will be written to. The name also seeds the rng.
    #[structopt()]
    filename: Option<String>,
    /// which folder to write the seed into
    #[structopt(parse(from_os_str), default_value = "seeds", long = "seeddir")]
    seed_folder: PathBuf,
    /// seed the rng; without this flag it will be seeded from the filename instead
    #[structopt(long)]
    seed: Option<String>,
    /// the input file representing the logic
    #[structopt(parse(from_os_str), default_value = "areas.wotw", long)]
    areas: PathBuf,
    /// the input file representing pickup locations
    #[structopt(parse(from_os_str), default_value = "loc_data.csv", long)]
    locations: PathBuf,
    /// the input file representing state namings
    #[structopt(parse(from_os_str), default_value = "state_data.csv", long)]
    uber_states: PathBuf,
    /// skip validating the input files for a slight performance gain
    #[structopt(short, long)]
    trust: bool,
    #[structopt(flatten)]
    settings: SeedSettings,
    /// inline headers
    headers: Vec<String>
}

#[derive(StructOpt)]
struct PresetArgs {
    /// name of the preset
    ///
    /// later you can run seed -p <preset-name> to use this preset
    #[structopt(parse(from_os_str))]
    name: PathBuf,
    #[structopt(flatten)]
    settings: SeedSettings,
}

#[derive(StructOpt)]
struct SeedSettings {
    /// derive the settings from one or more presets
    ///
    /// presets later in the list override earlier ones, and flags from the command override any preset
    #[structopt(parse(from_os_str), short, long)]
    preset: Vec<PathBuf>,
    /// How many (multi)worlds to generate
    #[structopt(short, long, default_value = "1")]
    worlds: usize,
    /// Player names in multiworld
    #[structopt(short, long)]
    names: Vec<String>,
    /// hides spoilers
    #[structopt(short, long)]
    race: bool,
    /// required for coop and bingo
    #[structopt(short, long)]
    multiplayer: bool,
    /// play this seed on hard (in-game) difficulty
    #[structopt(long)]
    hard: bool,
    /// where to spawn the player
    /// 
    /// Use an anchor name from the areas file, "r" / "random" for a random teleporter or "f" / "fullyrandom" for any location
    #[structopt(short, long, default_value = "MarshSpawn.Main")]
    spawn: String,
    /// which goal modes to use
    /// 
    /// goal modes are trees, wisps, quests, relics
    #[structopt(short, long)]
    goals: Vec<String>,
    /// which pathsets to use
    /// 
    /// pathsets are moki, gorlek, glitch, unsafe, sjump, swordsjump, hammersjump, shurikenbreak, hammerbreak, sentryburn, removekillplane
    #[structopt(short, long)]
    logic: Vec<String>,
    /// paths to headers stored in files which will be added to the seed
    #[structopt(parse(from_os_str), short, long = "headers")]
    header_paths: Vec<PathBuf>,
    /// configuration variables for headers
    #[structopt(short = "a", long = "args")]
    header_args: Vec<String>,
}

#[derive(StructOpt)]
struct ReachCheckArgs {
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
    spirit_light: u32,
    /// any additional player items in the format s:<skill id>, t:<teleporter id>, sh:<shard id>, w:<world event id> or u:<ubergroup>,<uberid>
    items: Vec<String>,
}

#[derive(StructOpt)]
enum HeaderCommand {
    /// Check header compability
    Validate {
        /// A file to validate, or leave empty to validate all headers in the directory
        #[structopt(parse(from_os_str))]
        path: Option<PathBuf>,
    },
    /// Parse a header or plandomizer into the seed format
    Parse {
        /// The file to parse
        #[structopt(parse(from_os_str))]
        path: PathBuf,
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

fn parse_pathsets(names: &[String]) -> Pathsets {
    let mut pathsets = Pathsets::default();

    for pathset in names {
        match &pathset[..] {
            "mo" | "moki" => {},
            "go" | "gorlek" => pathsets.add(Pathset::Gorlek),
            "un" | "unsafe" => pathsets.add(Pathset::Unsafe),
            "gl" | "glitch" => pathsets.add_glitches(),
            "shurikenbreak" => pathsets.add(Pathset::ShurikenBreak),
            "sentrybreak" => pathsets.add(Pathset::SentryBreak),
            "hammerbreak" => pathsets.add(Pathset::HammerBreak),
            "spearbreak" => pathsets.add(Pathset::SpearBreak),
            "sjump" | "sentryjump" => {
                pathsets.add(Pathset::SwordSentryJump);
                pathsets.add(Pathset::HammerSentryJump);
            },
            "swordsjump" | "swordsentryjump" => pathsets.add(Pathset::SwordSentryJump),
            "hammersjump" | "hammersentryjump" => pathsets.add(Pathset::HammerSentryJump),
            "sentryburn" => pathsets.add(Pathset::SentryBurn),
            "removekillplane" => pathsets.add(Pathset::RemoveKillPlane),
            other => log::warn!("Unknown pathset {}", other),
        }
    }

    pathsets
}
fn parse_goalmodes(names: &[String]) -> FxHashSet<GoalMode> {
    let mut goalmodes = FxHashSet::default();

    for goalmode in names {
        match &goalmode[..] {
            "t" | "trees" => { goalmodes.insert(GoalMode::Trees); },
            "w" | "wisps" => { goalmodes.insert(GoalMode::Wisps); },
            "q" | "quests" => { goalmodes.insert(GoalMode::Quests); },
            "r" | "relics" => { goalmodes.insert(GoalMode::Relics); },
            other => log::warn!("Unknown goal mode {}", other),
        }
    }

    goalmodes
}
fn parse_spawn(spawn: String) -> Spawn {
    match &spawn[..] {
        "r" | "random" => Spawn::Random,
        "f" | "fullyrandom" => Spawn::FullyRandom,
        _ => Spawn::Set(spawn),
    }
}
fn parse_settings(settings: SeedSettings) -> Result<Settings, String> {
    let SeedSettings {
        preset,
        worlds,
        names,
        race,
        mut multiplayer,
        hard,
        spawn,
        goals,
        logic,
        header_paths,
        header_args,
    } = settings;

    let pathsets = parse_pathsets(&logic);
    let goalmodes = parse_goalmodes(&goals);
    let spawn = parse_spawn(spawn);

    if worlds == 0 {
        return Err(String::from("Tried to create a seed with zero worlds"));
    } else if worlds > 1 {
        multiplayer = true;
    }

    Ok(Settings {
        version: Some(env!("CARGO_PKG_VERSION").to_string()),
        presets: preset,
        worlds,
        players: names,
        spoilers: !race,
        pathsets,
        goalmodes,
        web_conn: multiplayer,
        spawn_loc: spawn,
        hard,
        header_list: header_paths,
        header_args,
    })
}

fn write_seeds_to_files(seeds: &[String], spoilers: &[String], mut filename: String, mut folder: PathBuf, players: &[String], race: bool) -> Result<(), String> {
    let seed_count = seeds.len();
    let multiworld = seed_count > 1;

    if multiworld {
        let mut multi_folder = folder.clone();
        multi_folder.push(filename.clone());
        folder = util::create_folder(&multi_folder).map_err(|err| format!("Error creating seed folder: {}", err))?;
    }

    let mut first = true;
    for index in 0..seed_count {
        let seed = &seeds[index];
        let player = players.get(index).cloned().unwrap_or_else(|| format!("Player {}", index + 1));

        if multiworld {
            filename = player.clone();
        }
        let mut path = folder.clone();
        path.push(filename.clone());
        path.set_extension("wotwr");

        let file = util::create_file(&path, seed, "", true)?;
        log::info!("Wrote seed for {} to {}", player, file.display());

        if race {
            let spoiler = &spoilers[index];

            let spoiler_filename = format!("{}_spoiler", file.with_extension("").file_name().unwrap().to_string_lossy());
            path.set_file_name(spoiler_filename);
            path.set_extension("wotwr");

            let file = util::create_file(&path, spoiler, "", true)?;
            log::info!("Wrote spoiler for {} to {}", player, file.display());
        }

        if first {
            first = false;
            if let Some(path) = file.to_str() {
                fs::write(".currentseedpath", path.to_string()).unwrap_or_else(|err| log::warn!("Unable to write .currentseedpath: {}", err));
            } else {
                log::warn!("Unable to write .currentseedpath: path is not valid unicode");
            }
        }
    }

    Ok(())
}

fn write_seeds_to_stdout(seeds: Vec<String>) {
    println!("{}", seeds.join("\n======= END SEED =======\n"));
}

fn generate_seeds(mut args: SeedArgs, tostdout: bool) -> Result<(), String> {
    let now = Instant::now();

    let seed = args.seed.as_ref().map_or_else(
        || args.filename.as_ref(),
        |seed| Some(seed),
    ).cloned();

    let settings = parse_settings(args.settings)?.apply_presets()?;

    let graph = lexer::parse_logic(&args.areas, &args.locations, &args.uber_states, &settings.pathsets, !args.trust)?;
    log::info!("Parsed logic in {:?}", now.elapsed());

    let header = read_header();
    if !header.is_empty() {
        args.headers.push(header)
    }

    let worlds = settings.worlds;
    let race = !settings.spoilers;
    let players = settings.players.clone();
    let (seeds, spoilers) = seedgen::generate_seed(&graph, settings, &args.headers, seed).map_err(|err| format!("Error generating seed: {}", err))?;
    if worlds == 1 {
        log::info!("Generated seed in {:?}", now.elapsed());
    } else {
        log::info!("Generated {} worlds in {:?}", worlds, now.elapsed());
    }

    if tostdout {
        write_seeds_to_stdout(seeds);
        if race {
            println!("\n======= SPOILERS =======\n");
            write_seeds_to_stdout(spoilers);
        }
    } else {
        let filename = args.filename.unwrap_or_else(|| String::from("seed"));

        write_seeds_to_files(&seeds, &spoilers, filename, args.seed_folder, &players, race).unwrap_or_else(|err| log::error!("{}", err));
    }

    Ok(())
}

fn play_last_seed() -> Result<(), String> {
    let last_seed = fs::read_to_string(".currentseedpath").map_err(|err| format!("Failed to read last generated seed from .currentseedpath: {}", err))?;
    log::info!("Launching seed {}", last_seed);
    open::that(last_seed).map_err(|err| format!("Failed to launch seed: {}", err))?;
    Ok(())
}

fn create_preset(mut args: PresetArgs) -> Result<(), String> {
    let settings = parse_settings(args.settings)?;
    let settings = settings.write()?;

    args.name.set_extension("json");

    let path = util::create_file(&args.name, &settings, "presets", false)?;
    log::info!("Created preset {}", path.display());

    Ok(())
}

fn reach_check(mut args: ReachCheckArgs) -> Result<String, String> {
    args.seed_file.set_extension("wotwr");
    let contents = util::read_file(&args.seed_file, "seeds")?;

    let settings = Settings::from_seed(&contents)?;
    let graph = &lexer::parse_logic(&args.areas, &args.locations, &args.uber_states, &settings.pathsets, false)?;
    let mut world = World::new(graph);

    world.player.apply_settings(&settings);

    world.player.inventory.grant(Item::Resource(Resource::Health), args.health / 5);
    #[allow(clippy::cast_possible_truncation)]
    world.player.inventory.grant(Item::Resource(Resource::Energy), u16::try_from((args.energy * 2.0) as i32).map_err(|_| format!("Invalid energy parameter {}", args.energy))?);
    world.player.inventory.grant(Item::Resource(Resource::Keystone), args.keystones);
    world.player.inventory.grant(Item::Resource(Resource::Ore), args.ore);
    world.player.inventory.grant(Item::SpiritLight(1), u16::try_from(args.spirit_light).unwrap_or(u16::MAX));  // Higher amounts of Spirit Light are irrelevant, just want to accept high values in case the player has that much);

    for item in args.items {
        if let Some(skill) = item.strip_prefix("s:") {
            let id: u8 = skill.parse().map_err(|_| format!("expected numeric skill id in {}", item))?;
            world.player.inventory.grant(Item::Skill(Skill::from_id(id).ok_or_else(|| format!("{} is not a valid skill id", id))?), 1);
        }
        else if let Some(teleporter) = item.strip_prefix("t:") {
            let id: u8 = teleporter.parse().map_err(|_| format!("expected numeric teleporter id in {}", item))?;
            world.player.inventory.grant(Item::Teleporter(Teleporter::from_id(id).ok_or_else(|| format!("{} is not a valid teleporter id", id))?), 1);
        }
        else if let Some(shard) = item.strip_prefix("sh:") {
            let id: u8 = shard.parse().map_err(|_| format!("expected numeric shard id in {}", item))?;
            world.player.inventory.grant(Item::Shard(Shard::from_id(id).ok_or_else(|| format!("{} is not a valid shard id", id))?), 1);
        }
        else if let Some(world_event) = item.strip_prefix("w:") {
            let id: u8 = world_event.parse().map_err(|_| format!("expected numeric world event id in {}", item))?;
            if id != 0 { return Err(format!("{} is not a valid world event id (only 0 is)", id)); } 
            world.player.inventory.grant(Item::Water, 1);
        }
        else if let Some(uber_state) = item.strip_prefix("u:") {
            let uber_state = UberState::from_str(uber_state).map_err(|err| format!("failed to parse uber state in {}: {}", item, err))?;

            world.uber_states.insert(uber_state.identifier, uber_state.value);
        }
        else {
            return Err(format!("items have to start with s:, t:, sh:, w: or u: (for skill, teleporter, shard, world event or uber state), except found {}", item));
        }
    }

    let spawn = util::settings::read_spawn(&contents)?;
    let spawn = world.graph.find_spawn(&spawn)?;

    let reached = world.graph.reached_locations(&world.player, spawn, &world.uber_states).expect("Invalid Reach Check");
    let reached = reached.iter()
        .filter(|&&node| node.can_place())
        .filter_map(|&node| node.uber_state())
        .map(|uber_state| format!("{}", uber_state))
        .collect::<Vec<_>>();
    Ok(reached.join(", "))
}

fn compile_seed(mut path: PathBuf) -> Result<(), String> {
    if path.extension().is_none() {
        path.set_extension("wotwrh");
    }

    let header = fs::read_to_string(path.clone()).map_err(|err| format!("Failed to read {}: {}", path.display(), err))?;

    let graph = Graph::default();
    let mut world = World::new(&graph);
    let settings = Settings::default();
    let mut rng = rand::thread_rng();

    let mut context = HeaderContext::default();

    let header_block = headers::parser::parse_header(&path, &header, &mut world, &settings.pathsets, &mut context, &HashMap::default(), &mut rng)?;
    let flag_line = seedgen::write_flags(&settings, context.flags);

    let compiled = format!("{}{}", flag_line, header_block);

    path.set_extension("wotwr");
    let path = util::create_file(&PathBuf::from(path.file_name().unwrap()), &compiled, "target", false)?;
    log::info!("Compiled to {}", path.display());

    Ok(())
}

fn main() {
    let args = SeedGen::from_args();

    if args.wait_on_debugger {
        eprintln!("waiting for debugger...");
        debugger::wait_until_attached(None).expect("state() not implemented on this platform");
    }

    match args.command {
        SeedGenCommand::Seed { args, verbose, tostdout } => {
            let use_file = if verbose { Some("generator.log") } else { None };
            seedgen::initialize_log(use_file, LevelFilter::Info).unwrap_or_else(|err| eprintln!("Failed to initialize log: {}", err));

            generate_seeds(args, tostdout).unwrap_or_else(|err| {
              log::error!("{}", err);
              process::exit(2);
            });
        },
        SeedGenCommand::Play => {
            seedgen::initialize_log(None, LevelFilter::Info).unwrap_or_else(|err| eprintln!("Failed to initialize log: {}", err));

            play_last_seed().unwrap_or_else(|err| log::error!("{}", err));
        },
        SeedGenCommand::Preset { args } => {
            seedgen::initialize_log(None, LevelFilter::Info).unwrap_or_else(|err| eprintln!("Failed to initialize log: {}", err));

            create_preset(args).unwrap_or_else(|err| log::error!("{}", err));
        },
        SeedGenCommand::Headers { headers, subcommand } => {
            seedgen::initialize_log(None, LevelFilter::Info).unwrap_or_else(|err| eprintln!("Failed to initialize log: {}", err));

            match subcommand {
                Some(HeaderCommand::Validate { path }) => {
                    headers::validate(path).unwrap_or_else(|err| log::error!("{}", err));
                },
                Some(HeaderCommand::Parse { path }) => {
                    compile_seed(path).unwrap_or_else(|err| log::error!("{}", err));
                },
                None => {
                    if headers.is_empty() {
                        headers::list().unwrap_or_else(|err| log::error!("{}", err));
                    } else {
                        headers::inspect(headers).unwrap_or_else(|err| log::error!("{}", err));
                    }
                },
            }
        },
        SeedGenCommand::ReachCheck { args } => {
            seedgen::initialize_log(Some("reach_log.txt"), LevelFilter::Info).unwrap_or_else(|err| eprintln!("Failed to initialize log: {}", err));

            match reach_check(args) {
                Ok(reached) => println!("{}", reached),
                Err(err) => log::error!("{}", err),
            }
        },
    }
}
