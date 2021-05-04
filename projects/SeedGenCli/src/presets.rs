use std::path::PathBuf;

use rustc_hash::FxHashSet;

use crate::util::{
    Pathsets, Pathset, GoalMode,
    settings::{Settings, Spawn},
};

pub fn moki() -> Settings {
    let mut goalmodes = FxHashSet::default();
    goalmodes.insert(GoalMode::Wisps);

    Settings {
        version: None,
        pathsets: Pathsets::default(),
        goalmodes,
        spawn_loc: Spawn::default(),
        spoilers: true,
        web_conn: false,
        hard: false,
        header_list: vec![PathBuf::from("default"), PathBuf::from("spawn_with_sword")],
    }
}
pub fn gorlek() -> Settings {
    let mut pathsets = Pathsets::default();
    pathsets.add(Pathset::Gorlek);

    Settings {
        version: None,
        pathsets,
        goalmodes: FxHashSet::default(),
        spawn_loc: Spawn::default(),
        spoilers: true,
        web_conn: false,
        hard: false,
        header_list: vec![PathBuf::from("default")],
    }
}
pub fn gorlek_glitch() -> Settings {
    let mut settings = gorlek();
    settings.pathsets.add_glitches();
    settings
}
