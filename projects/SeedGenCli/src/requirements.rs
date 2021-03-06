use std::collections::HashSet;

use crate::player::{Player, Item};
use crate::util::Skill;

#[derive(Debug, PartialEq, Eq, Hash, Clone, Copy)]
pub enum Progression {
    Skill(Skill)
}
impl Progression {
    fn weight(&self) -> u8 {
        match self {
            Progression::Skill(_) => 1,
        }
    }
}

pub trait Requirement {
    /// Checks if `player` meets this requirement
    fn is_met(&self, player: &Player) -> bool;
    /// Returns a set of progressions which can all individually solve this requirement for `player`
    fn progression(&self, player: &Player) -> HashSet<Vec<Progression>>;
}

pub struct FreeRequirement {}
impl Requirement for FreeRequirement {
    fn is_met(&self, _: &Player) -> bool {
        true
    }
    fn progression(&self, _: &Player) -> HashSet<Vec<Progression>> {
        HashSet::new()
    }
}

pub struct SkillRequirement {
    skill: Skill,
}
impl Requirement for SkillRequirement {
    fn is_met(&self, player: &Player) -> bool {
        player.has(&Item::Skill(self.skill), 1)
    }
    fn progression(&self, player: &Player) -> HashSet<Vec<Progression>> {
        let mut set = HashSet::new();
        if self.is_met(player) {
            return set;
        }
        set.insert(vec![Progression::Skill(self.skill)]);
        set
    }
}

pub struct AndRequirement<'a> {
    ands: Vec<&'a dyn Requirement>,
}
impl Requirement for AndRequirement<'_> {
    fn is_met(&self, player: &Player) -> bool {
        self.ands.iter().all(|req| req.is_met(player))
    }
    fn progression(&self, player: &Player) -> HashSet<Vec<Progression>> {
        let mut tail = self.ands.iter().map(|and| and.progression(player));
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
    fn is_met(&self, player: &Player) -> bool {
        if self.ors.is_empty() {
            return true;
        }
        self.ors.iter().any(|req| req.is_met(player))
    }
    fn progression(&self, player: &Player) -> HashSet<Vec<Progression>> {
        self.ors.iter()
            .flat_map(|or| or.progression(player))
            .collect()
    }
}