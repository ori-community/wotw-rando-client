use std::collections::HashSet;

use crate::player::{Player, Item};
use crate::util::{Orbs, Resource, Skill, Shard, Teleporter, energy_cost};

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

#[derive(Debug)]
pub enum Requirement {
    Free,
    Skill(Skill),
    EnergySkill(Skill, f32),
    Resource(Resource, u16),
    Shard(Shard),
    Teleporter(Teleporter),
    State(String),
    Damage(u16),
    Danger(u16),
    Combat(String),
    Boss(u16),
    BreakWall(u16),
    ShurikenBreak(u16),
    And(Vec<Requirement>),
    Or(Vec<Requirement>),
}
impl Requirement {
    fn is_met(&self, player: &Player, orbs: &Orbs) -> bool {
        match self {
            Requirement::Free => true,
            Requirement::Skill(skill) =>
                player.has(Item::Skill(*skill), 1),
            Requirement::EnergySkill(skill, amount) =>
                player.has(Item::Skill(*skill), 1) && orbs.energy >= amount * energy_cost(&skill),
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
            Requirement::Combat(_) | Requirement::Boss(_) | Requirement::BreakWall(_) =>
                player.has(Item::Skill(Skill::Sword), 1) || player.has(Item::Skill(Skill::Hammer), 1),
            Requirement::ShurikenBreak(_) =>
                player.has(Item::Skill(Skill::Shuriken), 1),
            Requirement::And(ands) =>
                ands.iter().all(|req| req.is_met(player, orbs)),
            Requirement::Or(ors) =>
                ors.is_empty() || ors.iter().any(|req| req.is_met(player, orbs)),
        }
    }
    fn orb_cost(&self) -> Orbs {
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
    fn progression(&self, player: &Player, orbs: &Orbs) -> HashSet<Vec<Progression>> {
        match self {
            Requirement::Free => HashSet::new(),
            Requirement::Skill(skill) => {
                let mut set = HashSet::new();
                if self.is_met(player, orbs) {
                    return set;
                }
                set.insert(vec![Progression::Skill(*skill)]);
                set
            }
            Requirement::And(ands) => {
                let mut tail = ands.iter().map(|and| and.progression(player, orbs));
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
                    .flat_map(|or| or.progression(player, orbs))
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
