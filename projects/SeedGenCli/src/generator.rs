use std::{
    fmt,
    convert::TryFrom,
    collections::HashMap,
};

use rand::{
    Rng,
    seq::{SliceRandom, IteratorRandom},
    distributions::{Distribution, Uniform, Bernoulli},
};

use crate::world::{
    World,
    graph::{self, Node},
    player::Player,
};
use crate::inventory::{Inventory, Item};
use crate::util::{
    self,
    Resource, Skill, Teleporter, GoalMode,
    settings::Settings,
    uberstate::{UberState, UberType},
    constants::{RELIC_ZONES, KEYSTONE_DOORS, RESERVE_SLOTS, PLACEHOLDER_SLOTS, SHOP_PRICES, DEFAULT_SPAWN, RANDOM_PROGRESSION},
};

#[derive(Debug, Clone)]
pub struct Placement<'a> {
    pub node: Option<&'a Node>,
    pub uber_state: UberState,
    pub item: Item,
}
impl fmt::Display for Placement<'_> {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}|{}", self.uber_state, self.item.code())
    }
}

#[derive(Debug)]
pub enum PartialItem {
    Placeholder,
    Item(Item),
}

struct WorldContext<'a> {
    world: World<'a>,
    player_name: String,
    spawn: &'a Node,
    placements: Vec<Placement<'a>>,
    placeholders: Vec<&'a Node>,
    collected_preplacements: Vec<usize>,
    spawn_slots: Vec<&'a Node>,
    reachable_locations: Vec<&'a Node>,
    unreachable_locations: Vec<&'a Node>,
    spirit_light_rng: SpiritLightAmounts,  // TODO this can get kinda weird maybe have a shared spirit light rng instead
    random_spirit_light: Bernoulli,
    shop_slots: usize,
}

struct GeneratorContext<'a, 'b, R, I>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    world_count: usize,
    total_reachable_count: usize,
    custom_names: &'b HashMap<String, String>,
    multiworld_state_index: I,
    price_range: Uniform<f32>,
    random_progression: Bernoulli,
    rng: &'a mut R,
}

struct ReachContext<'a> {
    reachable: Vec<graph::Reached<'a>>,
    reachable_states: Vec<Vec<&'a Node>>,
    unmet: Vec<graph::Progressions<'a>>,
    reachable_counts: Vec<usize>,
    unreached_count: usize,
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

fn progression_check<'a, R, I>(world_contexts: &mut [WorldContext<'a>], context: &GeneratorContext<'_, '_, R, I>) -> Result<ReachContext<'a>, String>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    let mut reachable = Vec::new();
    let mut reachable_states = Vec::new();
    let mut unmet = Vec::new();

    for world_context in world_contexts {
        let (world_reachable, world_unmet) = world_context.world.graph.reached_and_progressions(&world_context.world.player, world_context.spawn, &world_context.world.uber_states)?;
        reachable_states.push(world_reachable.iter().filter(|&&node| !node.can_place()).cloned().collect::<Vec<_>>());
        reachable.push(world_reachable);
        unmet.push(world_unmet);
    }

    let reachable_counts = reachable.iter()
        .map(|world_reachable| world_reachable.iter().filter(|node| node.can_place()).count())
        .collect::<Vec<_>>();
    let unreached_count = context.total_reachable_count - reachable_counts.iter().sum::<usize>();

    Ok(ReachContext {
        reachable,
        reachable_states,
        unmet,
        reachable_counts,
        unreached_count,
    })
}

