use std::{fs, io, path::PathBuf};
use std::ops::{Add, AddAssign};

use serde::Deserialize;

#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum Pathset {
    Moki,
    Gorlek,
    Glitch,
    Unsafe,
}
#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum Skill {
    Bash,
    WallJump,
    DoubleJump,
    Launch,
    Glide,
    WaterBreath,
    Grenade,
    Grapple,
    Flash,
    Spear,
    Regenerate,
    Bow,
    Hammer,
    Sword,
    Burrow,
    Dash,
    WaterDash,
    Shuriken,
    Seir,
    Blaze,
    Sentry,
    Flap,
    Water,
    AncestralLight,
}
impl Skill {
    pub fn from_id(id: u8) -> Option<Skill> {
        match id {
            0 => Some(Skill::Bash),
            3 => Some(Skill::WallJump),
            5 => Some(Skill::DoubleJump),
            8 => Some(Skill::Launch),
            14 => Some(Skill::Glide),
            23 => Some(Skill::WaterBreath),
            51 => Some(Skill::Grenade),
            57 => Some(Skill::Grapple),
            62 => Some(Skill::Flash),
            74 => Some(Skill::Spear),
            77 => Some(Skill::Regenerate),
            97 => Some(Skill::Bow),
            98 => Some(Skill::Hammer),
            100 => Some(Skill::Sword),
            101 => Some(Skill::Burrow),
            102 => Some(Skill::Dash),
            104 => Some(Skill::WaterDash),
            106 => Some(Skill::Shuriken),
            108 => Some(Skill::Seir),
            115 => Some(Skill::Blaze),
            116 => Some(Skill::Sentry),
            118 => Some(Skill::Flap),
            120 | 121 => Some(Skill::AncestralLight),
            255 => Some(Skill::Water),
            _ => None,
        }
    }
}
#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum Resource {
    SpiritLight,
    Health,
    Energy,
    Ore,
    Keystone,
    ShardSlot,
}
#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum Shard {
    Overcharge,
    TripleJump,
    Wingclip,
    Bounty,
    Swap,
    Magnet,
    Splinter,
    Reckless,
    Quickshot,
    Resilience,
    SpiritLightHarvest,
    Vitality,
    LifeHarvest,
    EnergyHarvest,
    Energy,
    LifePact,
    LastStand,
    Sense,
    UltraBash,
    UltraGrapple,
    Overflow,
    Thorn,
    Catalyst,
    Turmoil,
    Sticky,
    Finesse,
    SpiritSurge,
    Lifeforce,
    Deflector,
    Fracture,
    Arcing,
}
impl Shard {
    pub fn from_id(id: u8) -> Option<Shard> {
        match id {
            1 => Some(Shard::Overcharge),
            2 => Some(Shard::TripleJump),
            3 => Some(Shard::Wingclip),
            4 => Some(Shard::Bounty),
            5 => Some(Shard::Swap),
            8 => Some(Shard::Magnet),
            9 => Some(Shard::Splinter),
            13 => Some(Shard::Reckless),
            14 => Some(Shard::Quickshot),
            18 => Some(Shard::Resilience),
            19 => Some(Shard::SpiritLightHarvest),
            22 => Some(Shard::Vitality),
            23 => Some(Shard::LifeHarvest),
            25 => Some(Shard::EnergyHarvest),
            26 => Some(Shard::Energy),
            27 => Some(Shard::LifePact),
            28 => Some(Shard::LastStand),
            30 => Some(Shard::Sense),
            32 => Some(Shard::UltraBash),
            33 => Some(Shard::UltraGrapple),
            34 => Some(Shard::Overflow),
            35 => Some(Shard::Thorn),
            36 => Some(Shard::Catalyst),
            38 => Some(Shard::Turmoil),
            39 => Some(Shard::Sticky),
            40 => Some(Shard::Finesse),
            41 => Some(Shard::SpiritSurge),
            43 => Some(Shard::Lifeforce),
            44 => Some(Shard::Deflector),
            46 => Some(Shard::Fracture),
            47 => Some(Shard::Arcing),
            _ => None,
        }
    }
}
#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum Teleporter {
    Marsh,
    Den,
    Hollow,
    Glades,
    Wellspring,
    Burrows,
    WestWoods,
    EastWoods,
    Reach,
    Depths,
    EastLuma,
    WestLuma,
    WestWastes,
    EastWastes,
    OuterRuins,
    InnerRuins,
    Willow,
    Shriek,
}
impl Teleporter {
    pub fn from_id(id: u8) -> Option<Teleporter> {
        match id {
            0 => Some(Teleporter::Burrows),
            1 => Some(Teleporter::Den),
            2 => Some(Teleporter::EastLuma),
            3 => Some(Teleporter::Wellspring),
            4 => Some(Teleporter::Reach),
            5 => Some(Teleporter::Hollow),
            6 => Some(Teleporter::Depths),
            7 => Some(Teleporter::WestWoods),
            8 => Some(Teleporter::EastWoods),
            9 => Some(Teleporter::WestWastes),
            10 => Some(Teleporter::EastWastes),
            11 => Some(Teleporter::OuterRuins),
            12 => Some(Teleporter::Willow),
            13 => Some(Teleporter::WestLuma),
            14 => Some(Teleporter::InnerRuins),
            15 => Some(Teleporter::Shriek),
            16 => Some(Teleporter::Marsh),
            17 => Some(Teleporter::Glades),
            _ => None,
        }
    }
}
#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum Bonus {
    // HealthRegen,
    // EnergyRegen,
    // ExtraDoubleJump,
    // ExtraAirDash,
    // RapidHammer,
    // RapidSword,
    // BlazeEfficiency,
    // SpearEfficiency,
    // ShurikenEfficiency,
    // SentryEfficiency,
    // BowEfficiency,
    // RegenerationEfficiency,
    // FlashEfficiency,
    // GrenadeEfficiency,
}
#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum Hint {
    // Marsh,
    // Hollow,
    // Glades,
    // Wellspring,
    // Woods,
    // Reach,
    // Depths,
    // Pools,
    // Wastes,
    // Ruins,
    // Willow,
    // Void,
}
#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum Enemy {
    Mantis,
    Slug,
    WeakSlug,
    BombSlug,
    CorruptSlug,
    SneezeSlug,
    ShieldSlug,
    Lizard,
    Bat,
    Hornbug,
    Skeeto,
    SmallSkeeto,
    Bee,
    Nest,
    Crab,
    SpinCrab,
    Tentacle,
    Balloon,
    Miner,
    MaceMiner,
    ShieldMiner,
    CrystalMiner,
    ShieldCrystalMiner,
    Sandworm,
    Spiderling,
    EnergyRefill,
}
impl Enemy {
    pub fn health(&self) -> f32 {
        match *self {
            Enemy::BombSlug | Enemy::CorruptSlug | Enemy::Balloon => 1.0,
            Enemy::SmallSkeeto => 8.0,
            Enemy::WeakSlug | Enemy::Spiderling => 12.0,
            Enemy::Slug => 13.0,
            Enemy::Skeeto | Enemy::Sandworm | Enemy::Tentacle => 20.0,
            Enemy::ShieldSlug | Enemy::Lizard | Enemy::Bee => 24.0,
            Enemy::Nest => 25.0,
            Enemy::Mantis | Enemy::SneezeSlug | Enemy::Bat | Enemy::Crab | Enemy::SpinCrab => 32.0,
            Enemy::Hornbug | Enemy::Miner => 40.0,
            Enemy::MaceMiner | Enemy::ShieldMiner => 60.0,
            Enemy::CrystalMiner | Enemy::ShieldCrystalMiner => 80.0,
            _ => 0.0,
        }
    }
    pub fn shielded(&self) -> bool {
        matches!(*self, Enemy::Hornbug | Enemy::ShieldSlug | Enemy::ShieldMiner | Enemy::ShieldCrystalMiner)
    }
    pub fn armored(&self) -> bool {
        matches!(self, Enemy::Tentacle)
    }
    pub fn aerial(&self) -> bool {
        matches!(*self, Enemy::Bat | Enemy::Skeeto | Enemy::SmallSkeeto | Enemy::Bee | Enemy::Nest | Enemy::Tentacle)
    }
    pub fn ranged(&self) -> bool {
        matches!(*self, Enemy::BombSlug | Enemy::CorruptSlug | Enemy::Balloon | Enemy::Bat)
    }
    pub fn dangerous(&self) -> bool {
        matches!(*self, Enemy::SneezeSlug | Enemy::Hornbug | Enemy::Crab | Enemy::SpinCrab | Enemy::Miner | Enemy::MaceMiner | Enemy::ShieldMiner | Enemy::CrystalMiner | Enemy::ShieldCrystalMiner)
    }
}

