use std::{
    collections::HashSet,
    path::PathBuf,
};

use crate::world::World;
use crate::inventory::Item;
use crate::util::{
    self,
    Pathset, Resource, Skill, Shard, Teleporter, BonusItem, BonusUpgrade, Hint, Command, ToggleCommand, Zone, ZoneHintType,
    uberstate::{UberState, UberIdentifier}
};

// TODO update documentation for descriptions

fn end_of_pickup<'a, I>(mut parts: I, shop: bool) -> Result<(), String>
where
    I: Iterator<Item = &'a str>,
{
    // TODO could support !!add with a fixed price probably? And/or an uberState based price for shuffled pickups?
    if shop {
        if parts.next().is_some() {
            return Err(String::from("Shop prices in pickups are obsolete! Use the assigned uberStates for shop prices instead"));
            // price.parse::<f32>().map_err(|_| String::from("invalid price"))?;
        }
    }
    if parts.next().is_some() { return Err(String::from("too many parts")); }
    Ok(())
}

fn parse_spirit_light<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let spirit_light = parts.next().ok_or_else(|| String::from("missing spirit light amount"))?;
    end_of_pickup(parts, shop)?;
    if let Some(spirit_light) = spirit_light.strip_prefix('-') {
        let spirit_light: u16 = spirit_light.parse().map_err(|_| String::from("invalid spirit light amount"))?;
        Ok((Item::RemoveSpiritLight(1), spirit_light))
    } else {
        let spirit_light: u16 = spirit_light.parse().map_err(|_| String::from("invalid spirit light amount"))?;
        Ok((Item::SpiritLight(1), spirit_light))
    }
}
fn parse_resource<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let resource_type = parts.next().ok_or_else(|| String::from("missing resource type"))?;
    end_of_pickup(parts, shop)?;
    let resource_type: u8 = resource_type.parse().map_err(|_| String::from("invalid resource type"))?;
    let resource = Resource::from_id(resource_type).ok_or_else(|| String::from("invalid resource type"))?;
    Ok((Item::Resource(resource), 1))
}
fn parse_skill<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let skill_type = parts.next().ok_or_else(|| String::from("missing skill type"))?;
    end_of_pickup(parts, shop)?;
    if let Some(skill_type) = skill_type.strip_prefix('-') {
        let skill_type: u8 = skill_type.parse().map_err(|_| String::from("invalid skill type"))?;
        let skill = Skill::from_id(skill_type).ok_or_else(|| String::from("invalid skill type"))?;
        Ok((Item::RemoveSkill(skill), 1))
    } else {
        let skill_type: u8 = skill_type.parse().map_err(|_| String::from("invalid skill type"))?;
        let skill = Skill::from_id(skill_type).ok_or_else(|| String::from("invalid skill type"))?;
        Ok((Item::Skill(skill), 1))
    }
}
fn parse_shard<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let shard_type = parts.next().ok_or_else(|| String::from("missing shard type"))?;
    end_of_pickup(parts, shop)?;
    if let Some(shard_type) = shard_type.strip_prefix('-') {
        let shard_type: u8 = shard_type.parse().map_err(|_| String::from("invalid shard type"))?;
        let shard = Shard::from_id(shard_type).ok_or_else(|| String::from("invalid shard type"))?;
        Ok((Item::RemoveShard(shard), 1))
    } else {
        let shard_type: u8 = shard_type.parse().map_err(|_| String::from("invalid shard type"))?;
        let shard = Shard::from_id(shard_type).ok_or_else(|| String::from("invalid shard type"))?;
        Ok((Item::Shard(shard), 1))
    }
}
fn parse_autosave<'a, P>(parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    end_of_pickup(parts, shop)?;
    Ok((Item::Command(Command::Autosave), 1))
}
fn parse_set_resource<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let resource = parts.next().ok_or_else(|| String::from("missing resource type"))?;
    let resource: u8 = resource.parse().map_err(|_| String::from("invalid resource type"))?;
    let resource = Resource::from_id(resource).ok_or_else(|| String::from("invalid resource type"))?;
    let amount = parts.next().ok_or_else(|| String::from("missing resource amount"))?;
    let amount: i16 = amount.parse().map_err(|_| String::from("invalid resource type"))?;
    end_of_pickup(parts, shop)?;
    Ok((Item::Command(Command::Resource { resource, amount }), 1))
}
fn parse_checkpoint<'a, P>(parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    end_of_pickup(parts, shop)?;
    Ok((Item::Command(Command::Checkpoint), 1))
}
fn parse_magic<'a, P>(parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    end_of_pickup(parts, shop)?;
    Ok((Item::Command(Command::Magic), 1))
}
fn parse_stop<'a, P>(mut parts: P, shop: bool) -> Result<UberState, String>
where P: Iterator<Item=&'a str>
{
    let uber_group = parts.next().ok_or_else(|| String::from("missing uber group"))?;
    let uber_id = parts.next().ok_or_else(|| String::from("missing uber id"))?;
    let value = parts.next().ok_or_else(|| String::from("missing uber value"))?;
    end_of_pickup(parts, shop)?;

    let uber_id = format!("{}={}", uber_id, value);
    UberState::from_parts(uber_group, &uber_id)
}
fn parse_stop_equal<'a, P>(parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let uber_state = parse_stop(parts, shop)?;
    Ok((Item::Command(Command::StopEqual { uber_state }), 1))
}
fn parse_stop_greater<'a, P>(parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let uber_state = parse_stop(parts, shop)?;
    Ok((Item::Command(Command::StopGreater { uber_state }), 1))
}
fn parse_stop_less<'a, P>(parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let uber_state = parse_stop(parts, shop)?;
    Ok((Item::Command(Command::StopLess { uber_state }), 1))
}
fn parse_toggle<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let toggle_type = parts.next().ok_or_else(|| String::from("missing toggle command type"))?;
    let toggle_type: u8 = toggle_type.parse().map_err(|_| String::from("invalid toggle command type"))?;
    let toggle_type = ToggleCommand::from_id(toggle_type).ok_or_else(|| String::from("invalid toggle command type"))?;
    let on = parts.next().ok_or_else(|| String::from("missing toggle command value"))?;
    let on = match on {
        "0" => false,
        "1" => true,
        _ => return Err(String::from("invalid toggle command value")),
    };
    end_of_pickup(parts, shop)?;

    Ok((Item::Command(Command::Toggle { target: toggle_type, on }), 1))
}
fn parse_warp<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let x = parts.next().ok_or_else(|| String::from("missing x coordinate"))?;
    let x: i16 = x.parse().map_err(|_| String::from("invalid x coordinate"))?;
    let y = parts.next().ok_or_else(|| String::from("missing x coordinate"))?;
    let y: i16 = y.parse().map_err(|_| String::from("invalid x coordinate"))?;
    end_of_pickup(parts, shop)?;

    Ok((Item::Command(Command::Warp { x, y }), 1))
}
fn parse_timer<'a, P>(mut parts: P, shop: bool) -> Result<UberIdentifier, String>
where P: Iterator<Item=&'a str>
{
    let uber_group = parts.next().ok_or_else(|| String::from("missing uber group"))?;
    let uber_id = parts.next().ok_or_else(|| String::from("missing uber id"))?;
    end_of_pickup(parts, shop)?;

    Ok(UberState::from_parts(uber_group, uber_id)?.identifier)
}
fn parse_start_timer<'a, P>(parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let identifier = parse_timer(parts, shop)?;
    Ok((Item::Command(Command::StartTimer { identifier }), 1))
}
fn parse_stop_timer<'a, P>(parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let identifier = parse_timer(parts, shop)?;
    Ok((Item::Command(Command::StopTimer { identifier }), 1))
}
fn parse_intercept<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let intercept = parts.next().ok_or_else(|| String::from("missing intercept"))?;
    let intercept: i32 = intercept.parse().map_err(|_| String::from("invalid intercept"))?;
    let set = parts.next().ok_or_else(|| String::from("missing set"))?;
    let set: i32 = set.parse().map_err(|_| String::from("invalid set"))?;
    end_of_pickup(parts, shop)?;

    Ok((Item::Command(Command::StateRedirect { intercept, set }), 1))
}
fn parse_set_player<'a, P>(mut parts: P, shop: bool) -> Result<i16, String>
where P: Iterator<Item=&'a str>
{
    let amount = parts.next().ok_or_else(|| String::from("missing amount"))?;
    let amount: i16 = amount.parse().map_err(|_| String::from("invalid amount"))?;
    end_of_pickup(parts, shop)?;

    Ok(amount)
}
fn parse_set_health<'a, P>(parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let amount = parse_set_player(parts, shop)?;
    Ok((Item::Command(Command::SetHealth { amount }), 1))
}
fn parse_set_energy<'a, P>(parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let amount = parse_set_player(parts, shop)?;
    Ok((Item::Command(Command::SetEnergy { amount }), 1))
}
fn parse_set_spirit_light<'a, P>(parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let amount = parse_set_player(parts, shop)?;
    Ok((Item::Command(Command::SetSpiritLight { amount }), 1))
}
fn parse_equip<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let slot = parts.next().ok_or_else(|| String::from("missing equip slot"))?;
    let slot: u8 = slot.parse().map_err(|_| String::from("invalid equip slot"))?;
    if slot > 2 { return Err(String::from("invalid equip slot")); }
    let ability = parts.next().ok_or_else(|| String::from("missing ability to equip"))?;
    let ability: u16 = ability.parse().map_err(|_| String::from("invalid ability to equip"))?;
    end_of_pickup(parts, shop)?;

    Ok((Item::Command(Command::Equip { slot, ability }), 1))
}
fn parse_command<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let command_type = parts.next().ok_or_else(|| format!("missing command pickup type"))?;
    match command_type {
        "0" => parse_autosave(parts, shop),
        "1" => parse_set_resource(parts, shop),
        "2" => parse_checkpoint(parts, shop),
        "3" => parse_magic(parts, shop),
        "4" => parse_stop_equal(parts, shop),
        "5" => parse_stop_greater(parts, shop),
        "6" => parse_stop_less(parts, shop),
        "7" => parse_toggle(parts, shop),
        "8" => parse_warp(parts, shop),
        "9" => parse_start_timer(parts, shop),
        "10" => parse_stop_timer(parts, shop),
        "11" => parse_intercept(parts, shop),
        "12" => parse_set_health(parts, shop),
        "13" => parse_set_energy(parts, shop),
        "14" => parse_set_spirit_light(parts, shop),
        "15" => parse_equip(parts, shop),
        _ => Err(String::from("invalid command type")),
    }
}
fn parse_teleporter<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let teleporter_type = parts.next().ok_or_else(|| String::from("missing teleporter type"))?;
    end_of_pickup(parts, shop)?;
    if let Some(teleporter_type) = teleporter_type.strip_prefix('-') {
        let teleporter_type: u8 = teleporter_type.parse().map_err(|_| String::from("invalid teleporter type"))?;
        let teleporter = Teleporter::from_id(teleporter_type).ok_or_else(|| String::from("invalid teleporter type"))?;
        Ok((Item::RemoveTeleporter(teleporter), 1))
    } else {
        let teleporter_type: u8 = teleporter_type.parse().map_err(|_| String::from("invalid teleporter type"))?;
        let teleporter = Teleporter::from_id(teleporter_type).ok_or_else(|| String::from("invalid teleporter type"))?;
        Ok((Item::Teleporter(teleporter), 1))
    }
}
fn parse_set_uber_state<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let uber_group = parts.next().ok_or_else(|| String::from("missing uber group"))?;
    let uber_id = parts.next().ok_or_else(|| String::from("missing uber id"))?;
    UberIdentifier::from_parts(uber_group, uber_id)?;

    let uber_type = parts.next().ok_or_else(|| String::from("missing uber state type"))?;
    let value = parts.next().ok_or_else(|| String::from("missing uber value"))?;

    if let Some(suppress) = parts.next() {
        suppress.parse::<u16>().map_err(|_| String::from("invalid suppress count"))?;
    }

    end_of_pickup(parts, shop)?;

    let strip_sign = |value: &'a str| -> &'a str { if value.starts_with(&['+', '-'][..]) { &value[1..] } else { value } };

    match uber_type {
        "bool" | "teleporter" => { value.parse::<bool>().map_err(|_| String::from("invalid uber value"))?; },
        "byte" => { strip_sign(value).parse::<u8>().map_err(|_| String::from("invalid uber value"))?; },
        "int" => { strip_sign(value).parse::<i32>().map_err(|_| String::from("invalid uber value"))?; },
        "float" => { strip_sign(value).parse::<f32>().map_err(|_| String::from("invalid uber value"))?; },
        _ => return Err(String::from("invalid uber state type")),
    }

    let command = format!("{}|{}|{}|{}", uber_group, uber_id, uber_type, value);
    Ok((Item::UberState(command), 1))
}
fn parse_world_event<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let world_event_type = parts.next().ok_or_else(|| String::from("missing world event type"))?;
    end_of_pickup(parts, shop)?;
    if let Some(world_event_type) = world_event_type.strip_prefix('-') {
        let world_event_type: u8 = world_event_type.parse().map_err(|_| String::from("invalid world event type"))?;
        if world_event_type != 0 { return Err(String::from("invalid world event type")); }
        Ok((Item::RemoveWater, 1))
    } else {
        let world_event_type: u8 = world_event_type.parse().map_err(|_| String::from("invalid world event type"))?;
        if world_event_type != 0 { return Err(String::from("invalid world event type")); }
        Ok((Item::Water, 1))
    }
}
fn parse_bonus_item<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let bonus_type = parts.next().ok_or_else(|| String::from("missing bonus item type"))?;
    end_of_pickup(parts, shop)?;
    let bonus_type: u8 = bonus_type.parse().map_err(|_| String::from("invalid bonus item type"))?;
    let bonus = BonusItem::from_id(bonus_type).ok_or_else(|| String::from("invalid bonus item type"))?;
    Ok((Item::BonusItem(bonus), 1))
}
fn parse_bonus_upgrade<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let bonus_type = parts.next().ok_or_else(|| String::from("missing bonus upgrade type"))?;
    end_of_pickup(parts, shop)?;
    let bonus_type: u8 = bonus_type.parse().map_err(|_| String::from("invalid bonus upgrade type"))?;
    let bonus = BonusUpgrade::from_id(bonus_type).ok_or_else(|| String::from("invalid bonus upgrade type"))?;
    Ok((Item::BonusUpgrade(bonus), 1))
}
fn parse_zone_hint<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let zone = parts.next().ok_or_else(|| String::from("missing hint zone"))?;
    let zone: u8 = zone.parse().map_err(|_| String::from("invalid hint zone"))?;
    let zone = Zone::from_id(zone).ok_or_else(|| String::from("invalid hint zone"))?;

    let hint_type = parts.next().map_or_else::<Result<ZoneHintType, String>, _, _>(|| Ok(ZoneHintType::default()), |hint_type| {
        let hint_type: u8 = hint_type.parse().map_err(|_| String::from("invalid hint type"))?;
        Ok(ZoneHintType::from_id(hint_type).ok_or_else(|| String::from("invalid hint type"))?)
    })?;

    end_of_pickup(parts, shop)?;

    let hint = Hint {
        zone,
        hint_type,
    };

    Ok((Item::Hint(hint), 1))
}
fn parse_checkable_hint<'a, P>(mut parts: P, shop: bool) -> Result<(Item, u16), String>
where P: Iterator<Item=&'a str>
{
    let hint_parts = parts.next().ok_or_else(|| String::from("missing hint descriptor"))?;
    end_of_pickup(parts, shop)?;

    let mut parts = hint_parts.split(',');
    let base_price = parts.next().ok_or_else(|| String::from("missing base price"))?;
    let base_price = base_price.parse::<u16>().map_err(|_| String::from("invalid base price"))?;
    let price_modifier = parts.next().ok_or_else(|| String::from("missing price modifier"))?;
    let price_modifier = price_modifier.parse::<u16>().map_err(|_| String::from("invalid price modifier"))?;

    let mut hinted_items = Vec::new();
    for part in parts {
        let pickup_parts = part.split('-').collect::<Vec<_>>();
        if let (pickup, 1) = parse_pickup(&pickup_parts.join("|"), shop)? {
            if pickup.is_checkable() {
                hinted_items.push(pickup)
            }
        }
    }

    Ok((Item::CheckableHint(base_price, price_modifier, hinted_items), 1))
}

