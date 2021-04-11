use rustc_hash::{FxHashSet, FxHashMap};

use super::parser::{self, AreaTree, Metadata, Location, NamedState};
use crate::world::graph::{self, Graph, Node};
use crate::world::requirements::Requirement;
use crate::util::{Pathset, Skill};

fn build_requirement<'a>(requirement: &parser::Requirement<'a>, definitions: &FxHashMap<&'a str, parser::Group<'a>>, pathsets: &[Pathset], validate: bool, node_map: &FxHashMap::<&'a str, usize>, used_states: &mut FxHashSet<&'a str>) -> Requirement {
    match requirement {
        parser::Requirement::Free => Requirement::Free,
        parser::Requirement::Definition(identifier) => build_requirement_group(&definitions[identifier], definitions, pathsets, validate, node_map, used_states),
        parser::Requirement::Pathset(pathset) =>
            if pathsets.contains(pathset) {
                Requirement::Free
            } else {
                Requirement::Impossible
            },
        parser::Requirement::Skill(skill) => Requirement::Skill(*skill),
        parser::Requirement::EnergySkill(skill, amount) => Requirement::EnergySkill(*skill, (*amount).into()),
        parser::Requirement::SpiritLight(amount) => Requirement::SpiritLight(*amount),
        parser::Requirement::Resource(resource, amount) => Requirement::Resource(*resource, *amount),
        parser::Requirement::Shard(shard) => Requirement::Shard(*shard),
        parser::Requirement::Teleporter(teleporter) => Requirement::Teleporter(*teleporter),
        parser::Requirement::Water => Requirement::Water,
        parser::Requirement::State(state) => {
            if validate { used_states.insert(state); }
            Requirement::State(node_map[state])
        },
        parser::Requirement::Damage(amount) => Requirement::Damage(f32::from(*amount)),
        parser::Requirement::Danger(amount) => Requirement::Danger(f32::from(*amount)),
        parser::Requirement::Combat(enemies) => Requirement::Combat(enemies.clone()),
        parser::Requirement::Boss(health) => Requirement::Boss(f32::from(*health)),
        parser::Requirement::BreakWall(health) => Requirement::BreakWall(f32::from(*health)),
        parser::Requirement::ShurikenBreak(health) =>
            if pathsets.contains(&Pathset::Glitch) {
                Requirement::ShurikenBreak(f32::from(*health))
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

fn build_and(mut ands: Vec<Requirement>) -> Requirement {
    if ands.iter().any(|and| matches!(and, Requirement::Impossible)) {
        return Requirement::Impossible;
    }
    ands.retain(|and| !matches!(and, Requirement::Free));
    if ands.len() == 1 {
        return ands.pop().unwrap();
    }
    if ands.is_empty() {
        return Requirement::Free;
    }
    Requirement::And(ands)
}
fn build_or(mut ors: Vec<Requirement>) -> Requirement {
    if ors.iter().any(|or| matches!(or, Requirement::Free)) {
        return Requirement::Free;
    }
    ors.retain(|or| !matches!(or, Requirement::Impossible));
    if ors.len() == 1 {
        return ors.pop().unwrap();
    }
    if ors.is_empty() {
        return Requirement::Impossible;
    }
    Requirement::Or(ors)
}

fn build_requirement_group<'a>(group: &parser::Group<'a>, definitions: &FxHashMap<&'a str, parser::Group<'a>>, pathsets: &[Pathset], validate: bool, node_map: &FxHashMap::<&'a str, usize>, used_states: &mut FxHashSet<&'a str>) -> Requirement {
    let lines: Vec<Requirement> = group.lines.iter().map(|line| {
        let mut parts = vec![];
        if !line.ands.is_empty() {
            let ands: Vec<Requirement> = line.ands.iter().map(|and| build_requirement(and, definitions, pathsets, validate, node_map, used_states)).collect();
            parts.push(build_and(ands));
        }
        if !line.ors.is_empty() {
            let ors: Vec<Requirement> = line.ors.iter().map(|or| build_requirement(or, definitions, pathsets, validate, node_map, used_states)).collect();
            parts.push(build_or(ors));
        }
        if let Some(subgroup) = &line.group {
            parts.push(build_requirement_group(subgroup, definitions, pathsets, validate, node_map, used_states));
        }
        build_and(parts)
    }).collect();
    build_or(lines)
}

fn add_entry<'a>(graph: &mut FxHashMap<&'a str, usize>, key: &'a str, value: usize) -> Result<(), String> {
    if graph.insert(key, value).is_some() {
        return Err(format!("Name '{}' was used multiple times ambiguously", key));
    }
    Ok(())
}

pub fn emit(areas: &AreaTree, metadata: &Metadata, locations: &[Location], state_map: &[NamedState], pathsets: &[Pathset], validate: bool) -> Result<Graph, String> {
    let node_count = areas.anchors.len() + locations.len() + metadata.states.len();
    let mut graph = Vec::<Node>::with_capacity(node_count);
    let mut used_states = FxHashSet::default();
    used_states.reserve(metadata.states.len());
    let mut node_map = FxHashMap::<&str, usize>::default();
    node_map.reserve(node_count);

    for location in locations {
        let name = &location.name[..];
        if metadata.quests.contains(name) {
            let index = graph.len();
            add_entry(&mut node_map, &location.name, index)?;

            graph.push(Node::Quest(graph::Quest {
                identifier: location.name.clone(),
                zone: location.zone.clone(),
                index,
                uber_state: location.uber_state.clone(),
            }));
        } else {
            let index = graph.len();
            add_entry(&mut node_map, &location.name, index)?;

            graph.push(Node::Pickup(graph::Pickup {
                identifier: location.name.clone(),
                zone: location.zone.clone(),
                index,
                uber_state: location.uber_state.clone(),
            }));
        }
    }
    for state in &metadata.states {
        let index = graph.len();
        add_entry(&mut node_map, state, index)?;

        let mut uber_state = None;
        if let Some(named_state) = state_map.iter().find(|named_state| &named_state.name == state) {
            uber_state = Some(named_state.uber_state.clone());
        } else if validate {
            // TODO this can be perfectly normal
            eprintln!("Couldn't find an entry for {} in the state table", state);
        }

        graph.push(Node::State(graph::State {
            identifier: (*state).to_string(),
            index,
            uber_state,
        }));
    }

    let length = graph.len();
    for (index, anchor) in areas.anchors.iter().enumerate() {
        add_entry(&mut node_map, anchor.identifier, length + index)?;
    }
    for anchor in &areas.anchors {
        let region = anchor.identifier.splitn(2, '.').next().unwrap();
        let region = areas.regions.get(region);
        let mut region_requirement = None;
        if let Some(group) = region {
            region_requirement = Some(build_requirement_group(&group, &areas.definitions, pathsets, validate, &node_map, &mut used_states));
        }

        let refills: Vec<graph::Refill> = anchor.refills.iter().map(|refill| {
            let mut requirement = Requirement::Free;
            if let Some(group) = &refill.requirements {
                requirement = build_requirement_group(group, &areas.definitions, pathsets, validate, &node_map, &mut used_states);
            }
            graph::Refill {
                name: refill.name,
                requirement,
            }
        }).collect();

        let mut connections = Vec::<graph::Connection>::with_capacity(anchor.connections.len());
        for connection in &anchor.connections {
            let mut requirement = Requirement::Free;
            if let Some(group) = &connection.requirements {
                requirement = build_requirement_group(group, &areas.definitions, pathsets, validate, &node_map, &mut used_states);
                if let Some(region_requirement) = &region_requirement {
                    requirement = build_and(vec![region_requirement.clone(), requirement]);
                }
            }

            let to = *node_map.get(connection.identifier).ok_or_else(|| format!("Anchor '{}' connects to {:?} '{}' which doesn't actually exist", anchor.identifier, connection.name, connection.identifier))?;

            connections.push(graph::Connection {
                to,
                requirement,
            });
        }

        let position = if let Some((x, y)) = anchor.position {
            Some(graph::Position {
                x,
                y,
            })
        } else {
            None
        };

        graph.push(Node::Anchor(graph::Anchor {
            identifier: anchor.identifier.to_string(),
            position,
            index: graph.len(),
            refills,
            connections,
        }));
    }

    if validate {
        for anchor in &areas.anchors {
            for connection in &anchor.connections {
                let expected_type = graph[node_map[connection.identifier]].node_type();
                if connection.name != expected_type {
                    return Err(format!("Anchor '{}' connects to {:?} '{}' which is actually a {:?}", anchor.identifier, connection.name, connection.identifier, expected_type));
                }
            }
        }

        for region in areas.regions.keys() {
            if !areas.anchors.iter().any(|anchor| anchor.identifier.splitn(2, '.').next().unwrap() == *region) {
                eprintln!("Region '{}' has no anchors with a matching name.", region);
            }
        }
        for state in &metadata.states {
            if !used_states.contains(state) {
                eprintln!("State '{}' was never used as a requirement.", state);
            }
        }
    }

    Ok(Graph {
        nodes: graph,
    })
}
