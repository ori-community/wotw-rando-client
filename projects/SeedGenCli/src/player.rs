use std::collections::{HashMap, HashSet};

use crate::util::{Resource, Skill, Shard, Teleporter, Bonus, Hint, Pathset, damage, energy_cost};

#[derive(Debug, PartialEq, Eq, Hash)]
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

#[derive(Debug)]
pub struct Player {
    pub inventory: HashMap<Item, u16>,
    pub states: HashSet<String>,
}
impl Player {
    pub fn grant(&mut self, item: Item, amount: u16) {
        let prior = self.inventory.entry(item).or_insert(0);
        *prior += amount;
    }
    pub fn has(&self, item: Item, amount: u16) -> bool {
        if let Some(owned) = self.inventory.get(&item) {
            return *owned >= amount;
        }
        false
    }

    pub fn max_energy(&self) -> f32 {
        *self.inventory.get(&Item::Resource(Resource::Energy)).unwrap_or(&0) as f32 / 0.5
    }

    pub fn damage_mod(&self) -> f32 {
        let mut damage_mod = 1.0;
        if let Some(amount) = self.inventory.get(&Item::Skill(Skill::AncestralLight)) {
            damage_mod += 0.25 * (*amount) as f32;
        }
        damage_mod
    }
    pub fn energy_mod(&self) -> f32 {
        1.0
    }
    pub fn destroy_cost(&self, health: f32, skill: &Skill, pathsets: &[Pathset]) -> f32 {
        (health / damage(skill, pathsets) * self.damage_mod()).ceil() * energy_cost(skill) * self.energy_mod()
    }
    pub fn preferred_weapon(&self, pathsets: &[Pathset]) -> Option<Skill> {
        if self.inventory.get(&Item::Skill(Skill::Sword)).is_some() { Some(Skill::Sword) }
        else if self.inventory.get(&Item::Skill(Skill::Hammer)).is_some() { Some(Skill::Hammer) }
        else if self.inventory.get(&Item::Skill(Skill::Bow)).is_some() { Some(Skill::Bow) }
        else if self.inventory.get(&Item::Skill(Skill::Shuriken)).is_some() { Some(Skill::Shuriken) }
        else if self.inventory.get(&Item::Skill(Skill::Grenade)).is_some() { Some(Skill::Grenade) }
        else if self.inventory.get(&Item::Skill(Skill::Blaze)).is_some() { Some(Skill::Blaze) }
        else if self.inventory.get(&Item::Skill(Skill::Spear)).is_some() { Some(Skill::Spear) }
        else if pathsets.contains(&Pathset::Unsafe) && self.inventory.get(&Item::Skill(Skill::Sentry)).is_some() { Some(Skill::Sentry) }
        else { None }
    }
    pub fn preferred_ranged_weapon(&self, pathsets: &[Pathset]) -> Option<Skill> {
        if self.inventory.get(&Item::Skill(Skill::Bow)).is_some() { Some(Skill::Bow) }
        else if pathsets.contains(&Pathset::Gorlek) && self.inventory.get(&Item::Skill(Skill::Shuriken)).is_some() { Some(Skill::Shuriken) }
        else if pathsets.contains(&Pathset::Gorlek) && self.inventory.get(&Item::Skill(Skill::Grenade)).is_some() { Some(Skill::Grenade) }
        else if self.inventory.get(&Item::Skill(Skill::Spear)).is_some() { Some(Skill::Spear) }
        else { None }
    }
}
