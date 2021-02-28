use std::{fs, path::PathBuf};

use crate::tokenizer::{Token, TokenType};
use crate::util::{Skill, Resource, Shard, Teleporter};
use std::collections::HashSet;

pub struct ParseError {
    pub description: String,
    pub position: usize,
}

#[derive(Debug)]
pub enum Requirement<'a> {
    Free,
    Definition(&'a str),
    Pathset(&'a str),
    Skill(Skill),
    EnergySkill(Skill, u16),
    Resource(Resource, u16),
    Shard(Shard),
    Teleporter(Teleporter),
    State(&'a str),
    Damage(u16),
    Danger(u16),
    Combat(&'a str),
    Boss(u16),
    BreakWall(u16),
    ShurikenBreak(u16),
    SentryJump(u16),
}
pub struct Line<'a> {
    pub ands: Vec<Requirement<'a>>,
    pub ors: Vec<Requirement<'a>>,
    pub group: Option<Group<'a>>,
}
pub struct Group<'a> {
    pub lines: Vec<Line<'a>>
}
pub struct Pathset<'a> {
    pub identifier: &'a str,
    pub description: String,
}
pub struct Pathsets<'a> {
    pub identifier: &'a str,
    pub pathsets: Vec<Pathset<'a>>,
}
#[derive(Debug)]
pub enum RefillType {
    Full,
    Checkpoint,
    Health(u16),
    Energy(u16),
}
pub struct Refill<'a> {
    pub name: RefillType,
    pub requirements: Option<Group<'a>>,
}
#[derive(Debug)]
pub enum ConnectionType {
    State,
    Quest,
    Pickup,
    Anchor,
}
pub struct Connection<'a> {
    pub name: ConnectionType,
    pub identifier: &'a str,
    pub requirements: Option<Group<'a>>,
}
pub struct Definition<'a> {
    pub identifier: &'a str,
    pub requirements: Group<'a>,
}
pub struct Region<'a> {
    pub identifier: &'a str,
    pub requirements: Group<'a>,
}
pub struct Anchor<'a> {
    pub identifier: &'a str,
    pub position: Option<(i16, i16)>,
    pub refills: Vec<Refill<'a>>,
    pub connections: Vec<Connection<'a>>,
}
pub struct AreaTree<'a> {
    pub definitions: Vec<Definition<'a>>,
    pub regions: Vec<Region<'a>>,
    pub anchors: Vec<Anchor<'a>>,
}

struct ParseContext<'a> {
    position: usize,
    definitions: HashSet<&'a str>,
    pathsets: HashSet<&'a str>,
    states: HashSet<&'a str>,
}

fn eat(tokens: &[Token], context: &mut ParseContext, expected_token_type: TokenType) -> Result<bool, ParseError> {
    let token_type = tokens[context.position].name;
    return if token_type == expected_token_type {
        context.position += 1;
        Ok(true)
    } else {
        Err(wrong_token(&tokens[context.position], &format!("{:?}", expected_token_type)))
    }
}