fn place_item<'a, R, I>(origin_world_index: usize, target_world_index: usize, node: &'a Node, was_placeholder: bool, item: Item, world_contexts: &mut [WorldContext<'a>], context: &mut GeneratorContext<'_, '_, R, I>) -> Result<(), String>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    let origin_player_name = world_contexts[origin_world_index].player_name.clone();
    let target_player_name = world_contexts[target_world_index].player_name.clone();

    let origin_world_context = &mut world_contexts[origin_world_index];

    let uber_state = node.uber_state().unwrap();
    let is_shop = uber_state.is_shop();

    if is_shop {
        let (_, _, price_uber_state) = SHOP_PRICES.iter()
            .find(|(_, location, _)| &uber_state.identifier == location)
            .ok_or_else(|| format!("({}): Uber State {} claims to be a shop location, but doesn't have an entry in the shop prices table!", origin_player_name, node))?;

        let mut price = item.shop_price();
        if item.random_shop_price() {
            let modified_price = f32::from(price) * context.price_range.sample(context.rng);
            price = u16::try_from(modified_price as i32).map_err(|_| format!("({}): Overflowed shop price for {} after adding a random amount to it", origin_player_name, item))?;
        }

        let price_setter = UberState {
            identifier: price_uber_state.clone(),
            value: price.to_string(),
        }.to_item(UberType::Int);

        log::trace!("({}): Placing {} at Spawn as price for the item below", origin_player_name, price_setter);

        origin_world_context.shop_slots -= 1;
        origin_world_context.placements.push(Placement {
            node: None,
            uber_state: UberState::load(),
            item: price_setter,
        });
    }

    let code = item.code();
    let custom_name = context.custom_names.get(&code).cloned();
    let item_display = custom_name.clone().unwrap_or_else(|| format!("{}", item));

    if origin_world_index == target_world_index {
        log::trace!("({}): Placed {} at {}", origin_player_name, item_display, if was_placeholder { format!("placeholder {} ({} left)", node, origin_world_context.placeholders.len()) } else { format!("{}", node) });

        origin_world_context.placements.push(Placement {
            node: Some(node),
            uber_state: uber_state.clone(),
            item,
        });

        if is_shop {
            if let Some(custom_name) = custom_name {
                origin_world_context.placements.push(Placement {
                    node: Some(node),
                    uber_state: uber_state.clone(),
                    item: Item::Message(format!("f=0|{}", custom_name)),
                });
            }
        }
    } else {
        log::trace!("({}): Placed {}'s {} at {}", origin_player_name, target_player_name, item_display, if was_placeholder { format!("placeholder {} ({} left)", node, origin_world_context.placeholders.len()) } else { format!("{}", node) });

        let state_index = context.multiworld_state_index.next().unwrap();

        let item_name = custom_name.unwrap_or_else(|| format!("$[{}]", code));
        let origin_message = Item::Message(format!("{}'s {}", target_player_name, item_name));
        let send_item = UberState::from_parts("12" , &state_index.to_string())?.to_item(UberType::Bool);
        let target_message = Item::Message(format!("{} from {}|mute", item_name, origin_player_name));
        let target_uber_state = UberState::from_parts("12", &state_index.to_string())?;

        origin_world_context.placements.push(Placement {
            node: Some(node),
            uber_state: node.uber_state().unwrap().clone(),
            item: origin_message,
        });
        origin_world_context.placements.push(Placement {
            node: Some(node),
            uber_state: node.uber_state().unwrap().clone(),
            item: send_item,
        });
        world_contexts[target_world_index].placements.push(Placement {
            node: None,
            uber_state: target_uber_state.clone(),
            item: target_message,
        });
        world_contexts[target_world_index].placements.push(Placement {
            node: None,
            uber_state: target_uber_state,
            item,
        });
    }

    Ok(())
}

fn place_relics<'a, R, I>(world_contexts: &mut [WorldContext<'a>], context: &mut GeneratorContext<'_, '_, R, I>) -> Result<(), String>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    let relic_locations = world_contexts.iter()
        .map(|world_context| {
            let mut world_relic_locations = world_context.world.graph.nodes.iter()
                .filter_map(|node| {
                    if let Some(zone) = node.zone() {
                        if !world_context.world.preplacements.contains_key(node.uber_state().unwrap()) && RELIC_ZONES.contains(&zone) {
                            return Some((zone, node));
                        }
                    }
                    None
                }).collect::<Vec<_>>();

            world_relic_locations.shuffle(context.rng);

            world_relic_locations
        }).collect::<Vec<_>>();

    for zone in RELIC_ZONES {
        for target_world_index in 0..context.world_count {
            if context.rng.gen_bool(0.8) {
                log::trace!("({}): Placing Relic in {}", world_contexts[target_world_index].player_name, zone);

                // let origin_world_index = context.rng.gen_range(0..context.world_count);
                let origin_world_index = target_world_index;

                if let Some(&(_, location)) = relic_locations[origin_world_index].iter().find(|(location_zone, _)| location_zone == zone) {
                    place_item(origin_world_index, target_world_index, location, false, Item::Relic(*zone), world_contexts, context)?;
                }
            }
        }
    }

    Ok(())
}

#[inline]
fn force_keystones<'a, R, I>(reachable_states: &[Vec<&Node>], reserved_slots: &mut Vec<(usize, &'a Node)>, world_contexts: &mut [WorldContext<'a>], context: &mut GeneratorContext<'_, '_, R, I>) -> Result<(), String>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    for target_world_index in 0..context.world_count {
        let mut missing_keystones = 0;

        let world_context = &mut world_contexts[target_world_index];

        let placed_keystones = world_context.world.player.inventory.get(&Item::Resource(Resource::Keystone));
        if placed_keystones < 2 { return Ok(()); }

        let required_keystones: u16 = reachable_states[target_world_index].iter()
            .filter_map(|&node| {
                if let Some((_, keystones)) = KEYSTONE_DOORS.iter().find(|&&(identifier, _)| identifier == node.identifier()) {
                    return Some(*keystones);
                }
                None
            })
            .sum();
        if required_keystones <= placed_keystones { return Ok(()); }

        missing_keystones += required_keystones - placed_keystones;

        log::trace!("({}): Force placing {} keystones to avoid keylocks", world_context.player_name, missing_keystones);

        for _ in 0..missing_keystones {
            forced_placement(target_world_index, Item::Resource(Resource::Keystone), reserved_slots, world_contexts, context)?;
        }
    }

    Ok(())
}

