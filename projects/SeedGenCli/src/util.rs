use std::{fs, path::PathBuf};

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
    //Overcharge,
    TripleJump,
    //Wingclip,
    //Bounty,
    //Swap,
    Magnet,
    //Splinter,
    //Reckless,
    //Quickshot,
    //Resilience,
    //SpiritLightHarvest,
    //Vitality,
    LifeHarvest,
    EnergyHarvest,
    //Energy,
    //LifePact,
    //LastStand,
    //Sense,
    UltraBash,
    UltraGrapple,
    Overflow,
    Thorn,
    Catalyst,
    //Turmoil,
    Sticky,
    //Finesse,
    //SpiritSurge,
    //Lifeforce,
    Deflector,
    Fracture,
    Arcing,
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
    Health(u16),
    Energy(u16),
}
#[derive(Debug, PartialEq)]
pub enum NodeType {
    Anchor,
    Pickup,
    State,
    Quest,
}

#[derive(Debug, Default)]
pub struct Orbs {
    pub health: u16,
    pub energy: f32,
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
        Skill::Flash => 6.0,
        Skill::Spear => 20.0,
        Skill::Bow => 4.0,
        Skill::Hammer => 12.0,
        Skill::Sword => 4.0,
        Skill::Shuriken => if pathsets.contains(&Pathset::Unsafe) { 10.0 } else { 7.0 },
        Skill::Blaze => 10.0,
        Skill::Sentry => 10.0,
        _ => 0.0,
    }
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
