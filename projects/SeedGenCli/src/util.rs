use std::{fs, path::PathBuf};
use std::collections::HashMap;

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
    //AncestralLightA,
    //AncestralLightB,
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
