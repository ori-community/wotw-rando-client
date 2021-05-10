use std::fmt;

use rustc_hash::FxHashMap;

use crate::util::{Resource, Skill, Shard, Teleporter, BonusItem, BonusUpgrade, Hint, Pathsets, Pathset, Command};

#[allow(clippy::pub_enum_variant_names)]
#[derive(Debug, PartialEq, Eq, Hash, Clone)]
pub enum Item {
    SpiritLight(u16),
    RemoveSpiritLight(u16),
    Resource(Resource),
    Skill(Skill),
    RemoveSkill(Skill),
    Shard(Shard),
    RemoveShard(Shard),
    Teleporter(Teleporter),
    RemoveTeleporter(Teleporter),
    Water,
    RemoveWater,
    BonusItem(BonusItem),
    BonusUpgrade(BonusUpgrade),
    Hint(Hint),
    CheckableHint(u16, u16, Vec<Item>),
    UberState(String),
    Command(Command),
    Message(String),
}
impl fmt::Display for Item {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Item::SpiritLight(1) => write!(f, "Spirit Light"),
            Item::SpiritLight(amount) => write!(f, "{} Spirit Light", amount),
            Item::RemoveSpiritLight(amount) => write!(f, "Remove {} Spirit Light", amount),
            Item::Resource(resource) => write!(f, "{:?}", resource),
            Item::Skill(skill) => write!(f, "{:?}", skill),
            Item::RemoveSkill(skill) => write!(f, "Remove {:?}", skill),
            Item::Shard(shard) => write!(f, "{:?}", shard),
            Item::RemoveShard(shard) => write!(f, "Remove {:?}", shard),
            Item::Teleporter(teleporter) => write!(f, "{:?}TP", teleporter),
            Item::RemoveTeleporter(teleporter) => write!(f, "Remove {:?}TP", teleporter),
            Item::Water => write!(f, "Water"),
            Item::RemoveWater => write!(f, "Remove Water"),
            Item::BonusItem(bonus_item) => write!(f, "{:?}", bonus_item),
            Item::BonusUpgrade(bonus_upgrade) => write!(f, "{:?}", bonus_upgrade),
            Item::Hint(hint) => write!(f, "{}", hint),
            Item::CheckableHint(_, _, hint) => write!(f, "Checkable Hint for {:?}", hint),
            Item::UberState(command) => write!(f, "8|{}", command),
            Item::Command(command) => write!(f, "4|{}", command),
            Item::Message(message) => write!(f, "6|{}", message),
        }
    }
}
impl Item {
    // TODO read from logic file instead
    #[inline]
    pub fn is_progression(&self, pathsets: &Pathsets) -> bool {
        match self {
            Item::Resource(resource) => match resource {
                Resource::ShardSlot => pathsets.contains(Pathset::Unsafe),
                Resource::Health | Resource::Energy | Resource::Ore | Resource::Keystone => true,
            },
            Item::Skill(skill) => match skill {
                Skill::AncestralLight => pathsets.contains(Pathset::Unsafe),
                Skill::Shuriken | Skill::Blaze | Skill::Sentry => pathsets.contains(Pathset::Gorlek),
                Skill::WaterBreath | Skill::Seir | Skill::WallJump => false,
                Skill::Bash |
                Skill::DoubleJump |
                Skill::Launch |
                Skill::Glide |
                Skill::Grenade |
                Skill::Grapple |
                Skill::Flash |
                Skill::Spear |
                Skill::Regenerate |
                Skill::Bow |
                Skill::Hammer |
                Skill::Sword |
                Skill::Burrow |
                Skill::Dash |
                Skill::WaterDash |
                Skill::Flap => true,
            },
            Item::Shard(shard) => match shard {
                Shard::Overcharge |
                Shard::Wingclip |
                Shard::Magnet |
                Shard::Splinter |
                Shard::Reckless |
                Shard::LifePact |
                Shard::LastStand |
                Shard::UltraBash |
                Shard::UltraGrapple |
                Shard::Overflow |
                Shard::Thorn |
                Shard::Catalyst |
                Shard::Sticky |
                Shard::Finesse |
                Shard::SpiritSurge |
                Shard::Lifeforce |
                Shard::Deflector |
                Shard::Fracture => pathsets.contains(Pathset::Unsafe),
                Shard::TripleJump |
                Shard::Resilience |
                Shard::Vitality |
                Shard::Energy => pathsets.contains(Pathset::Gorlek),
                Shard::Bounty |
                Shard::Swap |
                Shard::Quickshot |
                Shard::SpiritLightHarvest |
                Shard::LifeHarvest |
                Shard::EnergyHarvest |
                Shard::Sense |
                Shard::Turmoil |
                Shard::Arcing => false,
            },
            Item::SpiritLight(_) | Item::Teleporter(_) | Item::Water | Item::UberState(_) => true,
            Item::BonusItem(_) | Item::BonusUpgrade(_) | Item::Hint(_) | Item::CheckableHint(_, _, _) | Item::Command(_) | Item::Message(_) |
            Item::RemoveSpiritLight(_) | Item::RemoveSkill(_) | Item::RemoveShard(_) | Item::RemoveTeleporter(_) | Item::RemoveWater => false,
        }
    }
    #[inline]
    pub fn is_multiworld_spread(&self) -> bool {
        !matches!(self, Item::SpiritLight(_))
    }

