use std::convert::TryFrom;

use smallvec::{SmallVec, smallvec};

use crate::inventory::{Inventory, Item};
use crate::util::{
    Pathset, Pathsets, Resource, Skill, Shard,
    orbs::{self, Orbs},
    settings::Settings
};

#[derive(Debug, Default, Clone)]
pub struct Player {
    pub inventory: Inventory,
    pub pathsets: Pathsets,
    pub hard: bool,
}
impl Player {
    pub fn spawn(&mut self, settings: &Settings) {
        self.inventory.grant(Item::Resource(Resource::Health), 6);
        self.inventory.grant(Item::Resource(Resource::Energy), 6);
        self.apply_settings(settings);
    }

    pub fn apply_settings(&mut self, settings: &Settings) {
        self.pathsets = settings.pathsets.clone();
        self.hard = settings.hard;
    }

    pub fn max_energy(&self) -> f32 {
        let mut energy = f32::from(self.inventory.get(&Item::Resource(Resource::Energy))) * 0.5;
        if self.pathsets.contains(&Pathset::Gorlek) && self.inventory.has(&Item::Shard(Shard::Energy), 1) { energy += 1.0; }
        energy
    }
    pub fn max_health(&self) -> f32 {
        let mut health = f32::from(self.inventory.get(&Item::Resource(Resource::Health)) * 5);
        if self.pathsets.contains(&Pathset::Gorlek) && self.inventory.has(&Item::Shard(Shard::Vitality), 1) { health += 10.0; }
        health
    }
    pub fn max_orbs(&self) -> Orbs {
        Orbs {
            energy: self.max_energy(),
            health: self.max_health(),
        }
    }
    fn cap_orbs(&self, mut orbs: SmallVec<[Orbs; 3]>, checkpoint: bool) -> SmallVec<[Orbs; 3]>{
        let max_health = if checkpoint {
            f32::from(self.inventory.get(&Item::Resource(Resource::Health)) * 5)  // checkpoint don't fill orbs given by the Vitality shard (but they do energy from the energy shard...)
        } else {
            self.max_health()
        };
        let max_energy = self.max_energy();

        if self.pathsets.contains(&Pathset::Unsafe) && self.inventory.has(&Item::Shard(Shard::Overflow), 1) {
            for orbs in &mut orbs {
                if orbs.health > max_health {
                    orbs.energy += orbs.health - max_health;
                } else if orbs.energy > max_energy {
                    orbs.health += orbs.energy - max_energy;
                }
            }
        }

        for orbs in &mut orbs {
            if orbs.health > max_health {
                orbs.health = max_health;
            }
            if orbs.energy > max_energy {
                orbs.energy = max_energy;
            }
        }

        orbs
    }
    #[inline]
    pub fn checkpoint_orbs(&self, prior: &[Orbs]) -> SmallVec<[Orbs; 3]> {
        let max_health = self.max_health();
        let health_refill = 40_f32.max(((max_health / 5.0) / 0.6685 + 1.0).floor());

        let max_energy = self.max_energy();
        let energy_refill = 10.0 * (max_energy / 50.0 + 1.0);

        let orbs = Orbs {
            health: health_refill,
            energy: energy_refill,
        };
        let orbs = orbs::either_single(prior, orbs);

        self.cap_orbs(orbs, true)
    }
    #[inline]
    pub fn health_orbs(&self, prior: &[Orbs], amount: f32) -> SmallVec<[Orbs; 3]> {
        let max_health = self.max_health();

        let mut moon_why = max_health;
        let why_moon = (moon_why + 15.0) % 60.0;
        if why_moon < 5.0 {
            moon_why += 5.0 - why_moon;
        }
        let health_refill = 10_f32.max((amount * (moon_why + 10.0) / 30.0).floor() * 10.0);

        let orbs = Orbs {
            health: health_refill,
            ..Orbs::default()
        };
        let orbs = orbs::both_single(prior, orbs);

        self.cap_orbs(orbs, false)
    }
    #[inline]
    pub fn energy_orbs(&self, prior: &[Orbs], amount: f32) -> SmallVec<[Orbs; 3]> {
        let orbs = Orbs {
            energy: amount,
            ..Orbs::default()
        };
        let orbs = orbs::both_single(prior, orbs);

        self.cap_orbs(orbs, false)
    }