#[derive(Debug, Clone, Copy)]
pub enum RefillType {
    Full,
    Checkpoint,
    Health(f32),
    Energy(f32),
}
#[derive(Debug, PartialEq)]
pub enum NodeType {
    Anchor,
    Pickup,
    State,
    Quest,
}

#[derive(Debug, Default, PartialEq, Clone, Copy)]
pub struct Orbs {
    pub health: f32,
    pub energy: f32,
}
impl Add for Orbs {
    type Output = Orbs;
    fn add(self, other: Orbs) -> Orbs {
        Orbs {
            health: self.health + other.health,
            energy: self.energy + other.energy,
        }
    }
}
impl AddAssign for Orbs {
    fn add_assign(&mut self, other: Orbs) {
        *self = *self + other;
    }
}

pub fn either_orbs(mut a: Vec<Orbs>, mut b: Vec<Orbs>) -> Vec<Orbs> {
    if b.is_empty() || a.is_empty() {
        vec![Default::default()]
    } else {
        for b_ in &mut b {
            let mut used = false;
            for a_ in &mut a {
                if b_.energy >= a_.energy && b_.health >= a_.health {
                    *a_ = *b_;
                    used = true;
                }
            }
            if !used && a.iter().all(|a_| a_.energy < b_.energy) || a.iter().all(|a_| a_.health < b_.health) {
                a.push(*b_);
            }
        }
        a
    }
}
pub fn both_orbs(a: Vec<Orbs>, b: Vec<Orbs>) -> Vec<Orbs> {
    if b.is_empty() {
        a
    } else if a.is_empty() {
        b
    } else {
        let mut product = Vec::<Orbs>::with_capacity(a.len() + b.len());
        for a_ in &a {
            for b_ in &b {
                let orbs = *a_ + *b_;
                if !product.contains(&orbs) {
                    product.push(orbs);
                }
            }
        }
        product.clone().into_iter().filter(|orbs| {
            !product.iter().any(|other| other.energy > orbs.energy && other.health >= orbs.health || other.energy >= orbs.energy && other.health > orbs.health)
        }).collect()
    }
}