pub fn parse_pickup<'a>(pickup: &'a str, shop: bool) -> Result<(Item, u16), String> {
    let pickup = pickup.trim();
    let mut parts = pickup.split('|');

    let pickup_type = parts.next().unwrap_or("tried to parse empty pickup");
    match pickup_type {
        "0" => parse_spirit_light(parts, shop),
        "1" => parse_resource(parts, shop),
        "2" => parse_skill(parts, shop),
        "3" => parse_shard(parts, shop),
        "4" => parse_command(parts, shop),
        "5" => parse_teleporter(parts, shop),
        "6" => Ok((Item::Message(pickup.to_string()), 1)),
        "8" => parse_set_uber_state(parts, shop),
        "9" => parse_world_event(parts, shop),
        "10" => parse_bonus_item(parts, shop),
        "11" => parse_bonus_upgrade(parts, shop),
        "12" => parse_zone_hint(parts, shop),
        "13" => parse_checkable_hint(parts, shop),
        _ => Err(String::from("invalid pickup type")),
    }.map_err(|err| format!("{} in pickup {}", err, pickup))
}

fn parse_count(pickup: &mut &str) -> u16 {
    if let Some(index) = pickup.find('x') {
        let amount = pickup[..index].trim();
        if let Ok(amount) = amount.parse::<u16>() {
            *pickup = &pickup[index + 1..];
            return amount;
        }
    }
    1
}

