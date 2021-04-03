use rustc_hash::FxHashSet;

use crate::player::Player;
use crate::inventory::{Inventory, Item};
use crate::util::orbs::{Orbs, either_orbs, both_orbs, both_single_orbs};
use crate::util::{Resource, Skill, Shard, Teleporter, Enemy};

#[derive(Debug, Clone)]
pub enum Requirement {
    Free,
    Impossible,
    Skill(Skill),
    EnergySkill(Skill, f32),
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
    fn cost_is_met(&self, cost: f32, player: &Player, orbs: Orbs) -> Option<Vec<Orbs>> {
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
                    return self.cost_is_met(cost, player, orbs);
                }
            Requirement::Resource(resource, amount) =>
                if player.inventory.has(&Item::Resource(*resource, 1), *amount) { return Some(vec![Orbs::default()]); },
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
                ])} else if player.inventory.has(&Item::Skill(Skill::Regenerate), 1) {
                    // TODO doesn't this break if the player's max health doesn't support healing enough?
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
                if orbs.health >= cost { return Some(vec![Orbs::default()]); }
                else if player.inventory.has(&Item::Skill(Skill::Regenerate), 1) {
                    let regens = ((cost - orbs.health) / 30.0).ceil();
                    // TODO this seems wrong? if the player has to heal this should be represented
                    if orbs.energy >= 1.0 * regens { return Some(vec![Orbs::default()])}
                }
            },
            Requirement::BreakWall(health) =>
                if let Some(weapon) = player.preferred_weapon(true) {
                    let cost = player.destroy_cost(*health, weapon, false);
                    return self.cost_is_met(cost, player, orbs);
                }
            Requirement::Boss(health) =>
                if let Some(weapon) = player.preferred_weapon(false) {
                    let cost = player.destroy_cost(*health, weapon, false);
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

                        // TODO check what actually counts as airborne
                        let flying = matches!(enemy, Enemy::Skeeto | Enemy::SmallSkeeto | Enemy::Bat | Enemy::Bee);

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
                    return self.cost_is_met(cost, player, orbs);
                }
            },
            Requirement::ShurikenBreak(health) =>
                if player.inventory.has(&Item::Skill(Skill::Shuriken), 1) {
                    let clip_mod = if player.unsafe_paths { 2.0 } else { 3.0 };
                    let cost = player.destroy_cost(*health, Skill::Shuriken, false) * clip_mod;
                    return self.cost_is_met(cost, player, orbs);
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

                    best_orbs = both_orbs(&best_orbs, &orbcosts);
                    best_orbs.retain(|orbs| orbs.health >= 0.0 && orbs.energy >= 0.0);
                }

                let cost = both_single_orbs(&best_orbs, Orbs { health: -orbs.health, energy: -orbs.energy });
                return Some(cost);
            },
            Requirement::Or(ors) => {
                let mut cheapest = Vec::<Orbs>::new();

                for or in ors {
                    if let Some(orbcost) = or.is_met(player, states, orbs) {
                        if cheapest.is_empty() {
                            cheapest = orbcost;
                        } else {
                            cheapest = either_orbs(&cheapest, &orbcost);
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

    fn needed_for_cost(&self, cost: f32, player: &Player) -> Vec<(Inventory, Orbs)> {
        let mut itemsets = Vec::new();
        itemsets.push((Inventory::default(), Orbs{ energy: -cost, ..Orbs::default() }));

        if player.unsafe_paths && cost > 0.0 {
            itemsets.push((Inventory::from(Item::Shard(Shard::Overcharge)), Orbs{ energy: -cost / 2.0, ..Orbs::default() }));
        }

        itemsets
    }
    fn needed_for_damage(&self, amount: f32, player: &Player) -> Vec<(Inventory, Orbs)> {
        let mut itemsets = Vec::new();

        itemsets.push((Inventory::default(), Orbs { health: -amount, ..Orbs::default() }));

        // TODO keep player's max health in mind for heals
        let regen_cost = (amount / 30.0).ceil();

        let mut regen_sets = self.needed_for_cost(regen_cost, player);
        for (inventory, _) in &mut regen_sets {
            inventory.grant(Item::Skill(Skill::Regenerate), 1);
        }
        itemsets.append(&mut regen_sets);

        itemsets
    }
    // TODO damage buff progression?
    fn needed_for_weapon(&self, weapon: Skill, cost: f32, player: &Player) -> Vec<(Inventory, Orbs)> {
        let mut itemsets = self.needed_for_cost(cost, player);

        for (inventory, _) in &mut itemsets {
            inventory.grant(Item::Skill(weapon), 1)
        }

        itemsets
    }

    pub fn items_needed(&self, player: &Player) -> Vec<(Inventory, Orbs)> {
        match self {
            Requirement::Free => vec![(Inventory::default(), Orbs::default())],
            Requirement::Impossible => vec![],
            Requirement::Skill(skill) => vec![(Inventory::from(Item::Skill(*skill)), Orbs::default())],
            Requirement::EnergySkill(skill, amount) => {
                let cost = player.use_cost(*skill) * *amount;
                let mut itemsets = self.needed_for_cost(cost, player);
                for (inventory, _) in &mut itemsets {
                    inventory.grant(Item::Skill(*skill), 1);
                }

                itemsets
            },
            Requirement::Resource(resource, amount) => vec![(Inventory::from((Item::Resource(*resource, 1), *amount)), Orbs::default())],
            Requirement::Shard(shard) => vec![(Inventory::from(Item::Shard(*shard)), Orbs::default())],
            Requirement::Teleporter(teleporter) => vec![(Inventory::from(Item::Teleporter(*teleporter)), Orbs::default())],
            Requirement::Water => vec![(Inventory::from(Item::Water), Orbs::default())],
            Requirement::State(_) => vec![],  // TODO hmmm oriThink
            Requirement::Damage(amount) | Requirement::Danger(amount) => {
                let mut itemsets = Vec::new();

                let cost = *amount * player.defense_mod();

                itemsets.append(&mut self.needed_for_damage(cost, player));

                if player.gorlek_paths {
                    let resilience_cost = cost * 0.9;

                    let mut resilience_sets = self.needed_for_damage(resilience_cost, player);
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
                    itemsets.append(&mut self.needed_for_weapon(weapon, cost, player));
                }

                itemsets
            },
            Requirement::Boss(health) => {
                let mut itemsets = Vec::new();

                for weapon in player.progression_weapons(false) {
                    let cost = player.destroy_cost(*health, weapon, false);
                    itemsets.append(&mut self.needed_for_weapon(weapon, cost, player));
                }

                itemsets
            },
            Requirement::ShurikenBreak(health) => {
                let clip_mod = if player.unsafe_paths { 2.0 } else { 3.0 };
                let cost = player.destroy_cost(*health, Skill::Shuriken, false) * clip_mod;
                self.needed_for_weapon(Skill::Shuriken, cost, player)
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
                let mut tail = ands.iter().map(|and| and.items_needed(player));
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
                    .flat_map(|or| or.items_needed(player))
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
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 2);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.unsafe_paths = true;
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs {energy: -1.0, ..orbs }]));
        player.unsafe_paths = false;
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 2);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs {energy: -2.0, ..orbs }]));

        let req = Requirement::State(34);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        states.insert(34);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_some());
        let req = Requirement::State(33);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());

        let req = Requirement::Damage(30.0);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Health, 1), 5);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Health, 1), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs {health: -30.0, ..orbs }]));

        player = Player::default();
        let req = Requirement::BreakWall(12.0);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Skill(Skill::Sword), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs {..orbs }]));
        player = Player::default();
        player.inventory.grant(Item::Skill(Skill::Grenade), 1);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 3);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs {energy: -2.0, ..orbs }]));
        player = Player::default();
        let req = Requirement::BreakWall(16.0);
        player.inventory.grant(Item::Skill(Skill::Grenade), 1);
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 2);
        player.unsafe_paths = true;
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs {energy: -1.0, ..orbs }]));
        player.unsafe_paths = false;
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 2);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());

        player = Player::default();
        let req = Requirement::ShurikenBreak(12.0);
        player.inventory.grant(Item::Skill(Skill::Shuriken), 1);
        player.unsafe_paths = true;
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 4);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs {energy: -2.0, ..orbs }]));
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 6);
        player.unsafe_paths = false;
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 2);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs {energy: -6.0, ..orbs }]));

        player = Player::default();
        let req = Requirement::Combat(vec![(Enemy::Slug, 2), (Enemy::Skeeto, 1)]);
        player.inventory.grant(Item::Skill(Skill::Bow), 1);
        player.unsafe_paths = true;
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 7);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs {energy: -3.25, ..orbs }]));
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 6);
        player.unsafe_paths = false;
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Skill(Skill::DoubleJump), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs {energy: -6.5, ..orbs }]));
        player = Player::default();
        let req = Requirement::Combat(vec![(Enemy::Sandworm, 1), (Enemy::Bat, 1), (Enemy::EnergyRefill, 99), (Enemy::ShieldMiner, 2), (Enemy::EnergyRefill, 1), (Enemy::Balloon, 4)]);
        player.inventory.grant(Item::Skill(Skill::Shuriken), 1);
        player.inventory.grant(Item::Skill(Skill::Spear), 1);
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 27);
        player.gorlek_paths = true;
        player.unsafe_paths = true;
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs {energy: -14.0, ..orbs }]));
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 37);
        player.inventory.grant(Item::Skill(Skill::Bash), 1);
        player.inventory.grant(Item::Skill(Skill::Launch), 1);
        player.inventory.grant(Item::Skill(Skill::Burrow), 1);
        player.gorlek_paths = false;
        player.unsafe_paths = false;
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs {energy: -33.0, ..orbs }]));
        player = Player::default();
        let req = Requirement::Combat(vec![(Enemy::Tentacle, 1)]);
        player.inventory.grant(Item::Skill(Skill::Spear), 1);
        player.inventory.grant(Item::Skill(Skill::DoubleJump), 1);
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 4);
        player.gorlek_paths = true;
        player.unsafe_paths = true;
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs {energy: -2.0, ..orbs }]));
        player.gorlek_paths = false;
        player.unsafe_paths = false;
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 11);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs {energy: -8.0, ..orbs }]));

        player = Player::default();
        let a = Requirement::EnergySkill(Skill::Blaze, 2.0);
        let b = Requirement::Damage(20.0);
        let c = Requirement::EnergySkill(Skill::Blaze, 1.0);
        let d = Requirement::Damage(10.0);
        player.inventory.grant(Item::Skill(Skill::Blaze), 1);
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 4);
        player.inventory.grant(Item::Resource(Resource::Health, 1), 4);
        let req = Requirement::And(vec![c.clone(), d.clone()]);
        player.unsafe_paths = true;
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { health: -10.0, energy: -1.0 }]));
        let req = Requirement::Or(vec![a.clone(), b.clone()]);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -2.0, ..orbs }, Orbs { health: -20.0, ..orbs }]));
        let req = Requirement::Or(vec![Requirement::And(vec![a.clone(), b.clone()]), Requirement::And(vec![c.clone(), d.clone()]), a.clone(), b.clone()]);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -1.0, health: -10.0 }, Orbs { energy: -2.0, ..orbs }, Orbs { health: -20.0, ..orbs }]));
        let req = Requirement::And(vec![Requirement::Or(vec![a.clone(), d.clone()]), Requirement::Or(vec![b.clone(), c.clone()])]);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -1.0, health: -10.0 }]));
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 8);
        player.inventory.grant(Item::Resource(Resource::Health, 1), 8);
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
        player.inventory.grant(Item::Resource(Resource::Health, 1), 7);
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 2);
        let req = Requirement::And(vec![Requirement::Damage(30.0), Requirement::Damage(30.0)]);
        assert!(req.is_met(&player, &states, player.max_orbs()).is_none());
        player.inventory.grant(Item::Skill(Skill::Regenerate), 1);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { energy: -1.0, health: -30.0 }]));

        let req = Requirement::Or(vec![Requirement::Damage(10.0), Requirement::EnergySkill(Skill::Blaze, 1.0)]);
        let req = Requirement::And(vec![req.clone(), req.clone()]);
        player.inventory.grant(Item::Skill(Skill::Blaze), 1);
        player.inventory.grant(Item::Resource(Resource::Energy, 1), 2);
        assert_eq!(req.is_met(&player, &states, player.max_orbs()), Some(vec![Orbs { health: -20.0, ..orbs }, Orbs { health: -10.0, energy: -1.0 }, Orbs { energy: -2.0, ..orbs }]));
    }

    #[test]
    fn items_needed() {
        let mut player = Player::default();
        let orbs = Orbs::default();

        let req = Requirement::Free;
        assert_eq!(req.items_needed(&player), vec![(Inventory::default(), orbs)]);
        let req = Requirement::Impossible;
        assert_eq!(req.items_needed(&player), vec![]);
        let req = Requirement::Or(vec![Requirement::Free, Requirement::Impossible]);
        assert_eq!(req.items_needed(&player), vec![(Inventory::default(), orbs)]);
        let req = Requirement::And(vec![Requirement::Free, Requirement::Impossible]);
        assert_eq!(req.items_needed(&player), vec![]);

        let req = Requirement::Skill(Skill::Dash);
        assert_eq!(req.items_needed(&player), vec![(Inventory::from(Item::Skill(Skill::Dash)), orbs)]);
        let req = Requirement::Or(vec![Requirement::Skill(Skill::Dash), Requirement::Skill(Skill::Bash)]);
        assert_eq!(req.items_needed(&player), vec![(Inventory::from(Item::Skill(Skill::Dash)), orbs), (Inventory::from(Item::Skill(Skill::Bash)), orbs)]);
        let req = Requirement::And(vec![Requirement::Skill(Skill::Dash), Requirement::Skill(Skill::Bash)]);
        assert_eq!(req.items_needed(&player), vec![(Inventory::from(vec![Item::Skill(Skill::Dash), Item::Skill(Skill::Bash)]), orbs)]);

        let req = Requirement::EnergySkill(Skill::Grenade, 2.0);
        assert_eq!(req.items_needed(&player), vec![(Inventory::from(Item::Skill(Skill::Grenade)), Orbs { energy: -4.0, ..orbs })]);
        player.unsafe_paths = true;
        assert_eq!(req.items_needed(&player), vec![
            (Inventory::from(Item::Skill(Skill::Grenade)), Orbs { energy: -2.0, ..orbs }),
            (Inventory::from(vec![Item::Skill(Skill::Grenade), Item::Shard(Shard::Overcharge)]), Orbs { energy: -1.0, ..orbs }),
        ]);
        player.unsafe_paths = false;

        let req = Requirement::Resource(Resource::ShardSlot, 3);
        assert_eq!(req.items_needed(&player), vec![(Inventory::from((Item::Resource(Resource::ShardSlot, 1), 3)), orbs)]);
        let req = Requirement::Shard(Shard::Overflow);
        assert_eq!(req.items_needed(&player), vec![(Inventory::from(Item::Shard(Shard::Overflow)), orbs)]);
        let req = Requirement::Teleporter(Teleporter::Glades);
        assert_eq!(req.items_needed(&player), vec![(Inventory::from(Item::Teleporter(Teleporter::Glades)), orbs)]);
        let req = Requirement::Water;
        assert_eq!(req.items_needed(&player), vec![(Inventory::from(Item::Water), orbs)]);

        let req = Requirement::Damage(36.0);
        assert_eq!(req.items_needed(&player), vec![
            (Inventory::default(), Orbs { health: -36.0, ..orbs }),
            (Inventory::from(Item::Skill(Skill::Regenerate)), Orbs { energy: -2.0, ..orbs }),
        ]);
        player.gorlek_paths = true;
        assert_eq!(req.items_needed(&player), vec![
            (Inventory::default(), Orbs { health: -36.0, ..orbs }),
            (Inventory::from(Item::Skill(Skill::Regenerate)), Orbs { energy: -2.0, ..orbs }),  // TODO this is expected but actually wrong
            (Inventory::from(Item::Shard(Shard::Resilience)), Orbs { health: -36.0 * 0.9, ..orbs }),
            (Inventory::from(vec![Item::Skill(Skill::Regenerate), Item::Shard(Shard::Resilience)]), Orbs { energy: -2.0, ..orbs }),
        ]);
        player.gorlek_paths = false;

        let req = Requirement::BreakWall(12.0);
        assert_eq!(req.items_needed(&player), vec![
            (Inventory::from(Item::Skill(Skill::Sword)), orbs),
            (Inventory::from(Item::Skill(Skill::Hammer)), orbs),
            (Inventory::from(Item::Skill(Skill::Bow)), Orbs { energy: -1.5, ..orbs }),
            (Inventory::from(Item::Skill(Skill::Shuriken)), Orbs { energy: -2.0, ..orbs }),
            (Inventory::from(Item::Skill(Skill::Blaze)), Orbs { energy: -2.0, ..orbs }),
            (Inventory::from(Item::Skill(Skill::Grenade)), Orbs { energy: -2.0, ..orbs }),
            (Inventory::from(Item::Skill(Skill::Spear)), Orbs { energy: -4.0, ..orbs }),
        ]);
        player.unsafe_paths = true;
        assert_eq!(req.items_needed(&player), vec![
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
