use std::collections::HashSet;

use crate::player::{Player, Item};
use crate::util::{Orbs, Resource, Skill, Shard, Teleporter, Pathset, Enemy, either_orbs};

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
    Damage(f32),
    Danger(f32),
    Combat(Vec<(Enemy, u8)>),
    Boss(f32),
    BreakWall(f32),
    ShurikenBreak(f32),
    And(Vec<Requirement>),
    Or(Vec<Requirement>),
}
impl Requirement {
    pub fn is_met(&self, player: &Player, orbs: &Orbs, pathsets: &[Pathset]) -> Option<Vec<Orbs>> {
        match self {
            Requirement::Free => return Some(vec![Default::default()]),
            Requirement::Impossible => return None,
            Requirement::Skill(skill) =>
                if player.has(Item::Skill(*skill), 1) { return Some(vec![Default::default()]); },
            Requirement::EnergySkill(skill, amount) =>
                if player.has(Item::Skill(*skill), 1) {
                    let cost = player.use_cost(&skill, pathsets) * *amount;
                    if orbs.energy >= cost { return Some(vec![
                        Orbs {
                            energy: -cost,
                            ..Default::default()
                        }
                    ])}
                }
            Requirement::Resource(resource, amount) =>
                if player.has(Item::Resource(*resource), *amount) { return Some(vec![Default::default()]); },
            Requirement::Shard(shard) =>
                if player.has(Item::Shard(*shard), 1) { return Some(vec![Default::default()]); },
            Requirement::Teleporter(teleporter) =>
                if player.has(Item::Teleporter(*teleporter), 1) { return Some(vec![Default::default()]); },
            Requirement::State(state) =>
                if player.states.contains(&state[..]) { return Some(vec![Default::default()]); },
            Requirement::Damage(amount) => {
                let cost = *amount * player.defense_mod(pathsets);
                if orbs.health >= cost { return Some(vec![
                    Orbs {
                        health: -cost,
                        ..Default::default()
                    }
                ])}
            }
            Requirement::Danger(amount) =>
                if orbs.health >= *amount * player.defense_mod(pathsets) { return Some(vec![Default::default()]); },
            Requirement::BreakWall(health) => {
                if let Some(weapon) = player.preferred_weapon(pathsets, true) {
                    let cost =  player.destroy_cost(*health, &weapon, pathsets, false);
                    if orbs.energy >= cost { return Some(vec![
                        Orbs {
                            energy: -cost,
                            ..Default::default()
                        }
                    ])}
                }
            }
            Requirement::Boss(health) => {
                if let Some(weapon) = player.preferred_weapon(pathsets, false) {
                    let cost =  player.destroy_cost(*health, &weapon, pathsets, false);
                    if orbs.energy >= cost { return Some(vec![
                        Orbs {
                            energy: -cost,
                            ..Default::default()
                        }
                    ])}
                }
            }
            Requirement::Combat(enemies) => {
                let is_unsafe = pathsets.contains(&Pathset::Unsafe);
                if let Some(weapon) = player.preferred_weapon(pathsets, false) {
                    let (mut aerial, mut dangerous) = (false, false);
                    let mut energy = orbs.energy;

                    let ranged_weapon = player.preferred_ranged_weapon(pathsets);

                    for (enemy, amount) in enemies {
                        if let Enemy::EnergyRefill = enemy {
                            if energy < 0.0 { return None; }
                            energy = player.max_energy().min(energy + *amount as f32);
                            continue;
                        }

                        if enemy.aerial() { aerial = true; }
                        if enemy.dangerous() { dangerous = true; }
                        if let Enemy::Bat = enemy {
                            if !is_unsafe && !player.has(Item::Skill(Skill::Bash), 1) { return None; }
                        }
                        if let Enemy::Sandworm = enemy {
                            if player.has(Item::Skill(Skill::Burrow), 1) { continue; }
                            else if !is_unsafe { return None; }
                        }

                        if enemy.shielded() {
                            if player.has(Item::Skill(Skill::Hammer), 1) || player.has(Item::Skill(Skill::Launch), 1) {}
                            else if player.has(Item::Skill(Skill::Grenade), 1) { energy -= player.use_cost(&Skill::Grenade, pathsets) * *amount as f32; }
                            else if player.has(Item::Skill(Skill::Spear), 1) { energy -= player.use_cost(&Skill::Spear, pathsets) * *amount as f32; }
                            else { return None; }
                        }
                        let armor_mod = if enemy.armored() && !is_unsafe { 2.0 } else { 1.0 };

                        let ranged = enemy.ranged();
                        if ranged && ranged_weapon.is_none() { return None; }
                        let used_weapon = if ranged { ranged_weapon.unwrap() } else { weapon };

                        // TODO check what actually counts as airborne
                        let flying = matches!(enemy, Enemy::Skeeto | Enemy::SmallSkeeto | Enemy::Bat | Enemy::Bee);

                        energy -= player.destroy_cost(enemy.health(), &used_weapon, pathsets, flying) * *amount as f32 * armor_mod;
                    }

                    if !is_unsafe && aerial && !(
                        player.has(Item::Skill(Skill::DoubleJump), 1) ||
                        player.has(Item::Skill(Skill::Launch), 1) ||
                        pathsets.contains(&Pathset::Gorlek) && player.has(Item::Skill(Skill::Bash), 1)
                    ) { return None; }
                    if !is_unsafe && dangerous && !(
                        player.has(Item::Skill(Skill::DoubleJump), 1) ||
                        player.has(Item::Skill(Skill::Dash), 1) ||
                        player.has(Item::Skill(Skill::Bash), 1) ||
                        player.has(Item::Skill(Skill::Launch), 1)
                    ) { return None; }

                    if energy >= 0.0 { return Some(vec![
                        Orbs {
                            energy: energy - orbs.energy,
                            ..Default::default()
                        }
                    ])}
                }
            },
            Requirement::ShurikenBreak(health) => {
                if player.has(Item::Skill(Skill::Shuriken), 1) {
                    let clip_mod = if pathsets.contains(&Pathset::Unsafe) { 2.0 } else { 3.0 };
                    let cost = player.destroy_cost(*health, &Skill::Shuriken, pathsets, false) * clip_mod;
                    if orbs.energy >= cost { return Some(vec![
                        Orbs {
                            energy: -cost,
                            ..Default::default()
                        }
                    ])}
                }
            },
            Requirement::And(ands) => {
                let mut sum = Vec::<Orbs>::new();

                for and in ands {
                    if let Some(orbcost) = and.is_met(player, orbs, pathsets) {
                        if sum.is_empty() {
                            sum = orbcost;
                            continue;
                        }
                        let mut product = Vec::<Orbs>::with_capacity(sum.len() + orbcost.len());
                        for old in &sum {
                            for new in &orbcost {
                                let orbs = *old + *new;
                                if !product.contains(&orbs) {
                                    product.push(*old + *new);
                                }
                            }
                        }
                        sum = product.clone().into_iter().filter(|orbs| {
                            !product.iter().any(|other| other.energy > orbs.energy && other.health > orbs.health)
                        }).collect();
                    } else { return None; }
                }
                return Some(sum);
            },
            Requirement::Or(ors) => {
                let mut cheapest = Vec::<Orbs>::new();

                for or in ors {
                    if let Some(orbcost) = or.is_met(player, orbs, pathsets) {
                        if cheapest.is_empty() {
                            cheapest = orbcost;
                        } else {
                            cheapest = either_orbs(cheapest, orbcost);
                        }
                        if cheapest[0] == Default::default() {
                            break;
                        }
                    }
                }

                if !cheapest.is_empty() {
                    return Some(cheapest);
                }
            },
        }
        None
    }

