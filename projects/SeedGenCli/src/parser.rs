use crate::tokenizer::{Token, TokenType};
use crate::util::{Pathset, Skill, Resource, Shard, Teleporter};

pub enum ParseError {
    WrongToken(String, usize),
    WrongAmount(String, usize),
    WrongRequirement(String, usize),
    ParseInt(String, usize),
}

pub enum Requirement {
    Free,
    Pathset(Pathset),
    Skill(Skill),
    EnergySkill(Skill, u16),
    Resource(Resource, u16),
    Shard(Shard),
    Teleporter(Teleporter),
    State(String),
    Damage(u16),
    Danger(u16),
    Combat(String),
    Boss(u16),
    BreakWall(u16),
    ShurikenBreak(u16),
    SentryJump(u16),
}
pub struct Line {
    pub ands: Vec<Requirement>,
    pub ors: Vec<Requirement>,
    pub group: Option<Group>,
}
pub struct Group {
    pub lines: Vec<Line>
}
pub enum RefillType {
    Full,
    Checkpoint,
    Health(u16),
    Energy(u16),
}
pub struct Refill {
    pub name: RefillType,
    pub requirements: Option<Group>,
}
pub enum ConnectionType {
    State,
    Quest,
    Pickup,
    Anchor,
}
pub struct Connection {
    pub name: ConnectionType,
    pub identifier: String,
    pub requirements: Option<Group>,
}
pub struct Definition {
    pub identifier: String,
    pub requirements: Group,
}
pub struct Region {
    pub identifier: String,
    pub requirements: Group,
}
pub struct Anchor {
    pub identifier: String,
    pub position: Option<(i16, i16)>,
    pub refills: Vec<Refill>,
    pub connections: Vec<Connection>,
}
pub struct Areas {
    pub definitions: Vec<Definition>,
    pub regions: Vec<Region>,
    pub anchors: Vec<Anchor>,
}

struct ParseContext {
    position: usize,
}

