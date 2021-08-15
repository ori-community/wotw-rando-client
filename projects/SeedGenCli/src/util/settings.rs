use std::{
    io,
    path::PathBuf,
    collections::hash_map::DefaultHasher,
    hash::Hasher,
};

use rustc_hash::FxHashSet;
use serde::{Serialize, Deserialize};

use super::{
    Difficulty, Glitch, GoalMode,
    constants::{DEFAULT_SPAWN, SLUGSTRINGS}
};

/// Representation of settings as they are written by the java-based seed generator
#[allow(clippy::struct_excessive_bools)]
#[derive(Debug, Default, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
struct OldSeedFlags {
    pub force_wisps: bool,      // compability note: used for goal mode logic
    pub force_trees: bool,      // compability note: used for goal mode logic
    pub force_quests: bool,     // compability note: used for goal mode logic
    pub world_tour: bool,       // compability note: used for goal mode logic
    pub no_hints: bool,         // compability note: unused
    pub no_sword: bool,         // compability note: used for sword init
    pub rain: bool,             // compability note: used for day-night-cycle
    pub no_k_s_doors: bool,     // compability note: used for black market
    pub random_spawn: bool,     // compability note: unused
}
/// Representation of settings as they are written by the java-based seed generator
#[allow(clippy::struct_excessive_bools)]
#[derive(Debug, Deserialize)]
#[serde(rename_all = "camelCase")]
struct PreRustSettings {
    pub tps: bool,
    pub spoilers: bool,
    pub unsafe_paths: bool,
    pub gorlek_paths: bool,
    pub glitch_paths: bool,
    pub quest_locs: bool,
    pub output_folder: PathBuf,
    pub flags: OldSeedFlags,
    pub web_conn: bool,
    pub bonus_items: bool,
    pub debug_info: bool,
    pub seir_launch: bool,
    pub spawn_loc: String,
    pub header_list: Vec<PathBuf>,
}
fn read_pre_rustgen(json: &str) -> Result<Settings, io::Error> {
    let old_settings: PreRustSettings = serde_json::from_str(json)?;

    let difficulty = if old_settings.unsafe_paths {
        Difficulty::Unsafe
    } else if old_settings.gorlek_paths {
        Difficulty::Gorlek
    } else {
        Difficulty::Moki
    };

    let glitches = if old_settings.glitch_paths {
        vec![
            Glitch::SwordSentryJump,
            Glitch::HammerSentryJump,
            Glitch::ShurikenBreak,
            Glitch::SentryBreak,
            Glitch::HammerBreak,
            Glitch::SpearBreak,
            Glitch::SentryBurn,
            Glitch::RemoveKillPlane,
        ]
    } else { Vec::default() };

    let mut header_list = old_settings.header_list;
    if old_settings.tps { header_list.push(PathBuf::from("teleporters")); }
    if !old_settings.quest_locs { header_list.push(PathBuf::from("no_quests")); }
    if old_settings.bonus_items { header_list.push(PathBuf::from("bonus_items")); }
    if old_settings.seir_launch { header_list.push(PathBuf::from("launch_on_seir")); }
    if !old_settings.flags.no_hints { header_list.push(PathBuf::from("hints")); }
    if !old_settings.flags.no_sword { header_list.push(PathBuf::from("spawn_with_sword")); }
    if !old_settings.flags.rain { header_list.push(PathBuf::from("no_rain")); }
    if old_settings.flags.no_k_s_doors { header_list.push(PathBuf::from("no_ks_doors")); }

    let spawn_loc = if old_settings.flags.random_spawn { Spawn::Random } else { Spawn::Set(old_settings.spawn_loc) };

    let mut goalmodes = FxHashSet::default();
    if old_settings.flags.force_wisps { goalmodes.insert(GoalMode::Wisps); }
    if old_settings.flags.force_trees { goalmodes.insert(GoalMode::Trees); }
    if old_settings.flags.force_quests { goalmodes.insert(GoalMode::Quests); }
    if old_settings.flags.world_tour { goalmodes.insert(GoalMode::Relics); }

    Ok(Settings {
        difficulty,
        glitches,
        goalmodes,
        spoilers: old_settings.spoilers,
        web_conn: old_settings.web_conn,
        spawn_loc,
        header_list,
        ..Settings::default()
    })
}
#[derive(Debug, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Pre0_13_2Settings {
    pub version: Option<String>,
    pub presets: Vec<PathBuf>,
    pub worlds: usize,
    pub players: Vec<String>,
    pub pathsets: Vec<String>,
    pub goalmodes: FxHashSet<GoalMode>,
    pub spawn_loc: Spawn,
    pub spoilers: bool,
    pub web_conn: bool,
    pub hard: bool,
    pub header_list: Vec<PathBuf>,
    pub header_args: Vec<String>,
}
fn read_pre_0_13_2(json: &str) -> Result<Settings, io::Error> {
    let old_settings: Pre0_13_2Settings = serde_json::from_str(json)?;

    let mut difficulty = Difficulty::Moki;
    let mut glitches = Vec::new();

    for pathset in old_settings.pathsets {
        match &pathset[..] {
            "Gorlek" => if difficulty < Difficulty::Gorlek { difficulty = Difficulty::Gorlek },
            "Unsafe" => if difficulty < Difficulty::Unsafe { difficulty = Difficulty::Unsafe },
            "SwordSentryJump" => glitches.push(Glitch::SwordSentryJump),
            "HammerSentryJump" => glitches.push(Glitch::HammerSentryJump),
            "ShurikenBreak" => glitches.push(Glitch::ShurikenBreak),
            "SentryBreak" => glitches.push(Glitch::SentryBreak),
            "HammerBreak" => glitches.push(Glitch::HammerBreak),
            "SpearBreak" => glitches.push(Glitch::SpearBreak),
            "SentryBurn" => glitches.push(Glitch::SentryBurn),
            "RemoveKillPlane" => glitches.push(Glitch::RemoveKillPlane),
            _ => {},
        }
    }

    Ok(Settings {
        version: old_settings.version,
        presets: old_settings.presets,
        worlds: old_settings.worlds,
        players: old_settings.players,
        difficulty,
        glitches,
        goalmodes: old_settings.goalmodes,
        spawn_loc: old_settings.spawn_loc,
        spoilers: old_settings.spoilers,
        web_conn: old_settings.web_conn,
        hard: old_settings.hard,
        header_list: old_settings.header_list,
        header_args: old_settings.header_args,
    })
}

