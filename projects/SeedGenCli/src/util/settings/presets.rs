use std::path::PathBuf;

use rustc_hash::FxHashSet;

use crate::util::{
    Pathsets, Pathset, GoalMode,
    settings::Settings,
};

pub fn moki() -> Settings {
    let mut goalmodes = FxHashSet::default();
    goalmodes.insert(GoalMode::Wisps);

    Settings {
        goalmodes,
        presets: vec![PathBuf::from("default")],
        header_list: vec![PathBuf::from("teleporters"), PathBuf::from("black_market"), PathBuf::from("spawn_with_sword")],
        ..Settings::default()
    }
}
pub fn gorlek() -> Settings {
    let mut pathsets = Pathsets::default();
    pathsets.add(Pathset::Gorlek);

    Settings {
        pathsets,
        presets: vec![PathBuf::from("default")],
        header_list: vec![PathBuf::from("teleporters"), PathBuf::from("black_market")],
        ..Settings::default()
    }
}
pub fn gorlek_glitch() -> Settings {
    let mut settings = gorlek();
    settings.pathsets.add_glitches();
    settings
}
