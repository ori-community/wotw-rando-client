use std::collections::HashMap;

use crate::util::{Resource, Skill, Shard, Teleporter, Bonus, Hint};

#[derive(PartialEq, Eq, Hash)]
pub enum Item {
    Resource(Resource),
    Skill(Skill),
    Shard(Shard),
    Teleporter(Teleporter),
    Bonus(Bonus),
    Hint(Hint),
    Relic,
    Custom(String),
}

pub struct Player {
    inventory: HashMap<Item, u16>,
}
impl Player {
    pub fn grant(&mut self, item: Item, amount: u16) {
        let prior = self.inventory.entry(item).or_insert(0);
        *prior += amount;
    }
    pub fn has(&self, item: &Item, amount: u16) -> bool {
        if let Some(owned) = self.inventory.get(item) {
            return *owned >= amount;
        }
        false
    }
}
