use std::fmt;

use rand::seq::SliceRandom;
use rand::rngs::StdRng;

use crate::uberstate::{UberState, UberIdentifier};
use crate::world::{World, Node};
use crate::inventory::Item;
use crate::util::Resource;
use crate::util::settings::{Settings, Spawn};

const RESERVE_SLOTS: usize = 2;

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

#[derive(Debug)]
pub enum PartialItem {
    Placeholder,
    Item(Item),
}

fn format_identifiers(mut identifiers: Vec<&str>) -> String {
    let length = identifiers.len();
    if length > 5 {
        identifiers.truncate(5);
    }

    let mut identifiers = identifiers.iter()
        .fold(String::new(), |acc, next| {
            acc + next + ", "
        });

    for _ in 0..2 { identifiers.pop(); }

    if length > 5 {
        identifiers.push_str(&format!("... ({} total)", length));
    }

    identifiers
}

pub fn generate_placements<'a>(mut world: World<'a>, spawn: &str, settings: &'a Settings, rng: &mut StdRng, verbose: bool) -> Result<Vec<Placement>, String> {
    // TODO relics
    // TODO keystone logic
    // TODO shop logic
    let mut placements = Vec::<Placement>::with_capacity(380);
    let mut placeholders = Vec::<UberState>::with_capacity(380);
    let mut spawn_slots = Vec::<&UberState>::new();

    let spawn_state = UberState {
        identifier: UberIdentifier {
            uber_group: 3,
            uber_id: 0,
        },
        value: String::new(),
    };
    world.collect_preplacements(&spawn_state, verbose);

    if !matches!(settings.spawn_loc, Spawn::Set(_)) {
        for _ in 0..3 {
            spawn_slots.push(&spawn_state);
        }
    }

    loop {
        let (reachable, unmet) = world.graph.reached_and_progressions(&world.player, spawn, &world.uber_states)?;

        let reachable_locations: Vec<_> = reachable.iter().filter(|&&node| matches!(node, Node::Pickup(_) | Node::Quest(_))).collect();
        let all_locations: Vec<_> = world.graph.nodes.iter().filter(|&node| matches!(node, Node::Pickup(_) | Node::Quest(_))).collect();
        let unreached_count = all_locations.len() - reachable_locations.len();

        let reachable = reachable.iter().filter(|&&node| {
            if let Some(uber_state) = node.uber_state() {
                !placements.iter().any(|placement| &placement.uber_state == uber_state) &&
                !placeholders.iter().any(|placeholder| placeholder == uber_state)
            } else { false }
        });
        if verbose {
            let identifiers: Vec<_> = reachable.clone()
                .filter_map(|node| 
                    if matches!(node, Node::Pickup(_) | Node::Quest(_)) {
                        Some(node.identifier())
                    } else { None })
                .collect();

            eprintln!("Reachable free locations: {}", format_identifiers(identifiers));
        }

        let (preplaced, needs_placement): (Vec<&Node>, Vec<_>) = reachable.partition(|&&node| world.preplacements.contains_key(&node.uber_state().unwrap()));

        preplaced.iter().for_each(|&node| {
            world.collect_preplacements(node.uber_state().unwrap(), verbose);
        });

        let mut needs_placement: Vec<_> = needs_placement.iter().filter_map(|&node| match node {
            Node::Pickup(pickup) => Some(&pickup.uber_state),
            Node::Quest(quest) => Some(&quest.uber_state),
            _ => None,
        }).collect();
        needs_placement.append(&mut spawn_slots);

        needs_placement.shuffle(rng);

        let mut reserved_slots = Vec::<&UberState>::with_capacity(RESERVE_SLOTS);
        if unreached_count > 0 {
            for _ in 0..RESERVE_SLOTS {
                if let Some(uber_state) = needs_placement.pop() {
                    reserved_slots.push(uber_state);
                }
            }
        }

        if needs_placement.is_empty() {
            let mut itemsets = Vec::new();
            let slots = reserved_slots.len() + placeholders.len();

            for (requirement, best_orbs) in unmet {
                let items = requirement.items_needed(&world.player);
                for (inventory, orb_cost) in items {
                    for orbs in &best_orbs {
                        // TODO lot of redundant work here, only the orbs change!
                        let missing = world.player.missing_items(&inventory, orb_cost, *orbs);
                        if missing.inventory.is_empty() { panic!("Failed to determine which items were needed for progression"); }  // sanity check
                        if missing.item_count() > slots { continue; }
                        if !world.pool.contains(&missing) { continue; }
                        itemsets.push(missing);
                    }
                }
            }

            if itemsets.is_empty() {
                // TODO not reaching all location can actually be desired (remove launch...)

                let identifiers: Vec<_> = all_locations.iter()
                    .filter_map(|&node| {
                        let uber_state = node.uber_state().unwrap();
                        if !placements.iter().any(|placement| &placement.uber_state == uber_state) &&
                        !placeholders.iter().any(|placeholder| placeholder == uber_state) {
                            Some(node.identifier())
                        } else { None }
                    })
                    .collect();

                return Err(format!("Failed to reach all locations, missing {:?}", format_identifiers(identifiers)));
            }

            // remove redundancies
            itemsets.sort_by(|inventory, other| other.item_count().cmp(&inventory.item_count()));
            let mut index = 0;
            for _ in 0..itemsets.len() {
                let current = &itemsets[index];
                if itemsets[index + 1..].iter().any(|other| current.contains(other)) {
                    itemsets.remove(index);
                } else {
                    index += 1;
                }
            }
            if verbose {
                // TODO display weights
                eprintln!("{} options for forced progression:", itemsets.len());
                for inventory in &itemsets {
                    eprintln!("{}", inventory);
                }
            }

            let progression = itemsets.choose_weighted(rng, |inventory| 1.0 / inventory.cost()).map_err(|err| format!("Error choosing progression: {}", err))?;
            if verbose { eprintln!("Chosen progression: {}", progression); }

            let items = progression.inventory.iter().flat_map(|(item, amount)| {
                if let Item::Resource(Resource::SpiritLight, 1) = item {
                    // TODO randomness, or fit spirit light progression into the incremental distribution somehow
                    vec![&Item::Resource(Resource::SpiritLight, 200); ((*amount + 199) / 200).into()]
                } else {
                    vec![item; (*amount).into()]
                }
            });
            for item in items {
                let uber_state = if let Some(uber_state) = reserved_slots.pop() {
                    uber_state.clone()
                } else if let Some(uber_state) = placeholders.pop() {
                    uber_state
                } else {
                    panic!("Not enough slots to place progressions - this should be impossible") // the slot checks in missing_items guarantee this won't happen
                };

                placements.push(Placement {
                    uber_state: uber_state.clone(),
                    pickup: item.clone(),
                });
                world.grant_player(item.clone(), 1, verbose);
            }
        } else {
            if verbose { eprintln!("Placing {} items randomly, reserved {} for the next placement group", needs_placement.len(), reserved_slots.len()); }
            for uber_state in needs_placement {
                // TODO maybe faster to pick all at once?
                match world.pool.choose_random(rng) {
                    PartialItem::Placeholder => placeholders.push(uber_state.clone()),
                    PartialItem::Item(item) => {
                        placements.push(Placement {
                            uber_state: uber_state.clone(),
                            pickup: item.clone(),
                        });
                        world.grant_player(item, 1, verbose)
                    },
                }
            }
        }

        if unreached_count == 0 {
            if verbose { eprintln!("All locations reached"); }

            let remaining = world.pool.progressions.merge(&world.pool.fillers);
            if verbose { eprintln!("Placing the remaining {} items randomly", remaining.item_count()); }

            let mut open_slots = true;
            for (item, amount) in remaining.inventory {
                for _ in 0..amount {
                    if let Some(uber_state) = placeholders.pop() {
                        placements.push(Placement {
                            uber_state,
                            pickup: item.clone(),
                        });
                    } else {
                        open_slots = false;
                        break;
                    }
                }
                if !open_slots {
                    eprintln!("Not enough space to place all items from the item pool or place any spirit light!");
                    break;
                }
            }

            // TODO distributed spirit light
            while let Some(uber_state) = placeholders.pop() {
                placements.push(Placement {
                    uber_state,
                    pickup: Item::Resource(Resource::SpiritLight, 100),
                });
            }

            return Ok(placements);
        }
    }
}
