use std::{fs, path::PathBuf};

#[derive(Debug)]
pub enum Pathset {
    Moki,
    Gorlek,
    Glitch,
    Unsafe,
}
#[derive(Debug)]
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
}
#[derive(Debug)]
pub enum Resource {
    SpiritLight,
    Health,
    Energy,
    Ore,
    Keystone,
    ShardSlot,
}
#[derive(Debug)]
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
#[derive(Debug)]
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
