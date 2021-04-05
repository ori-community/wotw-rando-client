use std::path::PathBuf;
use rustc_hash::{FxHashMap, FxHashSet};

use super::tokenizer::{Token, TokenType};
use crate::uberstate::UberState;
use crate::util::{self, Pathset, Skill, Resource, Shard, Teleporter, RefillType, NodeType, Enemy};

pub struct ParseError {
    pub description: String,
    pub position: usize,
}

#[derive(Debug)]
pub enum Requirement<'a> {
    Free,
    Definition(&'a str),
    Pathset(Pathset),
    Skill(Skill),
    EnergySkill(Skill, u16),
    Resource(Resource, u16),
    Shard(Shard),
    Teleporter(Teleporter),
    Water,
    State(&'a str),
    Damage(u16),
    Danger(u16),
    Combat(Vec<(Enemy, u8)>),
    Boss(u16),
    BreakWall(u16),
    ShurikenBreak(u16),
    SentryJump(u16),
}
#[derive(Debug)]
pub struct Line<'a> {
    pub ands: Vec<Requirement<'a>>,
    pub ors: Vec<Requirement<'a>>,
    pub group: Option<Group<'a>>,
}
#[derive(Debug)]
pub struct Group<'a> {
    pub lines: Vec<Line<'a>>
}
#[derive(Debug)]
pub struct Refill<'a> {
    pub name: RefillType,
    pub requirements: Option<Group<'a>>,
}
#[derive(Debug)]
pub struct Connection<'a> {
    pub name: NodeType,
    pub identifier: &'a str,
    pub requirements: Option<Group<'a>>,
}
#[derive(Debug)]
pub struct Anchor<'a> {
    pub identifier: &'a str,
    pub position: Option<(i16, i16)>,
    pub refills: Vec<Refill<'a>>,
    pub connections: Vec<Connection<'a>>,
}
#[derive(Debug)]
pub struct AreaTree<'a> {
    pub definitions: FxHashMap<&'a str, Group<'a>>,
    pub regions: FxHashMap<&'a str, Group<'a>>,
    pub anchors: Vec<Anchor<'a>>,
}

#[derive(Debug)]
struct ParseContext {
    position: usize,
}
#[derive(Debug)]
pub struct Metadata<'a> {
    definitions: FxHashSet<&'a str>,
    pub states: FxHashSet<&'a str>,
    pub quests: FxHashSet<&'a str>,
}

fn eat(tokens: &[Token], context: &mut ParseContext, expected_token_type: TokenType) -> Result<bool, ParseError> {
    let token_type = tokens[context.position].name;
    if token_type == expected_token_type {
        context.position += 1;
        Ok(true)
    } else {
        Err(wrong_token(&tokens[context.position], &format!("{:?}", expected_token_type)))
    }
}

