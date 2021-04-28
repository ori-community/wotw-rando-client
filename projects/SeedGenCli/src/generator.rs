use std::{fmt, convert::TryFrom};

use rand::{
    Rng,
    seq::SliceRandom,
    distributions::{Distribution, Uniform},
};

use crate::world::{
    World,
    graph::Node,
    player::Player,
};
use crate::inventory::{Inventory, Item};
use crate::util::{
    Resource, BonusItem,
    settings::{Settings, Spawn},
    constants::{RELIC_ZONES, KEYSTONE_DOORS, RESERVE_SLOTS, SHOP_PRICES},
};

#[derive(Debug)]
pub struct Placement<'a> {
    pub node: &'a Node,
    pub item: Item,
}
impl fmt::Display for Placement<'_> {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}|{}", self.node.uber_state().unwrap(), self.item.code())
    }
}

#[derive(Debug)]
pub enum PartialItem {
    Placeholder,
    Item(Item),
}

fn format_identifiers(mut identifiers: Vec<&str>) -> String {
    let length = identifiers.len();
    if length > 20 {
        identifiers.truncate(20);
    }

    let mut identifiers = identifiers.join(", ");

    if length > 20 {
        identifiers.push_str(&format!("... ({} total)", length));
    }

    identifiers
}

struct GeneratorContext<'a, 'b, R>
where
    R: Rng
{
    world: World<'a>,
    spawn_node: &'a Node,
    placements: Vec<Placement<'a>>,
    placeholders: Vec<&'a Node>,
    collected_preplacements: Vec<&'a Node>,
    price_range: Uniform<f32>,
    spirit_light_rng: SpiritLightAmounts,
    rng: &'b mut R,
}

fn place_item<'a, R>(node: &'a Node, was_placeholder: bool, item: Item, context: &mut GeneratorContext<'a, '_, R>) -> Result<(), String>
where
    R: Rng
{
    let uber_state = node.uber_state().unwrap().clone();

    if uber_state.is_shop() {
        let (_, _, price_uber_state) = SHOP_PRICES.iter()
            .find(|(_, location, _)| &uber_state.identifier == location)
            .ok_or_else(|| format!("Uber State {} claims to be a shop location, but doesn't have an entry in the shop prices table!", node))?;

        let mut price = item.shop_price();
        if item.random_shop_price() {
            price = u16::try_from((price as f32 * context.price_range.sample(context.rng)) as i32).map_err(|_| format!("Overflowed shop price for {} after adding a random amount to it", item))?;
        }

        let price_setter = Item::UberState(format!("{}|int|{}", price_uber_state, price));

        log::trace!("Placing {} at 3|0 as price for the item below", price_setter);

        context.placements.push(Placement {
            node: context.spawn_node,
            item: price_setter,
        });
    }

    log::trace!("Placed {} at {}", item, if was_placeholder { format!("placeholder {} ({} left)", node, context.placeholders.len()) } else { format!("{}", node) });

    context.placements.push(Placement {
        node,
        item,
    });

    Ok(())
}

fn place_relics<R>(context: &mut GeneratorContext<'_, '_, R>) -> Result<(), String>
where
    R: Rng
{
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
            log::trace!("Placing Relic in {}", zone);
            if let Some(&(_, location)) = relic_locations.iter().find(|&&(location_zone, _)| location_zone == zone) {
                place_item(location, false, Item::BonusItem(BonusItem::Relic), context)?;
            }
        }
    }

    Ok(())
}

#[inline]
fn force_keystones<'a, R>(reachable_states: &[&Node], reserved_slots: &mut Vec<&'a Node>, context: &mut GeneratorContext<'a, '_, R>) -> Result<(), String>
where
    R: Rng
{
    let placed_keystones = context.world.player.inventory.get(&Item::Resource(Resource::Keystone));
    if placed_keystones < 2 { return Ok(()); }

    let required_keystones: u16 = reachable_states.iter()
        .filter_map(|&node| {
            if let Some((_, keystones)) = KEYSTONE_DOORS.iter().find(|&&(identifier, _)| identifier == node.identifier()) {
                return Some(*keystones);
            }
            None
        })
        .sum();
    if required_keystones <= placed_keystones { return Ok(()); }

    let missing_keystones = required_keystones - placed_keystones;
    log::trace!("Force placing {} keystones to avoid keylocks", missing_keystones);

    for _ in 0..missing_keystones {
        forced_placement(Item::Resource(Resource::Keystone), reserved_slots, context)?;
    }

    Ok(())
}

