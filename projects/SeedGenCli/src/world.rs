use std::collections::HashMap;

use crate::requirements::Requirement;
use crate::player::Player;
use crate::util::{RefillType, NodeType};

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
    pub player: Player,
}