fn parse_requirement<'a>(token: &'a Token, metadata: &Metadata) -> Result<Requirement<'a>, ParseError> {
    let mut parts = token.value.split('=');
    let keyword = parts.next().unwrap();
    let amount = parts.next();
    if parts.next().is_some() {
        return Err(wrong_amount(token));
    }
    match amount {
        Some(amount) => {
            if keyword == "Combat" {
                let mut enemies = Vec::new();
                for enemy in amount.split('+') {
                    let mut parts = enemy.split('x');
                    let amount = parts.next().ok_or_else(|| wrong_requirement(token))?;
                    let (enemy, amount) = match parts.next() {
                        Some(enemy) => (enemy, amount),
                        None => (amount, "1"),
                    };
                    if parts.next().is_some() {
                        return Err(wrong_requirement(token));
                    }
                    let amount: u8 = match amount.parse() {
                        Ok(result) => result,
                        Err(_) => return Err(not_int(token)),
                    };
                    let enemy = match enemy {
                        "Mantis" => Ok(Enemy::Mantis),
                        "Slug" => Ok(Enemy::Slug),
                        "WeakSlug" => Ok(Enemy::WeakSlug),
                        "BombSlug" => Ok(Enemy::BombSlug),
                        "CorruptSlug" => Ok(Enemy::CorruptSlug),
                        "SneezeSlug" => Ok(Enemy::SneezeSlug),
                        "ShieldSlug" => Ok(Enemy::ShieldSlug),
                        "Lizard" => Ok(Enemy::Lizard),
                        "Bat" => Ok(Enemy::Bat),
                        "Hornbug" => Ok(Enemy::Hornbug),
                        "Skeeto" => Ok(Enemy::Skeeto),
                        "SmallSkeeto" => Ok(Enemy::SmallSkeeto),
                        "Bee" => Ok(Enemy::Bee),
                        "Nest" => Ok(Enemy::Nest),
                        "Crab" => Ok(Enemy::Crab),
                        "SpinCrab" => Ok(Enemy::SpinCrab),
                        "Tentacle" => Ok(Enemy::Tentacle),
                        "Balloon" => Ok(Enemy::Balloon),
                        "Miner" => Ok(Enemy::Miner),
                        "MaceMiner" => Ok(Enemy::MaceMiner),
                        "ShieldMiner" => Ok(Enemy::ShieldMiner),
                        "CrystalMiner" => Ok(Enemy::CrystalMiner),
                        "ShieldCrystalMiner" => Ok(Enemy::ShieldCrystalMiner),
                        "Sandworm" => Ok(Enemy::Sandworm),
                        "Spiderling" => Ok(Enemy::Spiderling),
                        "EnergyRefill" => Ok(Enemy::EnergyRefill),
                        _ => Err(wrong_requirement(token)),
                    }?;
                    enemies.push((enemy, amount));
                }
                return Ok(Requirement::Combat(enemies));
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
            "glitch" => Ok(Requirement::Pathset(Pathset::Glitch)),
            "gorlek" => Ok(Requirement::Pathset(Pathset::Gorlek)),
            "Grapple" => Ok(Requirement::Skill(Skill::Grapple)),
            "Grenade" => Ok(Requirement::Skill(Skill::Grenade)),
            "Hammer" => Ok(Requirement::Skill(Skill::Hammer)),
            "HollowTP" => Ok(Requirement::Teleporter(Teleporter::Hollow)),
            "InnerRuinsTP" => Ok(Requirement::Teleporter(Teleporter::InnerRuins)),
            "Launch" => Ok(Requirement::Skill(Skill::Launch)),
            "LifeHarvest" => Ok(Requirement::Shard(Shard::LifeHarvest)),
            "Magnet" => Ok(Requirement::Shard(Shard::Magnet)),
            "MarshTP" => Ok(Requirement::Teleporter(Teleporter::Marsh)),
            "moki" => Ok(Requirement::Pathset(Pathset::Moki)),
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
            "unsafe" => Ok(Requirement::Pathset(Pathset::Unsafe)),
            "WallJump" => Ok(Requirement::Skill(Skill::WallJump)),
            "WaterBreath" => Ok(Requirement::Skill(Skill::WaterBreath)),
            "WaterDash" => Ok(Requirement::Skill(Skill::WaterDash)),
            "Water" => Ok(Requirement::Water),
            "WellspringTP" => Ok(Requirement::Teleporter(Teleporter::Wellspring)),
            "WestPoolsTP" => Ok(Requirement::Teleporter(Teleporter::WestLuma)),
            "WestWastesTP" => Ok(Requirement::Teleporter(Teleporter::WestWastes)),
            "WestWoodsTP" => Ok(Requirement::Teleporter(Teleporter::WestWoods)),
            "WillowTP" => Ok(Requirement::Teleporter(Teleporter::Willow)),
            "Combat" | "Boss" | "BreakWall" | "Damage" | "Danger" | "Energy" | "Health" | "Keystone" | "Ore" | "SentryJump" | "ShardSlot" | "ShurikenBreak" | "SpiritLight"
                => Err(wrong_amount(token)),
            _ if metadata.definitions.contains(keyword) => Ok(Requirement::Definition(keyword)),
            _ if metadata.states.contains(keyword) || metadata.quests.contains(keyword) => Ok(Requirement::State(keyword)),
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

fn parse_line<'a>(tokens: &'a [Token], context: &mut ParseContext, metadata: &Metadata) -> Result<Line<'a>, ParseError> {
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
                        ands.push(parse_requirement(token, metadata)?);
                    },
                    TokenType::Or => {
                        context.position += 1;
                        ors.push(parse_requirement(token, metadata)?);
                    },
                    TokenType::Newline => {
                        context.position += 1;
                        if ors.is_empty() {
                            ands.push(parse_requirement(token, metadata)?);
                        } else {
                            ors.push(parse_requirement(token, metadata)?);
                        }
                        break;
                    },
                    TokenType::Dedent => {
                        if ors.is_empty() {
                            ands.push(parse_requirement(token, metadata)?);
                        } else {
                            ors.push(parse_requirement(token, metadata)?);
                        }
                        break;
                    },
                    TokenType::Group => {
                        context.position += 1;
                        ands.push(parse_requirement(token, metadata)?);
                        if let TokenType::Indent = tokens[context.position].name {
                            context.position += 1;
                            group = Some(parse_group(tokens, context, metadata)?);
                            break;
                        }
                    },
                    _ => return Err(wrong_token(&tokens[context.position], "separator or end of line")),
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

fn parse_group<'a>(tokens: &'a [Token], context: &mut ParseContext, metadata: &Metadata) -> Result<Group<'a>, ParseError> {
    let mut lines = Vec::<Line>::new();
    loop {
        match tokens[context.position].name {
            TokenType::Requirement => lines.push(parse_line(tokens, context, metadata)?),
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

fn parse_refill<'a>(tokens: &'a [Token], context: &mut ParseContext, metadata: &Metadata) -> Result<Refill<'a>, ParseError> {
    let identifier = &tokens[context.position].value;
    context.position += 1;

    let name;
    let mut requirements = None;
    match tokens[context.position].name {
        TokenType::Newline => context.position += 1,
        TokenType::Free => parse_free(tokens, context)?,
        TokenType::Indent => {
            context.position += 1;
            requirements = Some(parse_group(tokens, context, metadata)?)
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
        name = RefillType::Health(f32::from(amount));
    } else if identifier == "Health" {
        name = RefillType::Health(1.0);
    } else if let Some(amount) = identifier.strip_prefix("Energy=") {
        let amount: u16 = match amount.parse() {
            Ok(result) => result,
            Err(_) => return Err(not_int(&tokens[context.position - 1])),
        };
        name = RefillType::Energy(f32::from(amount));
    } else {
        return Err(wrong_token(&tokens[context.position], "'Checkpoint', 'Full', 'Health' or 'Energy'"));
    }

    Ok(Refill {
        name,
        requirements,
    })
}
fn parse_connection<'a>(tokens: &'a [Token], context: &mut ParseContext, metadata: &Metadata, name: NodeType) -> Result<Connection<'a>, ParseError> {
    let identifier = &tokens[context.position].value;
    let mut requirements = None;

    context.position += 1;
    match tokens[context.position].name {
        TokenType::Indent => {
            context.position += 1;
            requirements = Some(parse_group(tokens, context, metadata)?)
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
fn parse_state<'a>(tokens: &'a [Token], context: &mut ParseContext, metadata: &Metadata) -> Result<Connection<'a>, ParseError> {
    parse_connection(tokens, context, metadata, NodeType::State)
}
fn parse_quest<'a>(tokens: &'a [Token], context: &mut ParseContext, metadata: &Metadata) -> Result<Connection<'a>, ParseError> {
    parse_connection(tokens, context, metadata, NodeType::Quest)
}
fn parse_pickup<'a>(tokens: &'a [Token], context: &mut ParseContext, metadata: &Metadata) -> Result<Connection<'a>, ParseError> {
    parse_connection(tokens, context, metadata, NodeType::Pickup)
}
fn parse_anchor_connection<'a>(tokens: &'a [Token], context: &mut ParseContext, metadata: &Metadata) -> Result<Connection<'a>, ParseError> {
    parse_connection(tokens, context, metadata, NodeType::Anchor)
}

