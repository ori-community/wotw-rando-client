use std::fmt;

use rustc_hash::FxHashMap;

use crate::util::{Resource, Skill, Shard, Teleporter, BonusItem, BonusUpgrade, Hint};

#[derive(Debug, PartialEq, Eq, Hash, Clone)]
pub enum Item {
    Resource(Resource),
    Skill(Skill),
    Shard(Shard),
    Teleporter(Teleporter),
    Water,
    BonusItem(BonusItem),
    BonusUpgrade(BonusUpgrade),
    Hint(Hint),
    UberState(String),
    Custom(String),
}
impl fmt::Display for Item {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Item::Resource(Resource::SpiritLight) => {
                eprintln!("Invoked display on Spirit Light. This doesn't make sense and will default to one Spirit Light.");
                write!(f, "0|1")
            },
            Item::Resource(resource) => write!(f, "1|{}", resource.to_id()),
            Item::Skill(skill) => write!(f, "2|{}", skill.to_id()),
            Item::Shard(shard) => write!(f, "3|{}", shard.to_id()),
            Item::Teleporter(teleporter) => write!(f, "5|{}", teleporter.to_id()),
            Item::Water => write!(f, "9|0"),
            Item::BonusItem(bonus) => write!(f, "10|{}", bonus.to_id()),
            Item::BonusUpgrade(bonus) => write!(f, "11|{}", bonus.to_id()),
            Item::Hint(hint) => write!(f, "12|{}", hint.to_id()),
            Item::UberState(command) => write!(f, "8|{}", command),
            Item::Custom(string) => write!(f, "{}", string),
        }
    }
}

#[derive(Debug, Default, PartialEq, Clone)]
pub struct Inventory {
    pub inventory: FxHashMap<Item, u16>,
}
impl Inventory {
    pub fn grant(&mut self, item: Item, amount: u16) {
        let prior = self.inventory.entry(item).or_insert(0);
        *prior += amount;
    }
    pub fn remove(&mut self, item: Item, amount: u16) {
        let prior = self.inventory.entry(item.clone()).or_insert(0);
        if amount >= *prior {
            self.inventory.remove(&item);
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
}