    pub fn damage_mod(&self, flying_target: bool, bow: bool) -> f32 {
        let is_unsafe = self.pathsets.contains(&Pathset::Unsafe);
        let mut damage_mod = 1.0;

        damage_mod += 0.25 * f32::from(self.inventory.get(&Item::Skill(Skill::AncestralLight)));

        let mut slots = self.inventory.get(&Item::Resource(Resource::ShardSlot));
        let mut splinter = false;

        if flying_target && slots > 0 && is_unsafe && self.inventory.has(&Item::Shard(Shard::Wingclip), 1) { damage_mod += 1.0; slots -= 1; }
        if slots > 0 && is_unsafe && bow && self.inventory.has(&Item::Shard(Shard::Splinter), 1) { splinter = true; slots -= 1; }
        if slots > 0 && is_unsafe && self.inventory.has(&Item::Shard(Shard::SpiritSurge), 1) { damage_mod += f32::from(self.inventory.get(&Item::SpiritLight(1)) / 10000); slots -= 1; }
        if slots > 0 && is_unsafe && self.inventory.has(&Item::Shard(Shard::LastStand), 1) { damage_mod += 0.2; slots -= 1; }
        if slots > 0 && is_unsafe && self.inventory.has(&Item::Shard(Shard::Reckless), 1) { damage_mod += 0.15; slots -= 1; }
        if slots > 0 && is_unsafe && self.inventory.has(&Item::Shard(Shard::Lifeforce), 1) { damage_mod += 0.1; slots -= 1; }
        if slots > 0 && is_unsafe && self.inventory.has(&Item::Shard(Shard::Finesse), 1) { damage_mod += 0.05; }
        if splinter { damage_mod *= 1.5; }  // The splinter debuff stacks multiplicatively even though other buffs stack additively
        damage_mod
    }
    pub fn defense_mod(&self) -> f32 {
        let mut defense_mod = 1.0;
        if self.pathsets.contains(&Pathset::Gorlek) && self.inventory.has(&Item::Shard(Shard::Resilience), 1) { defense_mod = 0.9; }
        if self.hard { defense_mod *= 2.0; }
        defense_mod
    }
    pub fn energy_mod(&self) -> f32 {
        let mut energy_mod = 1.0;
        if !self.pathsets.contains(&Pathset::Unsafe) { energy_mod *= 2.0; }
        else if self.inventory.has(&Item::Shard(Shard::Overcharge), 1) { energy_mod *= 0.5; }
        energy_mod
    }

    pub fn use_cost(&self, skill: Skill) -> f32 {
        skill.energy_cost() * self.energy_mod()
    }
    pub fn destroy_cost(&self, health: f32, skill: Skill, flying_target: bool) -> f32 {
        let damage = skill.damage(self.pathsets.contains(&Pathset::Unsafe)) * self.damage_mod(flying_target, matches!(skill, Skill::Bow)) + skill.burn_damage();  // Burn damage is unaffected by damage buffs
        (health / damage).ceil() * self.use_cost(skill)
    }

    fn weapons_by_dpe(&self, wall: bool) -> SmallVec<[Skill; 8]> {
        let mut weapons: SmallVec<[_; 8]>= smallvec![
            Skill::Sword,
            Skill::Hammer,
            Skill::Bow,
            Skill::Grenade,
            Skill::Shuriken,
            Skill::Blaze,
            Skill::Spear,
        ];
        if !wall { weapons.push(Skill::Flash); }
        if self.pathsets.contains(&Pathset::Unsafe) { weapons.push(Skill::Sentry); }

        weapons.sort_unstable_by_key(|&weapon| (weapon.damage_per_energy(self.pathsets.contains(&Pathset::Unsafe)) * 10.0) as u8);
        weapons
    }
    fn ranged_weapons_by_dpe(&self) -> SmallVec<[Skill; 2]> {
        let mut weapons: SmallVec<[_; 2]>= smallvec![
            Skill::Bow,
            Skill::Spear,
        ];
        if self.pathsets.contains(&Pathset::Gorlek) {
            weapons.push(Skill::Grenade);
            weapons.push(Skill::Shuriken);
        }

        weapons.sort_unstable_by_key(|&weapon| (weapon.damage_per_energy(self.pathsets.contains(&Pathset::Unsafe)) * 10.0) as u8);
        weapons
    }
    fn shield_weapons_by_dpe(&self) -> SmallVec<[Skill; 4]> {
        let mut weapons: SmallVec<[_; 4]>= smallvec![
            Skill::Hammer,
            Skill::Launch,
            Skill::Grenade,
            Skill::Spear,
        ];

        weapons.sort_unstable_by_key(|&weapon| (weapon.damage_per_energy(self.pathsets.contains(&Pathset::Unsafe)) * 10.0) as u8);
        weapons
    }