fn parse_requirement<'a>(token: &'a Token, context: &mut ParseContext) -> Result<Requirement<'a>, ParseError> {
    let mut parts = token.value.split('=');
    let keyword = parts.next().unwrap();
    let amount = parts.next();
    if parts.next().is_some() {
        return Err(wrong_amount(token));
    }
    match amount {
        Some(amount) => {
            if keyword == "Combat" {
                return Ok(Requirement::Combat(amount));
            }
            let amount: u16 = match amount.parse() {
                Ok(result) => result,
                Err(_) => return Err(not_int(token)),
            };
            match keyword {
                "Blaze" => Ok(Requirement::EnergySkill(Skill::Blaze, amount)),
                "Boss" => Ok(Requirement::Boss(amount)),
                "Bow" => Ok(Requirement::EnergySkill(Skill::Bow, amount)),
                "BreakWall" => Ok(Requirement::BreakWall(amount)),
                "Damage" => Ok(Requirement::Damage(amount)),
                "Danger" => Ok(Requirement::Danger(amount)),
                "Energy" => Ok(Requirement::Resource(Resource::Energy, amount)),
                "Flash" => Ok(Requirement::EnergySkill(Skill::Flash, amount)),
                "Grenade" => Ok(Requirement::EnergySkill(Skill::Grenade, amount)),
                "Health" => Ok(Requirement::Resource(Resource::Health, amount)),
                "Keystone" => Ok(Requirement::Resource(Resource::Keystone, amount)),
                "Ore" => Ok(Requirement::Resource(Resource::Ore, amount)),
                "Sentry" => Ok(Requirement::EnergySkill(Skill::Sentry, amount)),
                "SentryJump" => Ok(Requirement::SentryJump(amount)),
                "ShardSlot" => Ok(Requirement::Resource(Resource::ShardSlot, amount)),
                "Shuriken" => Ok(Requirement::EnergySkill(Skill::Shuriken, amount)),
                "ShurikenBreak" => Ok(Requirement::ShurikenBreak(amount)),
                "Spear" => Ok(Requirement::EnergySkill(Skill::Spear, amount)),
                "SpiritLight" => Ok(Requirement::Resource(Resource::SpiritLight, amount)),
                _ => Err(wrong_requirement(token))
            }
        }
        None => match keyword {
            "Arcing" => Ok(Requirement::Shard(Shard::Arcing)),
            "Bash" => Ok(Requirement::Skill(Skill::Bash)),
            "Blaze" => Ok(Requirement::Skill(Skill::Blaze)),
            "Bow" => Ok(Requirement::Skill(Skill::Bow)),
            "Burrow" => Ok(Requirement::Skill(Skill::Burrow)),
            "BurrowsTP" => Ok(Requirement::Teleporter(Teleporter::Burrows)),
            "Catalyst" => Ok(Requirement::Shard(Shard::Catalyst)),
            "Dash" => Ok(Requirement::Skill(Skill::Dash)),
            "Deflector" => Ok(Requirement::Shard(Shard::Deflector)),
            "DenTP" => Ok(Requirement::Teleporter(Teleporter::Den)),
            "DepthsTP" => Ok(Requirement::Teleporter(Teleporter::Depths)),
            "DoubleJump" => Ok(Requirement::Skill(Skill::DoubleJump)),
            "EastPoolsTP" => Ok(Requirement::Teleporter(Teleporter::EastLuma)),
            "EastWastesTP" => Ok(Requirement::Teleporter(Teleporter::EastWastes)),
            "EastWoodsTP" => Ok(Requirement::Teleporter(Teleporter::EastWoods)),
            "EnergyHarvest" => Ok(Requirement::Shard(Shard::EnergyHarvest)),
            "Flap" => Ok(Requirement::Skill(Skill::Flap)),
            "Flash" => Ok(Requirement::Skill(Skill::Flash)),
            "Fracture" => Ok(Requirement::Shard(Shard::Fracture)),
            "free" => Ok(Requirement::Free),
            "GladesTP" => Ok(Requirement::Teleporter(Teleporter::Glades)),
            "Glide" => Ok(Requirement::Skill(Skill::Glide)),
            "Grapple" => Ok(Requirement::Skill(Skill::Grapple)),
            "Grenade" => Ok(Requirement::Skill(Skill::Grenade)),
            "Hammer" => Ok(Requirement::Skill(Skill::Hammer)),
            "HollowTP" => Ok(Requirement::Teleporter(Teleporter::Hollow)),
            "InnerRuinsTP" => Ok(Requirement::Teleporter(Teleporter::InnerRuins)),
            "Launch" => Ok(Requirement::Skill(Skill::Launch)),
            "LifeHarvest" => Ok(Requirement::Shard(Shard::LifeHarvest)),
            "Magnet" => Ok(Requirement::Shard(Shard::Magnet)),
            "MarshTP" => Ok(Requirement::Teleporter(Teleporter::Marsh)),
            "OuterRuinsTP" => Ok(Requirement::Teleporter(Teleporter::OuterRuins)),
            "Overflow" => Ok(Requirement::Shard(Shard::Overflow)),
            "ReachTP" => Ok(Requirement::Teleporter(Teleporter::Reach)),
            "Regenerate" => Ok(Requirement::Skill(Skill::Regenerate)),
            "Seir" => Ok(Requirement::Skill(Skill::Seir)),
            "Sentry" => Ok(Requirement::Skill(Skill::Sentry)),
            "ShriekTP" => Ok(Requirement::Teleporter(Teleporter::Shriek)),
            "Shuriken" => Ok(Requirement::Skill(Skill::Shuriken)),
            "Spear" => Ok(Requirement::Skill(Skill::Spear)),
            "Sticky" => Ok(Requirement::Shard(Shard::Sticky)),
            "Sword" => Ok(Requirement::Skill(Skill::Sword)),
            "TripleJump" => Ok(Requirement::Shard(Shard::TripleJump)),
            "Thorn" => Ok(Requirement::Shard(Shard::Thorn)),
            "UltraBash" => Ok(Requirement::Shard(Shard::UltraBash)),
            "UltraGrapple" => Ok(Requirement::Shard(Shard::UltraGrapple)),
            "WallJump" => Ok(Requirement::Skill(Skill::WallJump)),
            "WaterBreath" => Ok(Requirement::Skill(Skill::WaterBreath)),
            "WaterDash" => Ok(Requirement::Skill(Skill::WaterDash)),
            "Water" => Ok(Requirement::Skill(Skill::Water)),
            "WellspringTP" => Ok(Requirement::Teleporter(Teleporter::Wellspring)),
            "WestPoolsTP" => Ok(Requirement::Teleporter(Teleporter::WestLuma)),
            "WestWastesTP" => Ok(Requirement::Teleporter(Teleporter::WestWastes)),
            "WestWoodsTP" => Ok(Requirement::Teleporter(Teleporter::WestWoods)),
            "WillowTP" => Ok(Requirement::Teleporter(Teleporter::Willow)),
            "Boss" | "BreakWall" | "Damage" | "Danger" | "Energy" | "Health" | "Keystone" | "Ore" | "SentryJump" | "ShardSlot" | "ShurikenBreak" | "SpiritLight"
                => Err(wrong_amount(token)),
            _ if context.definitions.contains(keyword) => Ok(Requirement::Definition(keyword)),
            _ if context.pathsets.contains(keyword) => Ok(Requirement::Pathset(keyword)),
            _ if context.states.contains(keyword) => Ok(Requirement::State(keyword)),
            _ => Err(wrong_requirement(token))
        }
    }
}

