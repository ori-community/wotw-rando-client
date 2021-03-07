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

pub trait Requirement {
    /// Checks if `player` meets this requirement
    fn is_met(&self, player: &Player, orbs: &Orbs) -> bool;
    /// How many orbs are spent fulfilling this requirement
    fn orb_cost(&self) -> Orbs {
        Default::default()
    }
    /// Returns a set of progressions which can all individually solve this requirement for `player`
    /// // default implementation is temporary
    fn progression(&self, _: &Player, _: &Orbs) -> HashSet<Vec<Progression>> {
        let mut set = HashSet::new();
        set.insert(vec![Progression::Impossible]);
        set
    }
}

pub struct FreeRequirement {}
impl Requirement for FreeRequirement {
    fn is_met(&self, _: &Player, _: &Orbs) -> bool {
        true
    }
    fn progression(&self, _: &Player, _: &Orbs) -> HashSet<Vec<Progression>> {
        HashSet::new()
    }
}

pub struct SkillRequirement {
    skill: Skill,
}
impl Requirement for SkillRequirement {
    fn is_met(&self, player: &Player, _: &Orbs) -> bool {
        player.has(Item::Skill(self.skill), 1)
    }
    fn progression(&self, player: &Player, orbs: &Orbs) -> HashSet<Vec<Progression>> {
        let mut set = HashSet::new();
        if self.is_met(player, orbs) {
            return set;
        }
        set.insert(vec![Progression::Skill(self.skill)]);
        set
    }
}

pub struct EnergySkillRequirement {
    skill: Skill,
    amount: f32,
}
impl Requirement for EnergySkillRequirement {
    fn is_met(&self, player: &Player, orbs: &Orbs) -> bool {
        player.has(Item::Skill(self.skill), 1) &&
        orbs.energy >= self.amount * energy_cost(&self.skill)
    }
    fn orb_cost(&self) -> Orbs {
        Orbs {
            energy: self.amount * energy_cost(&self.skill),
            ..Default::default()
        }
    }
}

pub struct ResourceRequirement {
    resource: Resource,
    amount: u16,
}
impl Requirement for ResourceRequirement {
    fn is_met(&self, player: &Player, _: &Orbs) -> bool {
        player.has(Item::Resource(self.resource), self.amount)
    }
}

pub struct ShardRequirement {
    shard: Shard,
}
impl Requirement for ShardRequirement {
    fn is_met(&self, player: &Player, _: &Orbs) -> bool {
        player.has(Item::Shard(self.shard), 1)
    }
}

pub struct TeleporterRequirement {
    teleporter: Teleporter,
}
impl Requirement for TeleporterRequirement {
    fn is_met(&self, player: &Player, _: &Orbs) -> bool {
        player.has(Item::Teleporter(self.teleporter), 1)
    }
}

pub struct StateRequirement {
    state: String,
}
impl Requirement for StateRequirement {
    fn is_met(&self, player: &Player, _: &Orbs) -> bool {
        player.states.contains(&self.state)
    }
}

pub struct DamageRequirement {
    amount: u16,
}
impl Requirement for DamageRequirement {
    fn is_met(&self, _: &Player, orbs: &Orbs) -> bool {
        orbs.health >= self.amount
    }
    fn orb_cost(&self) -> Orbs {
        Orbs {
            health: self.amount,
            ..Default::default()
        }
    }
}

pub struct DangerRequirement {
    amount: u16,
}
impl Requirement for DangerRequirement {
    fn is_met(&self, _: &Player, orbs: &Orbs) -> bool {
        orbs.health >= self.amount
    }
}

pub struct CombatRequirement {
    enemies: String,
}
impl Requirement for CombatRequirement {
    fn is_met(&self, player: &Player, _: &Orbs) -> bool {
        player.has(Item::Skill(Skill::Sword), 1) ||
        player.has(Item::Skill(Skill::Hammer), 1)
    }
}

pub struct BossRequirement {
    health: u16,
}
impl Requirement for BossRequirement {
    fn is_met(&self, player: &Player, _: &Orbs) -> bool {
        player.has(Item::Skill(Skill::Sword), 1) ||
        player.has(Item::Skill(Skill::Hammer), 1)
    }
}

pub struct BreakWallRequirement {
    health: u16,
}
impl Requirement for BreakWallRequirement {
    fn is_met(&self, player: &Player, _: &Orbs) -> bool {
        player.has(Item::Skill(Skill::Sword), 1) ||
        player.has(Item::Skill(Skill::Hammer), 1)
    }
}

pub struct ShurikenBreakRequirement {
    health: u16,
}
impl Requirement for ShurikenBreakRequirement {
    fn is_met(&self, player: &Player, _: &Orbs) -> bool {
        player.has(Item::Skill(Skill::Shuriken), 1)
    }
}

pub struct AndRequirement {
    ands: Vec<Box<dyn Requirement>>,
}
impl Requirement for AndRequirement {
    fn is_met(&self, player: &Player, orbs: &Orbs) -> bool {
        self.ands.iter().all(|req| req.is_met(player, orbs))
    }
    fn progression(&self, player: &Player, orbs: &Orbs) -> HashSet<Vec<Progression>> {
        let mut tail = self.ands.iter().map(|and| and.progression(player, orbs));
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
}
pub struct OrRequirement {
    ors: Vec<Box<dyn Requirement>>,
}
impl Requirement for OrRequirement {
    fn is_met(&self, player: &Player, orbs: &Orbs) -> bool {
        if self.ors.is_empty() {
            return true;
        }
        self.ors.iter().any(|req| req.is_met(player, orbs))
    }
    fn progression(&self, player: &Player, orbs: &Orbs) -> HashSet<Vec<Progression>> {
        self.ors.iter()
            .flat_map(|or| or.progression(player, orbs))
            .collect()
    }
}