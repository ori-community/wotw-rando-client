use std::fmt;

use rustc_hash::{FxHashMap, FxHashSet};
use smallvec::{SmallVec, smallvec};

use super::{player::Player, requirements::Requirement};
use crate::util::{
    RefillType, NodeType,
    Position,
    orbs::{self, Orbs},
    uberstate::{UberState, UberValue, UberIdentifier},
};

#[derive(Debug)]
pub struct Refill {
    pub name: RefillType,
    pub requirement: Requirement,
}

#[derive(Debug)]
pub struct Connection {
    pub to: usize,
    pub requirement: Requirement,
}

#[derive(Debug)]
pub struct Anchor {
    pub identifier: String,
    pub position: Option<Position>,
    pub index: usize,
    pub refills: Vec<Refill>,
    pub connections: Vec<Connection>,
}
#[derive(Debug)]
pub struct Pickup {
    pub identifier: String,
    pub position: Position,
    pub zone: String,
    pub index: usize,
    pub uber_state: UberState,
}
#[derive(Debug)]
pub struct State {
    pub identifier: String,
    pub index: usize,
    pub uber_state: Option<UberState>,
}
#[derive(Debug)]
pub struct Quest {
    pub identifier: String,
    pub position: Position,
    pub zone: String,
    pub index: usize,
    pub uber_state: UberState,
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
    pub fn zone(&self) -> Option<&str> {
        match self {
            Node::Pickup(pickup) => Some(&pickup.zone[..]),
            Node::Quest(quest) => Some(&quest.zone[..]),
            _ => None,
        }
    }
    pub fn index(&self) -> usize {
        match self {
            Node::Anchor(anchor) => anchor.index,
            Node::Pickup(pickup) => pickup.index,
            Node::State(state) => state.index,
            Node::Quest(quest) => quest.index,
        }
    }
    pub fn uber_state(&self) -> Option<&UberState> {
        match self {
            Node::Anchor(_) => None,
            Node::Pickup(pickup) => Some(&pickup.uber_state),
            Node::State(state) => state.uber_state.as_ref(),
            Node::Quest(quest) => Some(&quest.uber_state),
        }
    }
    pub fn position(&self) -> Option<&Position> {
        match self {
            Node::Anchor(anchor) => anchor.position.as_ref(),
            Node::Pickup(pickup) => Some(&pickup.position),
            Node::State(_) => None,
            Node::Quest(quest) => Some(&quest.position),
        }
    }
    pub fn can_place(&self) -> bool {
        matches!(self, Node::Pickup(_) | Node::Quest(_))
    }
}
impl fmt::Display for Node {
    fn fmt(&self, fmt: &mut fmt::Formatter) -> fmt::Result {
        write!(fmt, "{}", self.identifier())
    }
}

type Reached<'a> = Vec<&'a Node>;
type Progressions<'a> = Vec<(&'a Requirement, SmallVec<[Orbs; 3]>)>;

struct ReachContext<'a, 'b> {
    player: &'b Player,
    progression_check: bool,
    states: FxHashSet<usize>,
    state_progressions: FxHashMap<usize, Vec<(usize, &'a Connection)>>,
    world_state: FxHashMap<usize, SmallVec<[Orbs; 3]>>
}

#[derive(Debug)]
pub struct Graph {
    pub nodes: Vec<Node>,
}
impl Graph {
    fn follow_state_progressions<'a>(
        &'a self,
        index: usize,
        context: &mut ReachContext<'a, '_>,
    ) -> (Reached<'a>, Progressions<'a>) {
        let mut reached = Vec::<&Node>::new();
        let mut progressions = Vec::<(&Requirement, SmallVec<[Orbs; 3]>)>::new();
        if let Some(connections) = context.state_progressions.get(&index) {
            for (from, connection) in connections.clone() {
                if context.world_state.contains_key(&connection.to) {
                    // TODO loop with improved orbs?
                    continue;
                }
                let target_orbs = Graph::try_connection(context.player, connection, &context.world_state[&from], &context.states);
                if !target_orbs.is_empty() {
                    let (mut child_reached, mut child_progressions) = self.reach_recursion(&self.nodes[connection.to], target_orbs, context);
                    reached.append(&mut child_reached);
                    progressions.append(&mut child_progressions);
                }
            }
        }
        (reached, progressions)
    }
    fn try_connection(player: &Player, connection: &Connection, best_orbs: &[Orbs], states: &FxHashSet<usize>) -> SmallVec<[Orbs; 3]> {
        let mut target_orbs = SmallVec::<[Orbs; 3]>::default();
        for orbs in best_orbs {
            if let Some(orbcost) = connection.requirement.is_met(player, states, *orbs) {
                target_orbs.append(&mut orbs::both_single(&orbcost, *orbs));
            }
        }
        target_orbs
    }