fn forced_placement<'a, R, I>(target_world_index: usize, item: Item, reserved_slots: &mut Vec<(usize, &'a Node)>, world_contexts: &mut [WorldContext<'a>], context: &mut GeneratorContext<'_, '_, R, I>) -> Result<(), String>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    let is_multiworld_spread = item.is_multiworld_spread();

    let mut choose_node = || {
        if is_multiworld_spread {
            let mut world_indices = (0..context.world_count).collect::<Vec<_>>();
            world_indices.shuffle(context.rng);

            if let Some((origin_world_index, node)) = reserved_slots.pop() {
                return Ok((origin_world_index, node, false));
            }
            for origin_world_index in world_indices {
                let placeholders = &mut world_contexts[origin_world_index].placeholders;
                if !placeholders.is_empty() {
                    let index = context.rng.gen_range(0..placeholders.len());
                    let node = placeholders.remove(index);
                    return Ok((origin_world_index, node, true));
                }
            }

            return Err(format!("({}): Not enough slots to place forced progression {}", world_contexts[target_world_index].player_name, item))  // due to the slot checks in missing_items this should only ever happen for forced keystone placements
        } else {
            if let Some((index, _)) = reserved_slots.iter().enumerate().find(|(_, (world_index, _))| world_index == &target_world_index) {
                let (_, node) = reserved_slots.remove(index);
                return Ok((target_world_index, node, false));
            }

            let placeholders = &mut world_contexts[target_world_index].placeholders;
            if !placeholders.is_empty() {
                let index = context.rng.gen_range(0..placeholders.len());
                let node = placeholders.remove(index);
                return Ok((target_world_index, node, true));
            }

            return Err(format!("({}): Not enough slots to place forced progression {}", world_contexts[target_world_index].player_name, item))  // due to the slot checks in missing_items this should only ever happen for forced keystone placements
        }
    };

    let mut node = choose_node()?;

    // Don't place Spirit Light in shops
    if matches!(item, Item::SpiritLight(_)) {
        let mut skipped_slots = Vec::new();

        while node.1.uber_state().unwrap().is_shop() {
            skipped_slots.push((node.0, node.1));

            node = choose_node()?;
        }

        for skipped_slot in skipped_slots {
            world_contexts[skipped_slot.0].placeholders.push(skipped_slot.1);
        }
    }

    let world_context = &mut world_contexts[target_world_index];
    world_context.world.pool.remove(&item, 1);
    world_context.world.grant_player(item.clone(), 1).unwrap_or_else(|err| log::error!("({}): {}", world_contexts[target_world_index].player_name, err));
    place_item(node.0, target_world_index, node.1, node.2, item, world_contexts, context)?;

    Ok(())
}

fn determine_progressions<'a>(world_index: usize, slots: usize, world_slots: usize, reach_context: &ReachContext, world_context: &WorldContext<'a>) -> Result<Vec<Inventory>, String> {
    let mut itemsets = Vec::new();

    let owned_states = reach_context.reachable_states[world_index].iter().map(|&node| node.index()).collect::<Vec<_>>();

    for (requirement, best_orbs) in &reach_context.unmet[world_index] {
        let items = requirement.items_needed(&world_context.world.player, &owned_states);
        // TODO this is a giant mess of redundancies
        // log::trace!("requirement: {:?}", requirement);

        for (mut needed, orb_cost) in items {
            world_context.world.player.missing_items(&mut needed);

            for orbs in best_orbs {
                let orb_variants = world_context.world.player.missing_for_orbs(&needed, orb_cost, *orbs);

                for missing in orb_variants {
                    // log::trace!("missing items: {}", missing);

                    if missing.items.is_empty() {  // sanity check
                        log::trace!("({}): Failed to determine which items were needed for progression to meet {:?} (had {})", world_context.player_name, requirement, world_context.world.player.inventory);
                        return Err(String::from("Failed to determine which items were needed for progression"));
                    }
                    if missing.item_count() > slots
                    || missing.world_item_count() > world_slots
                    || !world_context.world.pool.contains(&missing) { continue; }

                    itemsets.push(missing);
                }
            }
        }
    }

    Ok(itemsets)
}

fn filter_itemsets(itemsets: &mut Vec<Inventory>) {
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
}

fn pick_progression<'a, 'b, R, I>(target_world_index: usize, itemsets: &'b [Inventory], slots: usize, reach_context: &ReachContext, world_contexts: &mut [WorldContext<'a>], context: &mut GeneratorContext<'_, '_, R, I>) -> Result<&'b Inventory, String>where
R: Rng,
I: Iterator<Item=usize>,
{
    let world_context = &world_contexts[target_world_index];
    log::trace!("({}): {} options for forced progression:", world_context.player_name, itemsets.len());

    let weight = |inventory: &Inventory| -> Result<f32, String> {
        let mut newly_reached = 0;

        // TODO what?
        for world_index in 0..context.world_count {
            let world_context = &world_contexts[world_index];

            let lookahead_player = Player {
                inventory: world_context.world.player.inventory.merge(inventory),
                ..world_context.world.player.clone()
            };
            let mut lookahead_reachable = world_context.world.graph.reached_locations(&lookahead_player, world_context.spawn, &world_context.world.uber_states)?;
            lookahead_reachable.retain(|&node| node.can_place());

            newly_reached += lookahead_reachable.len().saturating_sub(reach_context.reachable_counts[world_index]);
            // Resource tracking can result in reaching less locations with an added teleporter, so prevent any overflows.
            // This is very rare and usually means the granted teleporter doesn't actually lead anywhere new, so 0 newly reached is accurate enough.
        }

        if slots < 4 && newly_reached == 0 {
            return Ok(0.000001);
        }

        let base_weight = 1.0 / inventory.cost();

        #[allow(clippy::cast_precision_loss)]
        Ok(base_weight * (newly_reached + 1) as f32)
    };
    let with_weights = itemsets.iter()
        .map::<Result<(&Inventory, f32), String>, _>(|inventory| Ok((inventory, weight(inventory)?)))
        .collect::<Result<Vec<_>, _>>()?;
    let weight_sum: f32 = with_weights.iter().map(|(_, weight)| weight).sum();

    let (progression, _) = with_weights
        .choose_weighted(context.rng, |&(inventory, weight)| {
            let mut inventory = format!("{}", inventory);
            util::add_trailing_spaces(&mut inventory, 20);
            log::trace!("-> {}  ({}%)", inventory, (weight / weight_sum * 1000.0).round() / 10.0);

            weight
        })
        .map_err(|err| format!("({}): Error choosing progression: {}", world_context.player_name, err))?;

    log::trace!("({}): Chosen progression: {}", world_context.player_name, progression);

    Ok(progression)
}

