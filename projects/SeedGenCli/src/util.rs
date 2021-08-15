pub mod settings;
pub mod orbs;
pub mod uberstate;
pub mod constants;

use std::{
    fmt,
    fs,
    io::{self, Write},
    path::{Path, PathBuf}
};

use serde::{Serialize, Deserialize};

use crate::inventory::Item;
use uberstate::{UberState, UberIdentifier};

#[derive(Debug, PartialEq, Eq, PartialOrd, Ord, Hash, Clone, Copy, Serialize, Deserialize)]
pub enum Difficulty {
    Moki,
    Gorlek,
    Unsafe,
}
impl Default for Difficulty {
    fn default() -> Difficulty { Difficulty::Moki }
}

#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy, Serialize, Deserialize)]
pub enum Glitch {
    SwordSentryJump,    // Grounded Sentry Jumps with Sword
    HammerSentryJump,   // Grounded Sentry Jump with Hammer
    ShurikenBreak,      // Breaking Walls from behind with Shuriken
    SentryBreak,        // Breaking Walls from behind with Sentry
    HammerBreak,        // Breaking Walls from behind with Hammer
    SpearBreak,         // Breaking Walls from behind with Spear
    SentryBurn,         // Melting Ice using Sentries
    RemoveKillPlane,    // Removing Shriek's Killplane at Feeding Grounds
}

#[derive(Debug, PartialEq, Eq, Hash, Serialize, Deserialize, Clone)]
pub enum GoalMode {
    Wisps,
    Trees,
    Quests,
    Relics,
}
impl fmt::Display for GoalMode {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        match self {
            GoalMode::Wisps => write!(f, "ForceWisps"),
            GoalMode::Trees => write!(f, "ForceTrees"),
            GoalMode::Quests => write!(f, "ForceQuests"),
            GoalMode::Relics => write!(f, "WorldTour"),
        }
    }
}

#[inline]
fn auto_display<D>(debug: D) -> String
where D: fmt::Debug
{
    let mut debug = format!("{:?}", debug);

    let mut indices = Vec::new();

    for (index, _) in debug.match_indices(char::is_uppercase) {
        if index > 0 {
            indices.push(index);
        }
    }
    indices.reverse();
    for index in indices {
        debug.insert(index, ' ');
    }

    debug
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
    AncestralLight,
}
impl fmt::Display for Skill {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "{}", auto_display(self))
    }
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
            _ => None,
        }
    }
    pub fn to_id(self) -> u16 {
        match self {
            Skill::Bash => 0,
            Skill::WallJump => 3,
            Skill::DoubleJump => 5,
            Skill::Launch => 8,
            Skill::Glide => 14,
            Skill::WaterBreath => 23,
            Skill::Grenade => 51,
            Skill::Grapple => 57,
            Skill::Flash => 62,
            Skill::Spear => 74,
            Skill::Regenerate => 77,
            Skill::Bow => 97,
            Skill::Hammer => 98,
            Skill::Sword => 100,
            Skill::Burrow => 101,
            Skill::Dash => 102,
            Skill::WaterDash => 104,
            Skill::Shuriken => 106,
            Skill::Seir => 108,
            Skill::Blaze => 115,
            Skill::Sentry => 116,
            Skill::Flap => 118,
            Skill::AncestralLight => 120,
        }
    }

    pub fn energy_cost(self) -> f32 {
        match self {
            Skill::Bow => 0.25,
            Skill::Shuriken => 0.5,
            Skill::Grenade | Skill::Flash | Skill::Regenerate | Skill::Blaze | Skill::Sentry => 1.0,
            Skill::Spear => 2.0,
            _ => 0.0,
        }
    }

    pub fn damage(self, difficulty: Difficulty) -> f32 {
        match self {
            Skill::Bow | Skill::Sword => 4.0,
            Skill::Launch => 5.0,
            Skill::Hammer | Skill::Flash => 12.0,
            Skill::Shuriken => 7.0,
            Skill::Grenade => if difficulty >= Difficulty::Unsafe { 8.0 } else { 4.0 },
            Skill::Spear => 20.0,
            Skill::Blaze => 3.0,
            Skill::Sentry => 8.8,
            _ => 0.0,
        }
    }
    pub fn burn_damage(self) -> f32 {
        match self {
            Skill::Grenade => 9.0,
            Skill::Blaze => 10.8,
            _ => 0.0,
        }
    }

    pub fn damage_per_energy(self, difficulty: Difficulty) -> f32 {
        // (self.damage(unsafe_paths) + self.burn_damage()) / self.energy_cost()
        (10.0 / (self.damage(difficulty) + self.burn_damage())).ceil() * self.energy_cost()  // "how much energy do you need to deal 10 damage" leads to a more realistic ordering than pure damage per energy
    }
}

