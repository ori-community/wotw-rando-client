use std::fmt;

use rand::seq::SliceRandom;
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
    let mut pickups: Vec<_> = world.pool.inventory.iter().flat_map(|(item, amount)| vec![item; (*amount).into()]).cloned().collect();
    pickups.shuffle(rng);

    let mut placements = Vec::<Placement>::with_capacity(pickups.len());

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
            if let Some(pickup) = pickups.pop() {
                if verbose { eprintln!("Placing {} on spawn", pickup); }
                placements.push(Placement {
                    uber_state: spawn_state.clone(),
                    pickup: pickup.clone(),
                });
                world.grant_player(pickup, 1, verbose);
            } else {
                break;
            }
        }
    }
    while let Some(pickup) = pickups.pop() {
        let reachable = world.graph.reached_locations(&world.player, spawn, &world.uber_states)?;
        let reachable = reachable.iter().filter(|&&node| {
            if let Some(uber_state) = node.uber_state() {
                !placements.iter().any(|placement| &placement.uber_state == uber_state)
            } else { false }
        });
        if verbose { eprintln!("Locations in reach: {:?}", reachable.clone().map(|node| node.identifier()).collect::<Vec<_>>()); }

        let (preplaced, needs_placement): (Vec<&Node>, Vec<_>) = reachable.partition(|&&node| world.preplacements.contains_key(&node.uber_state().unwrap()));

        let preplaced: Vec<_> = preplaced.iter().map(|&node| node.uber_state().unwrap()).collect();
        let needs_placement: Vec<_> = needs_placement.iter().filter_map(|node| match node {
            Node::Pickup(pickup) => Some(&pickup.uber_state),
            Node::Quest(quest) => Some(&quest.uber_state),
            _ => None,
        }).collect();

        world.collect_preplacements(&preplaced, verbose);
        if let Some(&uber_state) = needs_placement.choose(rng) {
            if verbose { eprintln!("Placing {} on {}", pickup, uber_state); }
            placements.push(Placement {
                uber_state: uber_state.clone(),
                pickup: pickup.clone(),
            });
            world.grant_player(pickup, 1, verbose);
        } else {
            return Err(String::from("Failed to place all pickups"));
        }
    }

    Ok(placements)
}