pub fn parse_header(header: &str, world: &mut World, pathsets: &[Pathset]) -> Result<(String, HashSet<PathBuf>), String> {
    let mut processed = String::with_capacity(header.len());
    let mut dependencies = HashSet::new();
    let mut first_line = true;

    for line in header.lines() {
        let line = line.trim();

        if first_line {
            first_line = false;
            if line.starts_with('#') { continue; }
        }

        let mut trimmed = line;
        if let Some(index) = trimmed.find("//") {
            trimmed = &trimmed[..index];
        }

        if let Some(command) = trimmed.strip_prefix("!!") {
             if let Some(include) = command.strip_prefix("include ") {
                let mut path = PathBuf::from(include);
                path.set_extension("wotwrh");
                dependencies.insert(path);
            } else if let Some(mut pickup) = command.strip_prefix("add ") {
                let count = parse_count(&mut pickup);
                let (item, mut amount) = parse_pickup(pickup, false)?;
                amount *= count;

                log::trace!("adding {}{} to the item pool", if amount == 1 { String::new() } else { format!("{}x ", amount) }, item);

                world.pool.grant(item, amount, pathsets);
            } else if let Some(mut pickup) = command.strip_prefix("remove ") {
                let count = parse_count(&mut pickup);
                let (item, mut amount) = parse_pickup(pickup, false)?;
                amount *= count;

                log::trace!("removing {}{} from the item pool", if amount == 1 { String::new() } else { format!("{}x ", amount) }, item);

                world.pool.remove(&item, amount);
            } else if command.starts_with("set ") {
                log::warn!("!!set commands are obsolete, uber state pickups given on spawn are automatically accounted for.");
            } else {
                return Err(format!("Unknown command {}", command))
            }
        } else if let Some(ignored) = line.strip_prefix('!') {
            // TODO should this be completely ignored? This way the preplacement isn't collected either...
            processed += ignored;
            processed.push('\n');
        } else {
            if !trimmed.is_empty() {
                let mut parts = trimmed.splitn(3, '|');
                let uber_group = parts.next().unwrap();
                let uber_id = parts.next().ok_or_else(|| format!("malformed pickup {}", trimmed))?;
                let uber_state = UberState::from_parts(uber_group, uber_id)?;

                let item = parts.next().ok_or_else(|| format!("malformed pickup {}", trimmed))?;
                let (item, amount) = parse_pickup(item, uber_state.is_shop())?;

                // if someone sets an uberstate on spawn, they probably don't want a pickup placed on it
                if let Item::UberState(command) = &item {
                    if uber_state.identifier.uber_group == 3 && uber_state.identifier.uber_id == 0 {
                        let mut parts = command.split('|');
                        let uber_group = parts.next().ok_or_else(|| format!("malformed pickup {}", trimmed))?;
                        let mut uber_id = parts.next().ok_or_else(|| format!("malformed pickup {}", trimmed))?.to_string();
                        let uber_type = parts.next().ok_or_else(|| format!("malformed pickup {}", trimmed))?;
                        let value = parts.next().ok_or_else(|| format!("malformed pickup {}", trimmed))?;

                        if uber_type != "bool" {
                            uber_id.push('=');
                            uber_id += value;
                        }
                        let target = UberState::from_parts(uber_group, &uber_id)?;

                        if world.graph.nodes.iter().any(|node| node.uber_state().map_or(false, |uber_state| uber_state == &target)) {
                            log::trace!("adding an empty pickup at {} to prevent placements", target);
                            let null_item = Item::Message(String::from("6|f=0|quiet|noclear"));
                            world.preplace(target, null_item, amount);
                        }
                    }
                }

                if world.pool.inventory().has(&item, 1) {
                    log::trace!("removing {}{} from the item pool", if amount == 1 { String::new() } else { format!("{}x ", amount) }, item);

                    world.pool.remove(&item, amount);
                }

                world.preplace(uber_state, item, amount);
            }
            processed += line;
            processed.push('\n');
        }
    }
    processed.push('\n');
    processed.shrink_to_fit();
    Ok((processed, dependencies))
}