    #[inline]
    pub fn is_single_instance(&self) -> bool {
        !matches!(self,
            Item::SpiritLight(_) | Item::RemoveSpiritLight(_) |
            Item::Resource(_) |
            Item::Skill(Skill::AncestralLight) |
            Item::BonusItem(_) | Item::BonusUpgrade(_) |
            Item::UberState(_) | Item::Command(_) | Item::Message(_)
        )
    }
    #[inline]
    pub fn is_checkable(&self) -> bool {
        matches!(self,
            Item::Skill(_) |
            Item::Shard(_) |
            Item::Teleporter(_) |
            Item::Water
        )
    }

    #[inline]
    pub fn cost(&self) -> u16 {
        #[allow(clippy::match_same_arms)]
        match self {
            Item::SpiritLight(amount) => *amount,
            Item::Resource(Resource::Health) => 240,
            Item::Resource(Resource::Energy) => 320,
            Item::Resource(Resource::Ore) => 320,
            Item::Resource(Resource::Keystone) => 320,
            Item::Resource(Resource::ShardSlot) => 480,
            Item::Skill(Skill::Regenerate) | Item::Skill(Skill::WaterBreath) => 200,  // Quality-of-Life Skills
            Item::Skill(Skill::Sword) | Item::Skill(Skill::Hammer) => 600,  // Essential Weapons
            Item::Skill(Skill::WallJump) | Item::Skill(Skill::DoubleJump) | Item::Skill(Skill::Dash) => 1200,  // Essential Movement
            Item::Skill(Skill::Glide) | Item::Skill(Skill::Grapple) => 1400,  // Feel-Good Finds
            Item::Skill(Skill::Bow) | Item::Skill(Skill::Shuriken) => 1600,  // Secondary Weapons
            Item::Skill(Skill::Burrow) | Item::Skill(Skill::Bash) | Item::Skill(Skill::Flap) | Item::Skill(Skill::WaterDash) |
            Item::Skill(Skill::Flash) | Item::Skill(Skill::Seir) | Item::Water => 1800,  // Key Skills
            Item::Skill(Skill::Grenade) | Item::Skill(Skill::Blaze) | Item::Skill(Skill::Sentry) | Item::Skill(Skill::Spear) => 2800,  // Tedious Weapons
            Item::Skill(Skill::AncestralLight) => 3000,  // Unhinted Skill
            Item::Skill(Skill::Launch) => 30000,  // Absolutely Broken
            Item::Teleporter(Teleporter::Marsh) => 20000,
            Item::Teleporter(Teleporter::Wellspring) => 16000,
            Item::Teleporter(_) => 12000,
            _ => 400,
        }
    }