fn split_progression_item<'a, R, I>(world_index: usize, item: &Item, amount: &u16, world_contexts: &mut [WorldContext<'a>], context: &mut GeneratorContext<'_, '_, R, I>) -> Result<Vec<Item>, String>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    Ok(if let Item::SpiritLight(1) = item {
        let mut spirit_light_items = Vec::with_capacity(1);
        let mut amount_placed = 0;

        while &amount_placed < amount {
            let stacked_amount = world_contexts[world_index].spirit_light_rng.sample(context.rng)?;
            amount_placed += stacked_amount;
            spirit_light_items.push(Item::SpiritLight(stacked_amount));
        }

        spirit_light_items
    } else {
        vec![item.clone(); (*amount).into()]
    })
}

#[inline]
fn spawn_progressions<'a, R, I>(world_contexts: &mut [WorldContext<'a>], context: &mut GeneratorContext<'_, '_, R, I>) -> Result<(), String>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    'outer: for world_index in 0..context.world_count {
        let mut random_slots = 2;

        loop {
            let available_spawn_slots = world_contexts[world_index].spawn_slots.len();
            if available_spawn_slots <= random_slots {
                continue 'outer;
            }

            log::trace!("({}): Placing spawn progression", world_contexts[world_index].player_name);

            let reach_context = progression_check(world_contexts, context)?;  // TODO This is inefficient! The problem here is that the ReachContext always holds all worlds at once. Maybe it should be a Vec of per-world Reach contexts?
            let world_context = &world_contexts[world_index];

            let mut itemsets = determine_progressions(world_index, available_spawn_slots, available_spawn_slots, &reach_context, world_context)?;

            if itemsets.is_empty() {
                log::trace!("({}): No progressions found", world_context.player_name);
                continue 'outer;
            }

            filter_itemsets(&mut itemsets);
            let progression = pick_progression(world_index, &itemsets, available_spawn_slots, &reach_context, world_contexts, context)?;

            for (item, amount) in &progression.items {
                let items = split_progression_item(world_index, item, amount, world_contexts, context)?;

                for item in items {
                    let world_context = &mut world_contexts[world_index];
                    world_context.world.pool.remove(&item, 1);
                    world_context.world.grant_player(item.clone(), 1).unwrap_or_else(|err| log::error!("({}): {}", world_contexts[world_index].player_name, err));

                    log::trace!("({}): Placed {} as spawn progression", world_contexts[world_index].player_name, item);

                    if matches!(item, Item::Skill(Skill::Regenerate)) {
                        random_slots -= 1;
                    }
                    world_contexts[world_index].placements.push(Placement {
                        node: world_contexts[world_index].spawn_slots.pop(),
                        uber_state: UberState::spawn(),
                        item,
                    });
                }
            }
        }
    }

    Ok(())
}

fn force_progression<'a, R, I>(reserved_slots: &mut Vec<(usize, &'a Node)>, reach_context: &mut ReachContext,world_contexts: &mut [WorldContext<'a>], context: &mut GeneratorContext<'_, '_, R, I>) -> Result<(), String>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    let slots = reserved_slots.len() + world_contexts.iter().map(|world_context| world_context.placeholders.len()).sum::<usize>();

    let mut world_indices = (0..context.world_count).collect::<Vec<_>>();
    world_indices.shuffle(context.rng);

    let (target_world_index, mut itemsets) = loop {
        if let Some(chosen_world_index) = world_indices.pop() {
            let world_context = &mut world_contexts[chosen_world_index];
            let world_slots = reserved_slots.iter().filter(|(world_index, _)| *world_index == chosen_world_index).count() + world_context.placeholders.len();

            let itemsets = determine_progressions(chosen_world_index, slots, world_slots, reach_context, world_context)?;

            if itemsets.is_empty() {
                log::trace!("({}): No progressions found", world_context.player_name);
            } else {
                break (chosen_world_index, itemsets);
            }
        } else {
            if world_contexts.iter().any(|world_context| !world_context.placeholders.is_empty()) &&
            world_contexts.iter().any(|world_context| world_context.world.pool.inventory.items.iter().any(|(item, _)| matches!(item, Item::UberState(_)))) {
                flush_item_pool(world_contexts, context)?;
                return Ok(());
            }

            if world_contexts.iter().all(|world_context| world_context.placements.is_empty()) {
                for world_context in world_contexts {
                    log::trace!("({}): Failed to reach anything from spawn location {}", world_context.player_name, world_context.spawn);
                }
                return Err(String::from("Failed to reach anything from spawn location"));
            }

            for world_context in world_contexts {
                let identifiers: Vec<_> = world_context.reachable_locations.iter()
                    .filter_map(|&node| {
                        let node_index = node.index();

                        node.uber_state().and_then(|uber_state|
                            if !world_context.placements.iter().any(|placement| &placement.uber_state == uber_state) &&
                            !world_context.placeholders.iter().any(|&placeholder| placeholder.index() == node_index) &&
                            !world_context.collected_preplacements.iter().any(|&collected| collected == node_index)
                            {
                                Some(node.identifier())
                            } else { None }
                        )
                    })
                    .collect();

                log::trace!("({}): Failed to reach all locations with inventory: {}", world_context.player_name, world_context.world.player.inventory);
                log::error!("({}): Couldn't reach locations {}", world_context.player_name, format_identifiers(identifiers));
            }

            return Err(String::from("Failed to reach all locations"));
        }
    };

    filter_itemsets(&mut itemsets);
    let progression = pick_progression(target_world_index, &itemsets, slots, reach_context, world_contexts, context)?;

    for (item, amount) in &progression.items {
        let items = split_progression_item(target_world_index, item, amount, world_contexts, context)?;

        for item in items {
            forced_placement(target_world_index, item, reserved_slots, world_contexts, context)?;
        }
    }

    Ok(())
}

