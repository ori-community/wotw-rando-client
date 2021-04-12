use std::fmt;
use std::convert::TryFrom;

use rand::{Rng, seq::SliceRandom};
use rand::distributions::{Distribution, Uniform};
use rand::rngs::StdRng;

use crate::world::{World, graph::Node};
use crate::inventory::{Inventory, Item};
use crate::util::{Resource, BonusItem};
use crate::util::settings::{Settings, Spawn};
use crate::util::uberstate::{UberState, UberIdentifier};
use crate::util::constants::{RELIC_ZONES, KEYSTONE_DOORS, RESERVE_SLOTS, SHOP_PRICES};

#[derive(Debug)]
pub struct Placement {
    pub uber_state: UberState,
    pub item: Item,
}
impl fmt::Display for Placement {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}|{}", self.uber_state, self.item)
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

struct GeneratorContext<'a> {
    world: World<'a>,
    placements: Vec<Placement>,
    placeholders: Vec<UberState>,
    price_range: Uniform<f32>,
    spirit_light_rng: SpiritLightAmounts,
    rng: &'a mut StdRng,
    verbose: bool,
}

fn place_item(uber_state: UberState, item: Item, context: &mut GeneratorContext) -> Result<(), String> {
    if uber_state.is_shop() {
        let (identifier, _, price_uber_state) = SHOP_PRICES.iter()
            .find(|(_, location, _)| &uber_state.identifier == location)
            .ok_or_else(|| format!("Uber State {} claims to be a shop location, but doesn't have an entry in the shop prices table!", uber_state))?;

        let mut price = item.shop_price();
        if item.random_shop_price() {
            price = u16::try_from((price as f32 * context.price_range.sample(context.rng)) as i32).map_err(|_| format!("Overflowed shop price for {} after adding a random amount to it", item.name()))?;
        }

        context.placements.push(Placement {
            uber_state: UberState {
                identifier: UberIdentifier {
                    uber_group: 3,
                    uber_id: 0,
                },
                value: String::new(),
            },
            // TODO comment spacing
            item: Item::UberState(format!("{}|int|{}  // Price for {}", price_uber_state, price, identifier)),
        });
    }

    context.placements.push(Placement {
        uber_state,
        item,
    });

    Ok(())
}

fn place_relics(context: &mut GeneratorContext) -> Result<(), String> {
    let mut relic_locations = context.world.graph.nodes.iter().filter_map(|node| {
        if let Some(zone) = node.zone() {
            if !context.world.preplacements.contains_key(node.uber_state().unwrap()) && RELIC_ZONES.contains(&zone) {
                return Some((zone, node));
            }
        }
        None
    }).collect::<Vec<_>>();

    relic_locations.shuffle(context.rng);

    for &zone in RELIC_ZONES {
        if context.rng.gen_bool(0.8) {
            if let Some(&(_, location)) = relic_locations.iter().find(|&&(location_zone, _)| location_zone == zone) {
                place_item(location.uber_state().unwrap().clone(), Item::BonusItem(BonusItem::Relic), context)?;
            }
        }
    }

    Ok(())
}

fn force_keystones(reachable_states: &[&Node], reserved_slots: &mut Vec<&UberState>, context: &mut GeneratorContext) -> Result<(), String> {
    // TODO optimize? e.g. count placed keystones as they are placed instead of repeatedly computing them; only force placing keystones when new keydoors get into reach

    let placed_keystones = context.placements.iter().filter(|&placement| placement.item == Item::Resource(Resource::Keystone)).count();
    if placed_keystones < 2 { return Ok(()); }

    let required_keystones: u8 = reachable_states.iter()
        .filter_map(|&node| {
            if let Some((_, keystones)) = KEYSTONE_DOORS.iter().find(|&&(identifier, _)| identifier == node.identifier()) {
                return Some(*keystones);
            }
            None
        })
        .sum();
    let required_keystones: usize = required_keystones.into();
    if required_keystones <= placed_keystones { return Ok(()); }

    let missing_keystones = required_keystones - placed_keystones;
    if context.verbose { eprintln!("Force placing {} keystones to avoid keylocks", missing_keystones); }

    for _ in 0..missing_keystones {
        forced_placement(Item::Resource(Resource::Keystone), reserved_slots, context)?;
    }

    Ok(())
}