pub fn validate_header(contents: &str) -> Result<Vec<UberState>, String> {
    let mut occupied_states = Vec::new();

    let mut first_line = true;
    let mut skip_line = false;

    for line in contents.lines() {
        let mut trimmed = line.trim();

        if first_line {
            first_line = false;
            if trimmed.starts_with('#') { continue; }
        }

        let comment = trimmed.find("//");
        if let Some(index) = comment {
            if trimmed[index..].contains("skip-validate") {
                skip_line = true;
            }
            trimmed = &trimmed[..index].trim();
        }

        if trimmed.is_empty() {
            continue;
        }
        if skip_line {
            skip_line = false;
            continue;
        }

        if let Some(command) = trimmed.strip_prefix("!!") {
             if let Some(include) = command.strip_prefix("include ") {
                let mut path = PathBuf::from(include);
                path.set_extension("wotwrh");
                util::read_file(&path, "headers").map_err(|err| format!("Error reading header from {:?}: {}", path, err))?;
            } else if let Some(mut pickup) = command.strip_prefix("add ") {
                parse_count(&mut pickup);
                parse_pickup(pickup, false)?;
            } else if let Some(mut pickup) = command.strip_prefix("remove ") {
                parse_count(&mut pickup);
                parse_pickup(pickup, false)?;
            } else if command.starts_with("set ") {
                return Err(String::from("!!set commands are obsolete, uber state pickups given on spawn are automatically accounted for."));
            } else {
                return Err(format!("Unknown command {}", command))
            }
        } else {
            if let Some(ignored) = trimmed.strip_prefix("!") {
                trimmed = ignored;
            }
            let mut parts = trimmed.splitn(3, '|');
            let uber_group = parts.next().unwrap();
            let uber_id = parts.next().ok_or_else(|| format!("malformed pickup {}", trimmed))?;
            let uber_state = UberState::from_parts(uber_group, uber_id)?;
            let is_shop = uber_state.is_shop();

            if uber_group == "9" {
                occupied_states.push(uber_state);
            }

            let item = parts.next().ok_or_else(|| format!("malformed pickup {}", trimmed))?;
            let (item, _) = parse_pickup(item, is_shop)?;

            match item {
                Item::UberState(command) => {
                    let mut parts = command.split('|');
                    let uber_group = parts.next().unwrap();

                    if uber_group != "9" { continue; }
                    let uber_id = parts.next().unwrap();
                    parts.next().unwrap();
                    let mut uber_value = parts.next().unwrap();

                    if uber_value == "true" {
                        uber_value = "1";
                    } else if uber_value == "false" {
                        uber_value = "0";
                    }

                    let uber_state = UberIdentifier::from_parts(uber_group, uber_id).unwrap();

                    let uber_state = UberState {
                        identifier: uber_state,
                        value: uber_value.to_string(),
                    };

                    occupied_states.push(uber_state);
                },
                Item::Command(Command::StartTimer { identifier }) |
                Item::Command(Command::StopTimer { identifier }) => {
                    let uber_state = UberState {
                        identifier,
                        value: String::from("++"),  // represent a timer so that the sort will put it alongside + and - commands
                    };

                    occupied_states.push(uber_state);
                },
                Item::Command(Command::StopEqual { uber_state }) |
                Item::Command(Command::StopGreater { uber_state }) |
                Item::Command(Command::StopLess { uber_state }) => {
                    if uber_group == "9" {
                        if uber_state.identifier.uber_group == 9 {
                            occupied_states.push(uber_state);
                        }
                    } else {
                        return Err(format!("stop command on {} stops a multipickup outside of uber group 9. This may interact unpredictably with other headers.", trimmed));
                    }
                }
                _ => {},
            }
        }
    }

    occupied_states.sort_unstable();
    occupied_states.dedup();

    // remove redundancies, the sort beforehand put all timers, + and - commands in front
    let mut index = 0;
    while let Some(current) = occupied_states.get_mut(index) {
        if current.value.starts_with(&['+', '-'][..]) || current.value.is_empty() {
            current.value = String::new();
            let clone = current.clone();

            occupied_states.retain(|other| other == &clone || other.identifier != clone.identifier);
        }
        index += 1;
    }

    occupied_states.dedup();

    Ok(occupied_states)
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::*;

    use util::*;
    use inventory::Inventory;

    #[test]
    fn header_parsing() {
        let graph = lexer::parse_logic(&PathBuf::from("areas.wotw"), &PathBuf::from("loc_data.csv"), &PathBuf::from("state_data.csv"), &[Pathset::Moki], false).unwrap();
        let mut world = World::new(&graph);
        let header = util::read_file(&PathBuf::from("bonus_items.wotwrh"), "headers").unwrap();
        parse_header(&header, &mut world, &[Pathset::Moki]).unwrap();
        let mut expected = Inventory::default();
        expected.grant(Item::BonusItem(BonusItem::ExtraDoubleJump), 1);
        expected.grant(Item::BonusItem(BonusItem::ExtraAirDash), 1);
        expected.grant(Item::BonusItem(BonusItem::EnergyRegen), 3);
        expected.grant(Item::BonusItem(BonusItem::HealthRegen), 3);
        assert_eq!(world.pool.fillers, expected);
        assert!(world.preplacements.contains_key(&UberState::from_parts("1", "106").unwrap()));
        assert!(!world.preplacements.contains_key(&UberState::from_parts("1", "105").unwrap()));
    }

    #[test]
    fn pickup_parsing() {
        assert_eq!(parse_pickup("0|5000", false), Ok((Item::SpiritLight(1), 5000)));
        assert_eq!(parse_pickup("0|-5000", false), Ok((Item::RemoveSpiritLight(1), 5000)));
        assert_eq!(parse_pickup("1|2", false), Ok((Item::Resource(Resource::Ore), 1)));
        assert!(parse_pickup("1|-2", false).is_err());
        assert!(parse_pickup("1|5", false).is_err());
        assert_eq!(parse_pickup("2|8", false), Ok((Item::Skill(Skill::Launch), 1)));
        assert_eq!(parse_pickup("2|120", false), Ok((Item::Skill(Skill::AncestralLight), 1)));
        assert_eq!(parse_pickup("2|121", false), Ok((Item::Skill(Skill::AncestralLight), 1)));
        assert!(parse_pickup("2|25", false).is_err());
        assert!(parse_pickup("2|-9", false).is_err());
        assert_eq!(parse_pickup("3|28", false), Ok((Item::Shard(Shard::LastStand), 1)));
        assert_eq!(parse_pickup("5|16", false), Ok((Item::Teleporter(Teleporter::Marsh), 1)));
        assert_eq!(parse_pickup("9|0", false), Ok((Item::Water, 1)));
        assert_eq!(parse_pickup("9|-0", false), Ok((Item::RemoveWater, 1)));
        assert_eq!(parse_pickup("11|0", false), Ok((Item::BonusUpgrade(BonusUpgrade::RapidHammer), 1)));
        assert_eq!(parse_pickup("10|31", false), Ok((Item::BonusItem(BonusItem::EnergyRegen), 1)));
        assert!(parse_pickup("12|13", false).is_err());
        assert!(parse_pickup("8|5|3|6", false).is_err());
        assert!(parse_pickup("8||||", false).is_err());
        assert!(parse_pickup("8|5|3|in|3", false).is_err());
        assert!(parse_pickup("8|5|3|bool|3", false).is_err());
        assert!(parse_pickup("8|5|3|float|hm", false).is_err());
        assert_eq!(parse_pickup("8|5|3|int|6", false), Ok((Item::UberState(String::from("5|3|int|6")), 1)));
        assert_eq!(parse_pickup("4|0", false), Ok((Item::Command(Command::Autosave), 1)));
        assert!(parse_pickup("12", false).is_err());
        assert!(parse_pickup("", false).is_err());
        assert!(parse_pickup("0|", false).is_err());
        assert!(parse_pickup("0||400", false).is_err());
        assert!(parse_pickup("7|3", false).is_err());
        assert!(parse_pickup("-0|65", false).is_err());
        assert_eq!(parse_pickup("12|11|10", false), Ok((Item::Hint(Hint { zone: Zone::Willow, hint_type: ZoneHintType::All }), 1)));
        assert_eq!(parse_pickup("12|11", false), Ok((Item::Hint(Hint { zone: Zone::Willow, hint_type: ZoneHintType::Skills }), 1)));
    }
}