    fn preferred_among_weapons<W>(&self, weapons: W) -> Option<Skill>
    where W: IntoIterator<Item=Skill>,
    {
        for weapon in weapons {
            if self.inventory.has(&Item::Skill(weapon), 1) {
                return Some(weapon);
            }
        }
        None
    }
    pub fn preferred_weapon(&self, wall: bool) -> Option<Skill> {
        self.preferred_among_weapons(self.weapons_by_dpe(wall))
    }
    pub fn preferred_ranged_weapon(&self) -> Option<Skill> {
        self.preferred_among_weapons(self.ranged_weapons_by_dpe())
    }
    pub fn preferred_shield_weapon(&self) -> Option<Skill> {
        self.preferred_among_weapons(self.shield_weapons_by_dpe())
    }

    fn progression_among_weapons<W>(&self, weapons: W) -> SmallVec<[Skill; 8]>
    where W: IntoIterator<Item=Skill>,
    {
        let mut progression_weapons = SmallVec::new();

        for weapon in weapons {
            progression_weapons.push(weapon);
            if self.inventory.has(&Item::Skill(weapon), 1) {
                break;
            }
        }

        progression_weapons
    }
    pub fn progression_weapons(&self, wall: bool) -> SmallVec<[Skill; 8]> {
        self.progression_among_weapons(self.weapons_by_dpe(wall))
    }
    pub fn ranged_progression_weapons(&self) -> SmallVec<[Skill; 8]> {
        self.progression_among_weapons(self.ranged_weapons_by_dpe())
    }
    pub fn shield_progression_weapons(&self) -> SmallVec<[Skill; 8]> {
        self.progression_among_weapons(self.shield_weapons_by_dpe())
    }

