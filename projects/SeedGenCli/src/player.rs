use rustc_hash::{FxHashMap, FxHashSet};

use crate::util::{Pathset, Resource, Skill, Shard, Teleporter, Bonus, Hint, Orbs, Settings, damage, energy_cost};

#[derive(Debug, PartialEq, Eq, Hash, Clone)]
pub enum Item {
    Resource(Resource),
    Skill(Skill),
    Shard(Shard),
    Teleporter(Teleporter),
    Bonus(Bonus),
    Hint(Hint),
    Custom(String),
}

#[derive(Debug, Default)]
pub struct Inventory {
    pub inventory: FxHashMap<Item, u16>,
}
impl Inventory {
    pub fn grant(&mut self, item: Item, amount: u16) {
        let prior = self.inventory.entry(item).or_insert(0);
        *prior += amount;
    }
    pub fn remove(&mut self, item: Item, amount: u16) {
        let prior = self.inventory.entry(item).or_insert(0);
        if amount > *prior {
            *prior = 0;
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

#[derive(Debug, Default)]
pub struct Player {
    pub inventory: Inventory,
    pub states: FxHashSet<usize>,
    pub gorlek_paths: bool,
    pub unsafe_paths: bool,
}
impl Player {
    pub fn init(&mut self, settings: &Settings) {
        self.inventory.grant(Item::Resource(Resource::Health), 6);
        self.inventory.grant(Item::Resource(Resource::Energy), 6);
        if settings.pathsets.contains(&Pathset::Gorlek) { self.gorlek_paths = true; }
        if settings.pathsets.contains(&Pathset::Unsafe) { self.unsafe_paths = true; }
    }

    pub fn max_energy(&self) -> f32 {
        let mut energy = f32::from(self.inventory.get(&Item::Resource(Resource::Energy))) * 0.5;
        if self.gorlek_paths && self.inventory.has(&Item::Shard(Shard::Energy), 1) { energy += 1.0; }
        energy
    }
    pub fn max_health(&self) -> f32 {
        let mut health = f32::from(self.inventory.get(&Item::Resource(Resource::Health)) * 5);
        if self.gorlek_paths && self.inventory.has(&Item::Shard(Shard::Vitality), 1) { health += 10.0; }
        health
    }
    pub fn max_orbs(&self) -> Orbs {
        Orbs {
            energy: self.max_energy(),
            health: self.max_health(),
        }
    }
    pub fn checkpoint_orbs(&self) -> Orbs {
        let mut max_health = self.max_health();
        let mut health_refill = 40_f32.max(((max_health / 5.0) / 0.6685 + 1.0).floor());
        if self.gorlek_paths && self.inventory.has(&Item::Shard(Shard::Vitality), 1) { max_health -= 10.0; }

        let mut max_energy = self.max_energy();
        let mut energy_refill = 10.0 * (max_energy / 50.0 + 1.0);
        if self.gorlek_paths && self.inventory.has(&Item::Shard(Shard::Energy), 1) { max_energy -= 1.0; }

        if self.unsafe_paths && self.inventory.has(&Item::Shard(Shard::Overflow), 1) {
            if health_refill > max_health {
                energy_refill += health_refill - max_health;
            } else if energy_refill > max_energy {
                health_refill += energy_refill - max_energy;
            }
        }

        Orbs {
            health: max_health.min(health_refill),
            energy: max_energy.min(energy_refill),
        }
    }
    pub fn health_orbs(&self, amount: f32) -> Orbs {
        let max_health = self.max_health();
        let mut moon_why = max_health;
        let why_moon = (moon_why + 15.0) % 60.0;
        if why_moon < 5.0 {
            moon_why += 5.0 - why_moon;
        }
        let health_refill = 10_f32.max((amount * (moon_why + 10.0) / 30.0).floor() * 10.0);
        let mut energy_refill = 0.0;

        if self.unsafe_paths && self.inventory.has(&Item::Shard(Shard::Overflow), 1) && health_refill > max_health {
            energy_refill += health_refill - max_health;
        }

        Orbs {
            health: max_health.min(health_refill),
            energy: self.max_energy().min(energy_refill),
        }
    }
    pub fn energy_orbs(&self, amount: f32) -> Orbs {
        let max_energy = self.max_energy();
        let mut health_refill = 0.0;

        if self.unsafe_paths && self.inventory.has(&Item::Shard(Shard::Overflow), 1) && amount > max_energy {
            health_refill += amount - max_energy;
        }

        Orbs {
            health: self.max_health().min(health_refill),
            energy: max_energy.min(amount),
        }
    }

    pub fn damage_mod(&self, flying_target: bool) -> f32 {
        let is_unsafe = self.unsafe_paths;

        let mut damage_mod = 1.0;
        damage_mod += 0.25 * f32::from(self.inventory.get(&Item::Skill(Skill::AncestralLight)));
        let mut slots = self.inventory.get(&Item::Resource(Resource::ShardSlot));
        if flying_target && slots > 0 && is_unsafe && self.inventory.has(&Item::Shard(Shard::Wingclip), 1) { damage_mod += 1.0; slots -= 1; }
        if slots > 0 && is_unsafe && self.inventory.has(&Item::Shard(Shard::SpiritSurge), 1) { damage_mod += f32::from(self.inventory.get(&Item::Resource(Resource::SpiritLight)) / 10000); slots -= 1; }
        if slots > 0 && is_unsafe && self.inventory.has(&Item::Shard(Shard::LastStand), 1) { damage_mod += 0.2; slots -= 1; }
        if slots > 0 && is_unsafe && self.inventory.has(&Item::Shard(Shard::Reckless), 1) { damage_mod += 0.15; slots -= 1; }
        if slots > 0 && is_unsafe && self.inventory.has(&Item::Shard(Shard::Lifeforce), 1) { damage_mod += 0.1; slots -= 1; }
        if slots > 0 && is_unsafe && self.inventory.has(&Item::Shard(Shard::Finesse), 1) { damage_mod += 0.05; }
        damage_mod
    }
    pub fn bow_damage_mod(&self) -> f32 {
        if self.unsafe_paths && self.inventory.has(&Item::Shard(Shard::Splinter), 1) { 1.5 } else { 1.0 }
    }
    pub fn defense_mod(&self) -> f32 {
        if self.gorlek_paths && self.inventory.has(&Item::Shard(Shard::Resilience), 1) { 0.9 } else { 1.0 }
    }
    pub fn energy_mod(&self) -> f32 {
        let mut energy_mod = 1.0;
        if !self.unsafe_paths { energy_mod *= 2.0; }
        else if self.inventory.has(&Item::Shard(Shard::Overcharge), 1) { energy_mod *= 0.5; }
        energy_mod
    }

    pub fn use_cost(&self, skill: Skill) -> f32 {
        energy_cost(skill) * self.energy_mod()
    }
    pub fn destroy_cost(&self, health: f32, skill: Skill, flying_target: bool) -> f32 {
        let mut damage = damage(skill, self.unsafe_paths) * self.damage_mod(flying_target);
        if let Skill::Bow = skill { damage *= self.bow_damage_mod(); }
        (health / damage).ceil() * self.use_cost(skill)
    }

    pub fn preferred_weapon(&self, wall: bool) -> Option<Skill> {
        if self.inventory.has(&Item::Skill(Skill::Sword), 1) { Some(Skill::Sword) }
        else if self.inventory.has(&Item::Skill(Skill::Hammer), 1) { Some(Skill::Hammer) }
        else if self.inventory.has(&Item::Skill(Skill::Bow), 1) { Some(Skill::Bow) }
        else if self.unsafe_paths && self.inventory.has(&Item::Skill(Skill::Grenade), 1) { Some(Skill::Grenade) }
        else if self.inventory.has(&Item::Skill(Skill::Shuriken), 1) { Some(Skill::Shuriken) }
        else if self.unsafe_paths && !wall && self.inventory.has(&Item::Skill(Skill::Flash), 1) { Some(Skill::Flash) }
        else if self.inventory.has(&Item::Skill(Skill::Blaze), 1) { Some(Skill::Blaze) }
        else if self.unsafe_paths && self.inventory.has(&Item::Skill(Skill::Sentry), 1) { Some(Skill::Sentry) }
        else if !self.unsafe_paths && self.inventory.has(&Item::Skill(Skill::Grenade), 1) { Some(Skill::Grenade) }
        else if self.inventory.has(&Item::Skill(Skill::Spear), 1) { Some(Skill::Spear) }
        else { None }
    }
    pub fn preferred_ranged_weapon(&self) -> Option<Skill> {
        if self.inventory.has(&Item::Skill(Skill::Bow), 1) { Some(Skill::Bow) }
        else if self.gorlek_paths && self.inventory.has(&Item::Skill(Skill::Shuriken), 1) { Some(Skill::Shuriken) }
        else if self.gorlek_paths && self.inventory.has(&Item::Skill(Skill::Grenade), 1) { Some(Skill::Grenade) }
        else if self.inventory.has(&Item::Skill(Skill::Spear), 1) { Some(Skill::Spear) }
        else { None }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn inventory() {
        let mut player = Player::default();
        player.inventory.grant(Item::Bonus(Bonus::Relic), 2);
        player.inventory.grant(Item::Skill(Skill::Shuriken), 1);
        assert!(player.inventory.has(&Item::Bonus(Bonus::Relic), 1));
        assert!(player.inventory.has(&Item::Bonus(Bonus::Relic), 2));
        assert!(player.inventory.has(&Item::Skill(Skill::Shuriken), 1));
        assert!(!player.inventory.has(&Item::Skill(Skill::Bash), 0));
    }

    #[test]
    fn weapon_preference() {
        let mut player = Player::default();
        assert_eq!(player.preferred_weapon(true), None);
        assert_eq!(player.preferred_ranged_weapon(), None);
        player.inventory.grant(Item::Skill(Skill::Shuriken), 1);
        assert_eq!(player.preferred_weapon(true), Some(Skill::Shuriken));
        assert_eq!(player.preferred_ranged_weapon(), None);
        player = Player {
            gorlek_paths: true,
            ..player
        };
        assert_eq!(player.preferred_ranged_weapon(), Some(Skill::Shuriken));
        player.inventory.grant(Item::Skill(Skill::Grenade), 1);
        player.inventory.grant(Item::Skill(Skill::Spear), 1);
        assert_eq!(player.preferred_weapon(true), Some(Skill::Shuriken));
        assert_eq!(player.preferred_ranged_weapon(), Some(Skill::Shuriken));
        player.inventory.grant(Item::Skill(Skill::Sword), 1);
        assert_eq!(player.preferred_weapon(true), Some(Skill::Sword));
    }

    #[test]
    fn max_energy() {
        let mut player = Player::default();
        assert_eq!(player.max_energy(), 0.0);
        for _ in 0..10 { player.inventory.grant(Item::Resource(Resource::Energy), 1); }
        player.inventory.grant(Item::Shard(Shard::Energy), 1);
        assert_eq!(player.max_energy(), 5.0);
        player = Player {
            gorlek_paths: true,
            ..player
        };
        assert_eq!(player.max_energy(), 6.0);
    }

    #[test]
    fn destroy_cost() {
        let mut player = Player::default();
        assert_eq!(player.destroy_cost(10.0, Skill::Bow, false), 1.5);
        assert_eq!(player.destroy_cost(10.0, Skill::Spear, true), 4.0);
        assert_eq!(player.destroy_cost(0.0, Skill::Spear, false), 0.0);
        player.inventory.grant(Item::Skill(Skill::AncestralLight), 2);
        player = Player {
            unsafe_paths: true,
            ..player
        };
        player.inventory.grant(Item::Shard(Shard::Wingclip), 1);
        player.inventory.grant(Item::Resource(Resource::ShardSlot), 1);
        assert_eq!(player.destroy_cost(10.0, Skill::Bow, true), 0.25);
        assert_eq!(player.destroy_cost(1.0, Skill::Spear, false), 2.0);
    }

    #[test]
    fn refill_orbs() {
        let mut player = Player::default();
        let orbs = Orbs::default();
        assert_eq!(player.checkpoint_orbs(), Orbs::default());
        player.inventory.grant(Item::Resource(Resource::Energy), 6);
        player.inventory.grant(Item::Resource(Resource::Health), 6);
        assert_eq!(player.checkpoint_orbs(), Orbs { energy: 3.0, health: 30.0});
        assert_eq!(player.health_orbs(1.0), Orbs { health: 10.0, ..orbs });
        player.inventory.grant(Item::Resource(Resource::Health), 2);
        assert_eq!(player.health_orbs(1.0), Orbs { health: 10.0, ..orbs });
        player.inventory.grant(Item::Resource(Resource::Health), 1);
        assert_eq!(player.health_orbs(1.0), Orbs { health: 20.0, ..orbs });
        player.inventory.grant(Item::Resource(Resource::Health), 11);
        assert_eq!(player.health_orbs(1.0), Orbs { health: 30.0, ..orbs });
        player.inventory.grant(Item::Resource(Resource::Health), 1);
        assert_eq!(player.health_orbs(1.0), Orbs { health: 40.0, ..orbs });
        player.inventory.grant(Item::Resource(Resource::Health), 6);
        assert_eq!(player.health_orbs(1.0), Orbs { health: 40.0, ..orbs });
        player.inventory.grant(Item::Resource(Resource::Health), 1);
        assert_eq!(player.health_orbs(1.0), Orbs { health: 50.0, ..orbs });

        player = Player {
            gorlek_paths: true,
            ..Player::default()
        };
        let orbs = Orbs::default();
        player.inventory.grant(Item::Shard(Shard::Energy), 1);
        player.inventory.grant(Item::Shard(Shard::Vitality), 1);
        assert_eq!(player.checkpoint_orbs(), Orbs::default());
        player.inventory.grant(Item::Resource(Resource::Health), 7);
        assert_eq!(player.health_orbs(1.0), Orbs { health: 20.0, ..orbs });
        assert_eq!(player.checkpoint_orbs(), Orbs { health: 35.0, ..orbs });
        player.inventory.grant(Item::Resource(Resource::Health), 21);
        assert_eq!(player.checkpoint_orbs(), Orbs { health: 45.0, ..orbs });
    }
}
