mod presets;

use std::{
    fs,
    path::PathBuf,
    convert::TryFrom,
    io::{self, Read},
    time::Instant,
    process::Command,
};

use structopt::StructOpt;
use bugsalot::debugger;

use rustc_hash::FxHashSet;
use rand::distributions::{Distribution, Uniform};
use log::LevelFilter;

use seedgen::{self, lexer, inventory, world, headers, util};

use inventory::Item;
use world::World;
use util::{
    Pathsets, Pathset, GoalMode, Resource, Skill, Teleporter, Shard,
    settings::{Settings, Spawn},
    uberstate::{UberState, UberValue},
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
    #[structopt(parse(from_os_str))]
    filename: Option<PathBuf>,
    /// derive the settings from one or more presets
    ///
    /// presets later in the list override earlier ones, and flags from the command override any preset
    #[structopt(short, long)]
    preset: Vec<String>,
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
    /// pathsets are moki, gorlek, glitch, unsafe, sjump, swordsjump, hammersjump, shurikenbreak, sentryburn, removekillplane
    #[structopt(short, long)]
    logic: Vec<String>,
    /// paths to headers stored in files which will be added to the seed
    #[structopt(parse(from_os_str), short, long = "headers")]
    header_paths: Vec<PathBuf>,
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
    Validate
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
fn parse_settings(settings: SeedSettings) -> Settings {
    let SeedSettings {
        worlds,
        names,
        race,
        multiplayer,
        hard,
        spawn,
        goals,
        logic,
        header_paths,
    } = settings;

    let pathsets = parse_pathsets(&logic);
    let goalmodes = parse_goalmodes(&goals);
    let spawn = parse_spawn(spawn);

    Settings {
        version: None,
        worlds,
        players: names,
        spoilers: !race,
        pathsets,
        goalmodes,
        web_conn: multiplayer,
        spawn_loc: spawn,
        hard,
        header_list: header_paths,
    }
}

fn generate_seed(mut args: SeedArgs) -> Result<(), String> {
    let now = Instant::now();

    let mut filename = args.filename.clone().unwrap_or_else(|| {
        if args.seed.is_none() {
            let mut generated_seed = String::new();
            let numeric = Uniform::from('0'..='9');
            let mut rng = rand::thread_rng();
            for _ in 0..16 {
                generated_seed.push(numeric.sample(&mut rng));
            }
            args.seed = Some(generated_seed);
        }
        PathBuf::from("seed")
    });

    filename.set_extension("wotwr");

    let seed = args.seed.unwrap_or_else(|| filename.file_stem().unwrap().to_string_lossy().to_string());

    let mut settings = Settings::default();
    for preset in args.preset {
        let preset_settings = match &preset[..] {
            "moki" => presets::moki(),
            "gorlek" => presets::gorlek(),
            "gorlekg" | "gorlek_glitch" => presets::gorlek_glitch(),
            _ => {
                let mut preset = PathBuf::from(preset);
                preset.set_extension("json");
                Settings::from_preset(&preset)?
            }
        };

        settings.merge(preset_settings);
    }

    settings.merge(parse_settings(args.settings));
    settings.version = Some(env!("CARGO_PKG_VERSION").to_string());

    let graph = lexer::parse_logic(&args.areas, &args.locations, &args.uber_states, &settings.pathsets, !args.trust)?;
    log::info!("Parsed logic in {:?}", now.elapsed());

    let header = read_header();
    if !header.is_empty() {
        args.headers.push(header)
    }

    let seeds = seedgen::generate_seed(&graph, &settings, &args.headers, &seed).map_err(|err| format!("Error generating seed: {}", err))?;
    if settings.worlds == 1 {
        log::info!("Generated seed in {:?}", now.elapsed());
    } else {
        log::info!("Generated {} worlds in {:?}", settings.worlds, now.elapsed());
    }

    let mut first = true;
    for seed in seeds {
        let file = util::create_new_file(&filename, &seed, "seeds", true)?;
        log::info!("Wrote seed to {}", file.display());

        if first {
            fs::write(".currentseedpath", file.to_string_lossy().into_owned()).unwrap_or_else(|err| log::warn!("Unable to write .currentseedpath: {}", err));
            first = false;
        }
    }

    Ok(())
}

fn play_last_seed() -> Result<(), String> {
    let last_seed = fs::read_to_string(".currentseedpath").map_err(|err| format!("Failed to read last generated seed from .currentseedpath: {}", err))?;
    log::info!("Launching seed {}", last_seed);
    Command::new("WotwRando.exe")
        .arg(last_seed)
        .spawn()
        .map_err(|err| format!("Failed to launch WotwRando.exe with the seed: {}", err))?;
    Ok(())
}

fn create_preset(mut args: PresetArgs) -> Result<(), String> {
    let settings = parse_settings(args.settings);
    let settings = Settings::write(&settings)?;

    args.name.set_extension("json");

    let path = util::create_new_file(&args.name, &settings, "presets", false)?;
    log::info!("Created preset {}", path.display());

    Ok(())
}

fn reach_check(mut args: ReachCheckArgs) -> Result<String, String> {
    args.seed_file.set_extension("wotwr");
    let settings = Settings::from_seed(&args.seed_file)?;
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
            let mut parts = uber_state.split(&['|', ','][..]);
            let uber_group = parts.next().ok_or_else(|| format!("expected uber group in {}", item))?;
            let uber_id = parts.next().ok_or_else(|| format!("expected uber id in {}", item))?;
            if parts.next().is_some() { return Err(format!("expected only two parts in {}", item)); }

            let uber_state = UberState::from_parts(uber_group, uber_id).map_err(|err| format!("failed to parse uber state in {}: {}", item, err))?;
            let value = if uber_state.value.is_empty() {
                UberValue::Bool(true)
            } else {
                let value: i32 = uber_state.value.parse().map_err(|_| format!("failed to parse uber state value in {}", item))?;
                UberValue::Int(value)  // currently no floats are used in logic
            };

            world.uber_states.insert(uber_state.identifier, value);
        }
        else {
            return Err(format!("items have to start with s:, t:, sh:, w: or u: (for skill, teleporter, shard, world event or uber state), except found {}", item));
        }
    }

    let spawn = util::settings::read_spawn(&args.seed_file)?;
    let spawn = world.graph.find_spawn(&spawn)?;

    let reached = world.graph.reached_locations(&world.player, spawn, &world.uber_states).expect("Invalid Reach Check");
    let reached: Vec<_> = reached.iter().filter(|&&node| node.can_place()).filter_map(|&node| node.uber_state()).collect();
    let reached = reached.iter().map(|uber_state| format!("{}", uber_state)).collect::<Vec<_>>();
    Ok(reached.join(", "))
}