fn forced_placement(item: Item, reserved_slots: &mut Vec<&UberState>, context: &mut GeneratorContext) -> Result<(), String> {
    let mut uber_state = if let Some(uber_state) = reserved_slots.pop() {
        uber_state.clone()
    } else if let Some(uber_state) = context.placeholders.pop() {
        uber_state
    } else {
        return Err(format!("Not enough slots to place forced progression {}", item.name()))  // due to the slot checks in missing_items this should only ever happen for forced keystone placements, or very rarely spirit light
    };

    // Don't place Spirit Light in shops
    if matches!(item, Item::SpiritLight(_)) {
        let mut skipped_slots = Vec::new();

        while uber_state.is_shop() {
            skipped_slots.push(uber_state);

            uber_state = if let Some(uber_state) = reserved_slots.pop() {
                uber_state.clone()
            } else if let Some(uber_state) = context.placeholders.pop() {
                uber_state
            } else {
                return Err(format!("Not enough slots to place forced progression {}", item.name()))  // due to the slot checks in missing_items this should only ever happen for forced keystone placements, or very rarely spirit light
            };
        }

        context.placeholders.append(&mut skipped_slots);
    }

    place_item(uber_state, item.clone(), context)?;
    context.world.grant_player(item, 1, context.verbose);

    Ok(())
}

fn random_placement(uber_state: &UberState, context: &mut GeneratorContext) -> Result<(), String> {
    // force a couple placeholders at the start
    if context.placeholders.len() < 4 {
        context.placeholders.push(uber_state.clone());
    } else {
        // TODO maybe faster to pick all at once?
        match context.world.pool.choose_random(context.rng) {
            PartialItem::Placeholder => context.placeholders.push(uber_state.clone()),
            PartialItem::Item(item) => {
                context.world.grant_player(item.clone(), 1, context.verbose);
                place_item(uber_state.clone(), item, context)?;
            },
        }
    }

    Ok(())
}

/* proposed per-pickup exp formula:
 * exp = M * (n^2) + base*roll
 * where:
 * n = the number of exp pickups placed so far
 * base = the minimum starting value of an ex pickup
 * roll = a float multiplier to provide some randomness
 * M = a multplier calculated such that the sum of every exp value (before randomness) is equal to a total (see factor for the math)
 * this gives us a nice shallow parabola with some randomness but not so much that you can't tell approximately when a pickup was placed
 */
struct SpiritLightAmounts {
    factor: f32,
    noise: Uniform<f32>,
    index: usize,
}
impl SpiritLightAmounts {
    fn new(spirit_light_pool: f32, spirit_light_slots: f32, random_low: f32, random_high: f32) -> SpiritLightAmounts {
        let factor = (spirit_light_pool as f32 - spirit_light_slots * 50.0) / (spirit_light_slots.powi(3) / 3.0 + spirit_light_slots.powi(2) / 2.0 + spirit_light_slots / 6.0);
        let noise = Uniform::new_inclusive(random_low, random_high);

        SpiritLightAmounts {
            factor,
            noise,
            index: 0,
        }
    }
    fn sample<R>(&mut self, rng: &mut R) -> Result<u16, String>
    where
        R: Rng + ?Sized
    {
        let amount = (self.factor * self.index.pow(2) as f32 + 50.0 * self.noise.sample(rng)).round();
        self.index += 1;

        u16::try_from(amount as i32).map_err(|_| format!("Tried to place {} Spirit Light which is more than one item can hold", amount))
    }
}

