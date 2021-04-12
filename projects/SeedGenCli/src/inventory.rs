use std::fmt;

use rustc_hash::FxHashMap;

use crate::util::{Resource, Skill, Shard, Teleporter, BonusItem, BonusUpgrade, Hint, Pathset, Command};

#[allow(clippy::pub_enum_variant_names)]
#[derive(Debug, PartialEq, Eq, Hash, Clone)]
pub enum Item {
    SpiritLight(u16),
    Resource(Resource),
    Skill(Skill),
    Shard(Shard),
    Teleporter(Teleporter),
    Water,
    BonusItem(BonusItem),
    BonusUpgrade(BonusUpgrade),
    Hint(Hint),
    UberState(String),
    Command(Command),
    Custom(String),
}
impl fmt::Display for Item {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Item::SpiritLight(amount) => write!(f, "0|{}", amount),
            Item::Resource(resource) => write!(f, "1|{}", resource.to_id()),
            Item::Skill(skill) => write!(f, "2|{}", skill.to_id()),
            Item::Shard(shard) => write!(f, "3|{}", shard.to_id()),
            Item::Teleporter(teleporter) => write!(f, "5|{}", teleporter.to_id()),
            Item::Water => write!(f, "9|0"),
            Item::BonusItem(bonus) => write!(f, "10|{}", bonus.to_id()),
            Item::BonusUpgrade(bonus) => write!(f, "11|{}", bonus.to_id()),
            Item::Hint(hint) => write!(f, "12|{}", hint.to_id()),
            Item::UberState(command) => write!(f, "8|{}", command),
            Item::Command(command) => write!(f, "4|{}", command),
            Item::Custom(string) => write!(f, "{}", string),
        }
    }
}
impl Item {
    // TODO read from logic file instead
    pub fn is_progression(&self, pathsets: &[Pathset]) -> bool {
        match self {
            Item::Resource(resource) => match resource {
                Resource::ShardSlot => pathsets.contains(&Pathset::Unsafe),
                Resource::Health | Resource::Energy | Resource::Ore | Resource::Keystone => true,
            },
            Item::Skill(skill) => match skill {
                Skill::AncestralLight => pathsets.contains(&Pathset::Unsafe),
                Skill::Shuriken | Skill::Blaze | Skill::Sentry => pathsets.contains(&Pathset::Gorlek),
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
                Shard::Fracture => pathsets.contains(&Pathset::Unsafe),
                Shard::TripleJump |
                Shard::Resilience |
                Shard::Vitality |
                Shard::Energy => pathsets.contains(&Pathset::Gorlek),
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
            Item::BonusItem(_) | Item::BonusUpgrade(_) | Item::Hint(_) | Item::Command(_) | Item::Custom(_) => false,
        }
    }

    pub fn is_single_instance(&self) -> bool {
        !matches!(
            self, Item::SpiritLight(_) |
            Item::Resource(_) |
            Item::BonusItem(_) |
            Item::BonusUpgrade(_) |
            Item::Skill(Skill::AncestralLight)
        )
    }

    pub fn cost(&self) -> u16 {
        // TODO design
        #[allow(clippy::match_same_arms)]
        match self {
            Item::SpiritLight(amount) => *amount,
            Item::Resource(Resource::Health) => 20,
            Item::Resource(Resource::Keystone) => 200,
            Item::Skill(Skill::Launch) => 5000,
            Item::Skill(Skill::Regenerate) => 100,
            Item::Skill(_) => 500,
            Item::Teleporter(_) => 1000,
            Item::Water => 700,
            _ => 100,
        }
    }

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

    // TODO This seems unintuitive, that's what Display *should* do!
    pub fn name(&self) -> String {
        match self {
            Item::SpiritLight(1) => String::from("Spirit Light"),
            Item::SpiritLight(amount) => format!("{} Spirit Light", amount),
            Item::Resource(resource) => format!("{:?}", resource),
            Item::Skill(skill) => format!("{:?}", skill),
            Item::Shard(shard) => format!("{:?}", shard),
            Item::Teleporter(teleporter) => format!("{:?}", teleporter),
            Item::Water => String::from("Water"),
            Item::BonusItem(bonus_item) => format!("{:?}", bonus_item),
            Item::BonusUpgrade(bonus_upgrade) => format!("{:?}", bonus_upgrade),
            Item::Hint(hint) => format!("{:?}", hint),
            Item::UberState(command) => format!("8|{}", command),
            Item::Command(command) => format!("4|{}", command),
            Item::Custom(string) => string.clone(),
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
            eprintln!("Granted {} more than once, but that item can only be aquired once...", item);
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
        for item in self.inventory.keys() {
            if let Item::SpiritLight(amount) = item {
                count += (self.inventory[item] * amount + 49) / 50;  // this will usually demand more than necessary, but with the placeholder system that shouldn't be a problem
            } else {
                count += self.inventory[item];
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
        let mut display = self.inventory.iter().fold(String::new(), |acc, (item, amount)| {
            if amount == &1 {
                format!("{}{}, ", acc, item.name())
            } else {
                format!("{}{} {}, ", acc, amount, item.name())
            }
        });
        for _ in 0..2 { display.pop(); }
        write!(f, "{}", display)
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