#[inline]
fn random_item_placement<'a, R, I>(origin_world_index: usize, node: &'a Node, world_contexts: &mut [WorldContext<'a>], context: &mut GeneratorContext<'_, '_, R, I>) -> Result<bool, String>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    let origin_world_context = &mut world_contexts[origin_world_index];

    if node.uber_state().map_or(false, UberState::is_shop) || !origin_world_context.random_spirit_light.sample(context.rng) {
        let target_world_index = context.rng.gen_range(0..context.world_count);

        if origin_world_context.shop_slots < world_contexts[target_world_index].world.pool.inventory.items.len() {
            let target_world_context = &mut world_contexts[target_world_index];

            if let Some(item) = target_world_context.world.pool.choose_random(origin_world_index != target_world_index, context.rng) {
                let item = item.clone();
                target_world_context.world.pool.remove(&item, 1);
                target_world_context.world.grant_player(item.clone(), 1).unwrap_or_else(|err| log::error!("({}): {}", target_world_context.player_name, err));
                place_item(origin_world_index, target_world_index, node, false, item, world_contexts, context)?;

                return Ok(true);
            }
        } else {
            log::trace!("({}) Forcing spirit light placement to preserve items for shop slots", world_contexts[origin_world_index].player_name);
        }
    }

    let origin_world_context = &mut world_contexts[origin_world_index];

    let amount = origin_world_context.spirit_light_rng.sample(context.rng)?;
    let item = Item::SpiritLight(amount);

    origin_world_context.world.pool.remove(&item, 1);
    origin_world_context.world.grant_player(item.clone(), 1).unwrap_or_else(|err| log::error!("({}): {}", origin_world_context.player_name, err));
    place_item(origin_world_index, origin_world_index, node, false, item, world_contexts, context)?;

    Ok(true)
}

#[inline]
fn random_placement<'a, R, I>(origin_world_index: usize, node: &'a Node, allow_placeholder: bool, world_contexts: &mut [WorldContext<'a>], context: &mut GeneratorContext<'_, '_, R, I>) -> Result<bool, String>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    let origin_world_context = &mut world_contexts[origin_world_index];

    // force a couple placeholders at the start
    let mut force = false;
    if origin_world_context.placeholders.len() < 4 {
        force = true;
    } else if context.random_progression.sample(context.rng) {
        return random_item_placement(origin_world_index, node, world_contexts, context);
    }

    let origin_world_context = &mut world_contexts[origin_world_index];
    log::trace!("({}): Reserving {} as {}placeholder", origin_world_context.player_name, node, if force { "forced " } else { "" });

    origin_world_context.placeholders.push(node);
    if !allow_placeholder {
        let placeholder_index = context.rng.gen_range(0..origin_world_context.placeholders.len());
        let placeholder = origin_world_context.placeholders.remove(placeholder_index);
        return random_item_placement(origin_world_index, placeholder, world_contexts, context);
    }

    Ok(false)
}

#[inline]
fn one_xp<'a, R, I>(world_contexts: &mut [WorldContext<'a>], context: &mut GeneratorContext<'_, '_, R, I>) -> Result<(), String>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    for world_index in 0..context.world_count {
        let world_context = &world_contexts[world_index];

        if let Some(node) = world_context.world.graph.nodes.iter()
            .filter(|&node| node.can_place())
            .choose(context.rng)
        {
            place_item(world_index, world_index, node, false, Item::SpiritLight(1), world_contexts, context)?;
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
        #[allow(clippy::cast_precision_loss)]
        let amount = (self.factor * self.index.pow(2) as f32 + 50.0 * self.noise.sample(rng)).round();
        self.index += 1;

        #[allow(clippy::cast_possible_truncation)]
        u16::try_from(amount as i32).map_err(|_| format!("Tried to place {} Spirit Light which is more than one item can hold", amount))
    }
}

