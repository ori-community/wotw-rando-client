use std::collections::{HashSet, HashMap};

use crate::parser::{self, AreaTree, Metadata, Location};
use crate::world::{self, Node};
use crate::requirements::Requirement;
use crate::util::{Pathset, Skill};

fn build_requirement<'a>(requirement: &parser::Requirement<'a>, definitions: &HashMap<&'a str, parser::Group<'a>>, pathsets: &[Pathset], validate: bool, used_states: &mut HashSet<&'a str>) -> Requirement {
    match requirement {
        parser::Requirement::Free => Requirement::Free,
        parser::Requirement::Definition(identifier) => build_requirement_group(&definitions[identifier], definitions, pathsets, validate, used_states),
        parser::Requirement::Pathset(pathset) =>
            if pathsets.contains(pathset) {
                Requirement::Free
            } else {
                Requirement::Impossible
            },
        parser::Requirement::Skill(skill) => Requirement::Skill(*skill),
        parser::Requirement::EnergySkill(skill, amount) => Requirement::EnergySkill(*skill, (*amount).into()),
        parser::Requirement::Resource(resource, amount) => Requirement::Resource(*resource, *amount),
        parser::Requirement::Shard(shard) => Requirement::Shard(*shard),
        parser::Requirement::Teleporter(teleporter) => Requirement::Teleporter(*teleporter),
        parser::Requirement::State(state) => {
            if validate { used_states.insert(state); }
            Requirement::State(state.to_string())
        },
        parser::Requirement::Damage(amount) => Requirement::Damage(*amount),
        parser::Requirement::Danger(amount) => Requirement::Danger(*amount),
        parser::Requirement::Combat(enemies) => Requirement::Combat(enemies.clone()),
        parser::Requirement::Boss(health) => Requirement::Boss(*health as f32),
        parser::Requirement::BreakWall(health) => Requirement::BreakWall(*health as f32),
        parser::Requirement::ShurikenBreak(health) =>
            if pathsets.contains(&Pathset::Glitch) {
                Requirement::ShurikenBreak(*health as f32)
            } else {
                Requirement::Impossible
            },
        parser::Requirement::SentryJump(amount) =>
            if pathsets.contains(&Pathset::Glitch) {
                Requirement::And(vec![
                    Requirement::EnergySkill(Skill::Sentry, (*amount).into()),
                    Requirement::Or(vec![
                        Requirement::Skill(Skill::Sword),
                        Requirement::Skill(Skill::Hammer)
                    ])
                ])
            } else {
                Requirement::Impossible
            },
    }
}

// see if filtering out redundancies is worth later
fn build_and(mut ands: Vec<Requirement>) -> Requirement {
    if ands.iter().any(|and| matches!(and, Requirement::Impossible)) {
        return Requirement::Impossible;
    }
    // ands = ands.into_iter().filter(|and| !matches!(or, Requirement::Free)).collect();
    if ands.len() == 1 {
        return ands.pop().unwrap();
    }
    // if ands.is_empty() {
    //     return Requirement::Free;
    // }
    Requirement::And(ands)
}
fn build_or(mut ors: Vec<Requirement>) -> Requirement {
    if ors.iter().any(|or| matches!(or, Requirement::Free)) {
        return Requirement::Free;
    }
    // ors = ors.into_iter().filter(|or| !matches!(or, Requirement::Impossible)).collect();
    if ors.len() == 1 {
        return ors.pop().unwrap();
    }
    // if ors.is_empty() {
    //     return Requirement::Impossible;
    // }
    Requirement::Or(ors)
}

fn build_requirement_group<'a>(group: &parser::Group<'a>, definitions: &HashMap<&'a str, parser::Group<'a>>, pathsets: &[Pathset], validate: bool, used_states: &mut HashSet<&'a str>) -> Requirement {
    let lines: Vec<Requirement> = group.lines.iter().map(|line| {
        let mut parts = vec![];
        if !line.ands.is_empty() {
            let ands: Vec<Requirement> = line.ands.iter().map(|and| build_requirement(and, definitions, pathsets, validate, used_states)).collect();
            parts.push(build_and(ands));
        }
        if !line.ors.is_empty() {
            let ors: Vec<Requirement> = line.ors.iter().map(|or| build_requirement(or, definitions, pathsets, validate, used_states)).collect();
            parts.push(build_or(ors));
        }
        if let Some(subgroup) = &line.group {
            parts.push(build_requirement_group(subgroup, definitions, pathsets, validate, used_states));
        }
        build_and(parts)
    }).collect();
    build_or(lines)
}