fn parse_free(tokens: &[Token], context: &mut ParseContext) -> Result<(), ParseError> {
    context.position += 1;
    match tokens[context.position].name {
        TokenType::Newline => context.position += 1,
        TokenType::Dedent => {},
        _ => return Err(wrong_token(&tokens[context.position], "new line after inline 'free'")),
    }
    Ok(())
}

fn parse_line<'a>(tokens: &'a [Token], context: &mut ParseContext) -> Result<Line<'a>, ParseError> {
    let mut ands = Vec::<Requirement>::new();
    let mut ors = Vec::<Requirement>::new();
    let mut group = None;
    loop {
        let token = &tokens[context.position];
        match token.name {
            TokenType::Requirement => {
                context.position += 1;
                match tokens[context.position].name {
                    TokenType::And => {
                        context.position += 1;
                        ands.push(parse_requirement(token, context)?);
                    },
                    TokenType::Or => {
                        context.position += 1;
                        ors.push(parse_requirement(token, context)?);
                    },
                    TokenType::Newline => {
                        context.position += 1;
                        if ors.is_empty() {
                            ands.push(parse_requirement(token, context)?);
                        } else {
                            ors.push(parse_requirement(token, context)?);
                        }
                        break;
                    },
                    TokenType::Dedent => {
                        if ors.is_empty() {
                            ands.push(parse_requirement(token, context)?);
                        } else {
                            ors.push(parse_requirement(token, context)?);
                        }
                        break;
                    },
                    TokenType::Group => {
                        context.position += 1;
                        ands.push(parse_requirement(token, context)?);
                        if let TokenType::Indent = tokens[context.position].name {
                            context.position += 1;
                            group = Some(parse_group(tokens, context)?);
                            break;
                        }
                    },
                    _ => return Err(wrong_token(token, "separator or end of line")),
                }
            }
            TokenType::Free => {
                parse_free(tokens, context)?;
                break;
            },
            _ => return Err(wrong_token(token, "requirement")),
        }
    }
    Ok(Line {
        ands,
        ors,
        group,
    })
}

