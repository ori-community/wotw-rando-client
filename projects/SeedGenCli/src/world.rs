// This is just concept work!

use std::collections::{HashMap, HashSet};

use crate::requirements::Requirement;
use crate::util::RefillType;

pub struct Refill {
    pub name: RefillType,
    pub requirement: Box<dyn Requirement>,
}

pub enum Node {
    Anchor { refills: Vec<Refill> },
    Pickup { uber_group: String, uber_id: String },
    Quest { identifier: String },
    State { identifier: String },
}
impl Node {
    fn traverse(&self) {
        match *self {
            Node::Anchor {..} => {},
            Node::Pickup {..} => {},
            Node::Quest {..} => {},
            Node::State {..} => {},
        }
    }
}

pub struct AreaGraph {
    pub nodes: HashSet<Node>,
    pub connections: HashMap<Node, (Node, Box<dyn Requirement>)>,
}

pub struct World {
    pub graph: AreaGraph,
    pub id: u8,
}