pub fn energy_cost(skill: &Skill) -> f32 {
    match skill {
        Skill::Grenade => 1.0,
        Skill::Flash => 1.0,
        Skill::Spear => 2.0,
        Skill::Regenerate => 1.0,
        Skill::Bow => 0.25,
        Skill::Shuriken => 0.5,
        Skill::Blaze => 1.0,
        Skill::Sentry => 1.0,
        _ => 0.0,
    }
}
// too lazy to actually look these up now
pub fn damage(skill: &Skill, pathsets: &[Pathset]) -> f32 {
    match skill {
        Skill::Grenade => if pathsets.contains(&Pathset::Unsafe) { 16.0 } else { 12.0 },
        Skill::Flash => 14.0,
        Skill::Spear => 20.0,
        Skill::Bow => 4.0,
        Skill::Hammer => 12.0,
        Skill::Sword => 4.0,
        Skill::Shuriken => 7.0,
        Skill::Blaze => 13.8,
        Skill::Sentry => 12.0,
        _ => 0.0,
    }
}

#[derive(Debug, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct SeedFlags {
    pub force_wisps: bool,
    pub force_trees: bool,
    pub force_quests: bool,
    pub no_hints: bool,
    pub no_sword: bool,
    pub rain: bool,
    pub no_k_s_doors: bool,
    pub random_spawn: bool,
    pub world_tour: bool,
}
#[derive(Debug, Deserialize)]
#[serde(rename_all = "camelCase")]
pub struct Settings {
    pub tps: bool,
    pub spoilers: bool,
    pub unsafe_paths: bool,
    pub gorlek_paths: bool,
    pub glitch_paths: bool,
    pub quest_locs: bool,
    pub output_folder: PathBuf,
    pub flags: SeedFlags,
    pub web_conn: bool,
    pub bonus_items: bool,
    pub debug_info: bool,
    pub seir_launch: bool,
    pub spawn_loc: String,
    pub header_list: Vec<String>,
}
impl Default for Settings {
    fn default() -> Settings {
        Settings {
            tps: true,
            spoilers: true,
            unsafe_paths: false,
            gorlek_paths: false,
            glitch_paths: false,
            quest_locs: true,
            output_folder: PathBuf::new(),
            flags: SeedFlags {
                force_wisps: false,
                force_trees: false,
                force_quests: false,
                no_hints: false,
                no_sword: false,
                rain: false,
                no_k_s_doors: false,
                random_spawn: false,
                world_tour: false,
            },
            web_conn: false,
            bonus_items: false,
            debug_info: false,
            seir_launch: false,
            spawn_loc: "MarshSpawn.Main".to_string(),
            header_list: vec![],
        }
    }
}
pub fn read_settings(seed: &PathBuf) -> Result<Settings, io::Error> {
    let seed = fs::read_to_string(seed)?;
    let mut settings: Settings = Default::default();
    for line in seed.lines() {
        if let Some(config) = line.strip_prefix("// Config: ") {
            settings = serde_json::from_str(&config)?;
        }
    }
    Ok(settings)
}