    pub fn contained_states(&self) -> Vec<&str> {
        match self {
            Requirement::State(state) => vec![state],
            Requirement::And(ands) => ands.iter().flat_map(|and| and.contained_states()).collect(),
            Requirement::Or(ors) => ors.iter().flat_map(|or| or.contained_states()).collect(),
            _ => vec![],
        }
    }

    pub fn progression(&self, player: &Player, orbs: &Orbs, pathsets: &[Pathset]) -> HashSet<Vec<Progression>> {
        match self {
            Requirement::Free => HashSet::new(),
            Requirement::Skill(skill) => {
                let mut set = HashSet::new();
                if self.is_met(player, orbs, pathsets).is_some() {
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

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn is_met() {
        let mut player: Player = Default::default();
        let moki = vec![Pathset::Moki];
        let unsafe_paths = vec![Pathset::Moki, Pathset::Gorlek, Pathset::Unsafe];
        let orbs = Default::default();

        let req = Requirement::Skill(Skill::Blaze);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());
        player.grant(Item::Skill(Skill::Blaze), 1);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_some());

        let req = Requirement::And(vec![req, Requirement::Free]);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_some());
        let req = Requirement::Or(vec![req, Requirement::Impossible]);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_some());

        let req = Requirement::EnergySkill(Skill::Blaze, 1.0);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());
        player.grant(Item::Resource(Resource::Energy), 2);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());
        assert_eq!(req.is_met(&player, &player.max_orbs(), &unsafe_paths), Some(vec![Orbs {energy: -1.0, ..orbs }]));
        player.grant(Item::Resource(Resource::Energy), 2);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &moki), Some(vec![Orbs {energy: -2.0, ..orbs }]));

        let req = Requirement::State("owo".to_string());
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());
        player.states.insert("owo");
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_some());
        let req = Requirement::State("ow".to_string());
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());

        let req = Requirement::Damage(30.0);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());
        player.grant(Item::Resource(Resource::Health), 5);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());
        player.grant(Item::Resource(Resource::Health), 1);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &moki), Some(vec![Orbs {health: -30.0, ..orbs }]));

        player = Default::default();
        let req = Requirement::BreakWall(12.0);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());
        player.grant(Item::Skill(Skill::Sword), 1);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &moki), Some(vec![Orbs {..orbs }]));
        player = Default::default();
        player.grant(Item::Skill(Skill::Grenade), 1);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());
        player.grant(Item::Resource(Resource::Energy), 3);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());
        player.grant(Item::Resource(Resource::Energy), 1);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &moki), Some(vec![Orbs {energy: -2.0, ..orbs }]));
        player = Default::default();
        let req = Requirement::BreakWall(16.0);
        player.grant(Item::Skill(Skill::Grenade), 1);
        player.grant(Item::Resource(Resource::Energy), 2);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &unsafe_paths), Some(vec![Orbs {energy: -1.0, ..orbs }]));
        player.grant(Item::Resource(Resource::Energy), 2);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());

        player = Default::default();
        let req = Requirement::ShurikenBreak(12.0);
        player.grant(Item::Skill(Skill::Shuriken), 1);
        assert!(req.is_met(&player, &player.max_orbs(), &unsafe_paths).is_none());
        player.grant(Item::Resource(Resource::Energy), 4);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &unsafe_paths), Some(vec![Orbs {energy: -2.0, ..orbs }]));
        player.grant(Item::Resource(Resource::Energy), 6);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());
        player.grant(Item::Resource(Resource::Energy), 2);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &moki), Some(vec![Orbs {energy: -6.0, ..orbs }]));

        player = Default::default();
        let req = Requirement::Combat(vec![(Enemy::Slug, 2), (Enemy::Skeeto, 1)]);
        player.grant(Item::Skill(Skill::Bow), 1);
        assert!(req.is_met(&player, &player.max_orbs(), &unsafe_paths).is_none());
        player.grant(Item::Resource(Resource::Energy), 7);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &unsafe_paths), Some(vec![Orbs {energy: -3.25, ..orbs }]));
        player.grant(Item::Resource(Resource::Energy), 6);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());
        player.grant(Item::Skill(Skill::DoubleJump), 1);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &moki), Some(vec![Orbs {energy: -6.5, ..orbs }]));
        player = Default::default();
        let req = Requirement::Combat(vec![(Enemy::Sandworm, 1), (Enemy::Bat, 1), (Enemy::EnergyRefill, 99), (Enemy::ShieldMiner, 2), (Enemy::EnergyRefill, 1), (Enemy::Balloon, 4)]);
        player.grant(Item::Skill(Skill::Shuriken), 1);
        player.grant(Item::Skill(Skill::Spear), 1);
        player.grant(Item::Resource(Resource::Energy), 27);
        assert!(req.is_met(&player, &player.max_orbs(), &unsafe_paths).is_none());
        player.grant(Item::Resource(Resource::Energy), 1);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &unsafe_paths), Some(vec![Orbs {energy: -14.0, ..orbs }]));
        player.grant(Item::Resource(Resource::Energy), 37);
        player.grant(Item::Skill(Skill::Bash), 1);
        player.grant(Item::Skill(Skill::Launch), 1);
        player.grant(Item::Skill(Skill::Burrow), 1);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());
        player.grant(Item::Resource(Resource::Energy), 1);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &moki), Some(vec![Orbs {energy: -33.0, ..orbs }]));
        player = Default::default();
        let req = Requirement::Combat(vec![(Enemy::Tentacle, 1)]);
        player.grant(Item::Skill(Skill::Spear), 1);
        player.grant(Item::Skill(Skill::DoubleJump), 1);
        player.grant(Item::Resource(Resource::Energy), 4);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &unsafe_paths), Some(vec![Orbs {energy: -2.0, ..orbs }]));
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());
        player.grant(Item::Resource(Resource::Energy), 11);
        assert!(req.is_met(&player, &player.max_orbs(), &moki).is_none());
        player.grant(Item::Resource(Resource::Energy), 1);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &moki), Some(vec![Orbs {energy: -8.0, ..orbs }]));

        player = Default::default();
        let a = Requirement::EnergySkill(Skill::Blaze, 2.0);
        let b = Requirement::Damage(20.0);
        let c = Requirement::EnergySkill(Skill::Blaze, 1.0);
        let d = Requirement::Damage(10.0);
        player.grant(Item::Skill(Skill::Blaze), 1);
        player.grant(Item::Resource(Resource::Energy), 4);
        player.grant(Item::Resource(Resource::Health), 4);
        let req = Requirement::And(vec![c.clone(), d.clone()]);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &unsafe_paths), Some(vec![Orbs { health: -10.0, energy: -1.0 }]));
        let req = Requirement::Or(vec![a.clone(), b.clone()]);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &unsafe_paths), Some(vec![Orbs { energy: -2.0, ..orbs }, Orbs { health: -20.0, ..orbs }]));
        let req = Requirement::Or(vec![Requirement::And(vec![a.clone(), b.clone()]), Requirement::And(vec![c.clone(), d.clone()]), a.clone(), b.clone()]);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &unsafe_paths), Some(vec![Orbs { energy: -1.0, health: -10.0 }, Orbs { energy: -2.0, ..orbs }, Orbs { health: -20.0, ..orbs }]));
        let req = Requirement::And(vec![Requirement::Or(vec![a.clone(), d.clone()]), Requirement::Or(vec![b.clone(), c.clone()])]);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &unsafe_paths), Some(vec![Orbs { energy: -3.0, ..orbs }, Orbs { health: -30.0, ..orbs }, Orbs { energy: -1.0, health: -10.0 }]));
        let req = Requirement::And(vec![Requirement::Or(vec![a.clone(), d.clone()]), Requirement::Or(vec![b.clone(), c.clone()]), Requirement::Or(vec![a.clone(), d.clone()]), Requirement::Or(vec![b.clone(), c.clone()])]);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &unsafe_paths), Some(vec![Orbs { energy: -6.0, ..orbs }, Orbs { energy: -4.0, health: -10.0 }, Orbs { health: -60.0, ..orbs }, Orbs { energy: -1.0, health: -40.0 }, Orbs { energy: -2.0, health: -20.0 }]));
        let req = Requirement::Or(vec![Requirement::Free, b.clone()]);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &unsafe_paths), Some(vec![Default::default()]));
        let req = Requirement::Or(vec![b.clone(), Requirement::Free]);
        assert_eq!(req.is_met(&player, &player.max_orbs(), &unsafe_paths), Some(vec![Default::default()]));
    }
}