fn parse_named_group<'a>(tokens: &'a [Token], context: &mut ParseContext, metadata: &Metadata) -> Result<(&'a str, Group<'a>), ParseError> {
    let identifier = &tokens[context.position].value;
    let requirements;
    context.position += 1;
    match tokens[context.position].name {
        TokenType::Indent => {
            context.position += 1;
            requirements = parse_group(tokens, context, metadata)?;
        },
        _ => return Err(wrong_token(&tokens[context.position], "indent")),
    }

    Ok((
        identifier,
        requirements,
    ))
}

fn parse_region<'a>(tokens: &'a [Token], context: &mut ParseContext, metadata: &Metadata) -> Result<(&'a str, Group<'a>), ParseError> {
    let (identifier, requirements) = parse_named_group(tokens, context, metadata)?;
    Ok((
        identifier,
        requirements,
    ))
}
fn parse_definition<'a>(tokens: &'a [Token], context: &mut ParseContext, metadata: &Metadata) -> Result<(&'a str, Group<'a>), ParseError> {
    let (identifier, requirements) = parse_named_group(tokens, context, metadata)?;
    Ok((
        identifier,
        requirements,
    ))
}
fn parse_anchor<'a>(tokens: &'a [Token], context: &mut ParseContext, metadata: &Metadata) -> Result<Anchor<'a>, ParseError> {
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

    eat(tokens, context, TokenType::Indent)?;

    loop {
        match tokens[context.position].name {
            TokenType::Refill => refills.push(parse_refill(tokens, context, metadata)?),
            TokenType::State => connections.push(parse_state(tokens, context, metadata)?),
            TokenType::Quest => connections.push(parse_quest(tokens, context, metadata)?),
            TokenType::Pickup => connections.push(parse_pickup(tokens, context, metadata)?),
            TokenType::Connection => connections.push(parse_anchor_connection(tokens, context, metadata)?),
            TokenType::Dedent => {
                context.position += 1;
                break;
            },
            _ => return Err(wrong_token(&tokens[context.position], "refill, state, quest, pickup, connection or end of anchor")),
        }
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

fn preprocess<'a>(tokens: &'a [Token], context: &mut ParseContext) -> Metadata<'a> {
    // Find all states so we can differentiate states from pathsets.
    let end = tokens.len();
    let mut definitions = FxHashSet::default();
    let mut states = FxHashSet::default();
    states.reserve(end / 500);
    let mut quests = FxHashSet::default();
    quests.reserve(end / 1000);

    while context.position < end {
        let token = &tokens[context.position];
        match token.name {
            TokenType::Definition => { definitions.insert(&token.value[..]); },
            TokenType::Quest => { quests.insert(&token.value[..]); },
            TokenType::State => { states.insert(&token.value[..]); },
            _ => {},
        }

        context.position += 1;
    }

    Metadata {
        definitions,
        states,
        quests,
    }
}

