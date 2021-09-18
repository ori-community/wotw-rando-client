use std::{
    collections::{HashSet, HashMap},
    path::{Path, PathBuf},
    str::FromStr,
};

use rand::Rng;
use regex::Regex;

use crate::world::{
    World,
    graph::Graph,
};
use crate::inventory::{Inventory, Item, UberStateItem, UberStateOperator, UberStateRange, UberStateRangeBoundary};
use crate::util::{
    self, Resource, Skill, Shard, Teleporter, BonusItem, BonusUpgrade, Hint, Command, ToggleCommand, Zone, ZoneHintType, SysMessage, WheelCommand, WheelIcon, WheelBind,
    settings::Settings,
    uberstate::{UberState, UberType, UberIdentifier},
};

fn end_of_pickup<'a, I>(mut parts: I) -> Result<(), String>
where
    I: Iterator<Item = &'a str>,
{
    if parts.next().is_some() { return Err(String::from("too many parts")); }
    Ok(())
}
fn parse_uber_state<'a, I>(parts: &mut I) -> Result<UberState, String>
where
    I: Iterator<Item = &'a str>,
{
    let uber_group = parts.next().ok_or_else(|| String::from("missing uber group"))?;
    let uber_id = parts.next().ok_or_else(|| String::from("missing uber id"))?;

    Ok(UberState::from_parts(uber_group, uber_id)?)
}