fn place_remaining<'a, R, I>(world_contexts: &mut [WorldContext<'a>], context: &mut GeneratorContext<'_, '_, R, I>) -> Result<(), String>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    let mut shop_placeholders = vec![Vec::new(); context.world_count];

    for world_index in 0..context.world_count {
        let world_context = &mut world_contexts[world_index];

        world_context.placeholders.retain(|&node| {
            if node.uber_state().unwrap().is_shop() {
                shop_placeholders[world_index].push(node);
                false
            } else { true }
        });

        shop_placeholders[world_index].shuffle(context.rng);
        world_context.placeholders.shuffle(context.rng);
        world_context.unreachable_locations.shuffle(context.rng);
    }

    for target_world_index in 0..context.world_count {
        let mut remaining = world_contexts[target_world_index].world.pool.inventory.items.drain()
            .flat_map(|(item, amount)| vec![item; amount.into()])
            .collect::<Vec<_>>();
        log::trace!("({}): Placing the remaining {} items randomly", world_contexts[target_world_index].player_name, remaining.len());

        remaining.shuffle(context.rng);

        let mut out_of_space = false;
        'outer: for item in remaining {
            if !out_of_space {
                let origin_world_indices = if item.is_multiworld_spread() {
                    let mut indices = (0..context.world_count).collect::<Vec<_>>();
                    indices.shuffle(context.rng);
                    indices
                } else {
                    vec![target_world_index]
                };

                for origin_world_index in origin_world_indices {
                    if let Some(node) = shop_placeholders[origin_world_index].pop().or_else(|| world_contexts[origin_world_index].placeholders.pop()) {
                        place_item(origin_world_index, target_world_index, node, true, item, world_contexts, context)?;
                        continue 'outer;
                    }
                }

                out_of_space = true;

                log::warn!("({}): Not enough space to place all items from the item pool!", world_contexts[target_world_index].player_name);
                log::trace!("Unable to place {}", item);
            } else {
                log::trace!("Unable to place {}", item);
            }
        }
    }

    for world_index in 0..context.world_count {
        let world_shop_placeholders = &shop_placeholders[world_index];

        if !world_shop_placeholders.is_empty() {
            log::warn!("({}): Not enough items in the pool to fill all shops! Filling with extra Gorlek Ore", world_contexts[world_index].player_name);

            for &world_shop_placeholder in world_shop_placeholders {
                place_item(world_index, world_index, world_shop_placeholder, true, Item::Resource(Resource::Ore), world_contexts, context)?;
            }
        }
    }

    for world_index in 0..context.world_count {
        log::trace!("({}): Placed all items from the pool, placing Spirit Light", world_contexts[world_index].player_name);

        while let Some(placeholder) = world_contexts[world_index].placeholders.pop() {
            let amount = world_contexts[world_index].spirit_light_rng.sample(context.rng)?;
            let item = Item::SpiritLight(amount);

            place_item(world_index, world_index, placeholder, true, item, world_contexts, context)?;
        }

        if !world_contexts[world_index].unreachable_locations.is_empty() {
            log::trace!("({}): Filling unreachable locations", world_contexts[world_index].player_name);
        }
        while let Some(unreachable) = world_contexts[world_index].unreachable_locations.pop() {
            let item = if unreachable.uber_state().map_or(false, UberState::is_shop) {
                Item::Resource(Resource::Ore)
            } else {
                let amount = world_contexts[world_index].spirit_light_rng.sample(context.rng)?;
                Item::SpiritLight(amount)
            };

            place_item(world_index, world_index, unreachable, false, item, world_contexts, context)?;
        }

        world_contexts[world_index].placements.shrink_to_fit();
    }

    Ok(())
}

#[inline]
fn total_reach_check<'a>(world: &World<'a>, player_name: &str) -> Result<Vec<&'a Node>, String> {
    log::trace!("({}): Creating a player with everything to determine reachable locations", player_name);
    let mut finished_world = world.clone();
    for (item, amount) in &world.pool.inventory.items {
        if item.is_progression(world.player.difficulty) {
            finished_world.grant_player(item.clone(), *amount)?;
        }
    }
    finished_world.grant_player(Item::SpiritLight(1), world.pool.spirit_light)?;

    let mut collected_preplacements = Vec::new();
    let mut total_reachable_count = 0;

    let spawn = finished_world.graph.find_spawn(DEFAULT_SPAWN)?;

    loop {
        let mut reachable_locations = finished_world.graph.reached_locations(&finished_world.player, spawn, &finished_world.uber_states)?;
        let new_reachable_count = reachable_locations.len();

        if new_reachable_count > total_reachable_count {
            total_reachable_count = new_reachable_count;
        } else {
            reachable_locations.retain(|&node| node.can_place());
            return Ok(reachable_locations);
        }

        reachable_locations.retain(|&node| {
            node.uber_state().is_some() &&
            !collected_preplacements.iter().any(|&index| index == node.index())
        });

        for node in reachable_locations {
            let preplaced = finished_world.collect_preplacements(node.uber_state().unwrap());
            if preplaced {
                collected_preplacements.push(node.index());
            }
        }
    };
}

