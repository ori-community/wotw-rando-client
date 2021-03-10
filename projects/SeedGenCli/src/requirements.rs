use std::collections::HashSet;

use crate::player::{Player, Item};
use crate::util::{Orbs, Resource, Skill, Shard, Teleporter, Pathset, Enemy, energy_cost};

#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum Progression {
    Skill(Skill),
    Impossible,
}
impl Progression {
    fn weight(&self) -> u8 {
        match self {
            Progression::Skill(_) => 1,
            Progression::Impossible => u8::MAX,
        }
    }
}

#[derive(Debug, Clone)]
pub enum Requirement {
    Free,
    Impossible,
    Skill(Skill),
    EnergySkill(Skill, f32),
    Resource(Resource, u16),
    Shard(Shard),
    Teleporter(Teleporter),
    State(String),
    Damage(u16),
    Danger(u16),
    Combat(Vec<(Enemy, u8)>),
    Boss(f32),
    BreakWall(f32),
    ShurikenBreak(f32),
    And(Vec<Requirement>),
    Or(Vec<Requirement>),
}
impl Requirement {
    pub fn is_met(&self, player: &Player, orbs: &Orbs, pathsets: &[Pathset]) -> bool {
        let is_unsafe = pathsets.contains(&Pathset::Unsafe);
        let energy_mod = if is_unsafe { 1.0 } else { 2.0 };
        match self {
            Requirement::Free => true,
            Requirement::Impossible => false,
            Requirement::Skill(skill) =>
                player.has(Item::Skill(*skill), 1),
            Requirement::EnergySkill(skill, amount) =>
                player.has(Item::Skill(*skill), 1) && orbs.energy >= amount * energy_cost(&skill) * energy_mod,
            Requirement::Resource(resource, amount) =>
                player.has(Item::Resource(*resource), *amount),
            Requirement::Shard(shard) =>
                player.has(Item::Shard(*shard), 1),
            Requirement::Teleporter(teleporter) =>
                player.has(Item::Teleporter(*teleporter), 1),
            Requirement::State(state) =>
                player.states.contains(state),
            Requirement::Damage(amount) | Requirement::Danger(amount) =>
                orbs.health >= *amount,
            Requirement::BreakWall(health) | Requirement::Boss(health) => {
                if let Some(weapon) = player.preferred_weapon(pathsets) {
                    orbs.energy >= player.destroy_cost(*health, &weapon, pathsets) * energy_mod
                } else {
                    false
                }
            }
            Requirement::Combat(enemies) => {
                if let Some(weapon) = player.preferred_weapon(pathsets) {
                    let (mut aerial, mut dangerous) = (false, false);
                    let mut energy = orbs.energy;

                    let ranged_weapon = player.preferred_ranged_weapon(pathsets);

                    for (enemy, amount) in enemies {
                        if let Enemy::EnergyRefill = enemy {
                            if energy < 0.0 { return false; }
                            energy = player.max_energy().max(*amount as f32);
                            continue;
                        }

                        if enemy.aerial() { aerial = true }
                        if enemy.dangerous() { dangerous = true }
                        if let Enemy::Bat = enemy {
                            if !is_unsafe && !player.has(Item::Skill(Skill::Bash), 1) { return false; }
                        }
                        if let Enemy::Sandworm = enemy {
                            if !is_unsafe && !player.has(Item::Skill(Skill::Burrow), 1) { return false; }
                        }

                        if enemy.shielded() {
                            if player.has(Item::Skill(Skill::Hammer), 1) || player.has(Item::Skill(Skill::Launch), 1) {}
                            else if player.has(Item::Skill(Skill::Grenade), 1) { energy -= energy_cost(&Skill::Grenade) * energy_mod; }
                            else if player.has(Item::Skill(Skill::Spear), 1) { energy -= energy_cost(&Skill::Spear) * energy_mod; }
                            else { return false; }
                        }
                        let armor_mod = if enemy.armored() || is_unsafe { 1.0 } else { 2.0 };

                        let ranged = enemy.ranged();
                        if ranged && ranged_weapon.is_none() { return false; }
                        let used_weapon = if ranged { ranged_weapon.unwrap() } else { weapon };

                        energy -= player.destroy_cost(enemy.health(), &used_weapon, pathsets) * *amount as f32 * armor_mod * energy_mod;
                    }

                    if !is_unsafe && aerial && !(
                        player.has(Item::Skill(Skill::DoubleJump), 1) ||
                        player.has(Item::Skill(Skill::Launch), 1) ||
                        pathsets.contains(&Pathset::Gorlek) && player.has(Item::Skill(Skill::Bash), 1)
                    ) { return false; }
                    if !is_unsafe && dangerous && !(
                        player.has(Item::Skill(Skill::DoubleJump), 1) ||
                        player.has(Item::Skill(Skill::Dash), 1) ||
                        player.has(Item::Skill(Skill::Bash), 1) ||
                        player.has(Item::Skill(Skill::Launch), 1)
                    ) { return false; }

                    energy > 0.0
                } else {
                    false
                }
            }
            Requirement::ShurikenBreak(health) => {
                let clip_mod = if is_unsafe { 2.0 } else { 3.0 };
                player.has(Item::Skill(Skill::Shuriken), 1) && orbs.energy >= player.destroy_cost(*health, &Skill::Shuriken, pathsets) * clip_mod * energy_mod
            },
            Requirement::And(ands) =>
                ands.iter().all(|req| req.is_met(player, orbs, pathsets)),
            Requirement::Or(ors) =>
                ors.is_empty() || ors.iter().any(|req| req.is_met(player, orbs, pathsets)),
        }
    }
    pub fn orb_cost(&self) -> Orbs {
        match self {
            Requirement::EnergySkill(skill, amount) =>
                Orbs {
                    energy: *amount * energy_cost(skill),
                    ..Default::default()
                },
            Requirement::Damage(amount) =>
                Orbs {
                    health: *amount,
                    ..Default::default()
                },
            _ => Orbs { ..Default::default() },
        }
    }
    pub fn progression(&self, player: &Player, orbs: &Orbs, pathsets: &[Pathset]) -> HashSet<Vec<Progression>> {
        match self {
            Requirement::Free => HashSet::new(),
            Requirement::Skill(skill) => {
                let mut set = HashSet::new();
                if self.is_met(player, orbs, pathsets) {
                    return set;
                }
                set.insert(vec![Progression::Skill(*skill)]);
                set
            }
            Requirement::And(ands) => {
                let mut tail = ands.iter().map(|and| and.progression(player, orbs, pathsets));
                let head = tail.next().unwrap_or_default();
                tail.fold(head, |acc, next| {
                    let mut combined = HashSet::new();
                    for left in acc {
                        for right in &next {
                            let mut both = left.clone();
                            both.append(&mut right.clone());
                            combined.insert(both);
                        }
                    };
                    combined
                })
            }
            Requirement::Or(ors) => {
                ors.iter()
                    .flat_map(|or| or.progression(player, orbs, pathsets))
                    .collect()
            }
            _ => {
                let mut set = HashSet::new();
                set.insert(vec![Progression::Impossible]);
                set
            },
        }
    }
}