fn parse_spirit_light<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let spirit_light = parts.next().ok_or_else(|| String::from("missing spirit light amount"))?;
    end_of_pickup(parts)?;
    if let Some(spirit_light) = spirit_light.strip_prefix('-') {
        let spirit_light: u16 = spirit_light.parse().map_err(|_| String::from("invalid spirit light amount"))?;
        Ok(Item::RemoveSpiritLight(spirit_light))
    } else {
        let spirit_light: u16 = spirit_light.parse().map_err(|_| String::from("invalid spirit light amount"))?;
        Ok(Item::SpiritLight(spirit_light))
    }
}
fn parse_resource<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let resource_type = parts.next().ok_or_else(|| String::from("missing resource type"))?;
    end_of_pickup(parts)?;
    let resource_type: u8 = resource_type.parse().map_err(|_| String::from("invalid resource type"))?;
    let resource = Resource::from_id(resource_type).ok_or_else(|| String::from("invalid resource type"))?;
    Ok(Item::Resource(resource))
}
fn parse_skill<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let skill_type = parts.next().ok_or_else(|| String::from("missing skill type"))?;
    end_of_pickup(parts)?;
    if let Some(skill_type) = skill_type.strip_prefix('-') {
        let skill_type: u8 = skill_type.parse().map_err(|_| String::from("invalid skill type"))?;
        let skill = Skill::from_id(skill_type).ok_or_else(|| String::from("invalid skill type"))?;
        Ok(Item::RemoveSkill(skill))
    } else {
        let skill_type: u8 = skill_type.parse().map_err(|_| String::from("invalid skill type"))?;
        let skill = Skill::from_id(skill_type).ok_or_else(|| String::from("invalid skill type"))?;
        Ok(Item::Skill(skill))
    }
}
fn parse_shard<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let shard_type = parts.next().ok_or_else(|| String::from("missing shard type"))?;
    end_of_pickup(parts)?;
    if let Some(shard_type) = shard_type.strip_prefix('-') {
        let shard_type: u8 = shard_type.parse().map_err(|_| String::from("invalid shard type"))?;
        let shard = Shard::from_id(shard_type).ok_or_else(|| String::from("invalid shard type"))?;
        Ok(Item::RemoveShard(shard))
    } else {
        let shard_type: u8 = shard_type.parse().map_err(|_| String::from("invalid shard type"))?;
        let shard = Shard::from_id(shard_type).ok_or_else(|| String::from("invalid shard type"))?;
        Ok(Item::Shard(shard))
    }
}
fn parse_autosave<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    end_of_pickup(parts)?;
    Ok(Item::Command(Command::Autosave))
}
fn parse_set_resource<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let resource = parts.next().ok_or_else(|| String::from("missing resource type"))?;
    let resource: u8 = resource.parse().map_err(|_| String::from("invalid resource type"))?;
    let resource = Resource::from_id(resource).ok_or_else(|| String::from("invalid resource type"))?;
    let amount = parts.next().ok_or_else(|| String::from("missing resource amount"))?;
    let amount: i16 = amount.parse().map_err(|_| String::from("invalid resource type"))?;
    end_of_pickup(parts)?;
    Ok(Item::Command(Command::Resource { resource, amount }))
}
fn parse_checkpoint<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    end_of_pickup(parts)?;
    Ok(Item::Command(Command::Checkpoint))
}
fn parse_magic<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    end_of_pickup(parts)?;
    Ok(Item::Command(Command::Magic))
}
fn parse_stop<'a, P>(mut parts: P) -> Result<UberState, String>
where P: Iterator<Item=&'a str>
{
    let uber_group = parts.next().ok_or_else(|| String::from("missing uber group"))?;
    let uber_id = parts.next().ok_or_else(|| String::from("missing uber id"))?;
    let value = parts.next().ok_or_else(|| String::from("missing uber value"))?;
    end_of_pickup(parts)?;

    let uber_id = format!("{}={}", uber_id, value);
    UberState::from_parts(uber_group, &uber_id)
}
fn parse_stop_equal<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let uber_state = parse_stop(parts)?;
    Ok(Item::Command(Command::StopEqual { uber_state }))
}
fn parse_stop_greater<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let uber_state = parse_stop(parts)?;
    Ok(Item::Command(Command::StopGreater { uber_state }))
}
fn parse_stop_less<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let uber_state = parse_stop(parts)?;
    Ok(Item::Command(Command::StopLess { uber_state }))
}
fn parse_toggle<'a, P>(mut parts: P) -> Result<Item, String>
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
    end_of_pickup(parts)?;

    Ok(Item::Command(Command::Toggle { target: toggle_type, on }))
}
fn parse_warp<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let x = parts.next().ok_or_else(|| String::from("missing x coordinate"))?;
    let x: i16 = x.parse().map_err(|_| String::from("invalid x coordinate"))?;
    let y = parts.next().ok_or_else(|| String::from("missing x coordinate"))?;
    let y: i16 = y.parse().map_err(|_| String::from("invalid x coordinate"))?;
    end_of_pickup(parts)?;

    Ok(Item::Command(Command::Warp { x, y }))
}
fn parse_timer<'a, P>(mut parts: P) -> Result<UberIdentifier, String>
where P: Iterator<Item=&'a str>
{
    let uber_state = parse_uber_state(&mut parts)?;
    end_of_pickup(parts)?;

    Ok(uber_state.identifier)
}
fn parse_start_timer<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let identifier = parse_timer(parts)?;
    Ok(Item::Command(Command::StartTimer { identifier }))
}
fn parse_stop_timer<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let identifier = parse_timer(parts)?;
    Ok(Item::Command(Command::StopTimer { identifier }))
}
fn parse_intercept<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let intercept = parts.next().ok_or_else(|| String::from("missing intercept"))?;
    let intercept: i32 = intercept.parse().map_err(|_| String::from("invalid intercept"))?;
    let set = parts.next().ok_or_else(|| String::from("missing set"))?;
    let set: i32 = set.parse().map_err(|_| String::from("invalid set"))?;
    end_of_pickup(parts)?;

    Ok(Item::Command(Command::StateRedirect { intercept, set }))
}
fn parse_set_player<'a, P>(mut parts: P) -> Result<i16, String>
where P: Iterator<Item=&'a str>
{
    let amount = parts.next().ok_or_else(|| String::from("missing amount"))?;
    let amount: i16 = amount.parse().map_err(|_| String::from("invalid amount"))?;
    end_of_pickup(parts)?;

    Ok(amount)
}
fn parse_set_health<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let amount = parse_set_player(parts)?;
    Ok(Item::Command(Command::SetHealth { amount }))
}
fn parse_set_energy<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let amount = parse_set_player(parts)?;
    Ok(Item::Command(Command::SetEnergy { amount }))
}
fn parse_set_spirit_light<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let amount = parse_set_player(parts)?;
    Ok(Item::Command(Command::SetSpiritLight { amount }))
}
fn parse_equip<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let slot = parts.next().ok_or_else(|| String::from("missing equip slot"))?;
    let slot: u8 = slot.parse().map_err(|_| String::from("invalid equip slot"))?;
    if slot > 2 { return Err(String::from("invalid equip slot")); }
    let ability = parts.next().ok_or_else(|| String::from("missing ability to equip"))?;
    let ability: u16 = ability.parse().map_err(|_| String::from("invalid ability to equip"))?;
    end_of_pickup(parts)?;

    Ok(Item::Command(Command::Equip { slot, ability }))
}
fn parse_ahk_signal<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let signal = parts.next().ok_or_else(|| String::from("missing ahk signal specifier"))?;
    end_of_pickup(parts)?;

    Ok(Item::Command(Command::AhkSignal { signal: signal.to_string() }))
}
fn parse_if<'a, P>(mut parts: P) -> Result<(UberState, Item), String>
where P: Iterator<Item=&'a str>
{
    let uber_group = parts.next().ok_or_else(|| String::from("missing uber group"))?;
    let uber_id = parts.next().ok_or_else(|| String::from("missing uber id"))?;
    let value = parts.next().ok_or_else(|| String::from("missing uber value"))?;

    let uber_id = format!("{}={}", uber_id, value);
    let uber_state = UberState::from_parts(uber_group, &uber_id)?;

    let item = parts.collect::<Vec<_>>().join("|");
    let item = parse_pickup(&item)?;

    Ok((uber_state, item))
}
fn parse_if_equal<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let (uber_state, item) = parse_if(parts)?;
    Ok(Item::Command(Command::IfEqual { uber_state, item: Box::new(item) }))
}
fn parse_if_greater<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let (uber_state, item) = parse_if(parts)?;
    Ok(Item::Command(Command::IfGreater { uber_state, item: Box::new(item) }))
}
fn parse_if_less<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let (uber_state, item) = parse_if(parts)?;
    Ok(Item::Command(Command::IfLess { uber_state, item: Box::new(item) }))
}
fn parse_disable_sync<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let uber_state = parse_uber_state(&mut parts)?;
    end_of_pickup(parts)?;

    Ok(Item::Command(Command::DisableSync { uber_state }))
}
fn parse_enable_sync<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let uber_state = parse_uber_state(&mut parts)?;
    end_of_pickup(parts)?;

    Ok(Item::Command(Command::DisableSync { uber_state }))
}
fn parse_command<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let command_type = parts.next().ok_or_else(|| String::from("missing command pickup type"))?;
    match command_type {
        "0" => parse_autosave(parts),
        "1" => parse_set_resource(parts),
        "2" => parse_checkpoint(parts),
        "3" => parse_magic(parts),
        "4" => parse_stop_equal(parts),
        "5" => parse_stop_greater(parts),
        "6" => parse_stop_less(parts),
        "7" => parse_toggle(parts),
        "8" => parse_warp(parts),
        "9" => parse_start_timer(parts),
        "10" => parse_stop_timer(parts),
        "11" => parse_intercept(parts),
        "12" => parse_set_health(parts),
        "13" => parse_set_energy(parts),
        "14" => parse_set_spirit_light(parts),
        "15" => parse_equip(parts),
        "16" => parse_ahk_signal(parts),
        "17" => parse_if_equal(parts),
        "18" => parse_if_greater(parts),
        "19" => parse_if_less(parts),
        "20" => parse_disable_sync(parts),
        "21" => parse_enable_sync(parts),
        _ => Err(String::from("invalid command type")),
    }
}
fn parse_teleporter<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let teleporter_type = parts.next().ok_or_else(|| String::from("missing teleporter type"))?;
    end_of_pickup(parts)?;
    if let Some(teleporter_type) = teleporter_type.strip_prefix('-') {
        let teleporter_type: u8 = teleporter_type.parse().map_err(|_| String::from("invalid teleporter type"))?;
        let teleporter = Teleporter::from_id(teleporter_type).ok_or_else(|| String::from("invalid teleporter type"))?;
        Ok(Item::RemoveTeleporter(teleporter))
    } else {
        let teleporter_type: u8 = teleporter_type.parse().map_err(|_| String::from("invalid teleporter type"))?;
        let teleporter = Teleporter::from_id(teleporter_type).ok_or_else(|| String::from("invalid teleporter type"))?;
        Ok(Item::Teleporter(teleporter))
    }
}
fn parse_message<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let parts = parts.collect::<Vec<&str>>();
    if parts.is_empty() {
        return Err(String::from("missing message"));
    }

    let message = parts.join("|");
    Ok(Item::Message(message))
}
fn parse_pointer(str: &str) -> Option<Result<UberIdentifier, String>> {
    if let Some(str) = str.strip_prefix("$(") {
        if let Some(pointer) = str.strip_suffix(")") {
            let mut parts = pointer.splitn(2, '|');
            let uber_group = parts.next().unwrap();
            if let Some(uber_id) = parts.next() {
                return Some(UberIdentifier::from_parts(uber_group, uber_id));
            } else {
                return Some(Err(String::from("Invalid uber identifier in pointer")));
            }
        } else {
            return Some(Err(String::from("unmatched brackets")))
        }
    }

    None
}
fn parse_set_uber_state<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let uber_group = parts.next().ok_or_else(|| String::from("missing uber group"))?;
    let uber_id = parts.next().ok_or_else(|| String::from("missing uber id"))?;
    let uber_identifier = UberIdentifier::from_parts(uber_group, uber_id)?;

    let uber_type = parts.next().ok_or_else(|| String::from("missing uber state type"))?;
    let uber_type = UberType::from_str(uber_type)?;

    let mut remaining = &parts.into_iter().collect::<Vec<_>>().join("|")[..];

    let mut signed = false;
    let mut sign = false;
    if remaining.starts_with('+') {
        signed = true;
        sign = true;
    } else if remaining.starts_with('-') {
        signed = true;
    }
    if signed {
        if matches!(uber_type, UberType::Bool) { return Err(String::from("can't math with bools")); }
        remaining = &remaining[1..];
    }

    // TODO simulate suppress
    if let Some(last) = remaining.rfind('|') {
        let mut last_part = &remaining[last + 1..];
        if let Some(skip) = last_part.strip_prefix("skip=") {
            last_part = skip;
        }
        if last_part.parse::<u32>().is_ok() {
            remaining = &remaining[..last];
        }
    }

    let parse_by_value = |value: &str| -> Result<(), String> {
        match uber_type {
            UberType::Bool | UberType::Teleporter => { value.parse::<bool>().map_err(|_| format!("failed to parse {} as boolean", value))?; },
            UberType::Byte => { value.parse::<u8>().map_err(|_| format!("failed to parse {} as byte", value))?; },
            UberType::Int => { value.parse::<i32>().map_err(|_| format!("failed to parse {} as integer", value))?; },
            UberType::Float => { value.parse::<f32>().map_err(|_| format!("failed to parse {} as floating point", value))?; },
        }
        Ok(())
    };

    let operator = if let Some(range) = remaining.strip_prefix('[') {
        if let Some(range) = range.strip_suffix(']') {
            let mut parts = range.splitn(2, ',');
            let start = parts.next().unwrap().trim();
            let end = parts.next().ok_or_else(|| format!("missing range end"))?.trim();

            let parse_boundary = |value: &str| -> Result<UberStateRangeBoundary, String> {
                if let Some(uber_identifier) = parse_pointer(value) {
                    Ok(UberStateRangeBoundary::Pointer(uber_identifier?))
                } else {
                    parse_by_value(value)?;
                    Ok(UberStateRangeBoundary::Value(value.to_owned()))
                }
            };

            let start = parse_boundary(start)?;
            let end = parse_boundary(end)?;
            Ok(UberStateOperator::Range(UberStateRange {
                start,
                end,
            }))
        } else {
            Err(String::from("unmatched brackets"))
        }
    } else if let Some(pointer) = parse_pointer(remaining) {
        Ok(UberStateOperator::Pointer(pointer?))
    } else {
        parse_by_value(remaining)?;
        Ok(UberStateOperator::Value(remaining.to_owned()))
    }?;

    Ok(Item::UberState(UberStateItem {
        uber_identifier,
        uber_type,
        signed,
        sign,
        operator,
    }))
}
fn parse_world_event<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let world_event_type = parts.next().ok_or_else(|| String::from("missing world event type"))?;
    end_of_pickup(parts)?;
    if let Some(world_event_type) = world_event_type.strip_prefix('-') {
        let world_event_type: u8 = world_event_type.parse().map_err(|_| String::from("invalid world event type"))?;
        if world_event_type != 0 { return Err(String::from("invalid world event type")); }
        Ok(Item::RemoveWater)
    } else {
        let world_event_type: u8 = world_event_type.parse().map_err(|_| String::from("invalid world event type"))?;
        if world_event_type != 0 { return Err(String::from("invalid world event type")); }
        Ok(Item::Water)
    }
}
fn parse_bonus_item<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let bonus_type = parts.next().ok_or_else(|| String::from("missing bonus item type"))?;
    end_of_pickup(parts)?;
    let bonus_type: u8 = bonus_type.parse().map_err(|_| String::from("invalid bonus item type"))?;
    let bonus = BonusItem::from_id(bonus_type).ok_or_else(|| String::from("invalid bonus item type"))?;
    Ok(Item::BonusItem(bonus))
}
fn parse_bonus_upgrade<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let bonus_type = parts.next().ok_or_else(|| String::from("missing bonus upgrade type"))?;
    end_of_pickup(parts)?;
    let bonus_type: u8 = bonus_type.parse().map_err(|_| String::from("invalid bonus upgrade type"))?;
    let bonus = BonusUpgrade::from_id(bonus_type).ok_or_else(|| String::from("invalid bonus upgrade type"))?;
    Ok(Item::BonusUpgrade(bonus))
}
fn parse_zone_hint<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let zone = parts.next().ok_or_else(|| String::from("missing hint zone"))?;
    let zone: u8 = zone.parse().map_err(|_| String::from("invalid hint zone"))?;
    let zone = Zone::from_id(zone).ok_or_else(|| String::from("invalid hint zone"))?;

    let hint_type = parts.next().map_or_else::<Result<ZoneHintType, String>, _, _>(|| Ok(ZoneHintType::default()), |hint_type| {
        let hint_type: u8 = hint_type.parse().map_err(|_| String::from("invalid hint type"))?;
        ZoneHintType::from_id(hint_type).ok_or_else(|| String::from("invalid hint type"))
    })?;

    end_of_pickup(parts)?;

    let hint = Hint {
        zone,
        hint_type,
    };

    Ok(Item::Hint(hint))
}
fn parse_checkable_hint<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let hint_parts = parts.next().ok_or_else(|| String::from("missing hint descriptor"))?;
    end_of_pickup(parts)?;

    let mut parts = hint_parts.split(',');
    let base_price = parts.next().ok_or_else(|| String::from("missing base price"))?;
    let base_price = base_price.parse::<u16>().map_err(|_| String::from("invalid base price"))?;
    let price_modifier = parts.next().ok_or_else(|| String::from("missing price modifier"))?;
    let price_modifier = price_modifier.parse::<u16>().map_err(|_| String::from("invalid price modifier"))?;

    let mut hinted_items = Vec::new();
    for part in parts {
        let pickup_parts = part.split('-').collect::<Vec<_>>();
        let pickup = parse_pickup(&pickup_parts.join("|"))?;
        if pickup.is_checkable() {
            hinted_items.push(pickup)
        }
    }

    Ok(Item::CheckableHint(base_price, price_modifier, hinted_items))
}
fn parse_relic<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let zone = parts.next().ok_or_else(|| String::from("missing relic zone"))?;
    end_of_pickup(parts)?;

    let zone: u8 = zone.parse().map_err(|_| String::from("invalid relic zone"))?;
    let zone = Zone::from_id(zone).ok_or_else(|| String::from("invalid relic zone"))?;

    Ok(Item::Relic(zone))
}
fn parse_sysmessage<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let message = parts.next().ok_or_else(|| String::from("missing sysmessage type"))?;
    end_of_pickup(parts)?;

    let message: u8 = message.parse().map_err(|_| String::from("invalid sysmessage type"))?;
    let message = SysMessage::from_id(message).ok_or_else(|| String::from("invalid sysmessage type"))?;

    Ok(Item::SysMessage(message))
}
fn parse_wheel_item_position<'a, P>(parts: &mut P) -> Result<(u16, u8), String>
where P: Iterator<Item=&'a str>
{
    let wheel = parts.next().ok_or_else(|| String::from("missing wheel id"))?;
    let wheel: u16 = wheel.parse().map_err(|_| String::from("invalid wheel id"))?;
    let position = parts.next().ok_or_else(|| String::from("missing wheel item position"))?;
    let position: u8 = position.parse().map_err(|_| String::from("invalid wheel item position"))?;

    Ok((wheel, position))
}
fn parse_wheel_set_name<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let (wheel, position) = parse_wheel_item_position(&mut parts)?;
    let name = parts.next().ok_or_else(|| String::from("missing name"))?.to_owned();
    end_of_pickup(parts)?;

    Ok(Item::WheelCommand(WheelCommand::SetName { wheel, position, name }))
}
fn parse_wheel_set_description<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let (wheel, position) = parse_wheel_item_position(&mut parts)?;
    let description = parts.next().ok_or_else(|| String::from("missing description"))?.to_owned();
    end_of_pickup(parts)?;

    Ok(Item::WheelCommand(WheelCommand::SetDescription { wheel, position, description }))
}
fn parse_wheel_set_icon<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let (wheel, position) = parse_wheel_item_position(&mut parts)?;
    let icon = parts.next().ok_or_else(|| String::from("missing icon"))?;
    end_of_pickup(parts)?;

    let mut icon_parts = icon.splitn(2, ':');

    let icon_type = icon_parts.next().unwrap();
    let icon_id = icon_parts.next().ok_or_else(|| String::from("invalid wheel icon syntax"))?;
    let icon_id: u16 = icon_id.parse().map_err(|_| String::from("invalid wheel icon id"))?;
    let icon = match icon_type {
        "spirit_shard" => WheelIcon::Shard(icon_id),
        "spell" => WheelIcon::Spell(icon_id),
        _ => return Err(String::from("invalid wheel icon type")),
    };

    Ok(Item::WheelCommand(WheelCommand::SetIcon { wheel, position, icon }))
}
fn parse_wheel_set_color<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let (wheel, position) = parse_wheel_item_position(&mut parts)?;
    let r = parts.next().ok_or_else(|| String::from("missing red channel"))?;
    let r: u8 = r.parse().map_err(|_| String::from("invalid red channel"))?;
    let g = parts.next().ok_or_else(|| String::from("missing green channel"))?;
    let g: u8 = g.parse().map_err(|_| String::from("invalid green channel"))?;
    let b = parts.next().ok_or_else(|| String::from("missing blue channel"))?;
    let b: u8 = b.parse().map_err(|_| String::from("invalid blue channel"))?;
    let a = parts.next().ok_or_else(|| String::from("missing alpha channel"))?;
    let a: u8 = a.parse().map_err(|_| String::from("invalid alpha channel"))?;
    end_of_pickup(parts)?;

    Ok(Item::WheelCommand(WheelCommand::SetColor { wheel, position, r, g, b, a }))

}
fn parse_wheel_set_pickup<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let (wheel, position) = parse_wheel_item_position(&mut parts)?;
    let bind = parts.next().ok_or_else(|| String::from("missing bind"))?;
    let bind = match bind {
        "0" => WheelBind::All,
        "1" => WheelBind::Ability1,
        "2" => WheelBind::Ability2,
        "3" => WheelBind::Ability3,
        _ => return Err(String::from("invalid bind")),
    };

    let pickup = parts.collect::<Vec<_>>().join("|");
    let pickup = Box::new(parse_pickup(&pickup)?);

    Ok(Item::WheelCommand(WheelCommand::SetPickup { wheel, position, bind, pickup }))
}
fn parse_wheel_set_sticky<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let wheel = parts.next().ok_or_else(|| String::from("missing wheel id"))?;
    let wheel: u16 = wheel.parse().map_err(|_| String::from("invalid wheel id"))?;
    let sticky = parts.next().ok_or_else(|| String::from("missing sticky boolean"))?;
    let sticky: bool = sticky.parse().map_err(|_| String::from("invalid sticky boolean"))?;
    end_of_pickup(parts)?;

    Ok(Item::WheelCommand(WheelCommand::SetSticky { wheel, sticky }))
}
fn parse_wheel_switch_wheel<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let wheel = parts.next().ok_or_else(|| String::from("missing wheel id"))?;
    let wheel: u16 = wheel.parse().map_err(|_| String::from("invalid wheel id"))?;
    end_of_pickup(parts)?;

    Ok(Item::WheelCommand(WheelCommand::SwitchWheel { wheel }))
}
fn parse_wheel_remove_item<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let (wheel, position) = parse_wheel_item_position(&mut parts)?;
    end_of_pickup(parts)?;

    Ok(Item::WheelCommand(WheelCommand::RemoveItem { wheel, position }))
}
fn parse_wheel_clear_all<'a, P>(parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    end_of_pickup(parts)?;

    Ok(Item::WheelCommand(WheelCommand::ClearAll))
}
fn parse_wheelcommand<'a, P>(mut parts: P) -> Result<Item, String>
where P: Iterator<Item=&'a str>
{
    let command_type = parts.next().ok_or_else(|| String::from("missing wheel command type"))?;
    match command_type {
        "0" => parse_wheel_set_name(parts),
        "1" => parse_wheel_set_description(parts),
        "2" => parse_wheel_set_icon(parts),
        "3" => parse_wheel_set_color(parts),
        "4" => parse_wheel_set_pickup(parts),
        "5" => parse_wheel_set_sticky(parts),
        "6" => parse_wheel_switch_wheel(parts),
        "7" => parse_wheel_remove_item(parts),
        "8" => parse_wheel_clear_all(parts),
        _ => Err(String::from("invalid wheel command type")),
    }
}