fn flush_item_pool<'a, R, I>(world_contexts: &mut [WorldContext<'a>], context: &mut GeneratorContext<'_, '_, R, I>) -> Result<(), String>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    log::trace!("Got stuck. Trying to flush uberState pickups from the item pool to recover...");

    for target_world_index in 0..context.world_count {
        let uber_state_items = world_contexts[target_world_index].world.pool.inventory.items.iter()
            .filter(|(item, _)| matches!(item, Item::UberState(_)))
            .flat_map(|(item, amount)| vec![item.clone(); (*amount).into()])
            .collect::<Vec<_>>();

        'outer: for item in uber_state_items {
            let mut origin_world_indices = (0..context.world_count).collect::<Vec<_>>();
            origin_world_indices.shuffle(context.rng);

            for origin_world_index in origin_world_indices {
                if let Some(node) = world_contexts[origin_world_index].placeholders.pop() {
                    let target_world_context = &mut world_contexts[target_world_index];

                    target_world_context.world.pool.remove(&item, 1);
                    target_world_context.world.grant_player(item.clone(), 1).unwrap_or_else(|err| log::error!("({}): {}", target_world_context.player_name, err));
                    place_item(origin_world_index, target_world_index, node, true, item, world_contexts, context)?;

                    continue 'outer;
                }
            }
        }
    }

    Ok(())
}

