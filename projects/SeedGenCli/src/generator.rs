use std::{
    fmt,
    convert::TryFrom,
    collections::HashMap,
};

use rand::{
    Rng,
    seq::SliceRandom,
    distributions::{Distribution, Uniform, Bernoulli},
};

use crate::world::{
    World,
    graph::Node,
    player::Player,
};
use crate::inventory::{Inventory, Item};
use crate::util::{
    self,
    Resource, BonusItem, GoalMode,
    settings::Settings,
    uberstate::UberState,
    constants::{RELIC_ZONES, KEYSTONE_DOORS, RESERVE_SLOTS, SHOP_PRICES, DEFAULT_SPAWN, RANDOM_PROGRESSION},
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
    spirit_light_rng: SpiritLightAmounts,
}

struct GeneratorContext<'a, 'b, R, I>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    world_count: usize,
    custom_names: &'b HashMap<String, String>,
    multiworld_state_index: I,
    price_range: Uniform<f32>,
    random_progression: Bernoulli,
    rng: &'a mut R,
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

    if uber_state.is_shop() {
        let (_, _, price_uber_state) = SHOP_PRICES.iter()
            .find(|(_, location, _)| &uber_state.identifier == location)
            .ok_or_else(|| format!("({}): Uber State {} claims to be a shop location, but doesn't have an entry in the shop prices table!", origin_player_name, node))?;

        let mut price = item.shop_price();
        if item.random_shop_price() {
            let modified_price = f32::from(price) * context.price_range.sample(context.rng);
            price = u16::try_from(modified_price as i32).map_err(|_| format!("({}): Overflowed shop price for {} after adding a random amount to it", origin_player_name, item))?;
        }

        let price_setter = Item::UberState(format!("{}|int|{}", price_uber_state, price));

        log::trace!("({}): Placing {} at Spawn as price for the item below", origin_player_name, price_setter);

        origin_world_context.placements.push(Placement {
            node: None,
            uber_state: UberState::load(),
            item: price_setter,
        });
    }

    let code = item.code();
    let custom_name = context.custom_names.get(&code).map(|name| name.clone());
    let item_name = custom_name.clone().unwrap_or_else(|| format!("$[{}]", code));
    let item_display = custom_name.unwrap_or_else(|| format!("{}", item));

    if origin_world_index == target_world_index {
        log::trace!("({}): Placed {} at {}", origin_player_name, item_display, if was_placeholder { format!("placeholder {} ({} left)", node, origin_world_context.placeholders.len()) } else { format!("{}", node) });

        origin_world_context.placements.push(Placement {
            node: Some(node),
            uber_state: node.uber_state().unwrap().clone(),
            item,
        });
    } else {
        log::trace!("({}): Placed {} -> {} at {}", origin_player_name, item_display, target_player_name, if was_placeholder { format!("placeholder {} ({} left)", node, origin_world_context.placeholders.len()) } else { format!("{}", node) });

        let state_index = context.multiworld_state_index.next().unwrap();

        let origin_message = Item::Message(format!("{} -> {}", item_name, target_player_name));
        let send_item = Item::UberState(format!("12|{}|bool|true", state_index));
        let target_message = Item::Message(format!("{} -> {}|mute", origin_player_name, item_name));
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

    for &zone in RELIC_ZONES {
        for target_world_index in 0..context.world_count {
            if context.rng.gen_bool(0.8) {
                log::trace!("({}): Placing Relic in {}", world_contexts[target_world_index].player_name, zone);

                // TODO wait for alt+p control
                // let origin_world_index = context.rng.gen_range(0..context.world_count);
                let origin_world_index = target_world_index;

                if let Some(&(_, location)) = relic_locations[origin_world_index].iter().find(|&&(location_zone, _)| location_zone == zone) {
                    place_item(origin_world_index, target_world_index, location, false, Item::BonusItem(BonusItem::Relic), world_contexts, context)?;
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

#[inline]
fn random_placement<'a, R, I>(origin_world_index: usize, node: &'a Node, world_contexts: &mut [WorldContext<'a>], context: &mut GeneratorContext<'_, '_, R, I>) -> Result<(), String>
where
    R: Rng,
    I: Iterator<Item=usize>,
{
    let origin_world_context = &mut world_contexts[origin_world_index];

    // force a couple placeholders at the start
    if origin_world_context.placeholders.len() < 4 {
        log::trace!("({}): Reserving {} as forced placeholder", origin_world_context.player_name, node);

        origin_world_context.placeholders.push(node);
    } else {
        if context.random_progression.sample(context.rng) {
            let target_world_index = context.rng.gen_range(0..context.world_count);
            let target_world_context = &mut world_contexts[target_world_index];

            if let Ok(item) = target_world_context.world.pool.choose_random(origin_world_index != target_world_index, context.rng) {
                target_world_context.world.pool.remove(&item, 1);
                target_world_context.world.grant_player(item.clone(), 1).unwrap_or_else(|err| log::error!("({}): {}", target_world_context.player_name, err));
                place_item(origin_world_index, target_world_index, node, false, item, world_contexts, context)?;

                return Ok(());
            }
        }

        let origin_world_context = &mut world_contexts[origin_world_index];
        log::trace!("({}): Reserving {} as placeholder", origin_world_context.player_name, node);

        origin_world_context.placeholders.push(node)
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
        let remaining = world_contexts[target_world_index].world.pool.inventory();
        log::trace!("({}): Placing the remaining {} items randomly", world_contexts[target_world_index].player_name, remaining.item_count());

        let mut remaining = remaining.inventory.into_iter().flat_map(|(item, amount)| vec![item; amount.into()]).collect::<Vec<_>>();
        remaining.shuffle(context.rng);

        for item in remaining {
            let origin_world_index = if item.is_multiworld_spread() {
                context.rng.gen_range(0..context.world_count)
            } else {
                target_world_index
            };

            let node = if let Some(node) = shop_placeholders[origin_world_index].pop() {
                node
            } else if let Some(node) = world_contexts[origin_world_index].placeholders.pop() {
                node
            } else {
                log::warn!("({}): Not enough space to place all items from the item pool!", world_contexts[origin_world_index].player_name);
                break;
            };

            place_item(origin_world_index, target_world_index, node, true, item, world_contexts, context)?;
        }
    }

    for world_index in 0..context.world_count {
        if !shop_placeholders[world_index].is_empty() {
            log::warn!("({}): Not enough items in the pool to fill all shops!", world_contexts[world_index].player_name);
        }
    }

    for world_index in 0..context.world_count {
        log::trace!("({}): Placed all items, from the pool, placing Spirit Light...", world_contexts[world_index].player_name);

        while let Some(placeholder) = world_contexts[world_index].placeholders.pop() {
            let amount = world_contexts[world_index].spirit_light_rng.sample(context.rng)?;
            let item = Item::SpiritLight(amount);

            place_item(world_index, world_index, placeholder, true, item, world_contexts, context)?;
        }

        while let Some(unreachable) = world_contexts[world_index].unreachable_locations.pop() {
            let amount = world_contexts[world_index].spirit_light_rng.sample(context.rng)?;
            let item = Item::SpiritLight(amount);

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
    for (item, amount) in &world.pool.progressions.inventory {
        finished_world.grant_player(item.clone(), *amount)?;
    }
    finished_world.grant_player(Item::SpiritLight(1), u16::MAX)?;

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

        for node in &reachable_locations {
            let preplaced = finished_world.collect_preplacements(node.uber_state().unwrap());
            if preplaced {
                collected_preplacements.push(node.index());
            }
        }
    };
}

pub fn generate_placements<'a, R>(worlds: Vec<World<'a>>, spawns: &Vec<&'a Node>, spawn_pickup_node: &'a Node, custom_names: &HashMap<String, String>, settings: &Settings, rng: &mut R) -> Result<Vec<Vec<Placement<'a>>>, String>
where
    R: Rng,
{
    // TODO enforce a max total price for shops
    let price_range = Uniform::new_inclusive(0.75, 1.25);

    let mut world_contexts = worlds.into_iter().enumerate().map(|(world_index, mut world)| {
        let player_name = settings.players.get(world_index).map(|name| name.clone()).unwrap_or_else(|| format!("Player {}", world_index + 1));

        world.collect_preplacements(spawn_pickup_node.uber_state().unwrap());

        let mut placements = Vec::with_capacity(450);
        let mut spawn_slots = Vec::new();

        if spawns[world_index].identifier() != DEFAULT_SPAWN {
            for _ in 0..3 {
                spawn_slots.push(spawn_pickup_node);
            }
            placements.push(Placement {
                node: None,
                uber_state: UberState::spawn(),
                item: Item::Message(String::from("f=420|instant")),
            });
        }

        let reachable_locations = total_reach_check(&world, &player_name)?;

        let unreachable_locations = world.graph.nodes.iter()
            .filter(|&node| node.can_place() && !reachable_locations.iter().any(|&reachable| reachable.index() == node.index()))
            .collect::<Vec<_>>();
        if !unreachable_locations.is_empty() {
            let identifiers = unreachable_locations.iter().map(|&node| node.identifier()).collect::<Vec<_>>();
            log::warn!("({}): Some locations are unreachable on these settings! These will only hold Spirit Light.", player_name);
            log::trace!("({}): Unreachable locations on these settings: {}", player_name, format_identifiers(identifiers));
        }

        let spirit_light_slots = world.graph.nodes.iter().filter(|&node| node.can_place()).count() - world.pool.inventory().item_count();
        log::trace!("({}): Estimated {} slots for Spirit Light", player_name, spirit_light_slots);

        let spirit_light_rng = SpiritLightAmounts::new(f32::from(world.pool.spirit_light), spirit_light_slots as f32, 0.75, 1.25);

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
        })
    }).collect::<Result<Vec<_>, String>>()?;

    let mut context = GeneratorContext {
        world_count: settings.worlds,
        custom_names,
        multiworld_state_index: 0..,
        price_range,
        random_progression: Bernoulli::new(RANDOM_PROGRESSION).unwrap(),
        rng,
    };

    if settings.goalmodes.contains(&GoalMode::Relics) {
        place_relics(&mut world_contexts, &mut context)?;
    }

    let mut reserved_slots = Vec::with_capacity(RESERVE_SLOTS);
    let total_reachable_count: usize = world_contexts.iter().map(|world_context| world_context.reachable_locations.len()).sum();

    loop {
        let mut reachable = Vec::new();
        let mut reachable_states = Vec::new();
        let mut unmet = Vec::new();

        for world_context in &world_contexts {
            let (world_reachable, world_unmet) = world_context.world.graph.reached_and_progressions(&world_context.world.player, world_context.spawn, &world_context.world.uber_states)?;
            reachable_states.push(world_reachable.iter().filter(|&&node| !node.can_place()).cloned().collect::<Vec<_>>());
            reachable.push(world_reachable);
            unmet.push(world_unmet);
        }

        let reachable_counts = reachable.iter()
            .map(|world_reachable| world_reachable.iter().filter(|node| node.can_place()).count())
            .collect::<Vec<_>>();
        let unreached_count = total_reachable_count - reachable_counts.iter().sum::<usize>();

        force_keystones(&reachable_states, &mut reserved_slots, &mut world_contexts, &mut context)?;

        let mut needs_placement = (0..context.world_count).map(|world_index| {
            let world_reachable = &mut reachable[world_index];
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

        let mut reserved = reserved_slots.len();
        if unreached_count > 0 && reserved < RESERVE_SLOTS {
            loop {
                let world_index = context.rng.gen_range(0..context.world_count);

                if let Some(node) = needs_placement[world_index].pop() {
                    reserved_slots.push((world_index, node));
                    reserved += 1;

                    if reserved == RESERVE_SLOTS {
                        break;
                    }
                } else {
                    break;
                }
            }

            reserved_slots.shuffle(context.rng);
        }

        if needs_placement.iter().all(|world_needs_placement| world_needs_placement.is_empty()) {
            // forced placements
            let slots = reserved + world_contexts.iter().map(|world_context| world_context.placeholders.len()).sum::<usize>();

            let mut world_indices = (0..context.world_count).collect::<Vec<_>>();
            world_indices.shuffle(context.rng);

            let (chosen_world_index, mut itemsets) = loop {
                if let Some(chosen_world_index) = world_indices.pop() {
                    let world_context = &world_contexts[chosen_world_index];

                    let world_slots = reserved + world_context.placeholders.len();

                    let mut itemsets = Vec::new();

                    let owned_states = reachable_states[chosen_world_index].iter().map(|&node| node.index()).collect::<Vec<_>>();

                    for (requirement, best_orbs) in &unmet[chosen_world_index] {
                        let items = requirement.items_needed(&world_context.world.player, &owned_states);
                        // TODO this is a giant mess of redundancies
                        // log::trace!("requirement: {:?}", requirement);

                        for (mut needed, orb_cost) in items {
                            world_context.world.player.missing_items(&mut needed);

                            for orbs in best_orbs {
                                let orb_variants = world_context.world.player.missing_for_orbs(&needed, orb_cost, *orbs);

                                for missing in orb_variants {
                                    // log::trace!("missing items: {}", missing);

                                    if missing.inventory.is_empty() {  // sanity check
                                        log::trace!("({}): Failed to determine which items were needed for progression to meet {:?} (had {})", world_context.player_name, requirement, world_context.world.player.inventory);
                                        return Err(String::from("Failed to determine which items were needed for progression"));
                                    }
                                    if missing.item_count() > slots { continue; }
                                    if missing.world_item_count() > world_slots { continue; }
                                    if !world_context.world.pool.contains(&missing) { continue; }

                                    itemsets.push(missing);
                                }
                            }
                        }
                    }

                    if itemsets.is_empty() {
                        log::trace!("({}): No progressions found", world_context.player_name);
                    } else {
                        break (chosen_world_index, itemsets);
                    }
                } else {
                    // TODO flush launch fragments since those can't be rolled as progression

                    if world_contexts.iter().all(|world_context| world_context.placements.is_empty()) {
                        for world_index in 0..context.world_count {
                            let world_context = &world_contexts[world_index];
                            return Err(format!("({}): Failed to reach anything from spawn location {}", world_context.player_name, world_context.spawn));
                        }
                    }

                    for world_index in 0..context.world_count {
                        let world_context = &world_contexts[world_index];

                        let identifiers: Vec<_> = world_context.reachable_locations.iter()
                            .filter_map(|&node| {
                                let node_index = node.index();

                                node.uber_state().map_or(None, |uber_state|
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

            let world_context = &world_contexts[chosen_world_index];
            log::trace!("({}): {} options for forced progression:", world_context.player_name, itemsets.len());

            let weight = |inventory: &Inventory| -> Result<f32, String> {
                let mut newly_reached = 0;

                for world_index in 0..context.world_count {
                    let world_context = &world_contexts[world_index];

                    let lookahead_player = Player {
                        inventory: world_context.world.player.inventory.merge(inventory),
                        ..world_context.world.player.clone()
                    };
                    let mut lookahead_reachable = world_context.world.graph.reached_locations(&lookahead_player, world_context.spawn, &world_context.world.uber_states)?;
                    lookahead_reachable.retain(|&node| node.can_place());

                    newly_reached += lookahead_reachable.len() - reachable_counts[world_index];
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

            for (item, amount) in &progression.inventory {
                let items = if let Item::SpiritLight(1) = item {
                    let mut spirit_light_items = Vec::with_capacity(1);
                    let mut amount_placed = 0;

                    while &amount_placed < amount {
                        let stacked_amount = world_contexts[chosen_world_index].spirit_light_rng.sample(context.rng)?;
                        amount_placed += stacked_amount;
                        spirit_light_items.push(Item::SpiritLight(stacked_amount));
                    }

                    spirit_light_items
                } else {
                    vec![item.clone(); (*amount).into()]
                };

                for item in items {
                    forced_placement(chosen_world_index, item, &mut reserved_slots, &mut world_contexts, &mut context)?;
                }
            }
        } else {
            let placement_count: usize = needs_placement.iter().map(|world_needs_placement| world_needs_placement.len()).sum();
            log::trace!("Placing {} items randomly, reserved {} for the next placement group", placement_count, reserved);

            for origin_world_index in 0..context.world_count {
                for &node in &needs_placement[origin_world_index] {
                    random_placement(origin_world_index, node, &mut world_contexts, &mut context)?;
                }
            }
        }

        if unreached_count == 0 {
            log::trace!("All locations reached");

            place_remaining(&mut world_contexts, &mut context)?;

            let placements = world_contexts.into_iter().map(|world_context| world_context.placements).collect::<Vec<_>>();
            return Ok(placements);
        }
    }
}
