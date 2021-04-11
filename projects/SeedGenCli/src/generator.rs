use std::fmt;

use rand::{Rng, seq::SliceRandom};
use rand::rngs::StdRng;

use crate::world::{World, graph::Node};
use crate::inventory::{Inventory, Item};
use crate::util::{RELIC_ZONES, KEYSTONE_DOORS, Resource, BonusItem};
use crate::util::settings::{Settings, Spawn};
use crate::util::uberstate::{UberState, UberIdentifier};

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

fn place_relics(world: &World, placements: &mut Vec<Placement>, rng: &mut StdRng) {
    let mut relic_locations = world.graph.nodes.iter().filter_map(|node| {
        if let Some(zone) = node.zone() {
            if !world.preplacements.contains_key(node.uber_state().unwrap()) && RELIC_ZONES.contains(&zone) {
                return Some((zone, node));
            }
        }
        None
    }).collect::<Vec<_>>();

    relic_locations.shuffle(rng);

    for &zone in RELIC_ZONES {
        if rng.gen_bool(0.8) {
            if let Some(&(_, location)) = relic_locations.iter().find(|&&(location_zone, _)| location_zone == zone) {
                placements.push(Placement {
                    uber_state: location.uber_state().unwrap().clone(),
                    pickup: Item::BonusItem(BonusItem::Relic),
                });
            }
        }
    }
}

fn force_keystones(reachable_states: &[&Node], placements: &mut Vec<Placement>, world: &mut World, reserved_slots: &mut Vec<&UberState>, placeholders: &mut Vec<UberState>, verbose: bool) {
    // TODO optimize? e.g. count placed keystones as they are placed instead of repeatedly computing them; only force placing keystones when new keydoors get into reach

    let placed_keystones = placements.iter().filter(|&placement| placement.pickup == Item::Resource(Resource::Keystone)).count();
    if placed_keystones < 2 { return; }

    let required_keystones: u8 = reachable_states.iter()
        .filter_map(|&node| {
            if let Some((_, keystones)) = KEYSTONE_DOORS.iter().find(|&&(identifier, _)| identifier == node.identifier()) {
                return Some(*keystones);
            }
            None
        })
        .sum();
    let required_keystones: usize = required_keystones.into();
    if required_keystones <= placed_keystones { return; }

    let missing_keystones = required_keystones - placed_keystones;
    if verbose { eprintln!("Force placing {} keystones to avoid keylocks", missing_keystones); }

    for _ in 0..missing_keystones {
        forced_placement(&Item::Resource(Resource::Keystone), placements, world, reserved_slots, placeholders, verbose);
    }
}

fn forced_placement(item: &Item, placements: &mut Vec<Placement>, world: &mut World, reserved_slots: &mut Vec<&UberState>, placeholders: &mut Vec<UberState>, verbose: bool) {
    let uber_state = if let Some(uber_state) = reserved_slots.pop() {
        uber_state.clone()
    } else if let Some(uber_state) = placeholders.pop() {
        uber_state
    } else {
        panic!("Not enough slots to place forced progression {}", item.name())  // due to the slot checks in missing_items this should only ever happen for forced keystone placements
    };

    placements.push(Placement {
        uber_state,
        pickup: item.clone(),
    });
    world.grant_player(item, 1, verbose);
}

pub fn generate_placements<'a>(mut world: World<'a>, spawn: &str, settings: &'a Settings, rng: &mut StdRng, verbose: bool) -> Result<Vec<Placement>, String> {
    // TODO shop logic
    let mut placements = Vec::<Placement>::with_capacity(380);
    let mut placeholders = Vec::<UberState>::with_capacity(380);
    let mut spawn_slots = Vec::<&UberState>::new();

    if settings.flags.world_tour {
        place_relics(&world, &mut placements, rng);
    }

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

        let (reachable_locations, reachable_states): (Vec<&Node>, Vec<&Node>) = reachable.iter().partition(|&&node| matches!(node, Node::Pickup(_) | Node::Quest(_)));

        let all_locations: Vec<_> = world.graph.nodes.iter().filter(|&node| matches!(node, Node::Pickup(_) | Node::Quest(_))).collect();
        let unreached_count = all_locations.len() - reachable_locations.len();

        // TODO wouldn't retain be optimal here?
        let reachable = reachable.iter().filter(|&&node| {
            node.uber_state().map_or(false, |uber_state|
                !placements.iter().any(|placement| &placement.uber_state == uber_state) &&
                !placeholders.iter().any(|placeholder| placeholder == uber_state)
            )
        });
        if verbose {
            let identifiers: Vec<_> = reachable.clone()
                .filter_map(|&node| 
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

        force_keystones(&reachable_states, &mut placements, &mut world, &mut reserved_slots, &mut placeholders, verbose);

        if needs_placement.is_empty() {
            // forced placements
            let mut itemsets = Vec::new();
            let slots = reserved_slots.len() + placeholders.len();

            for (requirement, best_orbs) in unmet {
                let items = requirement.items_needed(&world.player);
                for (inventory, orb_cost) in items {
                    for orbs in &best_orbs {
                        // TODO lot of redundant work here, only the orbs change!
                        let missing = world.player.missing_items(&inventory, orb_cost, *orbs);
                        if missing.inventory.is_empty() { panic!("Failed to determine which items were needed for progression to meet {:#?} (had {:#?})", requirement, world.player.inventory); }  // sanity check
                        if missing.item_count() > slots { continue; }
                        if !world.pool.contains(&missing) { continue; }
                        itemsets.push(missing);
                    }
                }
            }

            if itemsets.is_empty() {
                // TODO not reaching all locations can actually be desired (remove launch...)

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
            itemsets.sort_by_key(Inventory::item_count);
            itemsets.reverse();
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
            // TODO display what was progressed towards

            let items = progression.inventory.iter().flat_map(|(item, amount)| {
                if let Item::SpiritLight(1) = item {
                    // TODO randomness, or fit spirit light progression into the incremental distribution somehow
                    vec![&Item::SpiritLight(200); ((*amount + 199) / 200).into()]
                } else {
                    vec![item; (*amount).into()]
                }
            });
            for item in items {
                forced_placement(item, &mut placements, &mut world, &mut reserved_slots, &mut placeholders, verbose);
            }
        } else {
            // random placements
            if verbose { eprintln!("Placing {} items randomly, reserved {} for the next placement group", needs_placement.len(), reserved_slots.len()); }
            for uber_state in needs_placement {
                // TODO maybe faster to pick all at once?
                match world.pool.choose_random(rng) {
                    PartialItem::Placeholder => placeholders.push(uber_state.clone()),
                    PartialItem::Item(item) => {
                        world.grant_player(&item, 1, verbose);
                        placements.push(Placement {
                            uber_state: uber_state.clone(),
                            pickup: item,
                        });
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
                    pickup: Item::SpiritLight(100),
                });
            }

            return Ok(placements);
        }
    }
}