fn forced_placement<'a, R>(item: Item, reserved_slots: &mut Vec<&'a Node>, context: &mut GeneratorContext<'a, '_, R>) -> Result<(), String>
where
    R: Rng
{
    let (mut node, mut was_placeholder) = if let Some(node) = reserved_slots.pop() {
        (node, false)
    } else if let Some(node) = context.placeholders.pop() {
        (node, true)
    } else {
        return Err(format!("Not enough slots to place forced progression {}", item))  // due to the slot checks in missing_items this should only ever happen for forced keystone placements, or very rarely spirit light
    };

    // Don't place Spirit Light in shops
    if matches!(item, Item::SpiritLight(_)) {
        let mut skipped_slots = Vec::new();

        while node.uber_state().unwrap().is_shop() {
            skipped_slots.push(node);

            node = if let Some(node) = reserved_slots.pop() {
                was_placeholder = false;
                node
            } else if let Some(node) = context.placeholders.pop() {
                was_placeholder = true;
                node
            } else {
                return Err(format!("Not enough slots to place forced progression {}", item))  // due to the slot checks in missing_items this should only ever happen for forced keystone placements, or very rarely spirit light
            };
        }

        context.placeholders.append(&mut skipped_slots);
    }

    place_item(node, was_placeholder, item.clone(), context)?;
    context.world.grant_player(item, 1).unwrap_or_else(|err| log::error!("{}", err));

    Ok(())
}