fn parse_group<'a>(tokens: &'a [Token], context: &mut ParseContext) -> Result<Group<'a>, ParseError> {
    let mut lines = Vec::<Line>::new();
    loop {
        match tokens[context.position].name {
            TokenType::Requirement => lines.push(parse_line(tokens, context)?),
            TokenType::Dedent => break,
            _ => return Err(wrong_token(&tokens[context.position], "requirement or end of group")),
        }
    }
    // consume the dedent
    context.position += 1;
    Ok(Group {
        lines,
    })
}

fn parse_refill<'a>(tokens: &'a [Token], context: &mut ParseContext) -> Result<Refill<'a>, ParseError> {
    let identifier = &tokens[context.position].value;
    context.position += 1;

    let name;
    let mut requirements = None;
    match tokens[context.position].name {
        TokenType::Newline => context.position += 1,
        TokenType::Free => parse_free(tokens, context)?,
        TokenType::Indent => {
            context.position += 1;
            requirements = Some(parse_group(tokens, context)?)
        },
        _ => return Err(wrong_token(&tokens[context.position], "requirements or end of line")),
    }

    if identifier == "Checkpoint" {
        name = RefillType::Checkpoint;
    } else if identifier == "Full" {
        name = RefillType::Full;
    } else if let Some(amount) = identifier.strip_prefix("Health=") {
        let amount: u16 = match amount.parse() {
            Ok(result) => result,
            Err(_) => return Err(not_int(&tokens[context.position - 1])),
        };
        name = RefillType::Health(amount);
    } else if identifier == "Health" {
        name = RefillType::Health(1);
    } else if let Some(amount) = identifier.strip_prefix("Energy=") {
        let amount: u16 = match amount.parse() {
            Ok(result) => result,
            Err(_) => return Err(not_int(&tokens[context.position - 1])),
        };
        name = RefillType::Energy(amount);
    } else {
        return Err(wrong_token(&tokens[context.position], "'Checkpoint', 'Full', 'Health' or 'Energy'"));
    }

    Ok(Refill {
        name,
        requirements,
    })
}
fn parse_connection<'a>(tokens: &'a [Token], context: &mut ParseContext, name: ConnectionType) -> Result<Connection<'a>, ParseError> {
    let identifier = &tokens[context.position].value;
    let mut requirements = None;

    context.position += 1;
    match tokens[context.position].name {
        TokenType::Indent => {
            context.position += 1;
            requirements = Some(parse_group(tokens, context)?)
        },
        TokenType::Free => parse_free(tokens, context)?,
        _ => return Err(wrong_token(&tokens[context.position], "indent or 'free'")),
    }
    Ok(Connection {
        name,
        identifier,
        requirements,
    })
}
fn parse_state<'a>(tokens: &'a [Token], context: &mut ParseContext) -> Result<Connection<'a>, ParseError> {
    parse_connection(tokens, context, ConnectionType::State)
}
fn parse_quest<'a>(tokens: &'a [Token], context: &mut ParseContext) -> Result<Connection<'a>, ParseError> {
    parse_connection(tokens, context, ConnectionType::Quest)
}
fn parse_pickup<'a>(tokens: &'a [Token], context: &mut ParseContext) -> Result<Connection<'a>, ParseError> {
    parse_connection(tokens, context, ConnectionType::Pickup)
}
fn parse_anchor_connection<'a>(tokens: &'a [Token], context: &mut ParseContext) -> Result<Connection<'a>, ParseError> {
    parse_connection(tokens, context, ConnectionType::Anchor)
}