fn process<'a>(tokens: &'a [Token], context: &mut ParseContext, metadata: &Metadata) -> Result<AreaTree<'a>, ParseError> {
    let end = tokens.len();
    let mut definitions = FxHashMap::default();
    let mut regions = FxHashMap::default();
    regions.reserve(20);
    let mut anchors = Vec::<Anchor>::new();
    anchors.reserve(end / 200);

    if let TokenType::Newline = tokens[context.position].name { context.position += 1 }

    while context.position < end {
        let token = &tokens[context.position];
        match token.name {
            TokenType::Definition => {
                let (key, value) = parse_definition(tokens, context, metadata)?;
                if definitions.insert(key, value).is_some() {
                    return Err(ParseError {
                        description: format!("Requirement name '{}' already in use at line {}", key, token.line),
                        position: token.position,
                    });
                }
            },
            TokenType::Region => {
                let (key, value) = parse_region(tokens, context, metadata)?;
                if regions.insert(key, value).is_some() {
                    return Err(ParseError {
                        description: format!("Region name '{}' already in use at line {}", key, token.line),
                        position: token.position,
                    });
                }
            },
            TokenType::Anchor => anchors.push(parse_anchor(tokens, context, metadata)?),
            _ => return Err(wrong_token(&tokens[context.position], "definition or anchor")),
        }
    }
    Ok(AreaTree {
        definitions,
        regions,
        anchors,
    })
}