#[inline]
fn random_placement<'a, R>(node: &'a Node, context: &mut GeneratorContext<'a, '_, R>) -> Result<(), String>
where
    R: Rng
{
    // force a couple placeholders at the start
    if context.placeholders.len() < 4 {
        log::trace!("Reserving {} as forced placeholder", node);

        context.placeholders.push(node);
    } else {
        // TODO maybe faster to pick all at once?
        match context.world.pool.choose_random(context.rng) {
            PartialItem::Placeholder => {
                log::trace!("Reserving {} as placeholder", node);

                context.placeholders.push(node)
            },
            PartialItem::Item(item) => {
                context.world.grant_player(item.clone(), 1).unwrap_or_else(|err| log::error!("{}", err));
                place_item(node, false, item, context)?;
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

fn place_remaining<'a, R>(remaining: Inventory, unreachable_locations: Vec<&'a Node>, context: &mut GeneratorContext<'a, '_, R>) -> Result<(), String>
where
    R: Rng
{
    let (mut shop, mut non_shop): (Vec<&Node>, Vec<&Node>) = context.placeholders.drain(..).partition(|&node| node.uber_state().unwrap().is_shop());

    let mut remaining = remaining.inventory.into_iter().flat_map(|(item, amount)| vec![item; amount.into()]).collect::<Vec<_>>();
    remaining.shuffle(context.rng);

    for item in remaining {
        let uber_state = if let Some(uber_state) = shop.pop() {
            uber_state
        } else if let Some(uber_state) = non_shop.pop() {
            uber_state
        } else {
            log::warn!("Not enough space to place all items from the item pool or place any spirit light!");
            break;
        };

        place_item(uber_state, true, item, context)?;
    }

    if !shop.is_empty() {
        log::warn!("Not enough items in the pool to fill all shops!");
    }

    log::trace!("Placed all items from the pool, placing Spirit Light...");

    for node in non_shop {
        let amount = context.spirit_light_rng.sample(context.rng)?;
        let item = Item::SpiritLight(amount);

        log::trace!("Placed {} at placeholder {}", item, node);

        context.placements.push(Placement {
            node,
            item,
        });
    }
    for node in unreachable_locations {
        let amount = context.spirit_light_rng.sample(context.rng)?;
        let item = Item::SpiritLight(amount);

        log::trace!("Placed {} at unreachable location {}", item, node);

        context.placements.push(Placement {
            node,
            item,
        });
    }

    Ok(())
}

pub fn generate_placements<'a, R>(world: World<'a>, spawn: &str, spawn_node: &'a Node, settings: &Settings, rng: &mut R) -> Result<Vec<Placement<'a>>, String>
where
    R: Rng
{
    // TODO enforce a max total price for shops
    let placements = Vec::<Placement>::with_capacity(450);
    let placeholders = Vec::<&Node>::with_capacity(300);
    // TODO why nodes below?
    let collected_preplacements = Vec::<&Node>::new();
    let mut spawn_slots = Vec::<&Node>::new();

    let spirit_light_slots = (world.graph.nodes.iter().filter(|&node| node.can_place()).count() - world.pool.inventory().item_count()) as f32;
    log::trace!("Estimated {} slots for Spirit Light", spirit_light_slots);
    let spirit_light_rng = SpiritLightAmounts::new(world.pool.spirit_light as f32, spirit_light_slots, 0.75, 1.25);

    let price_range = Uniform::new_inclusive(0.75, 1.25);

    let mut context = GeneratorContext {
        world,
        spawn_node,
        placements,
        placeholders,
        collected_preplacements,
        price_range,
        spirit_light_rng,
        rng,
    };

    if settings.flags.world_tour {
        place_relics(&mut context)?;
    }

    context.world.collect_preplacements(&context.spawn_node.uber_state().unwrap());

    if !matches!(settings.spawn_loc, Spawn::Set(_)) {
        for _ in 0..3 {
            spawn_slots.push(&context.spawn_node);
        }
    }

    log::trace!("Creating a player with everything to determine reachable locations");
    let mut finished_world = context.world.clone();
    for (item, amount) in context.world.pool.progressions.inventory.iter() {
        finished_world.grant_player(item.clone(), *amount)?;
    }
    finished_world.grant_player(Item::SpiritLight(1), u16::MAX)?;

    // TODO wisps exist...
    let mut collected_preplacements = Vec::new();
    let mut total_reachable_count = 0;

    let all_reachable_locations = loop {
        let mut reachable_locations = finished_world.graph.reached_locations(&finished_world.player, spawn, &finished_world.uber_states)?;
        let new_reachable_count = reachable_locations.len();

        if new_reachable_count > total_reachable_count {
            total_reachable_count = new_reachable_count;
        } else {
            reachable_locations.retain(|&node| node.can_place());
            break reachable_locations;
        }

        reachable_locations.retain(|&node| {
            node.uber_state().is_some() &&
            !collected_preplacements.iter().any(|&index| index == node.index())
        });

        for node in &reachable_locations {
            let preplaced = finished_world.collect_preplacements(node.uber_state().unwrap());
            if preplaced {
                collected_preplacements.push(node.index());
            }
        }
    };

    let unreachable_locations = context.world.graph.nodes.iter()
        .filter(|&node| node.can_place() && !all_reachable_locations.iter().any(|&reachable| reachable.index() == node.index()))
        .collect::<Vec<_>>();
    if !unreachable_locations.is_empty() {
        let identifiers = unreachable_locations.iter().map(|&node| node.identifier()).collect::<Vec<_>>();
        log::warn!("Some locations are unreachable on these settings! These will only hold Spirit Light.");
        log::trace!("Unreachable locations on these settings: {}", format_identifiers(identifiers));
    }

    let mut reserved_slots = Vec::<&Node>::with_capacity(RESERVE_SLOTS);

    loop {
        let (mut reachable, unmet) = context.world.graph.reached_and_progressions(&context.world.player, spawn, &context.world.uber_states)?;
        let reachable_count = reachable.len();

        let reachable_states = reachable.iter().filter(|&&node| !node.can_place()).cloned().collect::<Vec<_>>();

        force_keystones(&reachable_states, &mut reserved_slots, &mut context)?;

        let unreached_count = total_reachable_count - reachable.len();

        reachable.retain(|&node| {
            let index = node.index();

            node.uber_state().is_some() &&
            !context.placements.iter().any(|placement| placement.node.index() == index) &&
            !context.placeholders.iter().any(|&placeholder| placeholder.index() == index) &&
            !context.collected_preplacements.iter().any(|&collected| collected.index() == index)
        });

        let identifiers: Vec<_> = reachable.iter()
            .filter_map(|&node| 
                if node.can_place() {
                    Some(node.identifier())
                } else { None })
            .collect();

        log::trace!("{} Reachable free locations: {}", identifiers.len(), format_identifiers(identifiers));

        let mut needs_placement = Vec::with_capacity(reachable.len());

        for node in reachable {
            let preplaced = context.world.collect_preplacements(node.uber_state().unwrap());
            if preplaced {
                context.collected_preplacements.push(node);
            } else {
                needs_placement.push(node);
            }
        }

        needs_placement.retain(|&node| node.can_place());
        needs_placement.append(&mut spawn_slots);

        needs_placement.shuffle(context.rng);

        reserved_slots = Vec::with_capacity(RESERVE_SLOTS);
        if unreached_count > 0 {
            for _ in 0..RESERVE_SLOTS {
                if let Some(uber_state) = needs_placement.pop() {
                    reserved_slots.push(uber_state);
                }
            }
        }

        if needs_placement.is_empty() {
            // forced placements
            let mut itemsets = Vec::new();
            let slots = reserved_slots.len() + context.placeholders.len();

            let owned_states = reachable_states.iter().map(|&node| node.index()).collect::<Vec<_>>();

            for (requirement, best_orbs) in unmet {
                let items = requirement.items_needed(&context.world.player, &owned_states);

                for (mut needed, orb_cost) in items {
                    context.world.player.missing_items(&mut needed);

                    for orbs in &best_orbs {
                        let missing = context.world.player.missing_for_orbs(&needed, orb_cost, *orbs);

                        if missing.inventory.is_empty() {  // sanity check
                            log::trace!("Failed to determine which items were needed for progression to meet {:?} (had {})", requirement, context.world.player.inventory);
                            return Err(String::from("Failed to determine which items were needed for progression"));
                        }
                        if missing.item_count() > slots { continue; }
                        if !context.world.pool.contains(&missing) { continue; }

                        itemsets.push(missing);
                    }
                }
            }

            if itemsets.is_empty() {
                let identifiers: Vec<_> = all_reachable_locations.iter()
                    .filter_map(|&node| {
                        let index = node.index();

                        if !context.placements.iter().any(|placement| placement.node.index() == index) &&
                        !context.placeholders.iter().any(|&placeholder| placeholder.index() == index) &&
                        !context.collected_preplacements.iter().any(|&collected| collected.index() == index)
                        {
                            Some(node.identifier())
                        } else { None }
                    })
                    .collect();

                log::trace!("Failed to reach all locations with inventory: {}", context.world.player.inventory);
                return Err(format!("Failed to reach all locations, missing {}", format_identifiers(identifiers)));
            }

            // remove redundancies
            itemsets.sort_unstable_by_key(Inventory::item_count);
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

            log::trace!("{} options for forced progression:", itemsets.len());

            let weight = |inventory: &Inventory| -> Result<f32, String> {
                let base_weight = 1.0 / inventory.cost();

                let lookahead_player = Player {
                    inventory: context.world.player.inventory.merge(inventory),
                    ..context.world.player.clone()
                };
                let lookahead_reachable = context.world.graph.reached_locations(&lookahead_player, spawn, &context.world.uber_states)?;

                let newly_reached = lookahead_reachable.len() - reachable_count;

                Ok(base_weight * (newly_reached + 1) as f32)
            };
            let with_weights = itemsets.iter()
                .map::<Result<(&Inventory, f32), String>, _>(|inventory| Ok((inventory, weight(inventory)?)))
                .collect::<Result<Vec<_>, _>>()?;
            let weight_sum: f32 = with_weights.iter().map(|(_, weight)| weight).sum();

            let (progression, _) = with_weights
                .choose_weighted(context.rng, |&(inventory, weight)| {
                    log::trace!("-> {}  ({}%)", inventory, (weight / weight_sum * 1000.0).round() / 10.0);

                    weight
                })
                .map_err(|err| format!("Error choosing progression: {}", err))?;

            log::trace!("Chosen progression: {}", progression);

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
            log::trace!("Placing {} items randomly, reserved {} for the next placement group", needs_placement.len(), reserved_slots.len());
            for uber_state in needs_placement {
                random_placement(uber_state, &mut context)?;
            }
        }

        if unreached_count == 0 {
            log::trace!("All locations reached");

            let remaining = context.world.pool.inventory();
            log::trace!("Placing the remaining {} items randomly", remaining.item_count());

            place_remaining(remaining, unreachable_locations, &mut context)?;

            context.placements.shrink_to_fit();
            return Ok(context.placements);
        }
    }
}