    pub fn missing_items(&self, needed: &mut Inventory) {
        // TODO needed is probably smaller, iterate through that?
        for (item, amount) in &self.inventory.inventory {
            needed.remove(item, *amount);
        }
    }
    pub fn missing_for_orbs(&self, needed: &Inventory, orb_cost: Orbs, current_orbs: Orbs) -> Inventory {
        let mut missing = needed.clone();

        let orbs = current_orbs + orb_cost;
        if orbs.health < 0.0 {
            #[allow(clippy::cast_possible_truncation)]
            let health_fragments = u16::try_from((-orbs.health / 5.0).ceil() as i32).unwrap();
            missing.grant(Item::Resource(Resource::Health), health_fragments);
        }
        if orbs.energy < 0.0 {
            #[allow(clippy::cast_possible_truncation)]
            let energy_fragments = u16::try_from((-orbs.energy * 2.0).ceil() as i32).unwrap();
            missing.grant(Item::Resource(Resource::Energy), energy_fragments);
        }

        missing
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    use crate::util::*;

    #[test]
    fn inventory() {
        let mut player = Player::default();
        player.inventory.grant(Item::BonusItem(BonusItem::Relic), 2);
        player.inventory.grant(Item::Skill(Skill::Shuriken), 1);
        assert!(player.inventory.has(&Item::BonusItem(BonusItem::Relic), 1));
        assert!(player.inventory.has(&Item::BonusItem(BonusItem::Relic), 2));
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
        player.pathsets.add(Pathset::Gorlek);
        assert_eq!(player.preferred_ranged_weapon(), Some(Skill::Shuriken));
        player.inventory.grant(Item::Skill(Skill::Spear), 1);
        assert_eq!(player.preferred_weapon(true), Some(Skill::Shuriken));
        assert_eq!(player.preferred_ranged_weapon(), Some(Skill::Shuriken));
        player.inventory.grant(Item::Skill(Skill::Sword), 1);
        assert_eq!(player.preferred_weapon(true), Some(Skill::Sword));

        player = Player::default();
        let weapons: SmallVec<[_; 8]>= smallvec![
            Skill::Sword,
            Skill::Hammer,
            Skill::Bow,
            Skill::Grenade,
            Skill::Shuriken,
            Skill::Blaze,
            Skill::Flash,
            Skill::Spear,
        ];
        assert_eq!(player.progression_weapons(false), weapons);
        player.inventory.grant(Item::Skill(Skill::Shuriken), 1);
        let weapons: SmallVec<[_; 5]>= smallvec![
            Skill::Sword,
            Skill::Hammer,
            Skill::Bow,
            Skill::Grenade,
            Skill::Shuriken,
        ];
        assert_eq!(player.progression_weapons(false), weapons);
        player.pathsets.add(Pathset::Unsafe);
        let weapons: SmallVec<[_; 5]>= smallvec![
            Skill::Sword,
            Skill::Hammer,
            Skill::Bow,
            Skill::Grenade,
            Skill::Shuriken,
        ];
        assert_eq!(player.progression_weapons(false), weapons);
    }

    #[test]
    fn max_energy() {
        let mut player = Player::default();
        assert_eq!(player.max_energy(), 0.0);
        for _ in 0..10 { player.inventory.grant(Item::Resource(Resource::Energy), 1); }
        player.inventory.grant(Item::Shard(Shard::Energy), 1);
        assert_eq!(player.max_energy(), 5.0);
        player.pathsets.add(Pathset::Gorlek);
        assert_eq!(player.max_energy(), 6.0);
    }

    #[test]
    fn destroy_cost() {
        let mut player = Player::default();
        assert_eq!(player.destroy_cost(10.0, Skill::Bow, false), 1.5);
        assert_eq!(player.destroy_cost(10.0, Skill::Spear, true), 4.0);
        assert_eq!(player.destroy_cost(0.0, Skill::Spear, false), 0.0);
        player.inventory.grant(Item::Skill(Skill::AncestralLight), 2);
        player.pathsets.add(Pathset::Unsafe);
        player.inventory.grant(Item::Shard(Shard::Wingclip), 1);
        player.inventory.grant(Item::Resource(Resource::ShardSlot), 1);
        assert_eq!(player.destroy_cost(10.0, Skill::Bow, true), 0.25);
        assert_eq!(player.destroy_cost(1.0, Skill::Spear, false), 2.0);
    }

    #[test]
    fn refill_orbs() {
        let mut player = Player::default();
        let orbs = Orbs::default();

        let orbvec: SmallVec<[Orbs; 3]> = smallvec![orbs];
        assert_eq!(player.checkpoint_orbs(&[orbs]), orbvec);

        player.inventory.grant(Item::Resource(Resource::Energy), 6);
        player.inventory.grant(Item::Resource(Resource::Health), 6);

        let orbvec: SmallVec<[Orbs; 3]> = smallvec![Orbs { energy: 3.0, health: 30.0}];
        assert_eq!(player.checkpoint_orbs(&[orbs]), orbvec);

        let orbvec: SmallVec<[Orbs; 3]> = smallvec![Orbs { health: 10.0, ..orbs }];
        assert_eq!(player.health_orbs(&[orbs], 1.0), orbvec);

        player.inventory.grant(Item::Resource(Resource::Health), 2);
        let orbvec: SmallVec<[Orbs; 3]> = smallvec![Orbs { health: 10.0, ..orbs }];
        assert_eq!(player.health_orbs(&[orbs], 1.0), orbvec);

        player.inventory.grant(Item::Resource(Resource::Health), 1);
        let orbvec: SmallVec<[Orbs; 3]> = smallvec![Orbs { health: 20.0, ..orbs }];
        assert_eq!(player.health_orbs(&[orbs], 1.0), orbvec);

        player.inventory.grant(Item::Resource(Resource::Health), 11);
        let orbvec: SmallVec<[Orbs; 3]> = smallvec![Orbs { health: 30.0, ..orbs }];
        assert_eq!(player.health_orbs(&[orbs], 1.0), orbvec);

        player.inventory.grant(Item::Resource(Resource::Health), 1);
        let orbvec: SmallVec<[Orbs; 3]> = smallvec![Orbs { health: 40.0, ..orbs }];
        assert_eq!(player.health_orbs(&[orbs], 1.0), orbvec);

        player.inventory.grant(Item::Resource(Resource::Health), 6);
        let orbvec: SmallVec<[Orbs; 3]> = smallvec![Orbs { health: 40.0, ..orbs }];
        assert_eq!(player.health_orbs(&[orbs], 1.0), orbvec);

        player.inventory.grant(Item::Resource(Resource::Health), 1);
        let orbvec: SmallVec<[Orbs; 3]> = smallvec![Orbs { health: 50.0, ..orbs }];
        assert_eq!(player.health_orbs(&[orbs], 1.0), orbvec);

        player = Player::default();
        player.pathsets.add(Pathset::Gorlek);

        player.inventory.grant(Item::Shard(Shard::Energy), 1);
        player.inventory.grant(Item::Shard(Shard::Vitality), 1);

        let orbvec: SmallVec<[Orbs; 3]> = smallvec![Orbs { energy: 1.0, ..orbs }];
        assert_eq!(player.checkpoint_orbs(&[orbs]), orbvec);

        player.inventory.grant(Item::Resource(Resource::Health), 7);

        let orbvec: SmallVec<[Orbs; 3]> = smallvec![Orbs { health: 20.0, ..orbs }];
        assert_eq!(player.health_orbs(&[orbs], 1.0), orbvec);
        let orbvec: SmallVec<[Orbs; 3]> = smallvec![Orbs { health: 35.0, energy: 1.0 }];
        assert_eq!(player.checkpoint_orbs(&[orbs]), orbvec);

        player.inventory.grant(Item::Resource(Resource::Health), 21);

        let orbvec: SmallVec<[Orbs; 3]> = smallvec![Orbs { health: 45.0, energy: 1.0 }];
        assert_eq!(player.checkpoint_orbs(&[orbs]), orbvec);
    }
}