fn add_node(graph: &mut HashMap<String, Node>, key: String, value: Node) -> Result<(), String> {
    if let Some(prior) = graph.insert(key, value) {
        return Err(format!("Name '{}' was used multiple times ambiguously", prior.identifier()));
    }
    Ok(())
}

pub fn emit(areas: &AreaTree, metadata: &Metadata, locations: &[Location], pathsets: &[Pathset], validate: bool) -> Result<HashMap<String, Node>, String> {
    let mut graph = HashMap::with_capacity(areas.anchors.len() + locations.len() + metadata.states.len());
    let mut used_states = HashSet::new();

    for anchor in &areas.anchors {
        let region = anchor.identifier.splitn(2, '.').next().unwrap();
        let region = areas.regions.get(region);
        let mut region_requirement = None;
        if let Some(group) = region {
            region_requirement = Some(build_requirement_group(&group, &areas.definitions, pathsets, validate, &mut used_states));
        }
        let refills: Vec<world::Refill> = anchor.refills.iter().map(|refill| {
            let mut requirement = Requirement::Free;
            if let Some(group) = &refill.requirements {
                requirement = build_requirement_group(group, &areas.definitions, pathsets, validate, &mut used_states);
            }
            world::Refill {
                name: refill.name,
                requirement,
            }
        }).collect();
        let connections = anchor.connections.iter().map(|connection| {
            let mut requirement = Requirement::Free;
            if let Some(group) = &connection.requirements {
                requirement = build_requirement_group(group, &areas.definitions, pathsets, validate, &mut used_states);
                if let Some(region_requirement) = &region_requirement {
                    requirement = Requirement::And(vec![region_requirement.clone(), requirement]);
                }
            }
            world::Connection {
                to: connection.identifier.to_string(),
                requirement,
            }
        }).collect();
        add_node(&mut graph, anchor.identifier.to_string(), Node::Anchor(world::Anchor {
            identifier: anchor.identifier.to_string(),
            refills,
            connections,
        }))?;
    }
    for location in locations {
        let name = &location.name[..];
        if metadata.quests.contains(name) {
            add_node(&mut graph, location.name.clone(), Node::Quest(world::Quest {
                identifier: location.name.clone(),
                uber_group: location.uber_group.clone(),
                uber_id: location.uber_id.clone(),
            }))?;
        } else {
            add_node(&mut graph, location.name.clone(), Node::Pickup(world::Pickup {
                identifier: location.name.clone(),
                uber_group: location.uber_group.clone(),
                uber_id: location.uber_id.clone(),
            }))?;
        }
    }
    for state in &metadata.states {
        add_node(&mut graph, (*state).to_string(), Node::State(world::State {
            identifier: (*state).to_string(),
        }))?;
    }

    if validate {
        for anchor in &areas.anchors {
            for connection in &anchor.connections {
                let to = graph.get(connection.identifier).ok_or(format!("Anchor '{}' connects to {:?} '{}' which doesn't actually exist", anchor.identifier, connection.name, connection.identifier))?;
                if connection.name != to.node_type() {
                    return Err(format!("Anchor '{}' connects to {:?} '{}' which is actually a {:?}", anchor.identifier, connection.name, connection.identifier, to.node_type()));
                }
            }
        }
        for region in areas.regions.keys() {
            if !areas.anchors.iter().any(|anchor| anchor.identifier.splitn(2, '.').next().unwrap() == *region) {
                println!("Region '{}' has no anchors with a matching name.", region);
            }
        }
        for state in &metadata.states {
            if !used_states.contains(state) {
                println!("State '{}' was never used as a requirement.", state);
            }
        }
    }

    Ok(graph)
}