#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum Resource {
    Health,
    Energy,
    Ore,
    Keystone,
    ShardSlot,
}
impl fmt::Display for Resource {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        match self {
            Resource::Health => write!(f, "Health Fragment"),
            Resource::Energy => write!(f, "Energy Fragment"),
            Resource::Ore => write!(f, "Gorlek Ore"),
            Resource::Keystone => write!(f, "Keystone"),
            Resource::ShardSlot => write!(f, "Shard Slot"),
        }
    }
}
impl Resource {
    pub fn from_id(id: u8) -> Option<Resource> {
        match id {
            0 => Some(Resource::Health),
            1 => Some(Resource::Energy),
            2 => Some(Resource::Ore),
            3 => Some(Resource::Keystone),
            4 => Some(Resource::ShardSlot),
            _ => None,
        }
    }
    pub fn to_id(self) -> u16 {
        match self {
            Resource::Health => 0,
            Resource::Energy => 1,
            Resource::Ore => 2,
            Resource::Keystone => 3,
            Resource::ShardSlot => 4,
        }
    }
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
impl fmt::Display for Shard {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "{}", auto_display(self))
    }
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
    pub fn to_id(self) -> u16 {
        match self {
            Shard::Overcharge => 1,
            Shard::TripleJump => 2,
            Shard::Wingclip => 3,
            Shard::Bounty => 4,
            Shard::Swap => 5,
            Shard::Magnet => 8,
            Shard::Splinter => 9,
            Shard::Reckless => 13,
            Shard::Quickshot => 14,
            Shard::Resilience => 18,
            Shard::SpiritLightHarvest => 19,
            Shard::Vitality => 22,
            Shard::LifeHarvest => 23,
            Shard::EnergyHarvest => 25,
            Shard::Energy => 26,
            Shard::LifePact => 27,
            Shard::LastStand => 28,
            Shard::Sense => 30,
            Shard::UltraBash => 32,
            Shard::UltraGrapple => 33,
            Shard::Overflow => 34,
            Shard::Thorn => 35,
            Shard::Catalyst => 36,
            Shard::Turmoil => 38,
            Shard::Sticky => 39,
            Shard::Finesse => 40,
            Shard::SpiritSurge => 41,
            Shard::Lifeforce => 43,
            Shard::Deflector => 44,
            Shard::Fracture => 46,
            Shard::Arcing => 47,
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
impl fmt::Display for Teleporter {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "{} TP", auto_display(self))
    }
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
    pub fn to_id(self) -> u16 {
        match self {
            Teleporter::Burrows => 0,
            Teleporter::Den => 1,
            Teleporter::EastLuma => 2,
            Teleporter::Wellspring => 3,
            Teleporter::Reach => 4,
            Teleporter::Hollow => 5,
            Teleporter::Depths => 6,
            Teleporter::WestWoods => 7,
            Teleporter::EastWoods => 8,
            Teleporter::WestWastes => 9,
            Teleporter::EastWastes => 10,
            Teleporter::OuterRuins => 11,
            Teleporter::Willow => 12,
            Teleporter::WestLuma => 13,
            Teleporter::InnerRuins => 14,
            Teleporter::Shriek => 15,
            Teleporter::Marsh => 16,
            Teleporter::Glades => 17,
        }
    }
}
#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum BonusItem {
    HealthRegen,
    EnergyRegen,
    ExtraDoubleJump,
    ExtraAirDash,
    Relic,
}
impl fmt::Display for BonusItem {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        match self {
            BonusItem::HealthRegen => write!(f, "Health Regeneration"),
            BonusItem::EnergyRegen => write!(f, "Energy Regeneration"),
            _ => write!(f, "{}", auto_display(self)),
        }
    }
}
impl BonusItem {
    pub fn from_id(id: u8) -> Option<BonusItem> {
        match id {
            20 => Some(BonusItem::Relic),
            30 => Some(BonusItem::HealthRegen),
            31 => Some(BonusItem::EnergyRegen),
            35 => Some(BonusItem::ExtraDoubleJump),
            36 => Some(BonusItem::ExtraAirDash),
            _ => None,
        }
    }
    pub fn to_id(self) -> u16 {
        match self {
            BonusItem::Relic => 20,
            BonusItem::HealthRegen => 30,
            BonusItem::EnergyRegen => 31,
            BonusItem::ExtraDoubleJump => 35,
            BonusItem::ExtraAirDash => 36,
        }
    }
}
#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum BonusUpgrade {
    RapidHammer,
    RapidSword,
    BlazeEfficiency,
    SpearEfficiency,
    ShurikenEfficiency,
    SentryEfficiency,
    BowEfficiency,
    RegenerationEfficiency,
    FlashEfficiency,
    GrenadeEfficiency,
    ExplodingSpike,
    ShockSmash,
    StaticStar,
    ChargeBlaze,
    RapidSentry,
}
impl fmt::Display for BonusUpgrade {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "{}", auto_display(self))
    }
}
impl BonusUpgrade {
    pub fn from_id(id: u8) -> Option<BonusUpgrade> {
        match id {
            0 => Some(BonusUpgrade::RapidHammer),
            1 => Some(BonusUpgrade::RapidSword),
            2 => Some(BonusUpgrade::BlazeEfficiency),
            3 => Some(BonusUpgrade::SpearEfficiency),
            4 => Some(BonusUpgrade::ShurikenEfficiency),
            5 => Some(BonusUpgrade::SentryEfficiency),
            6 => Some(BonusUpgrade::BowEfficiency),
            7 => Some(BonusUpgrade::RegenerationEfficiency),
            8 => Some(BonusUpgrade::FlashEfficiency),
            9 => Some(BonusUpgrade::GrenadeEfficiency),
            45 => Some(BonusUpgrade::ExplodingSpike),
            46 => Some(BonusUpgrade::ShockSmash),
            47 => Some(BonusUpgrade::StaticStar),
            48 => Some(BonusUpgrade::ChargeBlaze),
            49 => Some(BonusUpgrade::RapidSentry),
            _ => None,
        }
    }
    pub fn to_id(self) -> u16 {
        match self {
            BonusUpgrade::RapidHammer => 0,
            BonusUpgrade::RapidSword => 1,
            BonusUpgrade::BlazeEfficiency => 2,
            BonusUpgrade::SpearEfficiency => 3,
            BonusUpgrade::ShurikenEfficiency => 4,
            BonusUpgrade::SentryEfficiency => 5,
            BonusUpgrade::BowEfficiency => 6,
            BonusUpgrade::RegenerationEfficiency => 7,
            BonusUpgrade::FlashEfficiency => 8,
            BonusUpgrade::GrenadeEfficiency => 9,
            BonusUpgrade::ExplodingSpike => 45,
            BonusUpgrade::ShockSmash => 46,
            BonusUpgrade::StaticStar => 47,
            BonusUpgrade::ChargeBlaze => 48,
            BonusUpgrade::RapidSentry => 49,
        }
    }
}
#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum Zone {
    Marsh,
    Hollow,
    Glades,
    Wellspring,
    Woods,
    Reach,
    Depths,
    Pools,
    Wastes,
    Ruins,
    Willow,
    Burrows,
    Spawn,
    Void,
}
impl fmt::Display for Zone {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "{}", auto_display(self))
    }
}
impl Zone {
    pub fn from_id(id: u8) -> Option<Zone> {
        match id {
            0 => Some(Zone::Marsh),
            1 => Some(Zone::Hollow),
            2 => Some(Zone::Glades),
            3 => Some(Zone::Wellspring),
            4 => Some(Zone::Pools),
            5 => Some(Zone::Burrows),
            6 => Some(Zone::Reach),
            7 => Some(Zone::Woods),
            8 => Some(Zone::Depths),
            9 => Some(Zone::Wastes),
            10 => Some(Zone::Ruins),
            11 => Some(Zone::Willow),
            12 => Some(Zone::Void),
            _ => None,
        }
    }
    pub fn to_id(self) -> u16 {
        match self {
            Zone::Marsh => 0,
            Zone::Hollow => 1,
            Zone::Glades => 2,
            Zone::Wellspring => 3,
            Zone::Pools => 4,
            Zone::Burrows => 5,
            Zone::Reach => 6,
            Zone::Woods => 7,
            Zone::Depths => 8,
            Zone::Wastes => 9,
            Zone::Ruins => 10,
            Zone::Willow => 11,
            Zone::Spawn | Zone::Void => 12,
        }
    }
}
#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum ZoneHintType {
    Skills,
    Warps,
    All,
}
impl ZoneHintType {
    pub fn from_id(id: u8) -> Option<ZoneHintType> {
        match id {
            1 => Some(ZoneHintType::Skills),
            2 => Some(ZoneHintType::Warps),
            10 => Some(ZoneHintType::All),
            _ => None,
        }
    }
    pub fn to_id(self) -> u16 {
        match self {
            ZoneHintType::Skills => 1,
            ZoneHintType::Warps => 2,
            ZoneHintType::All => 10,
        }
    }
}
impl fmt::Display for ZoneHintType {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        match self {
            ZoneHintType::All => write!(f, ""),
            _ => write!(f, "{:?}", self),
        }
    }
}
impl Default for ZoneHintType {
    fn default() -> ZoneHintType {
        ZoneHintType::Skills
    }
}
#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub struct Hint {
    pub zone: Zone,
    pub hint_type: ZoneHintType,
}
impl fmt::Display for Hint {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        write!(f, "{:?} {} hint", self.zone, self.hint_type)
    }
}