fn parse_requirement(token: &Token) -> Result<Requirement, ParseError> {
    let mut parts = token.value.split('=');
    let keyword = parts.next().unwrap();
    let amount = parts.next();
    if parts.next().is_some() {
        return Err(wrong_amount(token));
    }
    match amount {
        Some(amount) => {
            if keyword == "Combat" {
                return Ok(Requirement::Combat(amount.to_string()));
            }
            let amount: u16 = match amount.parse() {
                Ok(result) => result,
                Err(_) => return Err(not_int(token)),
            };
            match keyword {
                "Blaze" => return Ok(Requirement::EnergySkill(Skill::Blaze, amount)),
                "Boss" => return Ok(Requirement::Boss(amount)),
                "Bow" => return Ok(Requirement::EnergySkill(Skill::Bow, amount)),
                "BreakWall" => return Ok(Requirement::BreakWall(amount)),
                "Damage" => return Ok(Requirement::Damage(amount)),
                "Danger" => return Ok(Requirement::Danger(amount)),
                "Energy" => return Ok(Requirement::Resource(Resource::Energy, amount)),
                "Flash" => return Ok(Requirement::EnergySkill(Skill::Flash, amount)),
                "Grenade" => return Ok(Requirement::EnergySkill(Skill::Grenade, amount)),
                "Health" => return Ok(Requirement::Resource(Resource::Health, amount)),
                "Keystone" => return Ok(Requirement::Resource(Resource::Keystone, amount)),
                "Ore" => return Ok(Requirement::Resource(Resource::Ore, amount)),
                "Sentry" => return Ok(Requirement::EnergySkill(Skill::Sentry, amount)),
                "SentryJump" => return Ok(Requirement::SentryJump(amount)),
                "ShardSlot" => return Ok(Requirement::Resource(Resource::ShardSlot, amount)),
                "Shuriken" => return Ok(Requirement::EnergySkill(Skill::Shuriken, amount)),
                "ShurikenBreak" => return Ok(Requirement::ShurikenBreak(amount)),
                "Spear" => return Ok(Requirement::EnergySkill(Skill::Spear, amount)),
                "SpiritLight" => return Ok(Requirement::Resource(Resource::SpiritLight, amount)),
                _ => return Err(wrong_requirement(token))
            }
        }
        None => match keyword {
            "Arcing" => return Ok(Requirement::Shard(Shard::Arcing)),
            "Bash" => return Ok(Requirement::Skill(Skill::Bash)),
            "Blaze" => return Ok(Requirement::Skill(Skill::Blaze)),
            "Bow" => return Ok(Requirement::Skill(Skill::Bow)),
            "Burrow" => return Ok(Requirement::Skill(Skill::Burrow)),
            "BurrowsTP" => return Ok(Requirement::Teleporter(Teleporter::Burrows)),
            "Catalyst" => return Ok(Requirement::Shard(Shard::Catalyst)),
            "Dash" => return Ok(Requirement::Skill(Skill::Dash)),
            "Deflector" => return Ok(Requirement::Shard(Shard::Deflector)),
            "DenTP" => return Ok(Requirement::Teleporter(Teleporter::Den)),
            "DepthsTP" => return Ok(Requirement::Teleporter(Teleporter::Depths)),
            "DoubleJump" => return Ok(Requirement::Skill(Skill::DoubleJump)),
            "EastPoolsTP" => return Ok(Requirement::Teleporter(Teleporter::EastLuma)),
            "EastWastesTP" => return Ok(Requirement::Teleporter(Teleporter::EastWastes)),
            "EastWoodsTP" => return Ok(Requirement::Teleporter(Teleporter::EastWoods)),
            "EnergyHarvest" => return Ok(Requirement::Shard(Shard::EnergyHarvest)),
            "Flap" => return Ok(Requirement::Skill(Skill::Flap)),
            "Flash" => return Ok(Requirement::Skill(Skill::Flash)),
            "Fracture" => return Ok(Requirement::Shard(Shard::Fracture)),
            "free" => return Ok(Requirement::Free),
            "GladesTP" => return Ok(Requirement::Teleporter(Teleporter::Glades)),
            "Glide" => return Ok(Requirement::Skill(Skill::Glide)),
            "glitch" => return Ok(Requirement::Pathset(Pathset::Glitch)),
            "gorlek" => return Ok(Requirement::Pathset(Pathset::Gorlek)),
            "Grapple" => return Ok(Requirement::Skill(Skill::Grapple)),
            "Grenade" => return Ok(Requirement::Skill(Skill::Grenade)),
            "Hammer" => return Ok(Requirement::Skill(Skill::Hammer)),
            "HollowTP" => return Ok(Requirement::Teleporter(Teleporter::Hollow)),
            "InnerRuinsTP" => return Ok(Requirement::Teleporter(Teleporter::InnerRuins)),
            "Launch" => return Ok(Requirement::Skill(Skill::Launch)),
            "LifeHarvest" => return Ok(Requirement::Shard(Shard::LifeHarvest)),
            "Magnet" => return Ok(Requirement::Shard(Shard::Magnet)),
            "MarshTP" => return Ok(Requirement::Teleporter(Teleporter::Marsh)),
            "moki" => return Ok(Requirement::Pathset(Pathset::Moki)),
            "OuterRuinsTP" => return Ok(Requirement::Teleporter(Teleporter::OuterRuins)),
            "Overflow" => return Ok(Requirement::Shard(Shard::Overflow)),
            "ReachTP" => return Ok(Requirement::Teleporter(Teleporter::Reach)),
            "Regenerate" => return Ok(Requirement::Skill(Skill::Regenerate)),
            "Seir" => return Ok(Requirement::Skill(Skill::Seir)),
            "Sentry" => return Ok(Requirement::Skill(Skill::Sentry)),
            "ShriekTP" => return Ok(Requirement::Teleporter(Teleporter::Shriek)),
            "Shuriken" => return Ok(Requirement::Skill(Skill::Shuriken)),
            "Spear" => return Ok(Requirement::Skill(Skill::Spear)),
            "Sticky" => return Ok(Requirement::Shard(Shard::Sticky)),
            "Sword" => return Ok(Requirement::Skill(Skill::Sword)),
            "TripleJump" => return Ok(Requirement::Shard(Shard::TripleJump)),
            "Thorn" => return Ok(Requirement::Shard(Shard::Thorn)),
            "UltraBash" => return Ok(Requirement::Shard(Shard::UltraBash)),
            "UltraGrapple" => return Ok(Requirement::Shard(Shard::UltraGrapple)),
            "unsafe" => return Ok(Requirement::Pathset(Pathset::Unsafe)),
            "WallJump" => return Ok(Requirement::Skill(Skill::WallJump)),
            "WaterBreath" => return Ok(Requirement::Skill(Skill::WaterBreath)),
            "WaterDash" => return Ok(Requirement::Skill(Skill::WaterDash)),
            "WellspringTP" => return Ok(Requirement::Teleporter(Teleporter::Wellspring)),
            "WestPoolsTP" => return Ok(Requirement::Teleporter(Teleporter::WestLuma)),
            "WestWastesTP" => return Ok(Requirement::Teleporter(Teleporter::WestWastes)),
            "WestWoodsTP" => return Ok(Requirement::Teleporter(Teleporter::WestWoods)),
            "WillowTP" => return Ok(Requirement::Teleporter(Teleporter::Willow)),
            "Boss" => return Err(wrong_amount(token)),
            "BreakWall" => return Err(wrong_amount(token)),
            "Damage" => return Err(wrong_amount(token)),
            "Danger" => return Err(wrong_amount(token)),
            "Energy" => return Err(wrong_amount(token)),
            "Health" => return Err(wrong_amount(token)),
            "Keystone" => return Err(wrong_amount(token)),
            "Ore" => return Err(wrong_amount(token)),
            "SentryJump" => return Err(wrong_amount(token)),
            "ShardSlot" => return Err(wrong_amount(token)),
            "ShurikenBreak" => return Err(wrong_amount(token)),
            "SpiritLight" => return Err(wrong_amount(token)),
            _ => return Ok(Requirement::State(keyword.to_string())),
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

fn parse_line(tokens: &[Token], context: &mut ParseContext) -> Result<Line, ParseError> {
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
                        ands.push(parse_requirement(token)?);
                    },
                    TokenType::Or => {
                        context.position += 1;
                        ors.push(parse_requirement(token)?);
                    },
                    TokenType::Newline => {
                        context.position += 1;
                        if ors.is_empty() {
                            ands.push(parse_requirement(token)?);
                        } else {
                            ors.push(parse_requirement(token)?);
                        }
                        break;
                    },
                    TokenType::Dedent => {
                        if ors.is_empty() {
                            ands.push(parse_requirement(token)?);
                        } else {
                            ors.push(parse_requirement(token)?);
                        }
                        break;
                    },
                    TokenType::Group => {
                        context.position += 1;
                        ands.push(parse_requirement(token)?);
                        match tokens[context.position].name {
                            TokenType::Indent => {
                                context.position += 1;
                                group = Some(parse_group(tokens, context)?);
                                break;
                            },
                            _ => {},
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

fn parse_group(tokens: &[Token], context: &mut ParseContext) -> Result<Group, ParseError> {
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

fn parse_refill(tokens: &[Token], context: &mut ParseContext) -> Result<Refill, ParseError> {
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
    } else if identifier.starts_with("Health=") {
        let amount: u16 = match identifier[7..].parse() {
            Ok(result) => result,
            Err(_) => return Err(not_int(&tokens[context.position - 1])),
        };
        name = RefillType::Health(amount);
    } else if identifier == "Health" {
        name = RefillType::Health(1);
    } else if identifier.starts_with("Energy=") {
        let amount: u16 = match identifier[7..].parse() {
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
fn parse_connection(tokens: &[Token], context: &mut ParseContext, name: ConnectionType) -> Result<Connection, ParseError> {
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
        identifier: identifier.to_string(),
        requirements,
    })
}
fn parse_state(tokens: &[Token], context: &mut ParseContext) -> Result<Connection, ParseError> {
    parse_connection(tokens, context, ConnectionType::State)
}
fn parse_quest(tokens: &[Token], context: &mut ParseContext) -> Result<Connection, ParseError> {
    parse_connection(tokens, context, ConnectionType::Quest)
}
fn parse_pickup(tokens: &[Token], context: &mut ParseContext) -> Result<Connection, ParseError> {
    parse_connection(tokens, context, ConnectionType::Pickup)
}
fn parse_anchor_connection(tokens: &[Token], context: &mut ParseContext) -> Result<Connection, ParseError> {
    parse_connection(tokens, context, ConnectionType::Anchor)
}

fn parse_definition(tokens: &[Token], context: &mut ParseContext) -> Result<Definition, ParseError> {
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
    Ok(Definition {
        identifier: identifier.to_string(),
        requirements,
    })
}
fn parse_region(tokens: &[Token], context: &mut ParseContext) -> Result<Region, ParseError> {
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
    Ok(Region {
        identifier: identifier.to_string(),
        requirements,
    })
}
fn parse_anchor(tokens: &[Token], context: &mut ParseContext) -> Result<Anchor, ParseError> {
    let identifier = &tokens[context.position].value;
    let mut position = None;
    context.position += 1;
    {
        let token = &tokens[context.position];
        match token.name {
            TokenType::Position => {
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
            },
            _ => {},
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
        identifier: identifier.to_string(),
        position,
        refills,
        connections,
    })
}

fn wrong_token(token: &Token, description: &str) -> ParseError {
    ParseError::WrongToken(format!("Expected {} at line {}, instead found {:?}", description, token.line, token.name), token.position)
}
fn wrong_amount(token: &Token) -> ParseError {
    ParseError::WrongAmount(format!("Failed to parse amount at line {}", token.line), token.position)
}
fn wrong_requirement(token: &Token) -> ParseError {
    ParseError::WrongRequirement(format!("Failed to parse requirement at line {}", token.line), token.position)
}
fn not_int(token: &Token) -> ParseError {
    ParseError::ParseInt(format!("Need an integer in {:?} at line {}", token.name, token.line), token.position)
}

pub fn parse_areas(tokens: &[Token]) -> Result<Areas, ParseError> {
    let mut context = ParseContext {
        position: 0,
    };
    let end = tokens.len();
    let mut definitions = Vec::<Definition>::new();
    let mut regions = Vec::<Region>::new();
    let mut anchors = Vec::<Anchor>::new();

    match tokens[context.position].name {
        TokenType::Newline => context.position += 1,
        _ => {},
    }

    while context.position < end {
        match tokens[context.position].name {
            TokenType::Definition => definitions.push(parse_definition(tokens, &mut context)?),
            TokenType::Region => regions.push(parse_region(tokens, &mut context)?),
            TokenType::Anchor => anchors.push(parse_anchor(tokens, &mut context)?),
            _ => return Err(wrong_token(&tokens[context.position], "definition or anchor")),
        }
    }
    Ok(Areas {
        definitions,
        regions,
        anchors,
    })
}