    #[inline]
    pub fn shop_price(&self) -> u16 {
        #[allow(clippy::match_same_arms)]
        match self {
            Item::Resource(Resource::Health) => 200,
            Item::Resource(Resource::Energy) => 150,
            Item::Resource(Resource::Ore) |
            Item::Resource(Resource::Keystone) => 100,
            Item::Resource(Resource::ShardSlot) => 400,
            Item::Skill(Skill::Blaze) => 420,
            Item::Skill(_) => 500,
            Item::Water => 400,
            Item::Teleporter(_) => 250,
            Item::Shard(_) |
            Item::BonusItem(_) => 300,
            Item::BonusUpgrade(BonusUpgrade::SentryEfficiency) |
            Item::BonusUpgrade(BonusUpgrade::RapidHammer) => 600,
            Item::BonusUpgrade(_) => 300,
            Item::Hint(_) => 200,
            _ => 1,
        }
    }
    #[inline]
    pub fn random_shop_price(&self) -> bool {
        #[allow(clippy::match_same_arms)]
        match self {
            Item::Resource(_) => true,
            Item::Skill(Skill::Blaze) => false,
            Item::Skill(_) |
            Item::Water |
            Item::Teleporter(_) |
            Item::Shard(_) |
            Item::BonusItem(_) |
            Item::Hint(_) => true,
            _ => false,
        }
    }

    pub fn code(&self) -> String {
        match self {
            Item::SpiritLight(amount) => format!("0|{}", amount),
            Item::RemoveSpiritLight(amount) => format!("0|-{}", amount),
            Item::Resource(resource) => format!("1|{}", resource.to_id()),
            Item::Skill(skill) => format!("2|{}", skill.to_id()),
            Item::RemoveSkill(skill) => format!("2|-{}", skill.to_id()),
            Item::Shard(shard) => format!("3|{}", shard.to_id()),
            Item::RemoveShard(shard) => format!("3|-{}", shard.to_id()),
            Item::Teleporter(teleporter) => format!("5|{}", teleporter.to_id()),
            Item::RemoveTeleporter(teleporter) => format!("5|-{}", teleporter.to_id()),
            Item::Water => String::from("9|0"),
            Item::RemoveWater => String::from("9|-0"),
            Item::BonusItem(bonus) => format!("10|{}", bonus.to_id()),
            Item::BonusUpgrade(bonus) => format!("11|{}", bonus.to_id()),
            Item::Hint(hint) => format!("12|{}|{}", hint.zone.to_id(), hint.hint_type.to_id()),
            Item::CheckableHint(base_price, price_modifier, hint) => {
                let hint = hint.iter().map(|item| str::replace(&item.code(), '-', "|")).collect::<Vec<_>>();
                format!("13|{}|{}|{}", base_price, price_modifier, hint.join(","))
            },
            Item::UberState(command) => format!("8|{}", command),
            Item::Command(command) => format!("4|{}", command),
            Item::Message(message) => format!("6|{}", message),
        }
    }
}

#[derive(Debug, Default, PartialEq, Clone)]
pub struct Inventory {
    pub inventory: FxHashMap<Item, u16>,
}
impl Inventory {
    pub fn grant(&mut self, mut item: Item, mut amount: u16) {
        let single_instance = item.is_single_instance();
        if single_instance && amount > 1 {
            log::warn!("Granted {} more than once, but that item can only be aquired once...", item);
        }
        if let Item::SpiritLight(stacked_amount) = item {
            amount *= stacked_amount;
            item = Item::SpiritLight(1);
        }
        let prior = self.inventory.entry(item).or_insert(0);
        if single_instance {
            *prior = amount;
        } else {
            *prior += amount;
        }
    }
    pub fn remove(&mut self, item: &Item, amount: u16) {
        let prior = self.inventory.entry(item.clone()).or_insert(0);
        if amount >= *prior {
            // remove zero and smaller entries to support randomly picking from the map's keys
            self.inventory.remove(item);
        } else {
            *prior -= amount;
        }
    }