#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum ToggleCommand {
    KwolokDoor,
    Rain,
    Howl,
}
impl fmt::Display for ToggleCommand {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        match self {
            ToggleCommand::KwolokDoor => write!(f, "0"),
            ToggleCommand::Rain => write!(f, "1"),
            ToggleCommand::Howl => write!(f, "2"),
        }
    }
}
impl ToggleCommand {
    pub fn from_id(id: u8) -> Option<ToggleCommand> {
        match id {
            0 => Some(ToggleCommand::KwolokDoor),
            1 => Some(ToggleCommand::Rain),
            2 => Some(ToggleCommand::Howl),
            _ => None,
        }
    }
    pub fn to_id(self) -> u16 {
        match self {
            ToggleCommand::KwolokDoor => 0,
            ToggleCommand::Rain => 1,
            ToggleCommand::Howl => 2,
        }
    }
}
#[derive(Debug, PartialEq, Eq, Hash, Clone)]
pub enum Command {
    Autosave,
    Resource { resource: Resource, amount: i16 },
    Checkpoint,
    Magic,
    StopEqual { uber_state: UberState },
    StopGreater { uber_state: UberState },
    StopLess { uber_state: UberState },
    Toggle { target: ToggleCommand, on: bool },
    Warp { x: i16, y: i16 },
    StartTimer { identifier: UberIdentifier },
    StopTimer { identifier: UberIdentifier },
    StateRedirect { intercept: i32, set: i32 },
    SetHealth { amount: i16 },
    SetEnergy { amount: i16 },
    SetSpiritLight { amount: i16 },
    Equip { slot: u8, ability: u16 },
    AhkSignal { signal: String },
    IfEqual { uber_state: UberState, item: Box<Item> },
    IfGreater { uber_state: UberState, item: Box<Item> },
    IfLess { uber_state: UberState, item: Box<Item> },
}
impl fmt::Display for Command {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        match self {
            Command::Autosave => write!(f, "0"),
            Command::Resource { resource, amount } => write!(f, "1|{}|{}", resource.to_id(), amount),
            Command::Checkpoint => write!(f, "2"),
            Command::Magic => write!(f, "3"),
            Command::StopEqual { uber_state } => write!(f, "4|{}|{}", uber_state.identifier, uber_state.value),
            Command::StopGreater { uber_state } => write!(f, "5|{}|{}", uber_state.identifier, uber_state.value),
            Command::StopLess { uber_state } => write!(f, "6|{}|{}", uber_state.identifier, uber_state.value),
            Command::Toggle { target, on } => write!(f, "7|{}|{}", target, u8::from(*on)),
            Command::Warp { x, y } => write!(f, "8|{}|{}", x, y),
            Command::StartTimer { identifier } => write!(f, "9|{}", identifier),
            Command::StopTimer { identifier } => write!(f, "10|{}", identifier),
            Command::StateRedirect { intercept, set } => write!(f, "11|{}|{}", intercept, set),
            Command::SetHealth { amount } => write!(f, "12|{}", amount),
            Command::SetEnergy { amount } => write!(f, "13|{}", amount),
            Command::SetSpiritLight { amount } => write!(f, "14|{}", amount),
            Command::Equip { slot, ability } => write!(f, "15|{}|{}", slot, ability),
            Command::AhkSignal { signal } => write!(f, "16|{}", signal),
            Command::IfEqual { uber_state, item } => write!(f, "17|{}|{}|{}", uber_state.identifier, uber_state.value, item.code()),
            Command::IfGreater { uber_state, item } => write!(f, "18|{}|{}|{}", uber_state.identifier, uber_state.value, item.code()),
            Command::IfLess { uber_state, item } => write!(f, "19|{}|{}|{}", uber_state.identifier, uber_state.value, item.code()),
        }
    }
}

