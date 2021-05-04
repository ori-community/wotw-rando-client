use std::{io, path::{Path, PathBuf}};

use rustc_hash::FxHashSet;
use serde::{Serialize, Deserialize};

use super::{Pathsets, Pathset, GoalMode, constants::DEFAULT_SPAWN};

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
    if old_settings.flags.rain { header_list.push(PathBuf::from("rainy_marsh")); }
    if old_settings.flags.no_k_s_doors { header_list.push(PathBuf::from("no_ks_doors")); }

    let spawn_loc = if old_settings.flags.random_spawn { Spawn::Random } else { Spawn::Set(old_settings.spawn_loc) };

    let mut goalmodes = FxHashSet::default();
    if old_settings.flags.force_wisps { goalmodes.insert(GoalMode::Wisps); }
    if old_settings.flags.force_trees { goalmodes.insert(GoalMode::Trees); }
    if old_settings.flags.force_quests { goalmodes.insert(GoalMode::Quests); }
    if old_settings.flags.world_tour { goalmodes.insert(GoalMode::Relics); }

    Ok(Settings {
        version: None,
        pathsets,
        goalmodes,
        spoilers: old_settings.spoilers,
        web_conn: old_settings.web_conn,
        spawn_loc,
        hard: false,
        header_list,
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
    pub fn from_seed(seed: &Path) -> Result<Settings, String> {
        let content = super::read_file(seed, "seeds")?;
        let mut settings = Settings::default();
        for line in content.lines() {
            if let Some(config) = line.strip_prefix("// Config: ") {
                settings = serde_json::from_str(&config).or_else(|err| {  // read directly or fall back to reading old settings
                    read_old(&config).map_err(|_| format!("Failed to read settings from {}: {}", seed.display(), err))
                })?;
            }
        }
        Ok(settings)
    }
    pub fn from_preset(preset: &Path) -> Result<Settings, String> {
        let content = super::read_file(preset, "presets")?;
        serde_json::from_str(&content).map_err(|err| format!("Failed to read settings from {}: {}", preset.display(), err))
    }
    pub fn write(settings: &Settings) -> Result<String, String> {
        serde_json::to_string(settings).map_err(|err| format!("Invalid Settings: {}", err))
    }
}

pub fn read_spawn(seed: &Path) -> Result<String, String> {
    let content = super::read_file(seed, "seeds")?;
    for line in content.lines() {
        if let Some(spawn) = line.strip_prefix("Spawn:") {
            return Ok(spawn[spawn.find("//").ok_or_else(|| format!("Failed to read Spawn location from {}", seed.display()))? + 2..].trim().to_string());
        }
    }
    Ok(DEFAULT_SPAWN.to_string())
}