    pub fn has(&self, item: &Item, amount: u16) -> bool {
        if let Some(owned) = self.inventory.get(item) {
            return *owned >= amount;
        }
        false
    }
    pub fn get(&self, item: &Item) -> u16 {
        *self.inventory.get(item).unwrap_or(&0)
    }

    pub fn item_count(&self) -> usize {
        let mut count = 0;
        for (item, amount) in &self.inventory {
            if let Item::SpiritLight(stacked_amount) = item {
                count += (amount * stacked_amount + 39) / 40;  // this will usually demand more than necessary, but with the placeholder system that shouldn't be a problem (and underestimating the needed slots can force a retry)
            } else {
                count += amount;
            }
        }

        count.into()
    }
    pub fn world_item_count(&self) -> usize {
        let mut count = 0;
        for (item, amount) in self.inventory.iter().filter(|&(item, _)| !item.is_multiworld_spread()) {
            if let Item::SpiritLight(stacked_amount) = item {
                count += (amount * stacked_amount + 39) / 40;  // this will usually demand more than necessary, but with the placeholder system that shouldn't be a problem (and underestimating the needed slots can force a retry)
            } else {
                count += amount;
            }
        }

        count.into()
    }

    pub fn cost(&self) -> f32 {
        let mut cost = 0;
        for item in self.inventory.keys() {
            cost += item.cost() * self.inventory[item];
        }

        cost.into()
    }

    pub fn contains(&self, other: &Inventory) -> bool {
        for item in other.inventory.keys() {
            if !self.has(item, other.inventory[item]) {
                return false;
            }
        }
        true
    }

    pub fn merge(&self, other: &Inventory) -> Inventory {
        let mut merged = self.clone();
        for item in other.inventory.keys() {
            merged.grant(item.clone(), other.inventory[item]);
        }
        merged
    }
}

impl fmt::Display for Inventory {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        let display = self.inventory.iter().map(|(item, amount)| {
            if amount == &1 {
                format!("{}", item)
            } else {
                format!("{} {}", amount, item)
            }
        }).collect::<Vec<_>>();
        write!(f, "{}", display.join(", "))
    }
}

impl From<Item> for Inventory {
    fn from(item: Item) -> Inventory {
        let mut inventory = Inventory::default();
        inventory.grant(item, 1);
        inventory
    }
}
impl From<(Item, u16)> for Inventory {
    fn from(item_amount: (Item, u16)) -> Inventory {
        let mut inventory = Inventory::default();
        let (item, amount) = item_amount;
        inventory.grant(item, amount);
        inventory
    }
}
impl From<Vec<Item>> for Inventory {
    fn from(items: Vec<Item>) -> Inventory {
        let mut inventory = Inventory::default();
        for item in items {
            inventory.grant(item, 1);
        }
        inventory
    }
}
impl From<Vec<(Item, u16)>> for Inventory {
    fn from(items: Vec<(Item, u16)>) -> Inventory {
        let mut inventory = Inventory::default();
        for (item, amount) in items {
            inventory.grant(item, amount);
        }
        inventory
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::util::{Zone, ZoneHintType};

    #[test]
    fn item_display() {
        assert_eq!(Item::SpiritLight(45).code(), "0|45");
        assert_eq!(Item::Resource(Resource::Keystone).code(), "1|3");
        assert_eq!(Item::Skill(Skill::Launch).code(), "2|8");
        assert_eq!(Item::Skill(Skill::AncestralLight).code(), "2|120");
        assert_eq!(Item::Shard(Shard::Magnet).code(), "3|8");
        assert_eq!(Item::Teleporter(Teleporter::Marsh).code(), "5|16");
        assert_eq!(Item::Water.code(), "9|0");
        assert_eq!(Item::BonusItem(BonusItem::Relic).code(), "10|20");
        assert_eq!(Item::BonusUpgrade(BonusUpgrade::ShurikenEfficiency).code(), "11|4");
        assert_eq!(Item::Hint(Hint { zone: Zone::Void, hint_type: ZoneHintType::Skills }).code(), "12|12|1");
        assert_eq!(Item::Message(String::from("8|0|9|7")).code(), "6|8|0|9|7");
    }
}
