use std::fs;
use std::collections::HashSet;
use std::io::{BufRead, BufReader};
use std::path::{Path, PathBuf};

use crate::world::World;
use crate::uberstate::{UberState, UberIdentifier};
use crate::inventory::{Inventory, Item};
use crate::util::{self, Pathset, Resource, Skill, Shard, Teleporter, BonusItem, BonusUpgrade, Hint, Command};

// TODO update documentation for descriptions

fn end_of_pickup<'a, I>(mut parts: I, shop: bool) -> Result<(), String>
where
    I: Iterator<Item = &'a str>,
{
    if shop {
        // TODO what were the rules here?
        if let Some(price) = parts.next() {
            price.parse::<f32>().map_err(|_| String::from("invalid price"))?;
        }
    }
    if parts.next().is_some() { return Err(String::from("too many parts")); }
    Ok(())
}

pub fn parse_pickup<'a>(pickup: &'a str, shop: bool) -> Result<(Item, u16), String> {
    // TODO extra parts like mute
    let pickup = pickup.trim();
    let mut parts = pickup.split('|');
    let pickup_type = parts.next().unwrap_or("tried to parse empty pickup");
    match pickup_type {
        "0" => {
            let spirit_light = parts.next().ok_or_else(|| format!("missing spirit light amount in pickup {}", pickup))?;
            end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;
            if spirit_light.starts_with('-') {
                Ok((Item::Custom(pickup.to_string()), 1))
            } else {
                let spirit_light: u16 = spirit_light.parse().map_err(|_| format!("invalid resource type in pickup {}", pickup))?;
                Ok((Item::SpiritLight(1), spirit_light))
            }
        },
        "1" => {
            let resource_type = parts.next().ok_or_else(|| format!("missing resource type in pickup {}", pickup))?;
            end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;
            let resource_type: u8 = resource_type.parse().map_err(|_| format!("invalid resource type in pickup {}", pickup))?;
            let resource = Resource::from_id(resource_type).ok_or_else(|| format!("invalid resource type in pickup {}", pickup))?;
            Ok((Item::Resource(resource), 1))
        },
        "2" => {
            let skill_type = parts.next().ok_or_else(|| format!("missing skill type in pickup {}", pickup))?;
            end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;
            if skill_type.starts_with('-') {
                Ok((Item::Custom(pickup.to_string()), 1))
            } else {
                let skill_type: u8 = skill_type.parse().map_err(|_| format!("invalid skill type in pickup {}", pickup))?;
                let skill = Skill::from_id(skill_type).ok_or_else(|| format!("invalid skill type in pickup {}", pickup))?;
                Ok((Item::Skill(skill), 1))
            }
        },
        "3" => {
            let shard_type = parts.next().ok_or_else(|| format!("missing shard type in pickup {}", pickup))?;
            end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;
            if shard_type.starts_with('-') {
                Ok((Item::Custom(pickup.to_string()), 1))
            } else {
                let shard_type: u8 = shard_type.parse().map_err(|_| format!("invalid shard type in pickup {}", pickup))?;
                let shard = Shard::from_id(shard_type).ok_or_else(|| format!("invalid shard type in pickup {}", pickup))?;
                Ok((Item::Shard(shard), 1))
            }
        },
        "4" => {
            let command_type = parts.next().ok_or_else(|| format!("missing command pickup type in pickup {}", pickup))?;
            match command_type {
                "0" => {
                    end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;
                    Ok((Item::Command(Command::Autosave), 1))
                },
                "1" => {
                    let resource = parts.next().ok_or_else(|| format!("missing resource type in pickup {}", pickup))?;
                    let resource: u8 = resource.parse().map_err(|_| format!("invalid resource type in pickup {}", pickup))?;
                    let resource = Resource::from_id(resource).ok_or_else(|| format!("invalid resource type in pickup {}", pickup))?;
                    let amount = parts.next().ok_or_else(|| format!("missing resource amount in pickup {}", pickup))?;
                    let amount: i16 = amount.parse().map_err(|_| format!("invalid resource type in pickup {}", pickup))?;
                    end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;
                    Ok((Item::Command(Command::Resource { resource, amount }), 1))
                },
                "2" => {
                    end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;
                    Ok((Item::Command(Command::Checkpoint), 1))
                },
                "3" => {
                    end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;
                    Ok((Item::Command(Command::Magic), 1))
                },
                "4" | "5" | "6" => {
                    let uber_group = parts.next().ok_or_else(|| format!("missing uber group in pickup {}", pickup))?;
                    let uber_id = parts.next().ok_or_else(|| format!("missing uber id in pickup {}", pickup))?;
                    let value = parts.next().ok_or_else(|| format!("missing uber value in pickup {}", pickup))?;
                    end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;

                    let uber_id = format!("{}={}", uber_id, value);
                    let uber_state = UberState::from_parts(uber_group, &uber_id)?;

                    match command_type {
                        "4" => Ok((Item::Command(Command::StopEqual { uber_state }), 1)),
                        "5" => Ok((Item::Command(Command::StopGreater { uber_state }), 1)),
                        _ => Ok((Item::Command(Command::StopLess { uber_state }), 1)),
                    }
                }
                "7" => {
                    let identifier = parts.next().ok_or_else(|| format!("missing command toggle identifier in pickup {}", pickup))?;
                    let identifier: u8 = identifier.parse().map_err(|_| format!("invalid command toggle identifier in pickup {}", pickup))?;
                    if identifier > 2 { return Err(format!("invalid command toggle identifier in pickup {}", pickup)); };
                    let value = parts.next().ok_or_else(|| format!("missing command toggle value in pickup {}", pickup))?;
                    let value: u8 = value.parse().map_err(|_| format!("invalid command toggle value in pickup {}", pickup))?;
                    end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;

                    Ok((Item::Command(Command::Toggle { identifier, value }), 1))
                }
                "8" => {
                    let x = parts.next().ok_or_else(|| format!("missing x coordinate in pickup {}", pickup))?;
                    let x: i16 = x.parse().map_err(|_| format!("invalid x coordinate in pickup {}", pickup))?;
                    let y = parts.next().ok_or_else(|| format!("missing x coordinate in pickup {}", pickup))?;
                    let y: i16 = y.parse().map_err(|_| format!("invalid x coordinate in pickup {}", pickup))?;
                    end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;

                    Ok((Item::Command(Command::Warp { x, y }), 1))
                }
                "9" | "10" => {
                    let uber_group = parts.next().ok_or_else(|| format!("missing uber group in pickup {}", pickup))?;
                    let uber_id = parts.next().ok_or_else(|| format!("missing uber id in pickup {}", pickup))?;
                    end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;

                    let identifier = UberState::from_parts(uber_group, uber_id)?.identifier;

                    match command_type {
                        "9" => Ok((Item::Command(Command::StartTimer { identifier }), 1)),
                        _ => Ok((Item::Command(Command::StopTimer { identifier }), 1)),
                    }
                }
                "11" => {
                    let intercept = parts.next().ok_or_else(|| format!("missing x coordinate in pickup {}", pickup))?;
                    let intercept: i32 = intercept.parse().map_err(|_| format!("invalid x coordinate in pickup {}", pickup))?;
                    let set = parts.next().ok_or_else(|| format!("missing x coordinate in pickup {}", pickup))?;
                    let set: i32 = set.parse().map_err(|_| format!("invalid x coordinate in pickup {}", pickup))?;
                    end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;

                    Ok((Item::Command(Command::StateRedirect { intercept, set }), 1))
                }
                "12" | "13" | "14" => {
                    let amount = parts.next().ok_or_else(|| format!("missing amount in pickup {}", pickup))?;
                    let amount: i16 = amount.parse().map_err(|_| format!("invalid amount in pickup {}", pickup))?;
                    end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;

                    match command_type {
                        "12" => Ok((Item::Command(Command::SetHealth { amount }), 1)),
                        "13" => Ok((Item::Command(Command::SetEnergy { amount }), 1)),
                        _ => Ok((Item::Command(Command::SetSpiritLight { amount }), 1)),
                    }
                }
                "15" => {
                    // TODO update documentation for this
                    let slot = parts.next().ok_or_else(|| format!("missing equip slot in pickup {}", pickup))?;
                    let slot: u8 = slot.parse().map_err(|_| format!("invalid equip slot in pickup {}", pickup))?;
                    if slot > 2 { return Err(format!("invalid equip slot in pickup {}", pickup)); }
                    let ability = parts.next().ok_or_else(|| format!("missing ability to equip in pickup {}", pickup))?;
                    let ability: u16 = ability.parse().map_err(|_| format!("invalid ability to equip in pickup {}", pickup))?;
                    end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;

                    Ok((Item::Command(Command::Equip { slot, ability }), 1))
                }
                _ => Err(format!("invalid command type in pickup {}", pickup)),
            }
        }
        "5" => {
            let teleporter_type = parts.next().ok_or_else(|| format!("missing teleporter type in pickup {}", pickup))?;
            end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;
            if teleporter_type.starts_with('-') {
                Ok((Item::Custom(pickup.to_string()), 1))
            } else {
                let teleporter_type: u8 = teleporter_type.parse().map_err(|_| format!("invalid teleporter type in pickup {}", pickup))?;
                let teleporter = Teleporter::from_id(teleporter_type).ok_or_else(|| format!("invalid teleporter type in pickup {}", pickup))?;
                Ok((Item::Teleporter(teleporter), 1))
            }
        },
        "8" => {
            // sanitize, don't know if this is user input through headers and later it would crash on malformed pickups
            // TODO why not use the uberstate interface?
            let uber_group = parts.next().ok_or_else(|| format!("missing uber group in pickup {}", pickup))?;
            uber_group.parse::<u16>().map_err(|_| format!("invalid uber group in pickup {}", pickup))?;
            let uber_id = parts.next().ok_or_else(|| format!("missing uber id in pickup {}", pickup))?;
            uber_id.parse::<u16>().map_err(|_| format!("invalid uber id in pickup {}", pickup))?;

            let uber_type = parts.next().ok_or_else(|| format!("missing uber state type in pickup {}", pickup))?;
            let value = parts.next().ok_or_else(|| format!("missing uber value in pickup {}", pickup))?;

            if let Some(suppress) = parts.next() {
                suppress.parse::<u16>().map_err(|_| format!("invalid suppress count in pickup {}", pickup))?;
            }

            end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;

            let strip_sign = |value: &'a str| -> &'a str { if value.starts_with(&['+', '-'][..]) { &value[1..] } else { value } };

            match uber_type {
                "bool" | "teleporter" => { value.parse::<bool>().map_err(|_| format!("invalid uber value in pickup {}", pickup))?; },
                "byte" => { strip_sign(value).parse::<u8>().map_err(|_| format!("invalid uber value in pickup {}", pickup))?; },
                "int" => { strip_sign(value).parse::<i32>().map_err(|_| format!("invalid uber value in pickup {}", pickup))?; },
                "float" => { strip_sign(value).parse::<f32>().map_err(|_| format!("invalid uber value in pickup {}", pickup))?; },
                _ => return Err(format!("invalid uber state type in pickup {}", pickup)),
            }

            let command = format!("{}|{}|{}|{}", uber_group, uber_id, uber_type, value);
            Ok((Item::UberState(command), 1))
        },
        "9" => {
            let world_event_type = parts.next().ok_or_else(|| format!("missing world event type in pickup {}", pickup))?;
            end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;
            if world_event_type.starts_with('-') {
                Ok((Item::Custom(pickup.to_string()), 1))
            } else {
                let world_event_type: u8 = world_event_type.parse().map_err(|_| format!("invalid world event type in pickup {}", pickup))?;
                if world_event_type != 0 { return Err(format!("invalid world event type in pickup {}", pickup)); }
                Ok((Item::Water, 1))
            }
        },
        "10" => {
            let bonus_type = parts.next().ok_or_else(|| format!("missing bonus item type in pickup {}", pickup))?;
            end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;
            let bonus_type: u8 = bonus_type.parse().map_err(|_| format!("invalid bonus item type in pickup {}", pickup))?;
            let bonus = BonusItem::from_id(bonus_type).ok_or_else(|| format!("invalid bonus item type in pickup {}", pickup))?;
            Ok((Item::BonusItem(bonus), 1))
        },
        "11" => {
            let bonus_type = parts.next().ok_or_else(|| format!("missing bonus item type in pickup {}", pickup))?;
            end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;
            let bonus_type: u8 = bonus_type.parse().map_err(|_| format!("invalid bonus item type in pickup {}", pickup))?;
            let bonus = BonusUpgrade::from_id(bonus_type).ok_or_else(|| format!("invalid bonus item type in pickup {}", pickup))?;
            Ok((Item::BonusUpgrade(bonus), 1))
        },
        "12" => {
            let hint_type = parts.next().ok_or_else(|| format!("missing hint type in pickup {}", pickup))?;
            end_of_pickup(parts, shop).map_err(|err| format!("{} in pickup {}", err, pickup))?;
            let hint_type: u8 = hint_type.parse().map_err(|_| format!("invalid hint type in pickup {}", pickup))?;
            let hint = Hint::from_id(hint_type).ok_or_else(|| format!("invalid hint type in pickup {}", pickup))?;
            Ok((Item::Hint(hint), 1))
        },
        // TODO validate all pickup types
        "6" | "13" => {
            Ok((Item::Custom(pickup.to_string()), 1))
        }
        _ => Err(format!("invalid pickup type in pickup {}", pickup)),
    }
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

pub fn parse_header(header: &str, world: &mut World, verbose: bool, pathsets: &[Pathset]) -> Result<(String, HashSet<PathBuf>), String> {
    let mut processed = String::new();
    let mut dependencies = HashSet::new();
    let mut first_line = true;

    for line in header.lines() {
        let line = line.trim();

        if first_line {
            first_line = false;
            if line.starts_with('#') { continue; }
        }

        let mut trimmed = line;
        if let Some(index) = line.find("//") {
            trimmed = &trimmed[..index];
        }

        if let Some(command) = trimmed.strip_prefix("!!") {
             if let Some(include) = command.strip_prefix("include ") {
                let mut path = PathBuf::from(include);
                path.set_extension("wotwrh");
                dependencies.insert(path);
            } else if let Some(mut pickup) = command.strip_prefix("add ") {
                let count = parse_count(&mut pickup);
                let (item, amount) = parse_pickup(pickup, false)?;
                if verbose { eprintln!("adding {}x {} to the item pool", amount, item); }
                world.pool.grant(item, count * amount, pathsets);
            } else if let Some(mut pickup) = command.strip_prefix("remove ") {
                let count = parse_count(&mut pickup);
                let (item, amount) = parse_pickup(pickup, false)?;
                if verbose { eprintln!("removing {}x {} from the item pool", amount, item); }
                world.pool.remove(&item, count * amount);
            } else if command.starts_with("set ") {
                eprintln!("!!set commands are obsolete, uber state pickups given on spawn are automatically accounted for.");
            } else {
                return Err(format!("Unknown command '{}'", command))
            }
        } else if let Some(ignored) = line.strip_prefix('!') {
            processed += ignored;
            processed.push('\n');
        } else {
            if !trimmed.is_empty() {
                let mut parts = trimmed.splitn(3, '|');
                let uber_group = parts.next().unwrap();
                let uber_id = parts.next().ok_or_else(|| format!("malformed pickup '{}'", trimmed))?;
                let uber_state = UberState::from_parts(uber_group, uber_id)?;

                let item = parts.next().ok_or_else(|| format!("malformed pickup '{}'", trimmed))?;
                let (item, amount) = parse_pickup(item, uber_state.is_shop())?;

                // if someone sets an uberstate on spawn, they probably don't want a pickup placed on it
                if let Item::UberState(command) = &item {
                    if uber_state.identifier.uber_group == 3 && uber_state.identifier.uber_id == 0 {
                        let mut parts = command.split('|');
                        let uber_group = parts.next().ok_or_else(|| format!("malformed pickup '{}'", trimmed))?;
                        let mut uber_id = parts.next().ok_or_else(|| format!("malformed pickup '{}'", trimmed))?.to_string();
                        let uber_type = parts.next().ok_or_else(|| format!("malformed pickup '{}'", trimmed))?;
                        let value = parts.next().ok_or_else(|| format!("malformed pickup '{}'", trimmed))?;

                        if uber_type != "bool" {
                            uber_id.push('=');
                            uber_id += value;
                        }
                        let target = UberState::from_parts(uber_group, &uber_id)?;

                        // TODO this happens when it shouldn't?
                        if verbose { eprintln!("adding an empty pickup at {} to prevent placements", target); }
                        let null_item = Item::Custom(String::from("6|f=0|quiet|noclear"));

                        let preplacement = world.preplacements.entry(target).or_insert_with(Inventory::default);
                        preplacement.grant(null_item, amount);
                    }
                }

                let preplacement = world.preplacements.entry(uber_state).or_insert_with(Inventory::default);
                preplacement.grant(item.clone(), amount);

                if verbose { eprintln!("removing {}x {} from the item pool", amount, item); }
                world.pool.remove(&item, amount);
            }
            processed += line;
            processed.push('\n');
        }
    }
    processed.push('\n');
    Ok((processed, dependencies))
}

fn is_preset(header: &Path) -> Result<bool, String> {
    let file = fs::File::open(header).map_err(|err| format!("Failed to open header from {:?}: {}", header, err))?;
    let mut reader = BufReader::new(file);

    let mut line = String::new();
    reader.read_line(&mut line).map_err(|err| format!("Failed to read header from {:?}: {}", header, err))?;

    Ok(line.trim() == "#preset")
}

fn is_hidden(header: &Path) -> Result<bool, String> {
    let file = fs::File::open(header).map_err(|err| format!("Failed to open header from {:?}: {}", header, err))?;
    let mut reader = BufReader::new(file);

    let mut line = String::new();
    reader.read_line(&mut line).map_err(|err| format!("Failed to read header from {:?}: {}", header, err))?;

    Ok(line.trim() == "#hide")
}

fn headers_in_directory(directory: &Path) -> Result<Vec<PathBuf>, String> {
    Ok(fs::read_dir(directory).map_err(|err| format!("Failed to read directory {:?}: {}", directory, err))?
        .filter_map(|entry| {
            if let Ok(entry) = entry {
                let path = entry.path();
                if let Some(extension) = path.extension() {
                    if extension.to_string_lossy() == "wotwrh" {
                        return Some(path);
                    }
                }
            }
            None
        })
        .collect())
}

fn find_headers(show_hidden: bool) -> Result<Vec<PathBuf>, String> {
    let mut headers = headers_in_directory(Path::new("."))?;
    if let Ok(mut more) = headers_in_directory(Path::new("./headers")) {
        headers.append(&mut more);
    }

    if !show_hidden {
        headers = headers.iter()
            .map(|header| is_hidden(header).map(|hidden| if hidden { None } else { Some(header) }))
            .collect::<Result<Vec<_>, _>>()?
            .iter()
            .filter_map(|&header| header)
            .cloned()
            .collect::<Vec<_>>();
    }

    Ok(headers)
}

fn find_presets() -> Result<Vec<PathBuf>, String> {
    let headers = find_headers(false)?;
    let presets = headers.iter()
        .map(|header| is_preset(header).map(|preset| if preset { Some(header) } else { None }))
        .collect::<Result<Vec<_>, _>>()?
        .iter()
        .filter_map(|&header| header)
        .cloned()
        .collect::<Vec<_>>();
    Ok(presets)
}

fn summarize_headers(headers: &[PathBuf]) -> Result<String, String> {
    let mut output = String::new();

    for header in headers {
        let name = header.file_stem().unwrap().to_string_lossy().into_owned();
        let header = fs::read_to_string(header).map_err(|err| format!("Error reading header from {:?}: {}", header, err))?;

        let mut description = "no description";

        for line in header.lines() {
            if let Some(desc) = line.trim_start().strip_prefix("///") {
                let desc = desc.trim();
                if desc.is_empty() {
                    continue;
                }
                if description == "no description" {
                    description = desc;
                } else {
                    description = desc;
                    break;
                }
            }
        }

        let name = util::with_trailing_spaces(&name, 24);

        output += &format!("{}  {}\n", name, description);
    }

    Ok(output)
}

pub fn list_headers() -> Result<(), String> {
    let mut output = String::new();

    let headers = find_headers(false)?;

    if headers.is_empty() {
        println!("No headers found. Try moving into the script directory");
        return Ok(());
    }

    let preset_data = headers.iter()
        .map(|header| is_preset(header))
        .collect::<Result<Vec<_>, _>>()?;

    let mut index = 0;
    let (presets, headers): (Vec<_>, Vec<_>) = headers.iter()
        .cloned()
        .partition(|_| {
            let preset = preset_data[index];
            index += 1;
            preset
        });

    let presets_length = presets.len();
    output += &format!("{} preset{} found\n\n", presets_length, if presets_length == 1 { "" } else { "s" });

    output += &summarize_headers(&presets)?;
    output.push('\n');

    let headers_length = headers.len();
    output += &format!("{} header{} found\n\n", headers_length, if headers_length == 1 { "" } else { "s" });

    output += &summarize_headers(&headers)?;
    output.push('\n');

    output += "Use 'headers <name>...' for details about one or more headers or 'headers presets' to manage your personal presets";

    println!("{}", output);
    Ok(())
}

pub fn list_presets() -> Result<(), String> {
    let mut output = String::new();

    let presets = find_presets()?;

    let length = presets.len();
    output += &format!("{} preset{} found\n\n", length, if length == 1 { "" } else { "s" });

    output += &summarize_headers(&presets)?;

    output += "\nUse 'headers presets create' and 'headers presets remove' to manage your presets";

    println!("{}", output);
    Ok(())
}

pub fn inspect_headers(headers: Vec<PathBuf>) -> Result<(), String> {
    let mut output = String::new();

    let hint = if headers.len() == 1 {
        let name = headers[0].file_stem().unwrap().to_string_lossy();
        format!("Use 'headers presets create {} ...' to add this and other headers to a preset", name)
    } else {
        let mut arguments = headers.iter().fold(String::new(), |acc, header|
            format!("{}{} ", acc, header.file_stem().unwrap().to_string_lossy())
        );
        arguments.pop();

        format!("Use 'headers presets create {}' to add these headers to a preset", arguments)
    };

    for mut header in headers {
        header.set_extension("wotwrh");
        let name = header.file_stem().unwrap().to_string_lossy();

        let contents = util::read_file(&header, "headers").map_err(|err| format!("Failed to read header '{}': {}", name, err))?;

        let preset = contents.trim_start().starts_with("#preset");
        let mut description = format!("'{}' {}:\n", name, if preset { "preset" } else { "header" });

        for line in contents.lines() {
            if let Some(desc) = line.trim_start().strip_prefix("///") {
                description.push_str(desc.trim());
                description.push('\n');
            }
        }

        if description.is_empty() {
            output += "No description provided\n";
        } else {
            output += &description;
            output.push('\n');
        }
    }

    output += &hint;
    println!("{}", output);
    Ok(())
}

fn validate_header(contents: &str) -> Result<Vec<UberState>, String> {
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
                return Err(format!("Unknown command '{}'", command))
            }
        } else {
            if let Some(ignored) = trimmed.strip_prefix("!") {
                trimmed = ignored;
            }
            let mut parts = trimmed.splitn(3, '|');
            let uber_group = parts.next().unwrap();
            let uber_id = parts.next().ok_or_else(|| format!("malformed pickup '{}'", trimmed))?;
            let uber_state = UberState::from_parts(uber_group, uber_id)?;
            let is_shop = uber_state.is_shop();

            if uber_group == "9" {
                occupied_states.push(uber_state);
            }

            let item = parts.next().ok_or_else(|| format!("malformed pickup '{}'", trimmed))?;
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

    occupied_states.sort();
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

pub fn validate_headers() -> Result<(), String> {
    let mut output = String::new();

    let headers = find_headers(true)?;
    let mut occupation_map = Vec::new();

    let length = headers.len();
    output += &format!("validating {} header{}\n", length, if length == 1 { "" } else { "s" });

    let mut passed = Vec::new();
    let mut failed = Vec::new();

    for header in headers {
        let name = header.file_stem().unwrap().to_string_lossy().to_string();

        let contents = util::read_file(&header, "headers").map_err(|err| format!("Failed to read header '{}': {}", name, err))?;

        match validate_header(&contents) {
            Ok(occupied) => {
                occupation_map.push((name, occupied));
            },
            Err(err) => {
                let name = util::with_trailing_spaces(&name, 24);
                failed.push(format!("{}{}\n", name, err))
            },
        }
    }

    for index in 0..occupation_map.len() {
        let (name, occupied) = &occupation_map[index];
        let mut collision_message = String::new();

        for uber_state in occupied {
            for (other_name, other_occupied) in &occupation_map {
                if name == other_name {
                    continue;
                }
                if let Some(collision) = other_occupied.iter().find(|&other| {
                    let generic = uber_state.value.is_empty() || other.value.is_empty();
                    uber_state == other || (generic && uber_state.identifier == other.identifier)
                }) {
                    collision_message = format!("Collision between used state {} and {} using {}", uber_state, other_name, collision);
                    break;
                }
            }
            if !collision_message.is_empty() { break; }
        }

        if collision_message.is_empty() {
            let mut occupied_summary = String::new();
            let mut last_value = i32::MIN;
            let mut range = false;

            let name = util::with_trailing_spaces(name, 24);

            for uber_state in occupied {
                if let Ok(value) = uber_state.value.parse::<i32>() {
                    if value == last_value + 1 {
                        range = true;
                    } else if range {
                        for _ in 0..2 { occupied_summary.pop(); }
                        occupied_summary += &format!("..{}, ", last_value);
                        range = false;
                    }
                    last_value = value;
                    if range {
                        continue;
                    }
                } else if range {
                    for _ in 0..2 { occupied_summary.pop(); }
                    occupied_summary += &format!("..{}, ", last_value);
                    range = false;
                }

                occupied_summary += &format!("{}, ", uber_state);
            }

            for _ in 0..2 { occupied_summary.pop(); }

            if range {
                occupied_summary += &format!("..{}", last_value);
            }

            if occupied_summary.is_empty() {
                passed.push(format!("{}--\n", name));
            } else {
                passed.push(format!("{}uses {}\n", name, occupied_summary));
            }
        } else {
            let name = util::with_trailing_spaces(name, 24);
            failed.push(format!("{}{}\n", name, collision_message));
        }
    }

    let failed_length = failed.len();
    if failed_length > 0 {
        output += &format!("\n{}/{} failed\n", failed_length, length);

        for failed in failed {
            output += &failed;
        }
    }
    let passed_length = passed.len();
    if passed_length > 0 {
        output += &format!("\n{}/{} passed\n", passed_length, length);

        for passed in passed {
            output += &passed;
        }
    }

    println!("{}", output);
    Ok(())
}

pub fn create_preset(mut name: PathBuf, headers: Vec<String>) -> Result<(), String> {
    let mut contents = String::from("#preset\n");

    let existing = find_headers(true)?;

    for header in headers {
        if !existing.iter().any(|h| h.file_stem().unwrap().to_string_lossy() == header) { return Err(format!("Couldn't find header '{}'", header)); }
        contents.push_str(&format!("!!include {}\n", header));
    }

    name.set_extension("wotwrh");

    util::create_new_file(&name, &contents, "headers").map_err(|err| format!("Failed to create preset: {}", err))?;

    let name = name.file_stem().unwrap().to_string_lossy();

    println!("Created preset '{}'", name);
    Ok(())
}

pub fn remove_preset(name: &str) -> Result<(), String> {
    let mut output = String::new();

    let presets: Vec<_> = find_presets()?;

    let mut removed = false;
    for preset in presets {
        let current = preset.file_stem().unwrap().to_string_lossy();
        if current == name {
            fs::remove_file(preset).map_err(|err| format!("Failed to remove preset: {}", err))?;
            output += &format!("Removed '{}'", name);
            removed = true;
        }
    }
    if !removed {
        return Err(format!("Couldn't find a preset called '{}'", name))
    }

    println!("{}", output);
    Ok(())
}

#[cfg(test)]
mod tests {
    use super::*;
    use super::super::*;

    use util::*;

    #[test]
    fn header_parsing() {
        let graph = lexer::parse_logic(&PathBuf::from("areas.wotw"), &PathBuf::from("loc_data.csv"), &PathBuf::from("state_data.csv"), &[Pathset::Moki], false).unwrap();
        let mut world = World::new(&graph);
        let header = util::read_file(&PathBuf::from("bonus_items.wotwrh"), "headers").unwrap();
        parse_header(&header, &mut world, false, &[Pathset::Moki]).unwrap();
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
        assert_eq!(parse_pickup("0|-5000", false), Ok((Item::Custom(String::from("0|-5000")), 1)));
        assert_eq!(parse_pickup("1|2", false), Ok((Item::Resource(Resource::Ore), 1)));
        assert!(parse_pickup("1|-2", false).is_err());
        assert!(parse_pickup("1|5", false).is_err());
        assert_eq!(parse_pickup("2|8", false), Ok((Item::Skill(Skill::Launch), 1)));
        assert_eq!(parse_pickup("2|120", false), Ok((Item::Skill(Skill::AncestralLight), 1)));
        assert_eq!(parse_pickup("2|121", false), Ok((Item::Skill(Skill::AncestralLight), 1)));
        assert!(parse_pickup("2|25", false).is_err());
        assert_eq!(parse_pickup("2|-9", false), Ok((Item::Custom(String::from("2|-9")), 1)));
        assert_eq!(parse_pickup("3|28", false), Ok((Item::Shard(Shard::LastStand), 1)));
        assert_eq!(parse_pickup("5|16", false), Ok((Item::Teleporter(Teleporter::Marsh), 1)));
        assert_eq!(parse_pickup("9|0", false), Ok((Item::Water, 1)));
        assert_eq!(parse_pickup("9|-0", false), Ok((Item::Custom(String::from("9|-0")), 1)));
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
    }
}