#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum SysMessage {
    RelicList,
    MapRelicList(Zone),
    PickupCount,
    GoalProgress,
}
impl SysMessage {
    pub fn from_id(id: u8) -> Option<SysMessage> {
        match id {
            0 => Some(SysMessage::RelicList),
            1 => Some(SysMessage::MapRelicList(Zone::Void)),
            2 => Some(SysMessage::PickupCount),
            3 => Some(SysMessage::GoalProgress),
            _ => None,
        }
    }
    pub fn to_id(self) -> u8 {
        match self {
            SysMessage::RelicList => 0,
            SysMessage::MapRelicList(_) => 1,
            SysMessage::PickupCount => 2,
            SysMessage::GoalProgress => 3,
        }
    }
}
impl fmt::Display for SysMessage {
    fn fmt(&self, f: &mut fmt::Formatter) -> fmt::Result {
        match self {
            SysMessage::MapRelicList(zone) => write!(f, "{} {}", zone, auto_display(self)),
            _ => write!(f, "{}", auto_display(self)),
        }
    }
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
    pub fn health(self) -> f32 {
        match self {
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
    pub fn shielded(self) -> bool {
        matches!(self, Enemy::Hornbug | Enemy::ShieldSlug | Enemy::ShieldMiner | Enemy::ShieldCrystalMiner)
    }
    pub fn armored(self) -> bool {
        matches!(self, Enemy::Tentacle)
    }
    pub fn aerial(self) -> bool {  // whether we consider the enemy flying for movement restriction purposes
        matches!(self, Enemy::Bat | Enemy::Skeeto | Enemy::SmallSkeeto | Enemy::Bee | Enemy::Nest | Enemy::Tentacle)
    }
    pub fn flying(self) -> bool {  // whether the game considers the enemy flying for wingclip
        matches!(self, Enemy::Skeeto | Enemy::SmallSkeeto | Enemy::Bee)
    }
    pub fn ranged(self) -> bool {  // whether you need a ranged weapon
        matches!(self, Enemy::BombSlug | Enemy::CorruptSlug | Enemy::Balloon | Enemy::Bat)
    }
    pub fn dangerous(self) -> bool {
        matches!(self, Enemy::SneezeSlug | Enemy::Hornbug | Enemy::Crab | Enemy::SpinCrab | Enemy::Miner | Enemy::MaceMiner | Enemy::ShieldMiner | Enemy::CrystalMiner | Enemy::ShieldCrystalMiner)
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

#[derive(Debug, Default, Clone)]
pub struct Position {
    pub x: i16,
    pub y: i16,
}
impl fmt::Display for Position {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}, {}", self.x, self.y)
    }
}

fn in_folder<P>(file: &Path, folder: P) -> Result<Option<PathBuf>, String>
where P: AsRef<Path>
{
    let file_name = file.file_name().ok_or_else(|| format!("Invalid file path {}", file.display()))?;
    let file_location = file.parent().ok_or_else(|| format!("Invalid file path {}", file.display()))?;

    if let Some(file_folder) = file_location.file_name() {
        if folder.as_ref() == file_folder {
            return Ok(None);
        }
    }

    let mut in_folder = PathBuf::from(file_location);
    in_folder.push(folder);
    in_folder.push(file_name);

    Ok(Some(in_folder))
}

pub fn read_file<P>(file: &Path, default_folder: P) -> Result<String, String>
where P: AsRef<Path>
{
    in_folder(file, default_folder)?.map_or_else(
        || fs::read_to_string(file).map_err(|err| format!("Failed to read file {}: {}", file.display(), err)),
        |in_folder| fs::read_to_string(in_folder).or_else(|_| {
            fs::read_to_string(file).map_err(|err| format!("Failed to read file {}: {}", file.display(), err))
        })
    )
}

fn create_in_folder(file: &Path, contents: &str, create_new: bool) -> Result<PathBuf, io::Error> {
    let mut index = 0;
    loop {
        let mut filename = file.file_stem().unwrap().to_os_string();
        if index > 0 {
            filename.push(format!("_{}", index));
        }
        let mut path = file.with_file_name(filename);
        path.set_extension(file.extension().unwrap());

        match fs::OpenOptions::new()
            .write(true)
            .truncate(true)
            .create(true)
            .create_new(create_new)
            .open(&path) {
                Ok(mut file) => {
                    file.write_all(contents.as_bytes())?;
                    return Ok(path);
                },
                Err(err) if err.kind() == io::ErrorKind::AlreadyExists => index += 1,
                Err(err) if err.kind() == io::ErrorKind::NotFound => fs::create_dir_all(path.parent().unwrap())?,
                Err(err) => return Err(err),
            }
    }
}
pub fn create_file<P>(file: &Path, contents: &str, default_folder: P, create_new: bool) -> Result<PathBuf, String>
where P: AsRef<Path>
{
    in_folder(file, default_folder)?.map_or_else(
        || create_in_folder(file, contents, create_new).map_err(|err| format!("Failed to create {}: {}", file.display(), err)),
        |in_folder| create_in_folder(&in_folder, contents, create_new).or_else(|_| {
            create_in_folder(file, contents, create_new).map_err(|err| format!("Failed to create {}: {}", file.display(), err))
        })
    )
}
pub fn create_folder(file: &Path) -> Result<PathBuf, io::Error> {
    let mut index = 0;
    loop {
        let mut filename = file.file_stem().unwrap().to_os_string();
        if index > 0 {
            filename.push(format!("_{}", index));
        }
        let path = file.with_file_name(filename);

        match fs::create_dir(&path) {
            Ok(_) => return Ok(path),
            Err(err) if err.kind() == io::ErrorKind::AlreadyExists => index += 1,
            Err(err) if err.kind() == io::ErrorKind::NotFound => fs::create_dir_all(path.parent().unwrap())?,
            Err(err) => return Err(err),
        }
    }
}

pub fn add_trailing_spaces(string: &mut String, target_length: usize) {
    let mut length = string.len();
    while target_length > length {
        string.push(' ');
        length += 1;
    }
}
pub fn with_leading_spaces(string: &str, target_length: usize) -> String {
    let mut length = string.len();
    let mut out = String::with_capacity(length);
    while target_length > length {
        out.push(' ');
        length += 1;
    }
    out += string;
    out
}
