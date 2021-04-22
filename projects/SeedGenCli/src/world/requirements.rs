use std::convert::TryFrom;

use rustc_hash::FxHashSet;

use super::player::Player;
use crate::inventory::{Inventory, Item};
use crate::util::{Resource, Skill, Shard, Teleporter, Enemy, orbs::{self, Orbs}};

#[derive(Debug, Clone)]
pub enum Requirement {
    Free,
    Impossible,
    Skill(Skill),
    EnergySkill(Skill, f32),
    SpiritLight(u16),
    Resource(Resource, u16),
    Shard(Shard),
    Teleporter(Teleporter),
    Water,
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
    fn cost_is_met(cost: f32, player: &Player, orbs: Orbs) -> Option<Vec<Orbs>> {
        if orbs.energy >= cost { Some(vec![
            Orbs {
                energy: -cost,
                ..Orbs::default()
            }
        ])} else if player.unsafe_paths && player.inventory.has(&Item::Shard(Shard::LifePact), 1) && orbs.energy + orbs.health >= cost { Some(vec![
            Orbs {
                health: cost - orbs.energy,
                energy: -orbs.energy,
            }
        ])} else { None }
    }

    pub fn is_met(&self, player: &Player, states: &FxHashSet<usize>, orbs: Orbs) -> Option<Vec<Orbs>> {
        match self {
            Requirement::Free => return Some(vec![Orbs::default()]),
            Requirement::Impossible => return None,
            Requirement::Skill(skill) =>
                if player.inventory.has(&Item::Skill(*skill), 1) { return Some(vec![Orbs::default()]); },
            Requirement::EnergySkill(skill, amount) =>
                if player.inventory.has(&Item::Skill(*skill), 1) {
                    let cost = player.use_cost(*skill) * *amount;
                    return Requirement::cost_is_met(cost, player, orbs);
                }
            Requirement::SpiritLight(amount) =>
                if player.inventory.has(&Item::SpiritLight(1), *amount) { return Some(vec![Orbs::default()]); },
            Requirement::Resource(resource, amount) =>
                if player.inventory.has(&Item::Resource(*resource), *amount) { return Some(vec![Orbs::default()]); },
            Requirement::Shard(shard) =>
                if player.inventory.has(&Item::Shard(*shard), 1) { return Some(vec![Orbs::default()]); },
            Requirement::Teleporter(teleporter) =>
                if player.inventory.has(&Item::Teleporter(*teleporter), 1) { return Some(vec![Orbs::default()]); },
            Requirement::Water =>
                if player.inventory.has(&Item::Water, 1) { return Some(vec![Orbs::default()]); },
            Requirement::State(state) =>
                if states.contains(state) { return Some(vec![Orbs::default()]); },
            Requirement::Damage(amount) => {
                let cost = *amount * player.defense_mod();
                if orbs.health >= cost { return Some(vec![
                    Orbs {
                        health: -cost,
                        ..Orbs::default()
                    }
                ])}
                else if player.inventory.has(&Item::Skill(Skill::Regenerate), 1) {
                    let max_health = player.max_health();
                    if max_health >= cost {
                        let regens = ((cost - orbs.health) / 30.0).ceil();
                        let max_heal = max_health - orbs.health;
                        if orbs.energy >= regens { return Some(vec![
                            Orbs {
                                health: max_heal.min(-cost + 30.0 * regens),
                                energy: -regens,
                            }
                        ])}
                    }
                }
            },
            Requirement::Danger(amount) => {
                let cost = *amount * player.defense_mod();
                if orbs.health >= cost {
                    return Some(vec![Orbs::default()]);
                }
                else if player.inventory.has(&Item::Skill(Skill::Regenerate), 1) {
                    let max_health = player.max_health();
                    if max_health >= cost {
                        let regens = ((cost - orbs.health) / 30.0).ceil();
                        let max_heal = max_health - orbs.health;
                        if orbs.energy >= regens { return Some(vec![
                            Orbs {
                                health: max_heal.min(30.0 * regens),
                                energy: -regens,
                            }
                        ])}
                    }
                }
            },
            Requirement::BreakWall(health) =>
                if let Some(weapon) = player.preferred_weapon(true) {
                    let cost = player.destroy_cost(*health, weapon, false);
                    return Requirement::cost_is_met(cost, player, orbs);
                }
            Requirement::Boss(health) =>
                // TODO rock boss is flying, just placing a todo in case rock boss will be logic relevant someday
                if let Some(weapon) = player.preferred_weapon(false) {
                    let cost = player.destroy_cost(*health, weapon, false);
                    return Requirement::cost_is_met(cost, player, orbs);
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
                            energy = player.max_energy().min(energy + f32::from(*amount));
                            continue;
                        }

                        if enemy.aerial() { aerial = true; }
                        if enemy.dangerous() { dangerous = true; }
                        if let Enemy::Bat = enemy {
                            if !is_unsafe && !player.inventory.has(&Item::Skill(Skill::Bash), 1) { return None; }
                        }
                        if let Enemy::Sandworm = enemy {
                            if player.inventory.has(&Item::Skill(Skill::Burrow), 1) { continue; }
                            else if !is_unsafe { return None; }
                        }

                        if enemy.shielded() {
                            if player.inventory.has(&Item::Skill(Skill::Hammer), 1) || player.inventory.has(&Item::Skill(Skill::Launch), 1) {}
                            else if player.inventory.has(&Item::Skill(Skill::Grenade), 1) { energy -= player.use_cost(Skill::Grenade) * f32::from(*amount); }
                            else if player.inventory.has(&Item::Skill(Skill::Spear), 1) { energy -= player.use_cost(Skill::Spear) * f32::from(*amount); }
                            else { return None; }
                        }
                        let armor_mod = if enemy.armored() && !is_unsafe { 2.0 } else { 1.0 };

                        let ranged = enemy.ranged();
                        if ranged && ranged_weapon.is_none() { return None; }
                        let used_weapon = if ranged { ranged_weapon.unwrap() } else { weapon };

                        let flying = matches!(enemy, Enemy::Skeeto | Enemy::SmallSkeeto | Enemy::Bee);

                        energy -= player.destroy_cost(enemy.health(), used_weapon, flying) * f32::from(*amount) * armor_mod;
                    }

                    if !is_unsafe && aerial && !(
                        player.inventory.has(&Item::Skill(Skill::DoubleJump), 1) ||
                        player.inventory.has(&Item::Skill(Skill::Launch), 1) ||
                        player.gorlek_paths && player.inventory.has(&Item::Skill(Skill::Bash), 1)
                    ) { return None; }
                    if !is_unsafe && dangerous && !(
                        player.inventory.has(&Item::Skill(Skill::DoubleJump), 1) ||
                        player.inventory.has(&Item::Skill(Skill::Dash), 1) ||
                        player.inventory.has(&Item::Skill(Skill::Bash), 1) ||
                        player.inventory.has(&Item::Skill(Skill::Launch), 1)
                    ) { return None; }

                    let cost = orbs.energy - energy;
                    return Requirement::cost_is_met(cost, player, orbs);
                }
            },
            Requirement::ShurikenBreak(health) =>
                if player.inventory.has(&Item::Skill(Skill::Shuriken), 1) {
                    let clip_mod = if player.unsafe_paths { 2.0 } else { 3.0 };
                    let cost = player.destroy_cost(*health, Skill::Shuriken, false) * clip_mod;
                    return Requirement::cost_is_met(cost, player, orbs);
                }
            Requirement::And(ands) => {
                let mut best_orbs = vec![orbs];

                for and in ands {
                    let mut orbcosts = Vec::<Orbs>::new();
                    let mut met = false;

                    for orbs in &best_orbs {
                        if let Some(mut orbcost) = and.is_met(player, states, *orbs) {
                            orbcosts.append(&mut orbcost);
                            met = true;
                        }
                    }
                    if !met { return None; }

                    best_orbs = orbs::both(&best_orbs, &orbcosts);
                    best_orbs.retain(|orbs| orbs.health >= 0.0 && orbs.energy >= 0.0);
                }

                let cost = orbs::both_single(&best_orbs, Orbs { health: -orbs.health, energy: -orbs.energy });
                return Some(cost);
            },
            Requirement::Or(ors) => {
                let mut cheapest = Vec::<Orbs>::new();

                for or in ors {
                    if let Some(orbcost) = or.is_met(player, states, orbs) {
                        if cheapest.is_empty() {
                            cheapest = orbcost;
                        } else {
                            cheapest = orbs::either(&cheapest, &orbcost);
                        }
                        if cheapest[0] == Orbs::default() {
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

    fn needed_for_cost(cost: f32, player: &Player) -> Vec<(Inventory, Orbs)> {
        let mut itemsets = vec![(Inventory::default(), Orbs{ energy: -cost, ..Orbs::default() })];

        if player.unsafe_paths && cost > 0.0 {
            itemsets.push((Inventory::from(Item::Shard(Shard::Overcharge)), Orbs{ energy: -cost / 2.0, ..Orbs::default() }));
        }

        itemsets
    }
    fn needed_for_damage(amount: f32, player: &Player) -> Vec<(Inventory, Orbs)> {
        #[allow(clippy::cast_possible_truncation)]
        let needed_health_fragments = u16::try_from((amount / 5.0).ceil() as i32).unwrap();

        let mut inventory = Inventory::default();
        if needed_health_fragments > 0 {
            inventory.grant(Item::Resource(Resource::Health), needed_health_fragments);
        }

        let mut itemsets = vec![(inventory, Orbs { health: -amount, ..Orbs::default() })];

        #[allow(clippy::cast_possible_truncation)]
        let max_regens = usize::try_from((amount / 30.0).ceil() as i32).unwrap();
        for regens in 1..=max_regens {
            #[allow(clippy::cast_precision_loss)]
            let regens = regens as f32;
            let health = 0_f32.min(regens * 30.0 - amount);

            let mut regen_sets = Requirement::needed_for_cost(regens, player);
            for (inventory, orbs) in &mut regen_sets {
                inventory.grant(Item::Skill(Skill::Regenerate), 1);
                orbs.health = health;
                if needed_health_fragments > 0 {
                    inventory.grant(Item::Resource(Resource::Health), needed_health_fragments);
                }
            }
            itemsets.append(&mut regen_sets);
        }

        itemsets
    }
    // TODO damage buff progression?
    fn needed_for_weapon(weapon: Skill, cost: f32, player: &Player) -> Vec<(Inventory, Orbs)> {
        let mut itemsets = Requirement::needed_for_cost(cost, player);

        for (inventory, _) in &mut itemsets {
            inventory.grant(Item::Skill(weapon), 1)
        }

        itemsets
    }

    pub fn items_needed(&self, player: &Player, states: &FxHashSet<usize>) -> Vec<(Inventory, Orbs)> {
        match self {
            Requirement::Free => vec![(Inventory::default(), Orbs::default())],
            Requirement::Impossible => vec![],
            Requirement::Skill(skill) => vec![(Inventory::from(Item::Skill(*skill)), Orbs::default())],
            Requirement::EnergySkill(skill, amount) => {
                let cost = player.use_cost(*skill) * *amount;
                let mut itemsets = Requirement::needed_for_cost(cost, player);
                for (inventory, _) in &mut itemsets {
                    inventory.grant(Item::Skill(*skill), 1);
                }

                itemsets
            },
            Requirement::SpiritLight(amount) => vec![(Inventory::from((Item::SpiritLight(1), *amount)), Orbs::default())],
            Requirement::Resource(resource, amount) => vec![(Inventory::from((Item::Resource(*resource), *amount)), Orbs::default())],
            Requirement::Shard(shard) => vec![(Inventory::from(Item::Shard(*shard)), Orbs::default())],
            Requirement::Teleporter(teleporter) => vec![(Inventory::from(Item::Teleporter(*teleporter)), Orbs::default())],
            Requirement::Water => vec![(Inventory::from(Item::Water), Orbs::default())],
            Requirement::State(state) =>
                if states.contains(state) { vec![(Inventory::default(), Orbs::default())] } else { vec![] },
            Requirement::Damage(amount) | Requirement::Danger(amount) => {
                let mut itemsets = Vec::new();

                let cost = *amount * player.defense_mod();

                itemsets.append(&mut Requirement::needed_for_damage(cost, player));

                if player.gorlek_paths {
                    let resilience_cost = cost * 0.9;

                    let mut resilience_sets = Requirement::needed_for_damage(resilience_cost, player);
                    for (inventory, _) in &mut resilience_sets {
                        inventory.grant(Item::Shard(Shard::Resilience), 1);
                    }

                    itemsets.append(&mut resilience_sets);
                }

                itemsets
            },
            Requirement::BreakWall(health) => {
                // TODO damage buff progressions
                let mut itemsets = Vec::new();

                for weapon in player.progression_weapons(true) {
                    let cost = player.destroy_cost(*health, weapon, false);
                    itemsets.append(&mut Requirement::needed_for_weapon(weapon, cost, player));
                }

                itemsets
            },
            Requirement::Boss(health) => {
                let mut itemsets = Vec::new();

                for weapon in player.progression_weapons(false) {
                    let cost = player.destroy_cost(*health, weapon, false);
                    itemsets.append(&mut Requirement::needed_for_weapon(weapon, cost, player));
                }

                itemsets
            },
            Requirement::ShurikenBreak(health) => {
                let clip_mod = if player.unsafe_paths { 2.0 } else { 3.0 };
                let cost = player.destroy_cost(*health, Skill::Shuriken, false) * clip_mod;
                Requirement::needed_for_weapon(Skill::Shuriken, cost, player)
            },
            Requirement::Combat(_) => vec![(
                Inventory::from(vec![
                    Item::Skill(Skill::Hammer),
                    Item::Skill(Skill::Bow),
                    Item::Skill(Skill::Launch),
                    Item::Skill(Skill::Burrow),
                    Item::Skill(Skill::Bash),
                ]),
                Orbs { energy: -12.0, ..Orbs::default()},
            )], // TODO sigh
            Requirement::And(ands) => {
                let mut tail = ands.iter().map(|and| and.items_needed(player, states));
                let head = tail.next().unwrap_or_default();
                tail.fold(head, |acc, next| {
                    let mut combined = Vec::default();
                    for (left_inventory, left_orbs) in acc {
                        for (right_inventory, right_orbs) in &next {
                            let inventory = left_inventory.merge(right_inventory);
                            let orbs = left_orbs + *right_orbs;
                            combined.push((inventory, orbs));
                        }
                    };
                    combined
                })
            }
            Requirement::Or(ors) => {
                ors.iter()
                    .flat_map(|or| or.items_needed(player, states))
                    .collect()
            },
        }
    }

    pub fn contained_states(&self) -> Vec<usize> {
        match self {
            Requirement::State(state) => vec![*state],
            Requirement::And(ands) => ands.iter().flat_map(Requirement::contained_states).collect(),
            Requirement::Or(ors) => ors.iter().flat_map(Requirement::contained_states).collect(),
            _ => vec![],
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::util::settings::Settings;

    #[test]
    fn is_met() {
        let mut player = Player::default();
        let mut states = FxHashSet::default();
        let orbs = Orbs::default();

        let req = Requirement::Skill(Skill::Blaze);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Skill(Skill::Blaze), 1);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_some());

        let req = Requirement::And(vec![req, Requirement::Free]);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_some());
        let req = Requirement::Or(vec![req, Requirement::Impossible]);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_some());

        let req = Requirement::EnergySkill(Skill::Blaze, 1.0);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy), 2);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.unsafe_paths = true;
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -1.0, ..orbs }]));
        player.unsafe_paths = false;
        player.inventory.grant(Item::Resource(Resource::Energy), 2);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -2.0, ..orbs }]));

        let req = Requirement::State(34);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        states.insert(34);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_some());
        let req = Requirement::State(33);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());

        let req = Requirement::Damage(30.0);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Health), 5);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Health), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { health: -30.0, ..orbs }]));
        let req = Requirement::Damage(60.0);
        player.inventory.grant(Item::Resource(Resource::Energy), 2);
        player.inventory.grant(Item::Skill(Skill::Regenerate), 1);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Health), 6);
        assert_eq!(req.is_met(&player, &states, Orbs { health: 30.0, energy: player.max_energy() }), Some(vec![Orbs { health: -30.0, energy: -1.0 }]));
        let req = Requirement::Danger(30.0);
        assert_eq!(req.is_met(&player, &states, Orbs { health: 30.0, energy: player.max_energy() }), Some(vec![Orbs { ..orbs }]));
        let req = Requirement::Danger(60.0);
        assert_eq!(req.is_met(&player, &states, Orbs { health: 30.0, energy: player.max_energy() }), Some(vec![Orbs { health: 30.0, energy: -1.0 }]));

        player = Player::default();
        let req = Requirement::BreakWall(12.0);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Skill(Skill::Sword), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { ..orbs }]));
        player = Player::default();
        player.inventory.grant(Item::Skill(Skill::Grenade), 1);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy), 3);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -2.0, ..orbs }]));
        player = Player::default();
        let req = Requirement::BreakWall(16.0);
        player.inventory.grant(Item::Skill(Skill::Grenade), 1);
        player.inventory.grant(Item::Resource(Resource::Energy), 2);
        player.unsafe_paths = true;
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -1.0, ..orbs }]));
        player.unsafe_paths = false;
        player.inventory.grant(Item::Resource(Resource::Energy), 2);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());

        player = Player::default();
        let req = Requirement::ShurikenBreak(12.0);
        player.inventory.grant(Item::Skill(Skill::Shuriken), 1);
        player.unsafe_paths = true;
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy), 4);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -2.0, ..orbs }]));
        player.inventory.grant(Item::Resource(Resource::Energy), 6);
        player.unsafe_paths = false;
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy), 2);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -6.0, ..orbs }]));

        player = Player::default();
        let req = Requirement::Combat(vec![(Enemy::Slug, 2), (Enemy::Skeeto, 1)]);
        player.inventory.grant(Item::Skill(Skill::Bow), 1);
        player.unsafe_paths = true;
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy), 7);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -3.25, ..orbs }]));
        player.inventory.grant(Item::Resource(Resource::Energy), 6);
        player.unsafe_paths = false;
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Skill(Skill::DoubleJump), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -6.5, ..orbs }]));
        player = Player::default();
        let req = Requirement::Combat(vec![(Enemy::Sandworm, 1), (Enemy::Bat, 1), (Enemy::EnergyRefill, 99), (Enemy::ShieldMiner, 2), (Enemy::EnergyRefill, 1), (Enemy::Balloon, 4)]);
        player.inventory.grant(Item::Skill(Skill::Shuriken), 1);
        player.inventory.grant(Item::Skill(Skill::Spear), 1);
        player.inventory.grant(Item::Resource(Resource::Energy), 27);
        player.gorlek_paths = true;
        player.unsafe_paths = true;
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -14.0, ..orbs }]));
        player.inventory.grant(Item::Resource(Resource::Energy), 37);
        player.inventory.grant(Item::Skill(Skill::Bash), 1);
        player.inventory.grant(Item::Skill(Skill::Launch), 1);
        player.inventory.grant(Item::Skill(Skill::Burrow), 1);
        player.gorlek_paths = false;
        player.unsafe_paths = false;
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -33.0, ..orbs }]));
        player = Player::default();
        let req = Requirement::Combat(vec![(Enemy::Tentacle, 1)]);
        player.inventory.grant(Item::Skill(Skill::Spear), 1);
        player.inventory.grant(Item::Skill(Skill::DoubleJump), 1);
        player.inventory.grant(Item::Resource(Resource::Energy), 4);
        player.gorlek_paths = true;
        player.unsafe_paths = true;
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -2.0, ..orbs }]));
        player.gorlek_paths = false;
        player.unsafe_paths = false;
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy), 11);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -8.0, ..orbs }]));

        player = Player::default();
        let a = Requirement::EnergySkill(Skill::Blaze, 2.0);
        let b = Requirement::Damage(20.0);
        let c = Requirement::EnergySkill(Skill::Blaze, 1.0);
        let d = Requirement::Damage(10.0);
        player.inventory.grant(Item::Skill(Skill::Blaze), 1);
        player.inventory.grant(Item::Resource(Resource::Energy), 4);
        player.inventory.grant(Item::Resource(Resource::Health), 4);
        let req = Requirement::And(vec![c.clone(), d.clone()]);
        player.unsafe_paths = true;
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { health: -10.0, energy: -1.0 }]));
        let req = Requirement::Or(vec![a.clone(), b.clone()]);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -2.0, ..orbs }, Orbs { health: -20.0, ..orbs }]));
        let req = Requirement::Or(vec![Requirement::And(vec![a.clone(), b.clone()]), Requirement::And(vec![c.clone(), d.clone()]), a.clone(), b.clone()]);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -1.0, health: -10.0 }, Orbs { energy: -2.0, ..orbs }, Orbs { health: -20.0, ..orbs }]));
        let req = Requirement::And(vec![Requirement::Or(vec![a.clone(), d.clone()]), Requirement::Or(vec![b.clone(), c.clone()])]);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -1.0, health: -10.0 }]));
        player.inventory.grant(Item::Resource(Resource::Energy), 8);
        player.inventory.grant(Item::Resource(Resource::Health), 8);
        let req = Requirement::And(vec![Requirement::Or(vec![a.clone(), d.clone()]), Requirement::Or(vec![b.clone(), c.clone()]), Requirement::Or(vec![a.clone(), d.clone()]), Requirement::Or(vec![b.clone(), c.clone()])]);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -6.0, ..orbs }, Orbs { energy: -4.0, health: -10.0 }, Orbs { health: -60.0, ..orbs }, Orbs { energy: -1.0, health: -40.0 }, Orbs { energy: -2.0, health: -20.0 }]));
        let req = Requirement::Or(vec![Requirement::Free, b.clone()]);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs::default()]));
        let req = Requirement::Or(vec![b.clone(), Requirement::Free]);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs::default()]));

        player = Player {
            unsafe_paths: true,
            ..Player::default()
        };
        player.inventory.grant(Item::Resource(Resource::Health), 7);
        player.inventory.grant(Item::Resource(Resource::Energy), 2);
        let req = Requirement::And(vec![Requirement::Damage(30.0), Requirement::Damage(30.0)]);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Skill(Skill::Regenerate), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -1.0, health: -30.0 }]));

        let req = Requirement::Or(vec![Requirement::Damage(10.0), Requirement::EnergySkill(Skill::Blaze, 1.0)]);
        let req = Requirement::And(vec![req.clone(), req.clone()]);
        player.inventory.grant(Item::Skill(Skill::Blaze), 1);
        player.inventory.grant(Item::Resource(Resource::Energy), 2);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { health: -20.0, ..orbs }, Orbs { health: -10.0, energy: -1.0 }, Orbs { energy: -2.0, ..orbs }]));
    }

    #[test]
    fn items_needed() {
        let mut player = Player::default();
        player.spawn(&Settings::default());
        let states = FxHashSet::default();
        let orbs = Orbs::default();

        let req = Requirement::Free;
        assert_eq!(req.items_needed(&player, &states), vec![(Inventory::default(), orbs)]);
        let req = Requirement::Impossible;
        assert_eq!(req.items_needed(&player, &states), vec![]);
        let req = Requirement::Or(vec![Requirement::Free, Requirement::Impossible]);
        assert_eq!(req.items_needed(&player, &states), vec![(Inventory::default(), orbs)]);
        let req = Requirement::And(vec![Requirement::Free, Requirement::Impossible]);
        assert_eq!(req.items_needed(&player, &states), vec![]);

        let req = Requirement::Skill(Skill::Dash);
        assert_eq!(req.items_needed(&player, &states), vec![(Inventory::from(Item::Skill(Skill::Dash)), orbs)]);
        let req = Requirement::Or(vec![Requirement::Skill(Skill::Dash), Requirement::Skill(Skill::Bash)]);
        assert_eq!(req.items_needed(&player, &states), vec![(Inventory::from(Item::Skill(Skill::Dash)), orbs), (Inventory::from(Item::Skill(Skill::Bash)), orbs)]);
        let req = Requirement::And(vec![Requirement::Skill(Skill::Dash), Requirement::Skill(Skill::Bash)]);
        assert_eq!(req.items_needed(&player, &states), vec![(Inventory::from(vec![Item::Skill(Skill::Dash), Item::Skill(Skill::Bash)]), orbs)]);

        let req = Requirement::EnergySkill(Skill::Grenade, 2.0);
        assert_eq!(req.items_needed(&player, &states), vec![(Inventory::from(Item::Skill(Skill::Grenade)), Orbs { energy: -4.0, ..orbs })]);
        player.unsafe_paths = true;
        assert_eq!(req.items_needed(&player, &states), vec![
            (Inventory::from(Item::Skill(Skill::Grenade)), Orbs { energy: -2.0, ..orbs }),
            (Inventory::from(vec![Item::Skill(Skill::Grenade), Item::Shard(Shard::Overcharge)]), Orbs { energy: -1.0, ..orbs }),
        ]);
        player.unsafe_paths = false;

        let req = Requirement::Resource(Resource::ShardSlot, 3);
        assert_eq!(req.items_needed(&player, &states), vec![(Inventory::from((Item::Resource(Resource::ShardSlot), 3)), orbs)]);
        let req = Requirement::Shard(Shard::Overflow);
        assert_eq!(req.items_needed(&player, &states), vec![(Inventory::from(Item::Shard(Shard::Overflow)), orbs)]);
        let req = Requirement::Teleporter(Teleporter::Glades);
        assert_eq!(req.items_needed(&player, &states), vec![(Inventory::from(Item::Teleporter(Teleporter::Glades)), orbs)]);
        let req = Requirement::Water;
        assert_eq!(req.items_needed(&player, &states), vec![(Inventory::from(Item::Water), orbs)]);

        let req = Requirement::Damage(36.0);
        assert_eq!(req.items_needed(&player, &states), vec![
            (Inventory::from((Item::Resource(Resource::Health), 8)), Orbs { health: -36.0, ..orbs }),
            (Inventory::from(vec![(Item::Resource(Resource::Health), 8), (Item::Skill(Skill::Regenerate), 1)]), Orbs { health: -6.0, energy: -1.0 }),
            (Inventory::from(vec![(Item::Resource(Resource::Health), 8), (Item::Skill(Skill::Regenerate), 1)]), Orbs { energy: -2.0, ..orbs }),
        ]);
        player.gorlek_paths = true;
        assert_eq!(req.items_needed(&player, &states), vec![
            (Inventory::from((Item::Resource(Resource::Health), 8)), Orbs { health: -36.0, ..orbs }),
            (Inventory::from(vec![(Item::Resource(Resource::Health), 8), (Item::Skill(Skill::Regenerate), 1)]), Orbs { health: -6.0, energy: -1.0 }),
            (Inventory::from(vec![(Item::Resource(Resource::Health), 8), (Item::Skill(Skill::Regenerate), 1)]), Orbs { energy: -2.0, ..orbs }),
            (Inventory::from(vec![(Item::Resource(Resource::Health), 7), (Item::Shard(Shard::Resilience), 1)]), Orbs { health: -36.0 * 0.9, ..orbs }),
            (Inventory::from(vec![(Item::Resource(Resource::Health), 7), (Item::Skill(Skill::Regenerate), 1), (Item::Shard(Shard::Resilience), 1)]), Orbs { health: (-36.0 * 0.9) + 30.0, energy: -1.0 }),
            (Inventory::from(vec![(Item::Resource(Resource::Health), 7), (Item::Skill(Skill::Regenerate), 1), (Item::Shard(Shard::Resilience), 1)]), Orbs { energy: -2.0, ..orbs }),
        ]);
        player.gorlek_paths = false;

        let req = Requirement::BreakWall(12.0);
        assert_eq!(req.items_needed(&player, &states), vec![
            (Inventory::from(Item::Skill(Skill::Sword)), orbs),
            (Inventory::from(Item::Skill(Skill::Hammer)), orbs),
            (Inventory::from(Item::Skill(Skill::Bow)), Orbs { energy: -1.5, ..orbs }),
            (Inventory::from(Item::Skill(Skill::Shuriken)), Orbs { energy: -2.0, ..orbs }),
            (Inventory::from(Item::Skill(Skill::Blaze)), Orbs { energy: -2.0, ..orbs }),
            (Inventory::from(Item::Skill(Skill::Grenade)), Orbs { energy: -2.0, ..orbs }),
            (Inventory::from(Item::Skill(Skill::Spear)), Orbs { energy: -4.0, ..orbs }),
        ]);
        player.unsafe_paths = true;
        assert_eq!(req.items_needed(&player, &states), vec![
            (Inventory::from(Item::Skill(Skill::Sword)), orbs),
            (Inventory::from(Item::Skill(Skill::Hammer)), orbs),
            (Inventory::from(Item::Skill(Skill::Bow)), Orbs { energy: -0.75, ..orbs }),
            (Inventory::from(vec![Item::Skill(Skill::Bow), Item::Shard(Shard::Overcharge)]), Orbs { energy: -0.75 * 0.5, ..orbs }),
            (Inventory::from(Item::Skill(Skill::Grenade)), Orbs { energy: -1.0, ..orbs }),
            (Inventory::from(vec![Item::Skill(Skill::Grenade), Item::Shard(Shard::Overcharge)]), Orbs { energy: -0.5, ..orbs }),
            (Inventory::from(Item::Skill(Skill::Shuriken)), Orbs { energy: -1.0, ..orbs }),
            (Inventory::from(vec![Item::Skill(Skill::Shuriken), Item::Shard(Shard::Overcharge)]), Orbs { energy: -0.5, ..orbs }),
            (Inventory::from(Item::Skill(Skill::Blaze)), Orbs { energy: -1.0, ..orbs }),
            (Inventory::from(vec![Item::Skill(Skill::Blaze), Item::Shard(Shard::Overcharge)]), Orbs { energy: -0.5, ..orbs }),
            (Inventory::from(Item::Skill(Skill::Sentry)), Orbs { energy: -1.0, ..orbs }),
            (Inventory::from(vec![Item::Skill(Skill::Sentry), Item::Shard(Shard::Overcharge)]), Orbs { energy: -0.5, ..orbs }),
            (Inventory::from(Item::Skill(Skill::Spear)), Orbs { energy: -2.0, ..orbs }),
            (Inventory::from(vec![Item::Skill(Skill::Spear), Item::Shard(Shard::Overcharge)]), Orbs { energy: -1.0, ..orbs }),
        ]);
    }
}
