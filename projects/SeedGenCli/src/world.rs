use std::collections::HashMap;

use crate::requirements::Requirement;
use crate::player::Player;
use crate::util::{RefillType, NodeType, Orbs, Pathset, either_orbs, both_orbs};

#[derive(Debug)]
pub struct Refill {
    pub name: RefillType,
    pub requirement: Requirement,
}

#[derive(Debug)]
pub struct Connection {
    pub to: String,
    pub requirement: Requirement,
}

#[derive(Debug)]
pub struct Anchor {
    pub identifier: String,
    pub refills: Vec<Refill>,
    pub connections: Vec<Connection>
}
#[derive(Debug)]
pub struct Pickup {
    pub identifier: String,
    pub uber_group: String,
    pub uber_id: String,
}
#[derive(Debug)]
pub struct State {
    pub identifier: String,
}
#[derive(Debug)]
pub struct Quest {
    pub identifier: String,
    pub uber_group: String,
    pub uber_id: String,
}

#[derive(Debug)]
pub enum Node {
    Anchor(Anchor),
    Pickup(Pickup),
    State(State),
    Quest(Quest),
}
impl Node {
    pub fn node_type(&self) -> NodeType {
        match self {
            Node::Anchor(_) => NodeType::Anchor,
            Node::Pickup(_) => NodeType::Pickup,
            Node::State(_) => NodeType::State,
            Node::Quest(_) => NodeType::Quest,
        }
    }
    pub fn identifier(&self) -> &str {
        match self {
            Node::Anchor(anchor) => &anchor.identifier[..],
            Node::Pickup(pickup) => &pickup.identifier[..],
            Node::State(state) => &state.identifier[..],
            Node::Quest(quest) => &quest.identifier[..],
        }
    }
}

#[derive(Debug)]
pub struct World<'a> {
    pub graph: &'a HashMap<String, Node>,
    pub player: Player<'a>,
}
impl<'a> World<'a> {
    fn reach_recursion(&mut self, entry: &'a Node, mut best_orbs: Vec<Orbs>, pathsets: &[Pathset], state_progressions: &mut HashMap<&'a str, Vec<&'a Node>>, world_state: &mut HashMap<&'a str, Vec<Orbs>>) -> Vec<&'a Node> {
        match entry {
            Node::Anchor(anchor) => {
                for refill in &anchor.refills {
                    for orbs in &best_orbs {
                        if let Some(orbcost) = refill.requirement.is_met(&self.player, orbs, pathsets) {
                            best_orbs = both_orbs(best_orbs, orbcost);
                            match refill.name {
                                RefillType::Full => best_orbs = vec![self.player.max_orbs()],
                                RefillType::Checkpoint => best_orbs = either_orbs(best_orbs, vec![self.player.checkpoint_orbs()]),
                                RefillType::Health(amount) => best_orbs = both_orbs(best_orbs, vec![self.player.health_orbs(amount)]),
                                RefillType::Energy(amount) => best_orbs = both_orbs(best_orbs, vec![Orbs { energy: amount, ..Default::default() }]),
                            }
                            break;
                        }
                        // TODO state failures
                    }
                }
                world_state.insert(&anchor.identifier[..], best_orbs.clone());  // TODO move so it applies to all of them

                let mut reached = Vec::<&Node>::new();
                for connection in &anchor.connections {
                    let to = &self.graph[&connection.to];
                    if world_state.contains_key(to.identifier()) {
                        // TODO loop with improved orbs?
                        continue;
                    }
                    for orbs in &best_orbs {
                        if let Some(orbcost) = connection.requirement.is_met(&self.player, orbs, pathsets) {
                            let target_orbs = both_orbs(best_orbs.clone(), orbcost);
                            reached.append(&mut self.reach_recursion(to, target_orbs, pathsets, state_progressions, world_state));
                            break;
                        }
                    }
                    // TODO handle state based failures
                }
                reached
            },
            Node::Pickup(_) => vec![entry],
            Node::State(state) => {
                self.player.states.insert(&state.identifier);
                vec![]
            },
            Node::Quest(_) => vec![entry],
        }
    }

    pub fn reached_locations(&mut self, spawn: &'a str, pathsets: &[Pathset]) -> Result<Vec<&Node>, String> {
        let entry = self.graph.get(spawn).ok_or_else(|| format!("Spawn '{}' not found", spawn))?;
        if !matches!(entry, Node::Anchor(_)) { return Err(format!("Spawn has to be an anchor, '{}' is a {:?}", spawn, entry.node_type())); }

        let mut state_progressions = HashMap::<&str, Vec<&Node>>::with_capacity(3);
        let mut world_state = HashMap::<&str, Vec<Orbs>>::with_capacity(self.graph.len());

        Ok(self.reach_recursion(entry, vec![self.player.max_orbs()], pathsets, &mut state_progressions, &mut world_state))
    }
}
