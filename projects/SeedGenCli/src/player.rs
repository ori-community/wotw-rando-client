use std::collections::{HashMap, HashSet};

use crate::util::{Resource, Skill, Shard, Teleporter, Bonus, Hint, Pathset, Orbs, damage, energy_cost};

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

#[derive(Debug, Default)]
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
        *self.inventory.get(&Item::Resource(Resource::Energy)).unwrap_or(&0) as f32 * 0.5
    }
    pub fn max_health(&self) -> u16 {
        *self.inventory.get(&Item::Resource(Resource::Health)).unwrap_or(&0) * 5
    }
    pub fn max_orbs(&self) -> Orbs {
        Orbs {
            energy: self.max_energy(),
            health: self.max_health(),
        }
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
        (health / (damage(skill, pathsets) * self.damage_mod())).ceil() * energy_cost(skill) * self.energy_mod()
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

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn inventory() {
        let mut player = Player { ..Default::default() };
        player.grant(Item::Relic, 2);
        player.grant(Item::Skill(Skill::Shuriken), 1);
        assert!(player.has(Item::Relic, 1));
        assert!(player.has(Item::Relic, 2));
        assert!(player.has(Item::Skill(Skill::Shuriken), 1));
        assert!(!player.has(Item::Skill(Skill::Bash), 0));
    }

    #[test]
    fn weapon_preference() {
        let mut player = Player { ..Default::default() };
        let moki = vec![Pathset::Moki];
        let gorlek = vec![Pathset::Moki, Pathset::Gorlek];
        assert_eq!(player.preferred_weapon(&moki), None);
        assert_eq!(player.preferred_ranged_weapon(&moki), None);
        player.grant(Item::Skill(Skill::Shuriken), 1);
        assert_eq!(player.preferred_weapon(&moki), Some(Skill::Shuriken));
        assert_eq!(player.preferred_ranged_weapon(&moki), None);
        assert_eq!(player.preferred_ranged_weapon(&gorlek), Some(Skill::Shuriken));
        player.grant(Item::Skill(Skill::Grenade), 1);
        player.grant(Item::Skill(Skill::Spear), 1);
        assert_eq!(player.preferred_weapon(&gorlek), Some(Skill::Shuriken));
        assert_eq!(player.preferred_ranged_weapon(&gorlek), Some(Skill::Shuriken));
        player.grant(Item::Skill(Skill::Sword), 1);
        assert_eq!(player.preferred_weapon(&moki), Some(Skill::Sword));
    }

    #[test]
    fn max_energy() {
        let mut player = Player { ..Default::default() };
        assert_eq!(player.max_energy(), 0.0);
        for _ in 0..10 { player.grant(Item::Resource(Resource::Energy), 1); }
        assert_eq!(player.max_energy(), 5.0);
    }

    #[test]
    fn destroy_cost() {
        let mut player = Player { ..Default::default() };
        let pathsets = vec![Pathset::Moki];
        assert_eq!(player.destroy_cost(10.0, &Skill::Bow, &pathsets), 0.75);
        assert_eq!(player.destroy_cost(10.0, &Skill::Spear, &pathsets), 2.0);
        assert_eq!(player.destroy_cost(0.0, &Skill::Spear, &pathsets), 0.0);
        player.grant(Item::Skill(Skill::AncestralLight), 2);
        assert_eq!(player.destroy_cost(10.0, &Skill::Bow, &pathsets), 0.5);
        assert_eq!(player.destroy_cost(1.0, &Skill::Spear, &pathsets), 2.0);
    }
}