    fn reach_recursion<'a>(
        &'a self,
        entry: &'a Node,
        mut best_orbs: SmallVec<[Orbs; 3]>,
        context: &mut ReachContext<'a, '_>,
    ) -> (Reached<'a>, Progressions<'a>) {
        context.world_state.insert(entry.index(), best_orbs.clone());
        match entry {
            Node::Anchor(anchor) => {
                for refill in &anchor.refills {
                    for orbs in &best_orbs {
                        if let Some(orbcost) = refill.requirement.is_met(context.player, &context.states, *orbs) {
                            best_orbs = orbs::both(&best_orbs, &orbcost);
                            match refill.name {
                                RefillType::Full => best_orbs = smallvec![context.player.max_orbs()],
                                RefillType::Checkpoint => best_orbs = context.player.checkpoint_orbs(&best_orbs),
                                RefillType::Health(amount) => best_orbs = context.player.health_orbs(&best_orbs, amount),
                                RefillType::Energy(amount) => best_orbs = context.player.energy_orbs(&best_orbs, amount),
                            }
                            break;
                        }
                    }
                }

                let mut reached = Vec::<&Node>::new();
                let mut progressions = Vec::<(&Requirement, SmallVec<[Orbs; 3]>)>::new();
                for connection in &anchor.connections {
                    if context.world_state.contains_key(&connection.to) {
                        // TODO loop with improved orbs?
                        continue;
                    }
                    let target_orbs = Graph::try_connection(context.player, connection, &best_orbs, &context.states);
                    if target_orbs.is_empty() {
                        let mut states = connection.requirement.contained_states();
                        states.retain(|state| !context.states.contains(state));

                        if states.is_empty() {
                            if context.progression_check {
                                progressions.push((&connection.requirement, best_orbs.clone()))
                            }
                        } else {
                            for state in states {
                                context.state_progressions.entry(state).or_default().push((anchor.index, connection));
                            }
                        }
                    } else {
                        let (mut child_reached, mut child_progressions) = self.reach_recursion(&self.nodes[connection.to], target_orbs, context);
                        reached.append(&mut child_reached);
                        progressions.append(&mut child_progressions);
                    }
                }
                (reached, progressions)
            },
            Node::Pickup(_) => (vec![entry], vec![]),
            Node::State(state) => {
                context.states.insert(state.index);
                let (mut reached, progressions) = self.follow_state_progressions(state.index, context);
                reached.push(entry);
                (reached, progressions)
            },
            Node::Quest(quest) => {
                context.states.insert(quest.index);
                let (mut reached, progressions) = self.follow_state_progressions(quest.index, context);
                reached.push(entry);
                (reached, progressions)
            },
        }
    }

    fn find_spawn(&self, spawn: &str) -> Result<&Node, String> {
        let entry = self.nodes.iter().find(|&node| node.identifier() == spawn).ok_or_else(|| format!("Spawn {} not found", spawn))?;
        if !matches!(entry, Node::Anchor(_)) { return Err(format!("Spawn has to be an anchor, {} is a {:?}", spawn, entry.node_type())); }
        Ok(entry)
    }
    fn collect_extra_states(&self, extra_states: &FxHashMap<UberIdentifier, UberValue>) -> FxHashSet<usize> {
        let mut states = FxHashSet::default();

        for node in &self.nodes {
            let (uber_state, index) = match node {
                Node::State(state) =>
                    if let Some(uber_state) = &state.uber_state {
                        (uber_state, &state.index)
                    } else { continue; },
                Node::Quest(quest) => (&quest.uber_state, &quest.index),
                _ => continue,
            };
            if let Some(value) = extra_states.get(&uber_state.identifier) {
                if format!("{}", value) == uber_state.value {
                    states.insert(*index);
                }
            }
        }

        states
    }

    pub fn reached_locations(&self, player: &Player, spawn: &str, extra_states: &FxHashMap<UberIdentifier, UberValue>) -> Result<Reached, String> {
        let entry = self.find_spawn(spawn)?;

        let mut context = ReachContext {
            player,
            progression_check: false,
            states: self.collect_extra_states(extra_states),
            state_progressions: FxHashMap::default(),
            world_state: FxHashMap::default(),
        };

        let (reached, _) = self.reach_recursion(entry, smallvec![player.max_orbs()], &mut context);

        Ok(reached)
    }

    pub fn reached_and_progressions(&self, player: &Player, spawn: &str, extra_states: &FxHashMap<UberIdentifier, UberValue>) -> Result<(Reached, Progressions), String> {
        let entry = self.find_spawn(spawn)?;

        let mut context = ReachContext {
            player,
            progression_check: true,
            states: self.collect_extra_states(extra_states),
            state_progressions: FxHashMap::default(),
            world_state: FxHashMap::default(),
        };

        let reached_and_progressions = self.reach_recursion(entry, smallvec![player.max_orbs()], &mut context);

        Ok(reached_and_progressions)
    }
}
