use std::collections::HashMap;

use crate::parser::{self, AreaTree, Metadata, Location};
use crate::world::{self, Node};
use crate::requirements::{Requirement};

fn build_requirement_group(req_tree: &Option<parser::Group>) -> Requirement {
    Requirement::Free
}

fn add_node(graph: &mut HashMap<String, Node>, key: String, value: Node) -> Result<(), String> {
    if let Some(prior) = graph.insert(key, value) {
        return Err(format!("Name '{}' was used multiple times ambiguously", prior.identifier()));
    }
    Ok(())
}

pub fn emit(areas: &AreaTree, metadata: &Metadata, locations: &[Location], validate: bool) -> Result<HashMap<String, Node>, String> {
    let mut graph = HashMap::with_capacity(areas.anchors.len() + locations.len() + metadata.states.len());

    for anchor in &areas.anchors {
        let refills: Vec<world::Refill> = anchor.refills.iter().map(|refill| {
            world::Refill {
                name: refill.name,
                requirement: build_requirement_group(&refill.requirements),
            }
        }).collect();
        let connections = anchor.connections.iter().map(|connection| {
            world::Connection {
                to: connection.identifier.to_string(),
                requirement: build_requirement_group(&connection.requirements),
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
    }

    Ok(graph)
}