fn place_remaining(remaining: Inventory, context: &mut GeneratorContext) -> Result<(), String> {
    let (mut shop, mut non_shop): (Vec<UberState>, Vec<UberState>) = context.placeholders.iter().cloned().partition(|uber_state| uber_state.is_shop());

    let mut open_slots = true;
    // TODO this isn't random is it
    for (item, amount) in remaining.inventory {
        for _ in 0..amount {
            let uber_state = if let Some(uber_state) = shop.pop() {
                uber_state
            } else if let Some(uber_state) = non_shop.pop() {
                uber_state
            } else {
                open_slots = false;
                break;
            };

            place_item(uber_state, item.clone(), context)?;
        }
        if !open_slots {
            eprintln!("Not enough space to place all items from the item pool or place any spirit light!");
            break;
        }
    }

    if !shop.is_empty() {
        eprintln!("Not enough items in the pool to fill all shops!");
    }

    for uber_state in non_shop {
        let amount = context.spirit_light_rng.sample(context.rng)?;
        context.placements.push(Placement {
            uber_state,
            item: Item::SpiritLight(amount),
        });
    }

    Ok(())
}

pub fn generate_placements<'a>(world: World<'a>, spawn: &str, settings: &'a Settings, rng: &mut StdRng, verbose: bool) -> Result<Vec<Placement>, String> {
    // TODO enforce a max total price for shops
    // TODO check the needed capacity on these vecs
    let placements = Vec::<Placement>::with_capacity(380);
    let placeholders = Vec::<UberState>::with_capacity(380);
    let mut spawn_slots = Vec::<&UberState>::new();

    let spirit_light_slots = (world.graph.nodes.iter().filter(|&node| matches!(node, Node::Pickup(_) | Node::Quest(_))).count() - world.pool.inventory().item_count()) as f32;
    let spirit_light_rng = SpiritLightAmounts::new(world.pool.spirit_light as f32, spirit_light_slots, 0.75, 1.25);

    let price_range = Uniform::new_inclusive(0.75, 1.25);

    let mut context = GeneratorContext {
        world,
        placements,
        placeholders,
        price_range,
        spirit_light_rng,
        rng,
        verbose,
    };

    if settings.flags.world_tour {
        place_relics(&mut context)?;
    }

    let spawn_state = UberState {
        identifier: UberIdentifier {
            uber_group: 3,
            uber_id: 0,
        },
        value: String::new(),
    };
    context.world.collect_preplacements(&spawn_state, context.verbose);

    if !matches!(settings.spawn_loc, Spawn::Set(_)) {
        for _ in 0..3 {
            spawn_slots.push(&spawn_state);
        }
    }

    loop {
        let (reachable, unmet) = context.world.graph.reached_and_progressions(&context.world.player, spawn, &context.world.uber_states)?;

        let (reachable_locations, reachable_states): (Vec<&Node>, Vec<&Node>) = reachable.iter().partition(|&&node| matches!(node, Node::Pickup(_) | Node::Quest(_)));

        let all_locations: Vec<_> = context.world.graph.nodes.iter().filter(|&node| matches!(node, Node::Pickup(_) | Node::Quest(_))).collect();
        let unreached_count = all_locations.len() - reachable_locations.len();

        // TODO wouldn't retain be optimal here?
        let reachable = reachable.iter().filter(|&&node| {
            node.uber_state().map_or(false, |uber_state|
                !context.placements.iter().any(|placement| &placement.uber_state == uber_state) &&
                !context.placeholders.iter().any(|placeholder| placeholder == uber_state)
            )
        });
        if context.verbose {
            let identifiers: Vec<_> = reachable.clone()
                .filter_map(|&node| 
                    if matches!(node, Node::Pickup(_) | Node::Quest(_)) {
                        Some(node.identifier())
                    } else { None })
                .collect();

            eprintln!("Reachable free locations: {}", format_identifiers(identifiers));
        }

        let (preplaced, needs_placement): (Vec<&Node>, Vec<_>) = reachable.partition(|&&node| context.world.preplacements.contains_key(&node.uber_state().unwrap()));

        preplaced.iter().for_each(|&node| {
            context.world.collect_preplacements(node.uber_state().unwrap(), context.verbose);
        });

        let mut needs_placement: Vec<_> = needs_placement.iter().filter_map(|&node| match node {
            Node::Pickup(pickup) => Some(&pickup.uber_state),
            Node::Quest(quest) => Some(&quest.uber_state),
            _ => None,
        }).collect();
        needs_placement.append(&mut spawn_slots);

        needs_placement.shuffle(context.rng);

        let mut reserved_slots = Vec::<&UberState>::with_capacity(RESERVE_SLOTS);
        if unreached_count > 0 {
            for _ in 0..RESERVE_SLOTS {
                if let Some(uber_state) = needs_placement.pop() {
                    reserved_slots.push(uber_state);
                }
            }
        }

        force_keystones(&reachable_states, &mut reserved_slots, &mut context)?;

        if needs_placement.is_empty() {
            // forced placements
            let mut itemsets = Vec::new();
            let slots = reserved_slots.len() + context.placeholders.len();

            for (requirement, best_orbs) in unmet {
                let items = requirement.items_needed(&context.world.player);
                for (inventory, orb_cost) in items {
                    for orbs in &best_orbs {
                        // TODO lot of redundant work here, only the orbs change!
                        let missing = context.world.player.missing_items(&inventory, orb_cost, *orbs);
                        if missing.inventory.is_empty() { return Err(format!("Failed to determine which items were needed for progression to meet {:#?} (had {:#?})", requirement, context.world.player.inventory)); }  // sanity check
                        if missing.item_count() > slots { continue; }
                        if !context.world.pool.contains(&missing) { continue; }
                        itemsets.push(missing);
                    }
                }
            }

            if itemsets.is_empty() {
                // TODO not reaching all locations can actually be desired (remove launch...)

                let identifiers: Vec<_> = all_locations.iter()
                    .filter_map(|&node| {
                        let uber_state = node.uber_state().unwrap();
                        if !context.placements.iter().any(|placement| &placement.uber_state == uber_state) &&
                        !context.placeholders.iter().any(|placeholder| placeholder == uber_state) {
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
            if context.verbose {
                // TODO display weights
                eprintln!("{} options for forced progression:", itemsets.len());
                for inventory in &itemsets {
                    eprintln!("{}", inventory);
                }
            }

            let progression = itemsets.choose_weighted(context.rng, |inventory| 1.0 / inventory.cost()).map_err(|err| format!("Error choosing progression: {}", err))?;
            if context.verbose { eprintln!("Chosen progression: {}", progression); }
            // TODO display what was progressed towards

            for (item, amount) in &progression.inventory {
                let items = if let Item::SpiritLight(1) = item {
                    let mut spirit_light_items = Vec::with_capacity(1);
                    let mut amount_placed = 0;

                    while &amount_placed < amount {
                        let stacked_amount = context.spirit_light_rng.sample(context.rng)?;
                        amount_placed += stacked_amount;
                        spirit_light_items.push(Item::SpiritLight(stacked_amount));
                    }

                    spirit_light_items
                } else {
                    vec![item.clone(); (*amount).into()]
                };

                for item in items {
                    forced_placement(item, &mut reserved_slots, &mut context)?;
                }
            }
        } else {
            if context.verbose { eprintln!("Placing {} items randomly, reserved {} for the next placement group", needs_placement.len(), reserved_slots.len()); }
            for uber_state in needs_placement {
                random_placement(uber_state, &mut context)?;
            }
        }

        if unreached_count == 0 {
            if context.verbose { eprintln!("All locations reached"); }

            let remaining = context.world.pool.inventory();
            if context.verbose { eprintln!("Placing the remaining {} items randomly", remaining.item_count()); }

            place_remaining(remaining, &mut context)?;

            return Ok(context.placements);
        }
    }
}
