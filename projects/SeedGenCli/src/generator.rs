use std::fmt;

use rand::seq::IteratorRandom;
use rand_pcg::Pcg32;

use crate::world::{World, Node, UberState, UberIdentifier};
use crate::inventory::Item;
use crate::util::settings::{Settings, Spawn};

#[derive(Debug)]
pub struct Placement {
    pub uber_state: UberState,
    pub pickup: Item,
}
impl fmt::Display for Placement {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}|{}", self.uber_state, self.pickup)
    }
}

// TODO: this is a placeholder
pub fn generate_placements<'a>(mut world: World<'a>, spawn: &str, settings: &'a Settings, rng: &mut Pcg32, verbose: bool) -> Result<Vec<Placement>, String> {
    let mut placements = Vec::<Placement>::with_capacity(world.pool.inventory.len());

    let spawn_state = UberState {
        identifier: UberIdentifier {
            uber_group: 3,
            uber_id: 0,
        },
        value: String::new(),
    };

    world.collect_preplacements(&[&spawn_state], verbose);

    if !matches!(settings.spawn_loc, Spawn::Set(_)) {
        for _ in 0..3 {
            let item = if let Some(pickup) = world.pool.inventory.keys().choose(rng) {
                if verbose { eprintln!("Placing {} on spawn", pickup); }
                placements.push(Placement {
                    uber_state: spawn_state.clone(),
                    pickup: pickup.clone(),
                });
                pickup.clone()
            } else {
                break;
            };
            world.grant_player(item, 1, verbose);
        }
    }

    while !world.pool.inventory.is_empty() {
        let mut items = Vec::new();

        let reachable = world.graph.reached_locations(&world.player, spawn, &world.uber_states)?;
        let reachable = reachable.iter().filter(|&&node| {
            if let Some(uber_state) = node.uber_state() {
                !placements.iter().any(|placement| &placement.uber_state == uber_state)
            } else { false }
        });
        if verbose { eprintln!("Locations in reach: {:?}", reachable.clone().map(|node| node.identifier()).collect::<Vec<_>>()); }

        let (preplaced, needs_placement): (Vec<&Node>, Vec<_>) = reachable.partition(|&&node| world.preplacements.contains_key(&node.uber_state().unwrap()));

        let preplaced: Vec<_> = preplaced.iter().map(|&node| node.uber_state().unwrap()).collect();

        world.collect_preplacements(&preplaced, verbose);

        let needs_placement = needs_placement.iter().filter_map(|node| match node {
            Node::Pickup(pickup) => Some(&pickup.uber_state),
            Node::Quest(quest) => Some(&quest.uber_state),
            _ => None,
        });

        let mut failed = true;
        let mut done = false;

        for uber_state in needs_placement {
            failed = false;
            if let Some(item) = world.pool.inventory.keys().choose(rng) {
                if verbose { eprintln!("Placing {} on {}", item, uber_state); }
                placements.push(Placement {
                    uber_state: uber_state.clone(),
                    pickup: item.clone(),
                });
                items.push(item.clone());
            } else {
                done = true;
                break;
            }
        }

        for item in items {
            world.grant_player(item, 1, verbose);
        }

        if failed {
            return Err(String::from("Failed to place all pickups"));
        }
        if done {
            break;
        }
    }

    Ok(placements)
}
