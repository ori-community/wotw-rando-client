use std::{
    io,
    path::{Path, PathBuf},
    collections::hash_map::DefaultHasher,
    hash::Hasher,
};

use rustc_hash::FxHashSet;
use serde::{Serialize, Deserialize};

use super::{
    Pathsets, Pathset, GoalMode,
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
#[derive(Debug, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
struct OldSettings {
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
impl Default for OldSettings {
    fn default() -> OldSettings {
        OldSettings {
            tps: true,
            spoilers: true,
            unsafe_paths: false,
            gorlek_paths: false,
            glitch_paths: false,
            quest_locs: true,
            output_folder: PathBuf::new(),
            flags: OldSeedFlags::default(),
            web_conn: false,
            bonus_items: false,
            debug_info: false,
            seir_launch: false,
            spawn_loc: DEFAULT_SPAWN.to_string(),
            header_list: vec![],
        }
    }
}
fn read_old(json: &str) -> Result<Settings, io::Error> {
    let old_settings: OldSettings = serde_json::from_str(json)?;

    let mut pathsets = Pathsets::default();
    if old_settings.gorlek_paths { pathsets.add(Pathset::Gorlek); }
    if old_settings.unsafe_paths { pathsets.add(Pathset::Unsafe); }
    if old_settings.glitch_paths { pathsets.add_glitches(); }

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
        pathsets,
        goalmodes,
        spoilers: old_settings.spoilers,
        web_conn: old_settings.web_conn,
        spawn_loc,
        header_list,
        ..Settings::default()
    })
}

#[derive(Debug, PartialEq, Serialize, Deserialize)]
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
#[derive(Debug, Serialize, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Settings {
    #[serde(skip_serializing_if = "Option::is_none")]
    pub version: Option<String>,
    pub presets: Vec<PathBuf>,
    pub worlds: usize,
    pub players: Vec<String>,
    #[serde(flatten)]
    pub pathsets: Pathsets,
    pub goalmodes: FxHashSet<GoalMode>,
    pub spawn_loc: Spawn,
    pub spoilers: bool,
    pub web_conn: bool,
    pub hard: bool,
    pub header_list: Vec<PathBuf>,
}
impl Default for Settings {
    fn default() -> Settings {
        Settings {
            version: None,
            presets: Vec::default(),
            worlds: 1,
            players: Vec::default(),
            pathsets: Pathsets::default(),
            goalmodes: FxHashSet::default(),
            spawn_loc: Spawn::default(),
            spoilers: true,
            web_conn: false,
            hard: false,
            header_list: Vec::default(),
        }
    }
}
impl Settings {
    pub fn from_seed(seed: &str) -> Result<Settings, String> {
        let mut settings = Settings::default();
        for line in seed.lines() {
            if let Some(config) = line.strip_prefix("// Config: ") {
                settings = serde_json::from_str(&config).or_else(|err| {  // read directly or fall back to reading old settings
                    read_old(&config).map_err(|_| format!("Failed to read settings: {}", err))
                })?;
            }
        }
        Ok(settings)
    }
    pub fn from_preset(preset: &Path) -> Result<Settings, String> {
        let mut preset = preset.to_owned();
        preset.set_extension("json");
        let content = super::read_file(&preset, "presets")?;
        serde_json::from_str(&content).map_err(|err| format!("Failed to read settings from {}: {}", preset.display(), err))
    }
    pub fn write(settings: &Settings) -> Result<String, String> {
        serde_json::to_string(settings).map_err(|err| format!("Invalid Settings: {}", err))
    }

    fn merge(&mut self, mut other: Settings) {
        if other.version.is_some() {
            self.version = other.version;
        }
        if self.worlds < other.worlds {
            self.worlds = other.worlds;
            self.players = other.players;
        }
        for pathset in other.pathsets.pathsets {
            self.pathsets.add(pathset);
        }
        self.goalmodes.extend(other.goalmodes);
        if other.spawn_loc != Spawn::default() {
            self.spawn_loc = other.spawn_loc;
        }
        self.spoilers = self.spoilers && other.spoilers;
        self.web_conn = self.web_conn || other.web_conn;
        self.hard = self.hard || other.hard;
        self.header_list.append(&mut other.header_list);
    }
    pub fn apply_presets(self) -> Result<Settings, String> {
        let mut merged_settings = Settings::default();

        for preset in &self.presets {
            let preset = Settings::from_preset(preset)?;
            let preset = preset.apply_presets()?;

            merged_settings.merge(preset);
        }
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

        for index in 0..SLUGSTRINGS.len() {
            let slug_strings = SLUGSTRINGS[index];
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