fn parse_pathset<'a>(tokens: &'a [Token], context: &mut ParseContext) -> Result<Pathset<'a>, ParseError> {
    let identifier = &tokens[context.position].value;
    let mut description = String::new();
    context.position += 1;
    let test = &tokens[context.position].name;
    if eat(tokens, context, TokenType::Group).is_ok() {
        eat(tokens, context, TokenType::Indent)?;
        loop {
            match tokens[context.position].name {
                TokenType::Requirement => {
                    if !description.is_empty() {
                        description += "\n";
                    }

                    description += &tokens[context.position].value;
                    context.position += 1;
                },
                TokenType::Dedent => break,
                _ => return Err(wrong_token(&tokens[context.position], "pathset entry")),
            }
        }

        // consume the dedent
        context.position += 1;
    } else {
        // Try to eat a newline, we don't care if we fail.
        let _ = eat(tokens, context, TokenType::Newline);
    }

    Ok(Pathset {
        identifier,
        description
    })
}
fn parse_pathsets<'a>(tokens: &'a [Token], context: &mut ParseContext) -> Result<Pathsets<'a>, ParseError> {
    let identifier = &tokens[context.position].value;
    let mut pathsets = Vec::new();
    context.position += 1;
    eat(tokens, context, TokenType::Indent)?;
    loop {
        match tokens[context.position].name {
            TokenType::Requirement => {
                pathsets.push(parse_pathset(tokens, context)?);
            },
            TokenType::Dedent => break,
            _ => return Err(wrong_token(&tokens[context.position], "requirement or end of group")),
        }
    }

    eat(tokens, context, TokenType::Dedent)?;
    return if pathsets.is_empty() {
        Err(wrong_token(&tokens[context.position], "pathset entry"))
    } else {
        Ok(Pathsets {
            identifier,
            pathsets,
        })
    }
}
fn parse_named_group<'a>(tokens: &'a [Token], context: &mut ParseContext) -> Result<(&'a str, Group<'a>), ParseError> {
    let identifier = &tokens[context.position].value;
    let requirements;
    context.position += 1;
    match tokens[context.position].name {
        TokenType::Indent => {
            context.position += 1;
            requirements = parse_group(tokens, context)?;
        },
        _ => return Err(wrong_token(&tokens[context.position], "indent")),
    }

    Ok((
        identifier,
        requirements,
    ))
}

fn parse_region<'a>(tokens: &'a [Token], context: &mut ParseContext) -> Result<Region<'a>, ParseError> {
    let (identifier, requirements) = parse_named_group(tokens, context)?;
    Ok(Region {
        identifier,
        requirements,
    })
}
fn parse_definition<'a>(tokens: &'a [Token], context: &mut ParseContext) -> Result<Definition<'a>, ParseError> {
    let (identifier, requirements) = parse_named_group(tokens, context)?;
    Ok(Definition {
        identifier,
        requirements,
    })
}
fn parse_anchor<'a>(tokens: &'a [Token], context: &mut ParseContext) -> Result<Anchor<'a>, ParseError> {
    let identifier = &tokens[context.position].value;
    let mut position = None;
    context.position += 1;
    {
        let token = &tokens[context.position];
        if let TokenType::Position = token.name {
            let mut coords = token.value.split(',');
            let x: i16 = match coords.next().unwrap().parse() {
                Ok(result) => result,
                Err(_) => return Err(not_int(token)),
            };
            let y: i16 = match coords.next().unwrap().parse() {
                Ok(result) => result,
                Err(_) => return Err(not_int(token)),
            };
            position = Some((x, y));
            context.position += 1;
        }
    }

    let mut refills = Vec::<Refill>::new();
    let mut connections = Vec::<Connection>::new();

    match tokens[context.position].name {
        TokenType::Indent => {
            context.position += 1;
            loop {
                match tokens[context.position].name {
                    TokenType::Refill => refills.push(parse_refill(tokens, context)?),
                    TokenType::State => connections.push(parse_state(tokens, context)?),
                    TokenType::Quest => connections.push(parse_quest(tokens, context)?),
                    TokenType::Pickup => connections.push(parse_pickup(tokens, context)?),
                    TokenType::Connection => connections.push(parse_anchor_connection(tokens, context)?),
                    TokenType::Dedent => {
                        context.position += 1;
                        break;
                    },
                    _ => return Err(wrong_token(&tokens[context.position], "refill, state, quest, pickup, connection or end of anchor")),
                }
            }
        },
        _ => return Err(wrong_token(&tokens[context.position], "indent")),
    }
    Ok(Anchor {
        identifier,
        position,
        refills,
        connections,
    })
}

fn wrong_token(token: &Token, description: &str) -> ParseError {
    ParseError {
        description: format!("Expected {} at line {}, instead found {:?}", description, token.line, token.name),
        position: token.position,
    }
}
fn wrong_amount(token: &Token) -> ParseError {
    ParseError {
        description: format!("Failed to parse amount at line {}", token.line),
        position: token.position,
    }
}
fn wrong_requirement(token: &Token) -> ParseError {
    ParseError {
        description: format!("Failed to parse requirement at line {}", token.line),
        position: token.position,
    }
}
fn not_int(token: &Token) -> ParseError {
    ParseError {
        description: format!("Need an integer in {:?} at line {}", token.name, token.line),
        position: token.position,
    }
}