pub fn generate_placements<'a, R>(worlds: Vec<World<'a>>, spawns: &[&'a Node], spawn_pickup_node: &'a Node, custom_names: &HashMap<String, String>, settings: &Settings, rng: &mut R) -> Result<Vec<Vec<Placement<'a>>>, String>
where
    R: Rng,
{
    // TODO enforce a max total price for shops
    let price_range = Uniform::new_inclusive(0.75, 1.25);
    let world_tour = settings.goalmodes.contains(&GoalMode::Relics);

    let mut world_contexts = worlds.into_iter().enumerate().map(|(world_index, mut world)| {
        let player_name = settings.players.get(world_index).cloned().unwrap_or_else(|| format!("Player {}", world_index + 1));

        world.collect_preplacements(&UberState::spawn());

        let mut placements = Vec::with_capacity(450);
        let mut spawn_slots = Vec::new();

        let spawn_identifier = spawns[world_index].identifier();
        if spawn_identifier != DEFAULT_SPAWN {
            for _ in 0..3 {
                spawn_slots.push(spawn_pickup_node);
            }
            placements.push(Placement {
                node: Some(spawn_pickup_node),
                uber_state: UberState::spawn(),
                item: Item::Message(String::from("f=420|instant")),
            });
        }

        // Remove spawn tp from the pool
        if let Some(spawn_tp) = match spawn_identifier {
            "MarshSpawn.Main" => Some(Item::Teleporter(Teleporter::Marsh)),
            "HowlsDen.Teleporter" => Some(Item::Teleporter(Teleporter::Den)),
            "EastHollow.Teleporter" => Some(Item::Teleporter(Teleporter::Hollow)),
            "GladesTown.Teleporter" => Some(Item::Teleporter(Teleporter::Glades)),
            "InnerWellspring.Teleporter" => Some(Item::Teleporter(Teleporter::Wellspring)),
            "MidnightBurrows.Teleporter" => Some(Item::Teleporter(Teleporter::Burrows)),
            "WoodsEntry.Teleporter" => Some(Item::Teleporter(Teleporter::EastWoods)),
            "WoodsMain.Teleporter" => Some(Item::Teleporter(Teleporter::WestWoods)),
            "LowerReach.Teleporter" => Some(Item::Teleporter(Teleporter::Reach)),
            "UpperDepths.Teleporter" => Some(Item::Teleporter(Teleporter::Depths)),
            "EastPools.Teleporter" => Some(Item::Teleporter(Teleporter::EastLuma)),
            "WestPools" => Some(Item::Teleporter(Teleporter::WestLuma)),
            "LowerWastes.WestTP" => Some(Item::Teleporter(Teleporter::WestWastes)),
            "LowerWastes.EastTP" => Some(Item::Teleporter(Teleporter::EastWastes)),
            "UpperWastes.NorthTP" => Some(Item::Teleporter(Teleporter::OuterRuins)),
            "WindtornRuins.RuinsTP" => Some(Item::Teleporter(Teleporter::InnerRuins)),
            "WillowsEnd.InnerTP" => Some(Item::Teleporter(Teleporter::Willow)),
            _ => None,
        } { world.pool.inventory.remove(&spawn_tp, 1); }

        let reachable_locations = total_reach_check(&world, &player_name)?;

        let unreachable_locations = world.graph.nodes.iter()
            .filter(|&node|
                node.can_place() &&
                !reachable_locations.iter().any(|&reachable| reachable.index() == node.index()) &&
                !world.preplacements.iter().any(|(uber_state, _)| uber_state == node.uber_state().unwrap())
            ).collect::<Vec<_>>();
        if !unreachable_locations.is_empty() {
            let identifiers = unreachable_locations.iter().map(|&node| node.identifier()).collect::<Vec<_>>();
            log::warn!("({}): {} locations are unreachable on these settings! These will only hold Spirit Light.", player_name, identifiers.len());
            log::trace!("({}): Unreachable locations on these settings: {}", player_name, format_identifiers(identifiers));
        }

        let world_slots = world.graph.nodes.iter()
            .filter(|&node| {
                node.can_place() &&
                !world.preplacements.contains_key(node.uber_state().unwrap())
            })
            .count() - 1;  // 1 will be 1xp
        let mut spirit_light_slots = world_slots - world.pool.inventory.item_count();
        if world_tour { spirit_light_slots -= 10; }
        log::trace!("({}): Estimated {}/{} slots for Spirit Light", player_name, spirit_light_slots, world_slots);

        let spirit_light_rng = SpiritLightAmounts::new(f32::from(world.pool.spirit_light), spirit_light_slots as f32, 0.75, 1.25);
        let random_spirit_light = Bernoulli::new(spirit_light_slots as f64 / world_slots as f64).unwrap();

        let shop_slots = world.graph.nodes.iter().filter(|&node| node.uber_state().map_or(false, UberState::is_shop)).count();

        Ok(WorldContext {
            world,
            player_name,
            spawn: spawns[world_index],
            placements,
            placeholders: Vec::with_capacity(300),
            collected_preplacements: Vec::new(),
            spawn_slots,
            reachable_locations,
            unreachable_locations,
            spirit_light_rng,
            random_spirit_light,
            shop_slots,
        })
    }).collect::<Result<Vec<_>, String>>()?;

    let total_reachable_count: usize = world_contexts.iter().map(|world_context| world_context.reachable_locations.len()).sum();

    let mut context = GeneratorContext {
        world_count: settings.worlds,
        total_reachable_count,
        custom_names,
        multiworld_state_index: 0..,
        price_range,
        random_progression: Bernoulli::new(RANDOM_PROGRESSION).unwrap(),
        rng,
    };

    one_xp(&mut world_contexts, &mut context)?;
    spawn_progressions(&mut world_contexts, &mut context)?;

    if world_tour {
        place_relics(&mut world_contexts, &mut context)?;
    }

    let mut reserved_slots = Vec::with_capacity(RESERVE_SLOTS);

    loop {
        let mut reach_context = progression_check(&mut world_contexts, &context)?;

        force_keystones(&reach_context.reachable_states, &mut reserved_slots, &mut world_contexts, &mut context)?;

        let mut needs_placement = (0..context.world_count).map(|world_index| {
            let world_reachable = &mut reach_context.reachable[world_index];
            let world_context = &mut world_contexts[world_index];

            world_reachable.retain(|&node| {
                let node_index = node.index();

                node.uber_state().map_or(false, |uber_state|
                    !world_context.placements.iter().any(|placement| &placement.uber_state == uber_state) &&
                    !world_context.placeholders.iter().any(|&placeholder| placeholder.index() == node_index) &&
                    !world_context.collected_preplacements.iter().any(|&collected| collected == node_index) &&
                    !reserved_slots.iter().any(|&(reserved_world, node)| reserved_world == world_index && node.index() == node_index)
                )
            });

            let identifiers: Vec<_> = world_reachable.iter()
                .filter_map(|&node| 
                    if node.can_place() {
                        Some(node.identifier())
                    } else { None })
                .collect();

            log::trace!("({}): {} Reachable free locations: {}", world_context.player_name, identifiers.len(), format_identifiers(identifiers));

            let mut world_needs_placement = Vec::with_capacity(world_reachable.len());

            for node in world_reachable {
                let preplaced = world_context.world.collect_preplacements(node.uber_state().unwrap());
                if preplaced {
                    world_context.collected_preplacements.push(node.index());
                } else {
                    world_needs_placement.push(*node);
                }
            }

            world_needs_placement.retain(|&node| node.can_place());
            world_needs_placement.append(&mut world_context.spawn_slots);

            world_needs_placement.shuffle(context.rng);

            world_needs_placement
        }).collect::<Vec<_>>();

        let all_reached = reach_context.unreached_count == 0;
        if !all_reached && reserved_slots.len() < RESERVE_SLOTS {
            loop {
                let world_index = context.rng.gen_range(0..context.world_count);

                if let Some(node) = needs_placement[world_index].pop() {
                    reserved_slots.push((world_index, node));

                    if reserved_slots.len() == RESERVE_SLOTS {
                        break;
                    }
                } else {
                    break;
                }
            }

            reserved_slots.shuffle(context.rng);
        }

        if needs_placement.iter().all(|world_needs_placement| world_needs_placement.is_empty()) {
            force_progression(&mut reserved_slots, &mut reach_context, &mut world_contexts, &mut context)?;
        } else {
            let placement_count: usize = needs_placement.iter().map(|world_needs_placement| world_needs_placement.len()).sum();
            log::trace!("Placing {} items randomly, reserved {} for the next placement group", placement_count, reserved_slots.len());

            let mut total_placeholders = world_contexts.iter().map(|world_context| world_context.placeholders.len()).sum::<usize>();

            for (origin_world_index, world_needs_placement) in needs_placement.iter().enumerate() {
                for &node in world_needs_placement {
                    let allow_placeholder = total_placeholders < PLACEHOLDER_SLOTS;
                    if !random_placement(origin_world_index, node, allow_placeholder, &mut world_contexts, &mut context)? {
                        total_placeholders += 1;
                    }
                }
            }
        }

        if all_reached {
            log::trace!("All locations reached");

            for (world_index, reserved) in reserved_slots {
                world_contexts[world_index].placeholders.push(reserved);
            }

            place_remaining(&mut world_contexts, &mut context)?;

            let placements = world_contexts.into_iter().map(|world_context| world_context.placements).collect::<Vec<_>>();
            return Ok(placements);
        }
    }
}