#[derive(Debug, PartialEq, Serialize, Deserialize, Clone)]
pub enum Spawn {
    Set(String),
    Random,
    FullyRandom,
}
impl Default for Spawn {
    fn default() -> Spawn {
        Spawn::Set(DEFAULT_SPAWN.to_string())
    }
}

// TODO output folder?
#[derive(Debug, Serialize, Deserialize, Clone)]
#[serde(rename_all = "camelCase")]
pub struct Settings {
    #[serde(skip_serializing_if = "Option::is_none")]
    pub version: Option<String>,
    pub presets: Vec<PathBuf>,
    pub worlds: usize,
    pub players: Vec<String>,
    pub difficulty: Difficulty,
    pub glitches: Vec<Glitch>,
    pub goalmodes: FxHashSet<GoalMode>,
    pub spawn_loc: Spawn,
    pub spoilers: bool,
    pub web_conn: bool,
    pub hard: bool,
    pub header_list: Vec<PathBuf>,
    pub header_args: Vec<String>,
}
impl Default for Settings {
    fn default() -> Settings {
        Settings {
            version: None,
            presets: Vec::default(),
            worlds: 1,
            players: Vec::default(),
            difficulty: Difficulty::default(),
            glitches: Vec::default(),
            goalmodes: FxHashSet::default(),
            spawn_loc: Spawn::default(),
            spoilers: true,
            web_conn: false,
            hard: false,
            header_list: Vec::default(),
            header_args: Vec::default(),
        }
    }
}
impl Settings {
    pub fn compability_parse(json: &str) -> Result<Settings, String> {
        serde_json::from_str(&json).or_else(|err| {  // current
            read_pre_0_13_2(&json).or_else(|_| {  // < 0.13.2
                read_pre_rustgen(&json).map_err(|_| format!("Failed to read settings: {}", err))  // javagen
            })
        })
    }
    pub fn from_seed(seed: &str) -> Result<Settings, String> {
        let mut settings = Settings::default();
        for line in seed.lines() {
            if let Some(config) = line.strip_prefix("// Config: ") {
                settings = Settings::compability_parse(&config)?;
            }
        }
        Ok(settings)
    }
    pub fn from_preset(mut preset: PathBuf) -> Result<Settings, String> {
        preset.set_extension("json");
        let content = super::read_file(&preset, "presets")?;
        Settings::compability_parse(&content)
    }
    pub fn write(&self) -> Result<String, String> {
        serde_json::to_string(&self).map_err(|err| format!("Invalid Settings: {}", err))
    }