#[derive(Debug)]
pub struct Location {
    pub name: String,
    pub uber_state: UberState,
}

fn empty_field(name: &str, index: usize, line: &str) -> String {
    format!("Required field {} was empty at line {}: {}", name, index + 1, line)
}

pub fn parse_locations(path: &PathBuf, validate: bool) -> Result<Vec<Location>, String> {
    let input = util::read_file(path, "logic").map_err(|err| format!("Failed to read locations: {}", err))?;
    let mut locations = Vec::with_capacity(input.lines().count());

    for (index, line) in input.lines().enumerate() {
        let parts: Vec<_> = line.split(',').collect();
        if validate && parts.len() != 10 {
            return Err(format!("Each line must have 10 fields, found {} at line {}: {}", parts.len(), index + 1, line))
        }

        let (name, uber_group, uber_id) = (parts[0].trim(), parts[5].trim(), parts[7].trim());
        if validate {
            if name.is_empty() {
                return Err(empty_field("name", index, line))
            }
            if uber_group.is_empty() {
                return Err(empty_field("group_id", index, line))
            }
            if uber_id.is_empty() {
                return Err(empty_field("uber_id", index, line))
            }
        }

        locations.push(Location {
            name: name.to_string(),
            uber_state: UberState::from_parts(uber_group, uber_id)?,
        })
    }

    Ok(locations)
}

#[derive(Debug)]
pub struct NamedState {
    pub name: String,
    pub uber_state: UberState,
}

pub fn parse_states(path: &PathBuf, validate: bool) -> Result<Vec<NamedState>, String> {
    let input = util::read_file(path, "logic").map_err(|err| format!("Failed to read states: {}", err))?;
    let mut states = Vec::with_capacity(input.lines().count());

    for (index, line) in input.lines().enumerate() {
        let parts: Vec<_> = line.split(',').collect();
        if validate && parts.len() != 3 {
            return Err(format!("Each line must have 3 fields, found {} at line {}: {}", parts.len(), index + 1, line))
        }

        let (name, uber_group, uber_id) = (parts[0].trim(), parts[1].trim(), parts[2].trim());
        if validate {
            if name.is_empty() {
                return Err(empty_field("name", index, line))
            }
            if uber_group.is_empty() {
                return Err(empty_field("group_id", index, line))
            }
            if uber_id.is_empty() {
                return Err(empty_field("uber_id", index, line))
            }
        }

        states.push(NamedState {
            name: name.to_string(),
            uber_state: UberState::from_parts(uber_group, uber_id)?,
        })
    }

    Ok(states)
}

pub fn parse_areas(tokens: &[Token]) -> Result<(AreaTree, Metadata), ParseError> {
    let mut context = ParseContext {
        position: 0,
    };
    let metadata = preprocess(tokens, &mut context);
    context.position = 0;

    let tree = process(tokens, &mut context, &metadata)?;
    Ok((tree, metadata))
}