pub fn pathsets_from_settings(settings: &Settings) -> Vec<Pathset> {
    let mut pathsets = if settings.unsafe_paths {
        vec![Pathset::Moki, Pathset::Gorlek, Pathset::Unsafe]
    } else if settings.gorlek_paths {
        vec![Pathset::Moki, Pathset::Gorlek]
    } else {
        vec![Pathset::Moki]
    };
    if settings.glitch_paths {
        pathsets.push(Pathset::Glitch);
    }
    pathsets
}

pub fn trace_parse_error(areas: &PathBuf, position: usize) -> String {
    let input = fs::read_to_string(areas).unwrap();
    let mut input = &input[position..];
    if input.starts_with('\n') {
        input = &input[1..];
    }
    if let Some(index) = input.find(&['\n', '\r'][..]) {
        return input[..index].to_string();
    }
    input.to_string()
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn orb_tools() {
        let orbs: Orbs = Default::default();
        let a = vec![Orbs { energy: 2.0, ..orbs }];
        let b = vec![Orbs { health: 30.0, ..orbs }];
        assert_eq!(either_orbs(a.clone(), b.clone()), vec![Orbs { energy: 2.0, ..orbs }, Orbs { health: 30.0, ..orbs }]);
        assert_eq!(both_orbs(a.clone(), b.clone()), vec![Orbs { health: 30.0, energy: 2.0 }]);
        let a = vec![Orbs { energy: 3.0, health: 10.0 }, Orbs { health: 20.0, ..orbs }];
        assert_eq!(either_orbs(a.clone(), b.clone()), vec![Orbs { energy: 3.0, health: 10.0 }, Orbs { health: 30.0, ..orbs }]);
        assert_eq!(both_orbs(a.clone(), b.clone()), vec![Orbs { health: 40.0, energy: 3.0 }, Orbs { health: 50.0, ..orbs }]);
        let a = vec![Orbs { energy: 30.0, health: 100.0 }, Orbs { health: 200.0, energy: 10.0 }];
        let b = vec![Orbs { energy: -10.0, ..orbs }, Orbs { energy: -3.0, health: -50.0 }, Orbs { health: -10.0, energy: -5.0 }, Orbs { health: -20.0, energy: -4.0 }];
        assert_eq!(both_orbs(a.clone(), b.clone()), vec![Orbs { health: 100.0, energy: 20.0 }, Orbs { health: 50.0, energy: 27.0 }, Orbs { health: 90.0, energy: 25.0 }, Orbs { health: 80.0, energy: 26.0 }, Orbs { health: 200.0, energy: 0.0 }, Orbs { health: 150.0, energy: 7.0 }, Orbs { health: 190.0, energy: 5.0 }, Orbs { health: 180.0, energy: 6.0 }]);
        let a = vec![Orbs { energy: 2.0, ..orbs }];
        let b = vec![];
        assert_eq!(either_orbs(a.clone(), b.clone()), vec![Orbs { ..orbs }]);
        assert_eq!(either_orbs(b.clone(), a.clone()), vec![Orbs { ..orbs }]);
        assert_eq!(both_orbs(a.clone(), b.clone()), vec![Orbs { energy: 2.0, ..orbs }]);
        assert_eq!(both_orbs(b.clone(), a.clone()), vec![Orbs { energy: 2.0, ..orbs }]);
    }
}