pub fn parse_pickup(pickup: &str) -> Result<Item, String> {
    let pickup = pickup.trim();
    let mut parts = pickup.split('|');

    let pickup_type = parts.next().unwrap_or("tried to parse empty pickup");
    match pickup_type {
        "0" => parse_spirit_light(parts),
        "1" => parse_resource(parts),
        "2" => parse_skill(parts),
        "3" => parse_shard(parts),
        "4" => parse_command(parts),
        "5" => parse_teleporter(parts),
        "6" => parse_message(parts),
        "8" => parse_set_uber_state(parts),
        "9" => parse_world_event(parts),
        "10" => parse_bonus_item(parts),
        "11" => parse_bonus_upgrade(parts),
        "12" => parse_zone_hint(parts),
        "13" => parse_checkable_hint(parts),
        "14" => parse_relic(parts),
        "15" => parse_sysmessage(parts),
        "16" => parse_wheelcommand(parts),
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

fn read_args(seed: &str, start_index: usize) -> Option<usize> {
    let mut depth: u8 = 1;
    for (index, byte) in seed[start_index..].bytes().enumerate() {
        if byte == b'(' { depth += 1; }
        else if byte == b')' { depth -= 1; }
        if depth == 0 {
            return Some(start_index + index);
        }
    }

    None
}

#[inline]
fn apply_take_commands<R>(line: &str, pool: &mut Vec<String>, rng: &mut R) -> Result<String, String>
where R: Rng + ?Sized
{
    let mut parts = line.split("!!take");

    let mut processed = parts.next().unwrap().to_string();

    for part in parts {
        let length = pool.len();
        if length == 0 {
            return Err(format!("Tried to !!take on an empty !!pool in line {}", line));
        }
        let index = rng.gen_range(0..length);
        let item = pool.remove(index);
        processed += &item;
        processed += part;
    }

    Ok(processed)
}
#[inline]
fn apply_parameters(line: &mut String, parameters: &HashMap<String, String>) -> Result<(), String> {
    let mut last_index = 0;
    loop {
        if let Some(mut start_index) = line[last_index..].find("$PARAM(") {
            start_index += last_index;
            last_index = start_index;

            let after_bracket = start_index + 7;

            if let Some(end_index) = read_args(line, after_bracket) {
                let identifier = line[after_bracket..end_index].trim();

                let value = parameters
                    .get(identifier)
                    .ok_or_else(|| format!("Unknown parameter {}", identifier))?;

                line.replace_range(start_index..=end_index, value);

                continue;
            }
        }
        break;
    }

    Ok(())
}

#[inline]
fn include_command(include: &str, dependencies: &mut HashSet<PathBuf>) {
    let mut path = PathBuf::from(include);
    path.set_extension("wotwrh");
    dependencies.insert(path);
}
#[inline]
fn exclude_command(name: &Path, exclude: &str, excludes: &mut HashMap<String, String>) {
    let name = name.file_stem().unwrap().to_string_lossy().to_string();
    excludes.insert(exclude.to_string(), name);
}
#[inline]
fn add_command(mut pickup: &str, world: &mut World) -> Result<(), String> {
    let count = parse_count(&mut pickup);
    let item = parse_pickup(pickup)?;

    log::trace!("adding {}{} to the item pool", if count == 1 { String::new() } else { format!("{}x ", count) }, item);

    world.pool.grant(item, count);

    Ok(())
}
#[inline]
fn remove_command(mut pickup: &str, world: &mut World, negative_inventory: &mut Inventory) -> Result<(), String> {
    let count = parse_count(&mut pickup);
    let mut item = parse_pickup(pickup)?;

    log::trace!("removing {}{} from the item pool", if count == 1 { String::new() } else { format!("{}x ", count) }, item);

    let negative = world.pool.remove(&item, count);
    if negative > 0 {
        if matches!(item, Item::SpiritLight(_)) {
            item = Item::SpiritLight(1);
        }

        negative_inventory.grant(item, negative);
    }

    Ok(())
}
#[inline]
fn name_command(naming: &str, names: &mut HashMap<String, String>) -> Result<(), String> {
    let mut parts = naming.splitn(2, ' ');
    let pickup = parts.next().unwrap();
    parse_pickup(pickup)?;
    let name = parts.next().ok_or_else(|| String::from("Missing name"))?;

    names.insert(pickup.to_string(), name.to_string());

    Ok(())
}
#[inline]
fn parameter_command(parameter: &str, parameters: &mut HashMap<String, String>, param_values: &HashMap<&str, &str>) -> Result<(), String> {
    let mut parts = parameter.splitn(2, ' ');
    let identifier = parts.next().unwrap();
    let default = parts.next().ok_or_else(|| String::from("Missing default value"))?;

    let mut default_parts = default.splitn(2, ':');
    let first_part = default_parts.next().unwrap();
    let (parameter_type, default) = if let Some(default) = default_parts.next() {
        (first_part, default)
    } else {
        ("string", first_part)
    };
    let value = param_values.get(identifier).map_or(default, |value| &value[..]);

    match parameter_type {
        "bool" => { value.parse::<bool>().map_err(|_| format!("Invalid value {} for boolean {}", value, identifier))?; },
        "int" => { value.parse::<i64>().map_err(|_| format!("Invalid value {} for integer {}", value, identifier))?; },
        "float" => { value.parse::<f32>().map_err(|_| format!("Invalid value {} for float {}", value, identifier))?; },
        "string" => {},
        _ => return Err(format!("Invalid parameter type {}", parameter_type)),
    }

    if parameters.insert(identifier.to_string(), value.to_string()).is_some() {
        log::warn!("Parameter {} already declared", identifier);
    }

    Ok(())
}
#[inline]
fn pool_command(mut string: &str, pool: &mut Vec<String>) -> Result<(), String>{
    let count = parse_count(&mut string);

    let mut variants = vec![string.to_string()];

    loop {
        let mut next_variants = Vec::new();

        for variant in variants.iter() {
            if let Some(end_index) = variant.find('}') {
                if let Some(start_index) = variant[..end_index].rfind('{') {
                    let mut bounds = variant[start_index + 1..end_index].split('-');

                    let lower = bounds.next().unwrap();
                    let upper = bounds.next().unwrap_or(lower);
                    let lower = lower.parse::<char>().map_err(|_| format!("Invalid range boundary {}", lower))?;
                    let upper = upper.parse::<char>().map_err(|_| format!("Invalid range boundary {}", upper))?;

                    let mut results = Vec::new();
                    for item in lower..=upper {
                        let mut result = variant[..start_index].to_string();
                        result.push(item);
                        result += &variant[end_index + 1..];
                        results.push(result);
                    }

                    next_variants.append(&mut results);
                } else { break; }
            } else { break; }
        }

        if next_variants.is_empty() {
            break;
        } else {
            variants = next_variants;
        }
    }

    variants.reserve(usize::from(count - 1) * variants.len());
    let blueprint = variants.clone();
    for _ in 1..count {
        variants.append(&mut blueprint.clone());
    }

    pool.append(&mut variants);

    Ok(())
}
#[inline]
fn addpool_command<R>(mut amount: &str, world: &mut World, pool: &mut Vec<String>, rng: &mut R) -> Result<(), String>
where R: Rng + ?Sized
{
    let count = parse_count(&mut amount);

    if !amount.trim().is_empty() {
        return Err(String::from("Invalid amount"));
    }

    for _ in 0..count {
        let length = pool.len();
        if length == 0 {
            return Err(String::from("Tried to !!take on an empty !!pool"));
        }
        let index = rng.gen_range(0..length);
        let item = pool.remove(index);

        add_command(&item, world)?;
    }

    Ok(())
}
#[inline]
fn flush_command(pool: &mut Vec<String>) {
    pool.clear();
}
#[inline]
fn set_command(identifier: &str, world: &mut World) -> Result<(), String> {
    if world.graph.nodes.is_empty() { return Ok(()); }  // Pass if not actually generating a seed

    let node = world.graph.nodes.iter().find(|&node| node.identifier() == identifier).ok_or_else(|| format!("target {} not found", identifier))?;
    if let Some(uber_state) = node.uber_state() {
        let uber_state = uber_state.clone();
        log::trace!("Universally setting state {}", uber_state);
        world.uber_states.insert(uber_state.identifier, uber_state.value);
    } else {
        return Err(format!("{} is not a valid target", identifier));
    }

    Ok(())
}
#[inline]
fn if_command(comparison: &str, parameters: &HashMap<String, String>) -> Result<bool, String> {
    let mut parts = comparison.splitn(2, ' ');
    let identifier = parts.next().unwrap();
    let compare_value = parts.next().ok_or_else(|| String::from("Missing comparison value"))?;

    let parameter_value = parameters
        .get(identifier)
        .ok_or_else(|| format!("Unknown parameter {}", identifier))?;

    Ok(compare_value == parameter_value)
}

#[derive(Debug, Default)]
pub struct HeaderContext {
    pub dependencies: HashSet<PathBuf>,
    pub excludes: HashMap<String, String>,
    pub flags: Vec<String>,
    pub names: HashMap<String, String>,
    pub negative_inventory: Inventory,
}

pub fn parse_header<R>(name: &Path, header: &str, world: &mut World, context: &mut HeaderContext, param_values: &HashMap<&str, HashMap<&str, &str>>, rng: &mut R) -> Result<String, String>
where R: Rng + ?Sized
{
    let mut processed = String::with_capacity(header.len());
    let mut pool = Vec::new();
    let mut parameters = HashMap::new();
    let mut skip_until = -1;
    let mut depth: i8 = 0;
    let mut first_line = true;

    let default = HashMap::default();
    let header_param_values = param_values.get(&name.file_stem().unwrap().to_string_lossy().to_string()[..]).unwrap_or(&default);

    for line in header.lines() {
        let mut line = apply_take_commands(line, &mut pool, rng)?;
        apply_parameters(&mut line, &parameters)?;

        let mut trimmed = line.trim();

        if first_line {
            first_line = false;
            if line.starts_with('#') { continue; }
        }

        if trimmed.starts_with("////") {
            continue;
        }

        if let Some(index) = trimmed.find("//") {
            if trimmed[index..].contains("skip-validate") {
                continue;
            }
            trimmed = &trimmed[..index];
        }

        if skip_until > -1 {
            if trimmed.trim_end() == "!!endif" {
                depth -= 1;
            } else if trimmed.starts_with("!!if ") {
                depth += 1;
            }
            if depth == skip_until {
                skip_until = -1;
            }
            continue;
        }

        if let Some(flagline) = trimmed.strip_prefix("Flags:") {
            for flag in flagline.split(',') {
                context.flags.push(flag.trim().to_string());
            }
        } else if let Some(command) = trimmed.strip_prefix("!!") {
            if let Some(include) = command.strip_prefix("include ") {
                include_command(include.trim(), &mut context.dependencies);
            } else if let Some(exclude) = command.strip_prefix("exclude ") {
                exclude_command(name, exclude.trim(), &mut context.excludes);
            } else if let Some(pickup) = command.strip_prefix("add ") {
                add_command(pickup.trim(), world).map_err(|err| format!("{} in add command {}", err, line))?;
            } else if let Some(pickup) = command.strip_prefix("remove ") {
                remove_command(pickup.trim(), world, &mut context.negative_inventory).map_err(|err| format!("{} in remove command {}", err, line))?;
            } else if let Some(naming) = command.strip_prefix("name ") {
                name_command(naming.trim(), &mut context.names).map_err(|err| format!("{} in name command {}", err, line))?;
            } else if let Some(parameter) = command.strip_prefix("parameter ") {
                parameter_command(parameter.trim(), &mut parameters, header_param_values).map_err(|err| format!("{} in parameter command {}", err, line))?;
            } else if let Some(string) = command.strip_prefix("pool ") {
                pool_command(string.trim(), &mut pool).map_err(|err| format!("{} in pool command {}", err, line))?;
            } else if let Some(amount) = command.strip_prefix("addpool ") {
                addpool_command(amount.trim(), world, &mut pool, rng).map_err(|err| format!("{} in addpool command {}", err, line))?;
            } else if command.trim_end() == "flush" {
                flush_command(&mut pool);
            } else if let Some(identifier) = command.strip_prefix("set ") {
                set_command(identifier.trim(), world).map_err(|err| format!("{} in set command {}", err, line))?;
            } else if let Some(comparison) = command.strip_prefix("if ") {
                if !if_command(comparison.trim(), &parameters).map_err(|err| format!("{} in if command {}", err, line))? {
                    skip_until = depth;
                }
                depth += 1;
            } else if command.trim_end() == "endif" {
                if depth == 0 {
                    return Err(String::from("!!endif without !!if"));
                }
                depth -= 1;
            } else {
                return Err(format!("Unknown command {}", command));
            } // TODO !!price command?
        } else if let Some(ignored) = line.strip_prefix('!') {
            processed += ignored;
            processed.push('\n');
        } else {
            if !trimmed.is_empty() {
                let mut parts = trimmed.splitn(3, '|');
                let uber_state = parse_uber_state(&mut parts).map_err(|err| format!("malformed pickup {}: {}", trimmed, err))?;

                let item = parts.next().ok_or_else(|| format!("malformed pickup {}", trimmed))?;
                let item = parse_pickup(item)?;

                // if someone sets an uberstate on spawn, they probably don't want a pickup placed on it
                if let Item::UberState(command) = &item {
                    if uber_state.identifier.uber_group == 3 && uber_state.identifier.uber_id == 0 {
                        if let UberStateOperator::Value(value) = &command.operator {
                            let value = if value == "true" {
                                String::new()
                            } else {
                                value.to_owned()
                            };

                            let target = UberState {
                                identifier: command.uber_identifier.clone(),
                                value,
                            };

                            if world.graph.nodes.iter().filter(|node| node.can_place()).any(|node| node.uber_state().map_or(false, |uber_state| uber_state == &target)) {
                                log::trace!("adding an empty pickup at {} to prevent placements", command);
                                let null_item = Item::Message(String::from("6|f=0|quiet|noclear"));
                                world.preplace(target, null_item);
                            }
                        }
                    }
                }

                world.pool.remove(&item, 1);

                world.preplace(uber_state, item);
            }
            processed += &line;
            processed.push('\n');
        }
    }

    processed.push('\n');
    processed.shrink_to_fit();
    Ok(processed)
}

pub fn validate_header(name: &Path, contents: &str) -> Result<(Vec<UberState>, HashMap<String, String>), String> {
    let mut context = HeaderContext::default();
    parse_header(name, contents, &mut World::new(&Graph::default()), &mut context, &HashMap::default(), &mut rand::thread_rng())?;

    for dependency in context.dependencies {
        util::read_file(&dependency, "headers")?;
    }

    let mut occupied_states = Vec::new();
    let mut pool = Vec::new();
    let mut parameters = HashMap::new();
    let param_values = HashMap::new();
    let mut rng = rand::thread_rng();

    let mut first_line = true;
    let mut skip_line = false;

    for line in contents.lines() {
        let mut line = apply_take_commands(line, &mut pool, &mut rng)?;
        apply_parameters(&mut line, &parameters)?;

        let mut trimmed = line.trim();

        if first_line {
            first_line = false;
            if trimmed.starts_with('#') { continue; }
        }

        if line.starts_with("Flags: ") {
            continue;
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
            if let Some(parameter) = command.strip_prefix("parameter ") {
                parameter_command(parameter.trim(), &mut parameters, &param_values).map_err(|err| format!("{} in parameter command {}", err, line))?;
            } else if let Some(string) = command.strip_prefix("pool ") {
                // TODO determinate validation would be nice?
                pool_command(string, &mut pool)?;
            } else if let Some(_) = command.strip_prefix("addpool ") {
            } else if command.trim() == "flush" {
                flush_command(&mut pool);
            }
        } else {
            if let Some(ignored) = trimmed.strip_prefix("!") {
                trimmed = ignored;
            }
            let mut parts = trimmed.splitn(3, '|');
            let uber_state = parse_uber_state(&mut parts).map_err(|err| format!("malformed pickup {}: {}", trimmed, err))?;
            let uber_group = uber_state.identifier.uber_group;

            if uber_group == 9 {
                occupied_states.push(uber_state);
            }

            let item = parts.next().ok_or_else(|| format!("malformed pickup {}", trimmed))?;
            let item = parse_pickup(item)?;

            match item {
                Item::UberState(command) => {
                    if command.uber_identifier.uber_group != 9 { continue; }

                    match command.operator {
                        UberStateOperator::Value(mut value) => {
                            if value == "true" {
                                value = String::from("1");
                            } else if value == "false" {
                                value = String::from("0");
                            }

                            let uber_state = UberState {
                                identifier: command.uber_identifier,
                                value,
                            };

                            occupied_states.push(uber_state);
                        },
                        UberStateOperator::Pointer(_) | UberStateOperator::Range(_) => {
                            // Just kind of have to trust the author here...
                        },
                    }

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
                    if uber_group == 9 {
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

    Ok((occupied_states, context.excludes))
}

fn where_is(pattern: &str, world_index: usize, seeds: &[String], graph: &Graph, settings: &Settings) -> Result<String, String> {
    let re = Regex::new(&format!(r"^({})$", pattern)).map_err(|err| format!("Invalid regex {}: {}", pattern, err))?;

    for mut line in seeds[world_index].lines() {
        if let Some(index) = line.find("//") {
            line = &line[..index];
        }
        line = line.trim();

        if line.is_empty() || line.starts_with("Flags") || line.starts_with("Spawn") {
            continue;
        }

        let mut parts = line.splitn(3, '|');
        let uber_group = parts.next().unwrap();
        let uber_id = parts.next().ok_or_else(|| format!("failed to read line {} in seed", line))?;
        let pickup = parts.next().ok_or_else(|| format!("failed to read line {} in seed", line))?;

        if re.is_match(pickup) {
            if uber_group == "12" {  // if multiworld shared
                let actual_pickup = format!(r"8\|12\|{}\|bool\|true", uber_id);

                let mut other_worlds = (0..seeds.len()).collect::<Vec<_>>();
                other_worlds.remove(world_index);

                for other_world_index in other_worlds {
                    let actual_zone = where_is(&actual_pickup, other_world_index, seeds, graph, settings)?;
                    if &actual_zone != "Unknown" {
                        let player_name = settings.players.get(other_world_index).cloned().unwrap_or_else(|| format!("Player {}", other_world_index + 1));

                        return Ok(format!("{}'s {}", player_name, actual_zone));
                    }
                }
            } else if uber_group == "3" && (uber_id == "0" || uber_id == "1") {
                return Ok(String::from("Spawn"));
            } else {
                let uber_state = UberState::from_parts(uber_group, uber_id)?;
                if let Some(node) = graph.nodes.iter().find(|&node| node.uber_state() == Some(&uber_state)) {
                    if let Some(zone) = node.zone() {
                        return Ok(zone.to_string());
                    }
                }
            }
        }
    }

    Ok(String::from("Unknown"))
}

fn how_many(pattern: &str, zone: Zone, world_index: usize, seeds: &[String], graph: &Graph) -> Result<Vec<UberState>, String> {
    let mut locations = Vec::new();
    let re = Regex::new(&format!(r"^({})$", pattern)).map_err(|err| format!("Invalid regex {}: {}", pattern, err))?;

    for mut line in seeds[world_index].lines() {
        if let Some(index) = line.find("//") {
            line = &line[..index];
        }
        line = line.trim();

        if line.is_empty() || line.starts_with("Flags") || line.starts_with("Spawn") {
            continue;
        }

        let mut parts = line.splitn(3, '|');
        let uber_group = parts.next().unwrap();
        let uber_id = parts.next().ok_or_else(|| format!("failed to read line {} in seed", line))?;
        let pickup = parts.next().ok_or_else(|| format!("failed to read line {} in seed", line))?;

        let uber_state = UberState::from_parts(uber_group, uber_id)?;
        if graph.nodes.iter().any(|node| node.zone() == Some(zone) && node.uber_state() == Some(&uber_state)) {
            if re.is_match(pickup) {
                locations.push(uber_state);
            } else {  // if multiworld shared
                let mut pickup_parts = pickup.split('|');
                if pickup_parts.next() != Some("8") { continue; }
                if pickup_parts.next() != Some("12") { continue; }
                let share_id = pickup_parts.next().unwrap();
                let share_state = format!("12|{}|", share_id);

                let mut other_worlds = (0..seeds.len()).collect::<Vec<_>>();
                other_worlds.remove(world_index);

                'outer: for other_world_index in other_worlds {
                    let other_seed = &seeds[other_world_index];

                    for other_seed_line in other_seed.lines() {
                        if let Some(mut actual_pickup) = other_seed_line.strip_prefix(&share_state) {
                            if let Some(index) = actual_pickup.find("//") {
                                actual_pickup = &actual_pickup[..index];
                            }
                            actual_pickup = actual_pickup.trim();

                            if re.is_match(actual_pickup) {
                                locations.push(uber_state);
                                break 'outer;
                            }
                        }
                    }
                }
            }
        }
    }

    Ok(locations)
}

pub fn postprocess(seeds: &mut Vec<String>, graph: &Graph, settings: &Settings) -> Result<(), String> {
    let clone = seeds.clone();

    for (world_index, seed) in seeds.iter_mut().enumerate() {
        let mut last_index = 0;
        loop {
            if let Some(mut start_index) = seed[last_index..].find("$WHEREIS(") {
                start_index += last_index;
                last_index = start_index;

                let after_bracket = start_index + 9;

                if let Some(end_index) = read_args(seed, after_bracket) {
                    let pattern = seed[after_bracket..end_index].trim();

                    let zone = where_is(pattern, world_index, &clone, graph, settings)?;
                    seed.replace_range(start_index..=end_index, &zone);

                    continue;
                }
            }
            break;
        }

        last_index = 0;
        loop {
            if let Some(mut start_index) = seed[last_index..].find("$HOWMANY(") {
                start_index += last_index;
                last_index = start_index;

                let after_bracket = start_index + 9;

                if let Some(end_index) = read_args(seed, after_bracket) {
                    let mut args = seed[after_bracket..end_index].splitn(2, ',');
                    let zone = args.next().unwrap().trim();
                    let zone: u8 = zone.parse().map_err(|_| format!("expected numeric zone, got {}", zone))?;
                    let zone = Zone::from_id(zone).ok_or_else(|| format!("invalid zone {}", zone))?;
                    let pattern = args.next().unwrap_or("").trim();

                    let locations = how_many(pattern, zone, world_index, &clone, graph)?;
                    let locations = locations.into_iter().map(|uber_state| uber_state.to_string()).collect::<Vec<_>>();
                    let locations = locations.join(",").replace('|', ",");

                    let sysmessage = format!("$[15|4|{}]", locations);

                    seed.replace_range(start_index..=end_index, &sysmessage);

                    continue;
                }
            }
            break;
        }
    }

    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;
    use crate::*;

    use util::*;
    use inventory::Inventory;

    #[test]
    fn header_parsing() {
        let graph = lexer::parse_logic(&PathBuf::from("areas.wotw"), &PathBuf::from("loc_data.csv"), &PathBuf::from("state_data.csv"), &Settings::default(), false).unwrap();
        let mut world = World::new(&graph);
        let header = util::read_file(&PathBuf::from("bonus_items.wotwrh"), "headers").unwrap();
        let mut context = HeaderContext::default();
        parse_header(&PathBuf::from("test header"), &header, &mut world, &mut context, &HashMap::default(), &mut rand::thread_rng()).unwrap();
        let mut expected = Inventory::default();
        expected.grant(Item::BonusItem(BonusItem::ExtraDoubleJump), 1);
        expected.grant(Item::BonusItem(BonusItem::ExtraAirDash), 1);
        expected.grant(Item::BonusItem(BonusItem::EnergyRegen), 3);
        expected.grant(Item::BonusItem(BonusItem::HealthRegen), 3);
        assert_eq!(world.pool.inventory, expected);
        assert!(world.preplacements.contains_key(&UberState::from_parts("1", "106").unwrap()));
        assert!(!world.preplacements.contains_key(&UberState::from_parts("1", "105").unwrap()));
    }

    #[test]
    fn pickup_parsing() {
        assert_eq!(parse_pickup("0|5000"), Ok(Item::SpiritLight(5000)));
        assert_eq!(parse_pickup("0|-5000"), Ok(Item::RemoveSpiritLight(5000)));
        assert_eq!(parse_pickup("1|2"), Ok(Item::Resource(Resource::Ore)));
        assert!(parse_pickup("1|-2").is_err());
        assert!(parse_pickup("1|5").is_err());
        assert_eq!(parse_pickup("2|8"), Ok(Item::Skill(Skill::Launch)));
        assert_eq!(parse_pickup("2|120"), Ok(Item::Skill(Skill::AncestralLight)));
        assert_eq!(parse_pickup("2|121"), Ok(Item::Skill(Skill::AncestralLight)));
        assert!(parse_pickup("2|25").is_err());
        assert!(parse_pickup("2|-9").is_err());
        assert_eq!(parse_pickup("3|28"), Ok(Item::Shard(Shard::LastStand)));
        assert_eq!(parse_pickup("5|16"), Ok(Item::Teleporter(Teleporter::Marsh)));
        assert_eq!(parse_pickup("9|0"), Ok(Item::Water));
        assert_eq!(parse_pickup("9|-0"), Ok(Item::RemoveWater));
        assert_eq!(parse_pickup("11|0"), Ok(Item::BonusUpgrade(BonusUpgrade::RapidHammer)));
        assert_eq!(parse_pickup("10|31"), Ok(Item::BonusItem(BonusItem::EnergyRegen)));
        assert!(parse_pickup("12|13").is_err());
        assert!(parse_pickup("8|5|3|6").is_err());
        assert!(parse_pickup("8||||").is_err());
        assert!(parse_pickup("8|5|3|in|3").is_err());
        assert!(parse_pickup("8|5|3|bool|3").is_err());
        assert!(parse_pickup("8|5|3|float|hm").is_err());
        assert_eq!(parse_pickup("8|5|3|int|6"), Ok(UberState::from_parts("5", "3=6").unwrap().to_item(UberType::Int)));
        assert_eq!(parse_pickup("4|0"), Ok(Item::Command(Command::Autosave)));
        assert!(parse_pickup("12").is_err());
        assert!(parse_pickup("").is_err());
        assert!(parse_pickup("0|").is_err());
        assert!(parse_pickup("0||400").is_err());
        assert!(parse_pickup("7|3").is_err());
        assert!(parse_pickup("-0|65").is_err());
        assert_eq!(parse_pickup("12|11|10"), Ok(Item::Hint(Hint { zone: Zone::Willow, hint_type: ZoneHintType::All })));
        assert_eq!(parse_pickup("12|11"), Ok(Item::Hint(Hint { zone: Zone::Willow, hint_type: ZoneHintType::Skills })));
    }
}