fn preprocess<'a>(tokens: &'a [Token], context: &mut ParseContext<'a>) -> Result<bool, ParseError> {
    // Find all states so we can differentiate states from pathsets.
    let end = tokens.len();
    while context.position < end {
        let token = &tokens[context.position];
        match token.name {
            TokenType::Definition => { context.definitions.insert(&token.value); },
            TokenType::Pathsets => {
                let pathsets = parse_pathsets(tokens, context)?;
                context.pathsets.extend(
                pathsets.pathsets
                .iter()
                .map(|pathset| pathset.identifier)
                );
                context.position -= 1;
            },
            TokenType::Quest | TokenType::State => { context.states.insert(&token.value); },
            _ => {},
        }

        context.position += 1;
    }

    Ok(true)
}

fn process<'a>(tokens: &'a [Token], context: &mut ParseContext) -> Result<AreaTree<'a>, ParseError> {
    let end = tokens.len();
    let mut definitions = Vec::<Definition>::new();
    let mut regions = Vec::<Region>::new();
    let mut anchors = Vec::<Anchor>::new();

    if let TokenType::Newline = tokens[context.position].name { context.position += 1 }

    while context.position < end {
        match tokens[context.position].name {
            // We have already parsed the pathsets in the preprocess step so just eat here.
            TokenType::Pathsets => { parse_pathsets(tokens, context)?; },
            TokenType::Definition => { definitions.push(parse_definition(tokens, context)?); },
            TokenType::Region => { regions.push(parse_region(tokens, context)?); },
            TokenType::Anchor => { anchors.push(parse_anchor(tokens, context)?); },
            _ => { return Err(wrong_token(&tokens[context.position], "definition or anchor")); },
        }
    }
    Ok(AreaTree {
        definitions,
        regions,
        anchors,
    })
}

pub struct Location {
    pub name: String,
    pub group_id: String,
    pub uber_id: String,
}

fn empty_field(name: &str, index: usize, line: &str) -> String {
    format!("Required field {} was empty at line {}: {}", name, index + 1, line)
}

pub fn parse_locations(path: &PathBuf, validate: bool) -> Result<Vec<Location>, String> {
    let input = fs::read_to_string(path).unwrap();
    let mut locations = Vec::with_capacity(input.lines().count());

    for (index, line) in input.lines().enumerate() {
        let parts: Vec::<&str> = line.split(',').collect();
        if validate && parts.len() != 10 {
            return Err(format!("Each line must have 10 fields, found {} at line {}: {}", parts.len(), index + 1, line))
        }

        let (name, group_id, uber_id) = (parts[0].trim(), parts[5].trim(), parts[7].trim());
        if validate {
            if name.is_empty() {
                return Err(empty_field("name", index, line))
            }
            if group_id.is_empty() {
                return Err(empty_field("group_id", index, line))
            }
            if uber_id.is_empty() {
                return Err(empty_field("uber_id", index, line))
            }

            group_id.parse::<u16>().map_err(|_| format!("Invalid uberGroup id at line {}: {}", index + 1, line))?;
            let mut uber_id_value = uber_id.split('=');
            uber_id_value.next().unwrap().parse::<u16>().map_err(|_| format!("Invalid uberState id at line {}: {}", index + 1, line))?;
            if let Some(value) = uber_id_value.next() {
                value.parse::<u16>().map_err(|_| format!("Invalid uberState value at line {}: {}", index + 1, line))?;
                if uber_id_value.next().is_some() {
                    return Err(format!("Multiple equal signs in uberState at line {}: {}", index + 1, line))
                }
            }
        }

        locations.push(Location {
            name: name.to_string(),
            group_id: group_id.to_string(),
            uber_id: uber_id.to_string(),
        })
    }

    Ok(locations)
}

pub fn parse_areas(tokens: &[Token]) -> Result<AreaTree, ParseError> {
    let mut context = ParseContext {
        position: 0,
        definitions: Default::default(),
        pathsets: Default::default(),
        states: Default::default(),
    };

    preprocess(tokens, &mut context)?;
    context.position = 0;
    return process(tokens, &mut context);
}
