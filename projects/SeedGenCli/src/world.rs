use std::fmt;

use rustc_hash::{FxHashMap, FxHashSet};

use crate::uberstate::{UberState, UberValue, UberIdentifier};
use crate::requirements::Requirement;
use crate::player::Player;
use crate::inventory::{Item, Inventory};
use crate::pool::ItemPool;
use crate::util::orbs::{self, Orbs};
use crate::util::{RefillType, NodeType};

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

#[derive(Debug, Default, Clone)]
pub struct Position {
    pub x: i16,
    pub y: i16,
}
impl fmt::Display for Position {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}, {}", self.x, self.y)
    }
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
}

type Reached<'a> = Vec<&'a Node>;
type Progressions<'a> = Vec<(&'a Requirement, Vec<Orbs>)>;

struct ReachContext<'a, 'b> {
    player: &'b Player,
    progression_check: bool,
    states: FxHashSet<usize>,
    state_progressions: FxHashMap<usize, Vec<(usize, &'a Connection)>>,
    world_state: FxHashMap<usize, Vec<Orbs>>
}

#[derive(Debug)]
pub struct WorldGraph {
    pub nodes: Vec<Node>,
}
impl WorldGraph {
    fn follow_state_progressions<'a>(
        &'a self,
        index: usize,
        context: &mut ReachContext<'a, '_>,
    ) -> (
        Reached<'a>,
        Progressions<'a>
    ) {
        let mut reached = Vec::<&Node>::new();
        let mut progressions = Vec::<(&Requirement, Vec<Orbs>)>::new();
        if let Some(connections) = context.state_progressions.get(&index) {
            for (from, connection) in connections.clone() {
                if context.world_state.contains_key(&connection.to) {
                    // TODO loop with improved orbs?
                    continue;
                }
                let target_orbs = WorldGraph::try_connection(context.player, connection, &context.world_state[&from], &context.states);
                if !target_orbs.is_empty() {
                    let (mut child_reached, mut child_progressions) = self.reach_recursion(&self.nodes[connection.to], target_orbs, context);
                    reached.append(&mut child_reached);
                    progressions.append(&mut child_progressions);
                }
            }
        }
        (reached, progressions)
    }
    fn try_connection(player: &Player, connection: &Connection, best_orbs: &[Orbs], states: &FxHashSet<usize>) -> Vec<Orbs> {
        let mut target_orbs = Vec::<Orbs>::default();
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
        mut best_orbs: Vec<Orbs>,
        context: &mut ReachContext<'a, '_>,
    ) -> (
        Reached<'a>,
        Progressions<'a>
    ) {
        context.world_state.insert(entry.index(), best_orbs.clone());
        match entry {
            Node::Anchor(anchor) => {
                for refill in &anchor.refills {
                    for orbs in &best_orbs {
                        if let Some(orbcost) = refill.requirement.is_met(context.player, &context.states, *orbs) {
                            best_orbs = orbs::both(&best_orbs, &orbcost);
                            match refill.name {
                                RefillType::Full => best_orbs = vec![context.player.max_orbs()],
                                RefillType::Checkpoint => best_orbs = orbs::either_single(&best_orbs, context.player.checkpoint_orbs()),
                                RefillType::Health(amount) => best_orbs = orbs::both_single(&best_orbs, context.player.health_orbs(amount)),
                                RefillType::Energy(amount) => best_orbs = orbs::both_single(&best_orbs, context.player.energy_orbs(amount)),
                            }
                            break;
                        }
                    }
                }

                let mut reached = Vec::<&Node>::new();
                let mut progressions = Vec::<(&Requirement, Vec<Orbs>)>::new();
                for connection in &anchor.connections {
                    if context.world_state.contains_key(&connection.to) {
                        // TODO loop with improved orbs?
                        continue;
                    }
                    let target_orbs = WorldGraph::try_connection(context.player, connection, &best_orbs, &context.states);
                    if target_orbs.is_empty() {
                        let states = connection.requirement.contained_states();
                        if states.is_empty() {
                            if context.progression_check {
                                progressions.push((&connection.requirement, best_orbs.clone()))
                            }
                        } else {
                            for state in states {
                                context.state_progressions.entry(state).or_default().push((anchor.index, connection));
                            }
                            // TODO unmet state connections in progression check?
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
                if state.uber_state.is_some() {
                    reached.push(entry);
                }
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
        let entry = self.nodes.iter().find(|&node| node.identifier() == spawn).ok_or_else(|| format!("Spawn '{}' not found", spawn))?;
        if !matches!(entry, Node::Anchor(_)) { return Err(format!("Spawn has to be an anchor, '{}' is a {:?}", spawn, entry.node_type())); }
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

        let (reached, _) = self.reach_recursion(entry, vec![player.max_orbs()], &mut context);

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

        let reached_and_progressions = self.reach_recursion(entry, vec![player.max_orbs()], &mut context);

        Ok(reached_and_progressions)
    }
}

#[derive(Debug, Clone)]
pub struct World<'a> {
    pub graph: &'a WorldGraph,
    pub player: Player,
    pub pool: ItemPool,
    pub preplacements: FxHashMap<UberState, Inventory>,
    pub uber_states: FxHashMap<UberIdentifier, UberValue>,
}
impl<'a> World<'a> {
    pub fn new(graph: &WorldGraph) -> World {
        World {
            graph,
            player: Player::default(),
            pool: ItemPool::default(),
            preplacements: FxHashMap::default(),
            uber_states: FxHashMap::default(),
        }
    }

    pub fn grant_player(&mut self, item: &Item, amount: u16, verbose: bool) {
        match &item {
            Item::UberState(command) => {
                let mut parts = command.split('|');
                let uber_group = parts.next().unwrap();
                let uber_id = parts.next().unwrap();
                let uber_type = parts.next().unwrap();
                let mut uber_value = parts.next().unwrap();

                let uber_state = UberIdentifier::from_parts(uber_group, uber_id).unwrap();

                let mut sign: i8 = 0;
                if uber_value.starts_with('+') {
                    uber_value = &uber_value[1..];
                    sign = 1;
                } else if uber_value.starts_with('-') {
                    uber_value = &uber_value[1..];
                    sign = -1;
                }

                let entry = match uber_type {
                    "bool" | "teleporter" => {
                        let uber_value: bool = uber_value.parse().unwrap();

                        let entry = self.uber_states.entry(uber_state.clone()).or_insert(UberValue::Bool(false));
                        if let UberValue::Bool(prior) = entry {
                            *prior = uber_value;
                        } else {
                            eprintln!("Unable to grant uber state pickup {} because the uber state type didn't match", command);
                        }
                        entry
                    },
                    "byte" | "int" => {
                        let uber_value: i32 = uber_value.parse().unwrap();

                        let entry = self.uber_states.entry(uber_state.clone()).or_insert(UberValue::Int(0));
                        if let UberValue::Int(prior) = entry {
                            *prior = uber_value + *prior * i32::from(sign);
                        } else {
                            eprintln!("Unable to grant uber state pickup {} because the uber state type didn't match", command);
                        }
                        entry
                    },
                    "float" => {
                        let uber_value: f32 = uber_value.parse().unwrap();

                        let entry = self.uber_states.entry(uber_state.clone()).or_insert(UberValue::Float(0.0));
                        if let UberValue::Float(prior) = entry {
                            *prior = uber_value + *prior * f32::from(sign);
                        } else {
                            eprintln!("Unable to grant uber state pickup {} because the uber state type didn't match", command);
                        }
                        entry
                    },
                    _ => { panic!("Unable to grant malformed uber state pickup {}", command); },
                };

                let uber_state = UberState {
                    identifier: uber_state,
                    value: format!("{}", entry),
                };
                if verbose { eprintln!("Modified uber state to {}", uber_state); }
                self.collect_preplacements(&uber_state, verbose);
            },
            Item::Custom(_) => {},
            Item::SpiritLight(stacked_amount) => {
                self.player.inventory.grant(Item::SpiritLight(1), amount * stacked_amount);
            }
            &item => {
                self.player.inventory.grant(item.clone(), amount);
            },
        }
        self.pool.remove(&item, amount);
    }

    pub fn preplace(&mut self, uber_state: UberState, item: Item, amount: u16) {
        let preplacement = self.preplacements.entry(uber_state).or_insert_with(Inventory::default);
        preplacement.grant(item, amount);
    }
    pub fn collect_preplacements(&mut self, reached: &UberState, verbose: bool) {
        let mut inventory = Inventory::default();
        if let Some(items) = self.preplacements.get(&reached) {
            if verbose { eprintln!("Collecting preplacements on {}", reached); }
            inventory = items.clone();
        }

        for item in inventory.inventory.keys() {
            self.grant_player(item, inventory.inventory[item], verbose);
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use super::super::*;
    use pool::ItemPool;
    use util::*;
    use rustc_hash::FxHashSet;

    use std::path::PathBuf;

    #[test]
    fn reach_check() {
        let graph = &lexer::parse_logic(&PathBuf::from("areas.wotw"), &PathBuf::from("loc_data.csv"), &PathBuf::from("state_data.csv"), &[Pathset::Moki], false).unwrap();
        let mut world = World::new(graph);
        world.player.inventory = ItemPool::preset(&[Pathset::Moki]).progressions;
        world.player.inventory.grant(Item::SpiritLight(1), 10000);

        let reached = world.graph.reached_locations(&world.player, "MarshSpawn.Main", &world.uber_states).unwrap();
        let reached: FxHashSet<_> = reached.iter()
            .filter_map(|node| {
                if node.node_type() == NodeType::State { None }
                else { node.uber_state() }
            })
            .cloned().collect();

        let locations = lexer::parser::parse_locations(&PathBuf::from("loc_data.csv"), false).unwrap();
        let locations: FxHashSet<_> = locations.iter().map(|location| &location.uber_state).cloned().collect();

        if !(reached == locations) {
            let diff: Vec<_> = locations.difference(&reached).collect();
            eprintln!("difference ({} / {} items): {:#?}", reached.len(), locations.len(), diff);
        }

        assert_eq!(reached, locations);

        let graph = &lexer::parse_logic(&PathBuf::from("areas.wotw"), &PathBuf::from("loc_data.csv"), &PathBuf::from("state_data.csv"), &[Pathset::Moki, Pathset::Gorlek, Pathset::Glitch], false).unwrap();
        let mut world = World::new(graph);

        world.player.gorlek_paths = true;
        world.player.unsafe_paths = true;
        world.player.inventory.grant(Item::Resource(Resource::Health), 7);
        world.player.inventory.grant(Item::Resource(Resource::Energy), 6);
        world.player.inventory.grant(Item::Skill(Skill::DoubleJump), 1);
        world.player.inventory.grant(Item::Shard(Shard::TripleJump), 1);

        let reached = world.graph.reached_locations(&world.player, "GladesTown.Teleporter", &world.uber_states).unwrap();
        let reached: Vec<_> = reached.iter().filter_map(|node| node.uber_state()).cloned().collect();
        assert_eq!(reached, vec![UberState::from_parts("42178", "63404").unwrap(), UberState::from_parts("42178", "42762").unwrap(), UberState::from_parts("23987", "14014").unwrap(), UberState::from_parts("42178", "6117").unwrap()]);
    }
}
