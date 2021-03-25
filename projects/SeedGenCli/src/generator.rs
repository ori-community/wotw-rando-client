use std::fmt;

use rand::seq::SliceRandom;
use rand_pcg::Pcg32;
use rustc_hash::FxHashMap;

use crate::world::{World, UberState};
use crate::player::Player;
use crate::inventory::{Item, Inventory};
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

fn collect_preplacements(player: &mut Player, preplacements: &FxHashMap<UberState, Inventory>, reached: &[&UberState]) {
    for uber_state in reached {
        let items = &preplacements[uber_state];
        player.inventory.merge(items);
    }
}

// TODO: this is a placeholder
pub fn generate_placements<'a>(mut world: World<'a>, spawn: &str, settings: &'a Settings, rng: &mut Pcg32) -> Result<Vec<Placement>, String> {
    let mut pickups: Vec<_> = world.pool.inventory.iter().flat_map(|(item, amount)| vec![item; (*amount).into()]).cloned().collect();
    pickups.shuffle(rng);

    let mut placements = Vec::<Placement>::with_capacity(pickups.len());

    collect_preplacements(&mut world.player, &world.preplacements, &[&UberState {
        uber_group: 3,
        uber_id: 0,
        value: None,
    }]);

    if !matches!(settings.spawn_loc, Spawn::Set(_)) {
        for _ in 0..3 {
            if let Some(pickup) = pickups.pop() {
                placements.push(Placement {
                    uber_state: UberState {
                        uber_group: 3,
                        uber_id: 0,
                        value: None,
                    },
                    pickup: pickup.clone(),
                });
                world.player.inventory.grant(pickup, 1);
            } else {
                break;
            }
        }
    }
    while let Some(pickup) = pickups.pop() {
        let reachable = world.graph.reached_locations(&world.player, spawn, &world.spawn_states)?;
        let (preplaced, needs_placement): (Vec<&UberState>, Vec<_>) = reachable.iter()
            .filter(|&&uber_state| !placements.iter().any(|placement| placement.uber_state == *uber_state))
            .partition(|&&uber_state| world.preplacements.contains_key(uber_state));

        collect_preplacements(&mut world.player, &world.preplacements, &preplaced);
        if let Some(uber_state) = needs_placement.choose(rng) {
            placements.push(Placement {
                uber_state: (**uber_state).clone(),
                pickup: pickup.clone(),
            });
            world.player.inventory.grant(pickup, 1);
        } else {
            return Err(String::from("Failed to place all pickups"));
        }
    }

    Ok(placements)
}