    fn merge(&mut self, other: Settings) {
        let Settings {
            version: other_version,
            presets: mut other_presets,
            worlds: other_worlds,
            players: other_players,
            difficulty: other_difficulty,
            glitches: other_glitches,
            goalmodes: other_goalmodes,
            spawn_loc: other_spawn_loc,
            spoilers: other_spoilers,
            web_conn: other_web_conn,
            hard: other_hard,
            header_list: mut other_header_list,
            header_args: mut other_header_args,
        } = other;

        if other_version.is_some() {
            self.version = other_version;
        }
        self.presets.append(&mut other_presets);
        if self.worlds < other_worlds {
            self.worlds = other_worlds;
            self.players = other_players;
        }
        if self.difficulty < other_difficulty {
            self.difficulty = other_difficulty;
        }
        for glitch in other_glitches {
            self.glitches.push(glitch);
        }
        self.goalmodes.extend(other_goalmodes);
        if other_spawn_loc != Spawn::default() {
            self.spawn_loc = other_spawn_loc;
        }
        self.spoilers = self.spoilers && other_spoilers;
        self.web_conn = self.web_conn || other_web_conn;
        self.hard = self.hard || other_hard;
        self.header_list.append(&mut other_header_list);
        self.header_args.append(&mut other_header_args);
    }
    pub fn apply_presets(mut self) -> Result<Settings, String> {
        let mut merged_settings = Settings::default();

        for preset in self.presets {
            let preset = Settings::from_preset(preset)?;
            let preset = preset.apply_presets()?;

            merged_settings.merge(preset);
        }
        self.presets = Vec::new();
        merged_settings.merge(self);

        Ok(merged_settings)
    }

    pub fn slugify(&self, seed: &str) -> String {
        let string = serde_json::to_string(&self).unwrap();

        let mut hasher = DefaultHasher::new();
        hasher.write(string.as_bytes());
        hasher.write(seed.as_bytes());
        let hash = hasher.finish();

        let mut slug = String::new();

        for (index, slug_strings) in SLUGSTRINGS.iter().enumerate() {
            let length = slug_strings.len();

            let mut shift = 1;
            loop {
                if length < 2_usize.pow(shift) {
                    shift -= 1;
                    break;
                }
                shift += 1;
            };

            let word_index = (hash >> (index as u32 * shift)) & (2_u32.pow(shift) - 1) as u64;

            slug += slug_strings[word_index as usize];
        }

        slug
    }
}

pub fn read_spawn(seed: &str) -> Result<String, String> {
    for line in seed.lines() {
        if let Some(spawn) = line.strip_prefix("Spawn:") {
            return Ok(spawn[spawn.find("//").ok_or_else(|| String::from("Failed to read Spawn location"))? + 2..].trim().to_string());
        }
    }
    Ok(DEFAULT_SPAWN.to_string())
}

#[cfg(test)]
mod tests {
    use super::*;

    use rand::{
        Rng,
        distributions::{Distribution, Alphanumeric},
    };

    #[test]
    fn slugification() {
        let mut rng = rand::thread_rng();
        let mut slugs = FxHashSet::default();

        for _ in 0..10000 {
            let mut settings = Settings::default();

            let goalmodes = vec![GoalMode::Wisps,GoalMode::Trees,GoalMode::Quests,GoalMode::Relics];
            for goalmode in goalmodes {
                if rng.gen_bool(0.25) {
                    settings.goalmodes.insert(goalmode);
                }
            }

            let mut seed = String::new();
            for _ in 0.. rng.gen_range(8..20) {
                seed.push(char::from(Alphanumeric.sample(&mut rng)));
            }

            let slug = settings.slugify(&seed);

            if slugs.contains(&slug) {
                panic!("After {} settings, two had the same slug: {}", slugs.len(), slug);
            } else {
                slugs.insert(slug);
            }
        }
    }
}
