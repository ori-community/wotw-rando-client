use crate::player::{Player, Item};
use crate::util::{Orbs, Resource, Skill, Shard, Teleporter, Enemy, either_orbs, both_orbs, both_single_orbs};

#[derive(Debug, Clone)]
pub enum Requirement {
    Free,
    Impossible,
    Skill(Skill),
    EnergySkill(Skill, f32),
    Resource(Resource, u16),
    Shard(Shard),
    Teleporter(Teleporter),
    State(usize),
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
    fn cost_is_met(&self, cost: f32, player: &Player, orbs: &Orbs) -> Option<Vec<Orbs>> {
        if orbs.energy >= cost { Some(vec![
            Orbs {
                energy: -cost,
                ..Default::default()
            }
        ])} else if player.unsafe_paths && player.has(Item::Shard(Shard::LifePact), 1) && orbs.energy + orbs.health >= cost { Some(vec![
            Orbs {
                health: cost - orbs.energy,
                energy: -orbs.energy,
            }
        ])} else { None }
    }

    pub fn is_met(&self, player: &Player, orbs: &Orbs) -> Option<Vec<Orbs>> {
        match self {
            Requirement::Free => return Some(vec![Default::default()]),
            Requirement::Impossible => return None,
            Requirement::Skill(skill) =>
                if player.has(Item::Skill(*skill), 1) { return Some(vec![Default::default()]); },
            Requirement::EnergySkill(skill, amount) =>
                if player.has(Item::Skill(*skill), 1) {
                    let cost = player.use_cost(&skill) * *amount;
                    return self.cost_is_met(cost, player, orbs);
                }
            Requirement::Resource(resource, amount) =>
                if player.has(Item::Resource(*resource), *amount) { return Some(vec![Default::default()]); },
            Requirement::Shard(shard) =>
                if player.has(Item::Shard(*shard), 1) { return Some(vec![Default::default()]); },
            Requirement::Teleporter(teleporter) =>
                if player.has(Item::Teleporter(*teleporter), 1) { return Some(vec![Default::default()]); },
            Requirement::State(state) =>
                if player.states.contains(state) { return Some(vec![Default::default()]); },
            Requirement::Damage(amount) => {
                let cost = *amount * player.defense_mod();
                if orbs.health >= cost { return Some(vec![
                    Orbs {
                        health: -cost,
                        ..Default::default()
                    }
                ])} else if player.has(Item::Skill(Skill::Regenerate), 1) {
                    let regens = ((cost - orbs.health) / 30.0).ceil();
                    let regen_cost = 1.0 * regens;
                    if orbs.energy >= regen_cost { return Some(vec![
                        Orbs {
                            health: -cost + 30.0 * regens,
                            energy: -regen_cost,
                        }
                    ])}
                }
            },
            Requirement::Danger(amount) => {
                let cost = *amount * player.defense_mod();
                if orbs.health >= cost { return Some(vec![Default::default()]); }
                else if player.has(Item::Skill(Skill::Regenerate), 1) {
                    let regens = ((cost - orbs.health) / 30.0).ceil();
                    if orbs.energy >= 1.0 * regens { return Some(vec![Default::default()])}
                }
            },
            Requirement::BreakWall(health) =>
                if let Some(weapon) = player.preferred_weapon(true) {
                    let cost = player.destroy_cost(*health, &weapon, false);
                    return self.cost_is_met(cost, player, orbs);
                }
            Requirement::Boss(health) =>
                if let Some(weapon) = player.preferred_weapon(false) {
                    let cost = player.destroy_cost(*health, &weapon, false);
                    return self.cost_is_met(cost, player, orbs);
                }
            Requirement::Combat(enemies) => {
                let is_unsafe = player.unsafe_paths;
                if let Some(weapon) = player.preferred_weapon(false) {
                    let (mut aerial, mut dangerous) = (false, false);
                    let mut energy = orbs.energy;

                    let ranged_weapon = player.preferred_ranged_weapon();

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
                            else if player.has(Item::Skill(Skill::Grenade), 1) { energy -= player.use_cost(&Skill::Grenade) * *amount as f32; }
                            else if player.has(Item::Skill(Skill::Spear), 1) { energy -= player.use_cost(&Skill::Spear) * *amount as f32; }
                            else { return None; }
                        }
                        let armor_mod = if enemy.armored() && !is_unsafe { 2.0 } else { 1.0 };

                        let ranged = enemy.ranged();
                        if ranged && ranged_weapon.is_none() { return None; }
                        let used_weapon = if ranged { ranged_weapon.unwrap() } else { weapon };

                        // TODO check what actually counts as airborne
                        let flying = matches!(enemy, Enemy::Skeeto | Enemy::SmallSkeeto | Enemy::Bat | Enemy::Bee);

                        energy -= player.destroy_cost(enemy.health(), &used_weapon, flying) * *amount as f32 * armor_mod;
                    }

                    if !is_unsafe && aerial && !(
                        player.has(Item::Skill(Skill::DoubleJump), 1) ||
                        player.has(Item::Skill(Skill::Launch), 1) ||
                        player.gorlek_paths && player.has(Item::Skill(Skill::Bash), 1)
                    ) { return None; }
                    if !is_unsafe && dangerous && !(
                        player.has(Item::Skill(Skill::DoubleJump), 1) ||
                        player.has(Item::Skill(Skill::Dash), 1) ||
                        player.has(Item::Skill(Skill::Bash), 1) ||
                        player.has(Item::Skill(Skill::Launch), 1)
                    ) { return None; }

                    let cost = orbs.energy - energy;
                    return self.cost_is_met(cost, player, orbs);
                }
            },
            Requirement::ShurikenBreak(health) =>
                if player.has(Item::Skill(Skill::Shuriken), 1) {
                    let clip_mod = if player.unsafe_paths { 2.0 } else { 3.0 };
                    let cost = player.destroy_cost(*health, &Skill::Shuriken, false) * clip_mod;
                    return self.cost_is_met(cost, player, orbs);
                }
            Requirement::And(ands) => {
                let mut best_orbs = vec![*orbs];

                for and in ands {
                    let mut orbcosts: Vec<Orbs> = Default::default();
                    let mut met = false;

                    for orbs in &best_orbs {
                        if let Some(mut orbcost) = and.is_met(player, orbs) {
                            orbcosts.append(&mut orbcost);
                            met = true;
                        }
                    }
                    if !met { return None; }

                    best_orbs = both_orbs(&best_orbs, &orbcosts);
                    best_orbs.retain(|orbs| orbs.health >= 0.0 && orbs.energy >= 0.0);
                }

                let cost = both_single_orbs(&best_orbs, Orbs { health: -orbs.health, energy: -orbs.energy });
                return Some(cost);
            },
            Requirement::Or(ors) => {
                let mut cheapest = Vec::<Orbs>::new();

                for or in ors {
                    if let Some(orbcost) = or.is_met(player, orbs) {
                        if cheapest.is_empty() {
                            cheapest = orbcost;
                        } else {
                            cheapest = either_orbs(&cheapest, &orbcost);
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

    pub fn contained_states(&self) -> Vec<usize> {
        match self {
            Requirement::State(state) => vec![*state],
            Requirement::And(ands) => ands.iter().flat_map(|and| and.contained_states()).collect(),
            Requirement::Or(ors) => ors.iter().flat_map(|or| or.contained_states()).collect(),
            _ => vec![],
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn is_met() {
        let mut player: Player = Default::default();
        let orbs = Default::default();

        let req = Requirement::Skill(Skill::Blaze);
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Skill(Skill::Blaze), 1);
        assert!(req.is_met(&player, &player.max_orbs()).is_some());

        let req = Requirement::And(vec![req, Requirement::Free]);
        assert!(req.is_met(&player, &player.max_orbs()).is_some());
        let req = Requirement::Or(vec![req, Requirement::Impossible]);
        assert!(req.is_met(&player, &player.max_orbs()).is_some());

        let req = Requirement::EnergySkill(Skill::Blaze, 1.0);
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Resource(Resource::Energy), 2);
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.unsafe_paths = true;
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs {energy: -1.0, ..orbs }]));
        player.unsafe_paths = false;
        player.grant(Item::Resource(Resource::Energy), 2);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs {energy: -2.0, ..orbs }]));

        let req = Requirement::State(34);
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.states.insert(34);
        assert!(req.is_met(&player, &player.max_orbs()).is_some());
        let req = Requirement::State(33);
        assert!(req.is_met(&player, &player.max_orbs()).is_none());

        let req = Requirement::Damage(30.0);
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Resource(Resource::Health), 5);
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Resource(Resource::Health), 1);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs {health: -30.0, ..orbs }]));

        player = Default::default();
        let req = Requirement::BreakWall(12.0);
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Skill(Skill::Sword), 1);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs {..orbs }]));
        player = Default::default();
        player.grant(Item::Skill(Skill::Grenade), 1);
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Resource(Resource::Energy), 3);
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Resource(Resource::Energy), 1);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs {energy: -2.0, ..orbs }]));
        player = Default::default();
        let req = Requirement::BreakWall(16.0);
        player.grant(Item::Skill(Skill::Grenade), 1);
        player.grant(Item::Resource(Resource::Energy), 2);
        player.unsafe_paths = true;
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs {energy: -1.0, ..orbs }]));
        player.unsafe_paths = false;
        player.grant(Item::Resource(Resource::Energy), 2);
        assert!(req.is_met(&player, &player.max_orbs()).is_none());

        player = Default::default();
        let req = Requirement::ShurikenBreak(12.0);
        player.grant(Item::Skill(Skill::Shuriken), 1);
        player.unsafe_paths = true;
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Resource(Resource::Energy), 4);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs {energy: -2.0, ..orbs }]));
        player.grant(Item::Resource(Resource::Energy), 6);
        player.unsafe_paths = false;
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Resource(Resource::Energy), 2);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs {energy: -6.0, ..orbs }]));

        player = Default::default();
        let req = Requirement::Combat(vec![(Enemy::Slug, 2), (Enemy::Skeeto, 1)]);
        player.grant(Item::Skill(Skill::Bow), 1);
        player.unsafe_paths = true;
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Resource(Resource::Energy), 7);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs {energy: -3.25, ..orbs }]));
        player.grant(Item::Resource(Resource::Energy), 6);
        player.unsafe_paths = false;
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Skill(Skill::DoubleJump), 1);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs {energy: -6.5, ..orbs }]));
        player = Default::default();
        let req = Requirement::Combat(vec![(Enemy::Sandworm, 1), (Enemy::Bat, 1), (Enemy::EnergyRefill, 99), (Enemy::ShieldMiner, 2), (Enemy::EnergyRefill, 1), (Enemy::Balloon, 4)]);
        player.grant(Item::Skill(Skill::Shuriken), 1);
        player.grant(Item::Skill(Skill::Spear), 1);
        player.grant(Item::Resource(Resource::Energy), 27);
        player.gorlek_paths = true;
        player.unsafe_paths = true;
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Resource(Resource::Energy), 1);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs {energy: -14.0, ..orbs }]));
        player.grant(Item::Resource(Resource::Energy), 37);
        player.grant(Item::Skill(Skill::Bash), 1);
        player.grant(Item::Skill(Skill::Launch), 1);
        player.grant(Item::Skill(Skill::Burrow), 1);
        player.gorlek_paths = false;
        player.unsafe_paths = false;
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Resource(Resource::Energy), 1);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs {energy: -33.0, ..orbs }]));
        player = Default::default();
        let req = Requirement::Combat(vec![(Enemy::Tentacle, 1)]);
        player.grant(Item::Skill(Skill::Spear), 1);
        player.grant(Item::Skill(Skill::DoubleJump), 1);
        player.grant(Item::Resource(Resource::Energy), 4);
        player.gorlek_paths = true;
        player.unsafe_paths = true;
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs {energy: -2.0, ..orbs }]));
        player.gorlek_paths = false;
        player.unsafe_paths = false;
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Resource(Resource::Energy), 11);
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Resource(Resource::Energy), 1);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs {energy: -8.0, ..orbs }]));

        player = Default::default();
        let a = Requirement::EnergySkill(Skill::Blaze, 2.0);
        let b = Requirement::Damage(20.0);
        let c = Requirement::EnergySkill(Skill::Blaze, 1.0);
        let d = Requirement::Damage(10.0);
        player.grant(Item::Skill(Skill::Blaze), 1);
        player.grant(Item::Resource(Resource::Energy), 4);
        player.grant(Item::Resource(Resource::Health), 4);
        let req = Requirement::And(vec![c.clone(), d.clone()]);
        player.unsafe_paths = true;
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs { health: -10.0, energy: -1.0 }]));
        let req = Requirement::Or(vec![a.clone(), b.clone()]);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs { energy: -2.0, ..orbs }, Orbs { health: -20.0, ..orbs }]));
        let req = Requirement::Or(vec![Requirement::And(vec![a.clone(), b.clone()]), Requirement::And(vec![c.clone(), d.clone()]), a.clone(), b.clone()]);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs { energy: -1.0, health: -10.0 }, Orbs { energy: -2.0, ..orbs }, Orbs { health: -20.0, ..orbs }]));
        let req = Requirement::And(vec![Requirement::Or(vec![a.clone(), d.clone()]), Requirement::Or(vec![b.clone(), c.clone()])]);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs { energy: -1.0, health: -10.0 }]));
        player.grant(Item::Resource(Resource::Energy), 8);
        player.grant(Item::Resource(Resource::Health), 8);
        let req = Requirement::And(vec![Requirement::Or(vec![a.clone(), d.clone()]), Requirement::Or(vec![b.clone(), c.clone()]), Requirement::Or(vec![a.clone(), d.clone()]), Requirement::Or(vec![b.clone(), c.clone()])]);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs { energy: -6.0, ..orbs }, Orbs { energy: -4.0, health: -10.0 }, Orbs { health: -60.0, ..orbs }, Orbs { energy: -1.0, health: -40.0 }, Orbs { energy: -2.0, health: -20.0 }]));
        let req = Requirement::Or(vec![Requirement::Free, b.clone()]);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Default::default()]));
        let req = Requirement::Or(vec![b.clone(), Requirement::Free]);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Default::default()]));

        player = Player {
            unsafe_paths: true,
            ..Default::default()
        };
        player.grant(Item::Resource(Resource::Health), 7);
        player.grant(Item::Resource(Resource::Energy), 2);
        let req = Requirement::And(vec![Requirement::Damage(30.0), Requirement::Damage(30.0)]);
        assert!(req.is_met(&player, &player.max_orbs()).is_none());
        player.grant(Item::Skill(Skill::Regenerate), 1);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs { energy: -1.0, health: -30.0 }]));

        let req = Requirement::Or(vec![Requirement::Damage(10.0), Requirement::EnergySkill(Skill::Blaze, 1.0)]);
        let req = Requirement::And(vec![req.clone(), req.clone()]);
        player.grant(Item::Skill(Skill::Blaze), 1);
        player.grant(Item::Resource(Resource::Energy), 2);
        assert_eq!(req.is_met(&player, &player.max_orbs()), Some(vec![Orbs { health: -20.0, ..orbs }, Orbs { health: -10.0, energy: -1.0 }, Orbs { energy: -2.0, ..orbs }]));
    }
}
