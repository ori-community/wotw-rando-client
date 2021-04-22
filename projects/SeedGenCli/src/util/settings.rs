use std::{io, path::{Path, PathBuf}};

use serde::{Serialize, Deserialize};

use super::{Pathset, constants::DEFAULT_SPAWN};

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

    let mut pathsets = vec![Pathset::Moki];
    if old_settings.gorlek_paths { pathsets.push(Pathset::Gorlek); }
    if old_settings.unsafe_paths { pathsets.push(Pathset::Unsafe); }
    if old_settings.glitch_paths { pathsets.push(Pathset::Glitch); }

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

    Ok(Settings {
        version: String::from("0.0.0"),
        pathsets,
        flags: SeedFlags {
            force_wisps: old_settings.flags.force_wisps,
            force_trees: old_settings.flags.force_trees,
            force_quests: old_settings.flags.force_quests,
            world_tour: old_settings.flags.world_tour,
        },
        spoilers: old_settings.spoilers,
        output_folder: old_settings.output_folder,
        web_conn: old_settings.web_conn,
        spawn_loc,
        header_list,
    })
}

#[derive(Debug, Serialize, Deserialize, PartialEq)]
pub enum Spawn {
    Set(String),
    Random,
    FullyRandom,
}
#[allow(clippy::struct_excessive_bools)]
#[derive(Debug, Default, Serialize, Deserialize, PartialEq)]
#[serde(rename_all = "camelCase")]
pub struct SeedFlags {
    pub force_wisps: bool,
    pub force_trees: bool,
    pub force_quests: bool,
    pub world_tour: bool,
}
#[derive(Debug, Serialize, Deserialize, PartialEq)]
#[serde(rename_all = "camelCase")]
pub struct Settings {
    pub version: String,
    pub pathsets: Vec<Pathset>,
    pub flags: SeedFlags,
    pub spawn_loc: Spawn,
    pub output_folder: PathBuf,
    pub spoilers: bool,
    pub web_conn: bool,
    pub header_list: Vec<PathBuf>,
}
impl Default for Settings {
    fn default() -> Settings {
        Settings {
            version: env!("CARGO_PKG_VERSION").to_string(),
            pathsets: vec![Pathset::Moki],
            flags: SeedFlags::default(),
            spawn_loc: Spawn::Set(DEFAULT_SPAWN.to_string()),
            output_folder: PathBuf::default(),
            spoilers: true,
            web_conn: false,
            header_list: vec![PathBuf::from("default")],
        }
    }
}
pub fn read(seed: &Path) -> Result<Settings, io::Error> {
    let seed = super::read_file(seed, "seeds")?;
    let mut settings = Settings::default();
    for line in seed.lines() {
        if let Some(config) = line.strip_prefix("// Config: ") {
            settings = serde_json::from_str(&config).or_else(|err| {  // read directly or fall back to reading old settings
                read_old(&config).map_err(|_| err)
            })?;
        }
    }
    Ok(settings)
}
pub fn write(settings: &Settings) -> Result<String, serde_json::Error> {
    serde_json::to_string(settings)
}
pub fn read_spawn(seed: &Path) -> Result<String, io::Error> {
    let seed = super::read_file(seed, "seeds")?;
    for line in seed.lines() {
        if let Some(spawn) = line.strip_prefix("Spawn:") {
            return Ok(spawn[spawn.find("//").ok_or_else(|| io::Error::new(io::ErrorKind::Other, "Failed to read Spawn location"))? + 2..].trim().to_string());
        }
    }
    Ok(DEFAULT_SPAWN.to_string())
}

#[cfg(test)]
mod tests {
    use super::*;

    use std::fs;

    #[test]
    fn settings_io() {
        let settings = Settings {
            version: String::from("0.0.0"),
            pathsets: vec![Pathset::Moki, Pathset::Gorlek, Pathset::Glitch],
            flags: SeedFlags {
                force_wisps: false,
                force_trees: true,
                force_quests: true,
                world_tour: false,
            },
            spawn_loc: Spawn::Set(String::from("InnerWellspring.Teleporter")),
            output_folder: PathBuf::from("seeds"),
            spoilers: true,
            web_conn: false,
            header_list: vec![PathBuf::from("skippable_cutscenes"), PathBuf::from("alternate_hints"), PathBuf::from("teleporters"), PathBuf::from("bonus_items"), PathBuf::from("spawn_with_sword"), PathBuf::from("rainy_marsh")],
        };
        let json = "// Config: {\"tps\":true,\"spoilers\":true,\"unsafePaths\":false,\"gorlekPaths\":true,\"glitchPaths\":true,\"questLocs\":true,\"outputFolder\":\"seeds\",\"flags\":{\"forceWisps\":false,\"forceTrees\":true,\"forceQuests\":true,\"noHints\":true,\"noSword\":false,\"rain\":true,\"noKSDoors\":false,\"randomSpawn\":false,\"worldTour\":false},\"webConn\":false,\"bonusItems\":true,\"debugInfo\":true,\"seirLaunch\":false,\"spawnLoc\":\"InnerWellspring.Teleporter\",\"headerList\":[\"skippable_cutscenes\",\"alternate_hints\"]}";
        fs::write("temp.wotwr", json).unwrap();
        assert_eq!(read(&PathBuf::from("temp.wotwr")).unwrap(), settings);
    }
}