fn main() {
    let args = SeedGen::from_args();

    if args.wait_on_debugger {
        eprintln!("waiting for debugger...");
        debugger::wait_until_attached(None).expect("state() not implemented on this platform");
    }

    match args.command {
        SeedGenCommand::Seed { args, verbose } => {
            seedgen::initialize_log(verbose, LevelFilter::Info).unwrap_or_else(|err| eprintln!("Failed to initialize log: {}", err));

            generate_seed(args).unwrap_or_else(|err| log::error!("{}", err));
        },
        SeedGenCommand::Play => {
            seedgen::initialize_log(false, LevelFilter::Info).unwrap_or_else(|err| eprintln!("Failed to initialize log: {}", err));

            play_last_seed().unwrap_or_else(|err| log::error!("{}", err));
        },
        SeedGenCommand::Preset { args } => {
            seedgen::initialize_log(false, LevelFilter::Info).unwrap_or_else(|err| eprintln!("Failed to initialize log: {}", err));

            create_preset(args).unwrap_or_else(|err| log::error!("{}", err));
        },
        SeedGenCommand::Headers { headers, subcommand } => {
            seedgen::initialize_log(false, LevelFilter::Info).unwrap_or_else(|err| eprintln!("Failed to initialize log: {}", err));

            match subcommand {
                Some(HeaderCommand::Validate) => {
                    headers::validate().unwrap_or_else(|err| log::error!("{}", err));
                }
                None => {
                    if headers.is_empty() {
                        headers::list().unwrap_or_else(|err| log::error!("{}", err));
                    } else {
                        headers::inspect(headers).unwrap_or_else(|err| log::error!("{}", err));
                    }
                }
            }
        },
        SeedGenCommand::ReachCheck { args } => {
            seedgen::initialize_log(false, LevelFilter::Info).unwrap_or_else(|err| eprintln!("Failed to initialize log: {}", err));

            match reach_check(args) {
                Ok(reached) => println!("{}", reached),
                Err(err) => log::error!("{}", err),
            }
        },
    }
}
