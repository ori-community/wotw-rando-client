use std::fmt;

use rustc_hash::{FxHashMap, FxHashSet};

use crate::requirements::Requirement;
use crate::player::Player;
use crate::inventory::{Item, Inventory};
use crate::util::orbs::{Orbs, either_single_orbs, both_orbs, both_single_orbs};
use crate::util::{Resource, Skill, Shard, RefillType, NodeType};

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
            Node::State(state) => if let Some(uber_state) = &state.uber_state {
                Some(uber_state)
            } else { None },
            Node::Quest(quest) => Some(&quest.uber_state),
        }
    }
}
pub fn default_pool() -> Inventory {
    let mut pool = FxHashMap::default();
    pool.reserve(60);
    pool.insert(Item::Resource(Resource::Health), 24);
    pool.insert(Item::Resource(Resource::Energy), 24);
    pool.insert(Item::Resource(Resource::Ore), 40);
    pool.insert(Item::Resource(Resource::ShardSlot), 5);
    pool.insert(Item::Resource(Resource::Keystone), 34);
    pool.insert(Item::Skill(Skill::Bash), 1);
    pool.insert(Item::Skill(Skill::WallJump), 1);
    pool.insert(Item::Skill(Skill::DoubleJump), 1);
    pool.insert(Item::Skill(Skill::Launch), 1);
    pool.insert(Item::Skill(Skill::Glide), 1);
    pool.insert(Item::Skill(Skill::WaterBreath), 1);
    pool.insert(Item::Skill(Skill::Grenade), 1);
    pool.insert(Item::Skill(Skill::Grapple), 1);
    pool.insert(Item::Skill(Skill::Flash), 1);
    pool.insert(Item::Skill(Skill::Spear), 1);
    pool.insert(Item::Skill(Skill::Regenerate), 1);
    pool.insert(Item::Skill(Skill::Bow), 1);
    pool.insert(Item::Skill(Skill::Hammer), 1);
    pool.insert(Item::Skill(Skill::Sword), 1);
    pool.insert(Item::Skill(Skill::Burrow), 1);
    pool.insert(Item::Skill(Skill::Dash), 1);
    pool.insert(Item::Skill(Skill::WaterDash), 1);
    pool.insert(Item::Skill(Skill::Shuriken), 1);
    pool.insert(Item::Skill(Skill::Seir), 1);
    pool.insert(Item::Skill(Skill::Blaze), 1);
    pool.insert(Item::Skill(Skill::Sentry), 1);
    pool.insert(Item::Skill(Skill::Flap), 1);
    pool.insert(Item::Skill(Skill::AncestralLight), 2);
    pool.insert(Item::Shard(Shard::Overcharge), 1);
    pool.insert(Item::Shard(Shard::TripleJump), 1);
    pool.insert(Item::Shard(Shard::Wingclip), 1);
    pool.insert(Item::Shard(Shard::Bounty), 1);
    pool.insert(Item::Shard(Shard::Swap), 1);
    pool.insert(Item::Shard(Shard::Magnet), 1);
    pool.insert(Item::Shard(Shard::Splinter), 1);
    pool.insert(Item::Shard(Shard::Reckless), 1);
    pool.insert(Item::Shard(Shard::Quickshot), 1);
    pool.insert(Item::Shard(Shard::Resilience), 1);
    pool.insert(Item::Shard(Shard::SpiritLightHarvest), 1);
    pool.insert(Item::Shard(Shard::Vitality), 1);
    pool.insert(Item::Shard(Shard::LifeHarvest), 1);
    pool.insert(Item::Shard(Shard::EnergyHarvest), 1);
    pool.insert(Item::Shard(Shard::Energy), 1);
    pool.insert(Item::Shard(Shard::LifePact), 1);
    pool.insert(Item::Shard(Shard::LastStand), 1);
    pool.insert(Item::Shard(Shard::Sense), 1);
    pool.insert(Item::Shard(Shard::UltraBash), 1);
    pool.insert(Item::Shard(Shard::UltraGrapple), 1);
    pool.insert(Item::Shard(Shard::Overflow), 1);
    pool.insert(Item::Shard(Shard::Thorn), 1);
    pool.insert(Item::Shard(Shard::Catalyst), 1);
    pool.insert(Item::Shard(Shard::Turmoil), 1);
    pool.insert(Item::Shard(Shard::Sticky), 1);
    pool.insert(Item::Shard(Shard::Finesse), 1);
    pool.insert(Item::Shard(Shard::SpiritSurge), 1);
    pool.insert(Item::Shard(Shard::Lifeforce), 1);
    pool.insert(Item::Shard(Shard::Deflector), 1);
    pool.insert(Item::Shard(Shard::Fracture), 1);
    pool.insert(Item::Shard(Shard::Arcing), 1);
    pool.insert(Item::Water, 1);
    Inventory {
        inventory: pool,
    }
}

#[derive(Debug, PartialEq, Eq, Hash, Clone)]
pub struct UberIdentifier {
    pub uber_group: u16,
    pub uber_id: u16,
}
impl UberIdentifier {
    pub fn from_parts(group: &str, id: &str) -> Result<UberIdentifier, String> {
        let uber_group: u16 = group.parse().map_err(|_| format!("invalid uber group '{}'", group))?;
        let uber_id: u16 = id.parse().map_err(|_| format!("invalid uber id '{}'", id))?;
        Ok(UberIdentifier {
            uber_group,
            uber_id,
        })
    }
}
impl fmt::Display for UberIdentifier {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}|{}", self.uber_group, self.uber_id)
    }
}
#[derive(Debug, PartialEq, Eq, Hash, Clone)]
pub struct UberState {
    pub identifier: UberIdentifier,
    pub value: String,
}
impl UberState {
    pub fn from_parts(group: &str, id: &str) -> Result<UberState, String> {
        let uber_group: u16 = group.parse().map_err(|_| format!("invalid uber group '{}'", group))?;
        let mut id_parts = id.splitn(2, '=');
        let uber_id: u16 = id_parts.next().unwrap().parse().map_err(|_| format!("invalid uber id '{}'", id))?;
        let value = id_parts.next().unwrap_or("");
        Ok(UberState {
            identifier: UberIdentifier {
                uber_group,
                uber_id,
            },
            value: value.to_string(),
        })
    }
}
impl fmt::Display for UberState {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        if self.value.is_empty() {
            write!(f, "{}", self.identifier)
        } else {
            write!(f, "{}={}", self.identifier, self.value)
        }
    }
}

#[derive(Debug, Clone)]
pub enum UberValue {
    Bool(bool),
    Int(i32),
    Float(f32),
}
impl fmt::Display for UberValue {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            UberValue::Bool(value) => write!(f, "{}", value),
            UberValue::Int(value) => write!(f, "{}", value),
            UberValue::Float(value) => write!(f, "{}", value),
        }
    }
}

#[derive(Debug)]
pub struct WorldGraph {
    pub nodes: Vec<Node>,
}
impl<'a> WorldGraph {
    fn follow_state_progressions(&'a self, player: &Player, index: usize, states: &mut FxHashSet<usize>, state_progressions: &mut FxHashMap<usize, Vec<(usize, &'a Connection)>>, world_state: &mut FxHashMap<usize, Vec<Orbs>>) -> Vec<&Node> {
        let mut reached = Vec::<&Node>::new();
        if let Some(connections) = state_progressions.get(&index) {
            for (from, connection) in connections.clone() {
                if world_state.contains_key(&connection.to) {
                    // TODO loop with improved orbs?
                    continue;
                }
                let target_orbs = self.try_connection(player, connection, &world_state[&from], states);
                if !target_orbs.is_empty() {
                    reached.append(&mut self.reach_recursion(player, &self.nodes[connection.to], target_orbs, states, state_progressions, world_state));
                }
            }
        }
        reached
    }
    fn try_connection(&self, player: &Player, connection: &Connection, best_orbs: &[Orbs], states: &FxHashSet<usize>) -> Vec<Orbs> {
        let mut target_orbs = Vec::<Orbs>::default();
        for orbs in best_orbs {
            if let Some(orbcost) = connection.requirement.is_met(player, states, *orbs) {
                target_orbs.append(&mut both_single_orbs(&orbcost, *orbs));
            }
        }
        target_orbs
    }

    fn reach_recursion(&'a self, player: &Player, entry: &'a Node, mut best_orbs: Vec<Orbs>, states: &mut FxHashSet<usize>, state_progressions: &mut FxHashMap<usize, Vec<(usize, &'a Connection)>>, world_state: &mut FxHashMap<usize, Vec<Orbs>>) -> Vec<&'a Node> {
        world_state.insert(entry.index(), best_orbs.clone());
        match entry {
            Node::Anchor(anchor) => {
                for refill in &anchor.refills {
                    for orbs in &best_orbs {
                        if let Some(orbcost) = refill.requirement.is_met(player, states, *orbs) {
                            best_orbs = both_orbs(&best_orbs, &orbcost);
                            match refill.name {
                                RefillType::Full => best_orbs = vec![player.max_orbs()],
                                RefillType::Checkpoint => best_orbs = either_single_orbs(&best_orbs, player.checkpoint_orbs()),
                                RefillType::Health(amount) => best_orbs = both_single_orbs(&best_orbs, player.health_orbs(amount)),
                                RefillType::Energy(amount) => best_orbs = both_single_orbs(&best_orbs, player.energy_orbs(amount)),
                            }
                            break;
                        }
                    }
                }

                let mut reached = Vec::<&Node>::new();
                for connection in &anchor.connections {
                    if world_state.contains_key(&connection.to) {
                        // TODO loop with improved orbs?
                        continue;
                    }
                    let target_orbs = self.try_connection(player, connection, &best_orbs, states);
                    if target_orbs.is_empty() {
                        let states = connection.requirement.contained_states();
                        for state in states {
                            state_progressions.entry(state).or_default().push((anchor.index, connection));
                        }
                    } else {
                        reached.append(&mut self.reach_recursion(player, &self.nodes[connection.to], target_orbs, states, state_progressions, world_state));
                    }
                }
                reached
            },
            Node::Pickup(_) => vec![entry],
            Node::State(state) => {
                states.insert(state.index);
                let mut reached = self.follow_state_progressions(player, state.index, states, state_progressions, world_state);
                if state.uber_state.is_some() {
                    reached.push(entry);
                }
                reached
            },
            Node::Quest(quest) => {
                states.insert(quest.index);
                let mut reached = self.follow_state_progressions(player, quest.index, states, state_progressions, world_state);
                reached.push(entry);
                reached
            },
        }
    }

    pub fn reached_locations(&self, player: &Player, spawn: &str, extra_states: &FxHashMap<UberIdentifier, UberValue>) -> Result<Vec<&Node>, String> {
        let entry = self.nodes.iter().find(|&node| node.identifier() == spawn).ok_or_else(|| format!("Spawn '{}' not found", spawn))?;
        if !matches!(entry, Node::Anchor(_)) { return Err(format!("Spawn has to be an anchor, '{}' is a {:?}", spawn, entry.node_type())); }

        let mut states = FxHashSet::default();

        for node in &self.nodes {
            let (uber_state, index) = match node {
                Node::State(state) => {
                    if let Some(uber_state) = &state.uber_state {
                        (uber_state, &state.index)
                    } else { continue; }
                },
                Node::Quest(quest) => {
                    (&quest.uber_state, &quest.index)
                }
                _ => { continue; }
            };
            if let Some(value) = extra_states.get(&uber_state.identifier) {
                if format!("{}", value) == uber_state.value {
                    states.insert(*index);
                }
            }
        }

        let mut state_progressions = FxHashMap::default();
        let mut world_state = FxHashMap::default();
        world_state.reserve(self.nodes.len());

        let reached = self.reach_recursion(player, entry, vec![player.max_orbs()], &mut states, &mut state_progressions, &mut world_state);

        Ok(reached)
    }
}

#[derive(Debug, Clone)]
pub struct World<'a> {
    pub graph: &'a WorldGraph,
    pub player: Player,
    pub pool: Inventory,
    pub preplacements: FxHashMap<UberState, Inventory>,
    pub uber_states: FxHashMap<UberIdentifier, UberValue>,
}
impl<'a> World<'a> {
    pub fn new(graph: &WorldGraph) -> World {
        World {
            graph,
            player: Player::default(),
            pool: Inventory::default(),
            preplacements: FxHashMap::default(),
            uber_states: FxHashMap::default(),
        }
    }

    pub fn grant_player(&mut self, item: Item, amount: u16) {
        if let Item::UberState(command) = &item {
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
                        println!("Unable to grant uber state pickup {} because the uber state type didn't match", command);
                    }
                    entry
                },
                "byte" | "int" => {
                    let uber_value: i32 = uber_value.parse().unwrap();

                    let entry = self.uber_states.entry(uber_state.clone()).or_insert(UberValue::Int(0));
                    if let UberValue::Int(prior) = entry {
                        *prior = uber_value + *prior * sign as i32;
                    } else {
                        println!("Unable to grant uber state pickup {} because the uber state type didn't match", command);
                    }
                    entry
                },
                "float" => {
                    let uber_value: f32 = uber_value.parse().unwrap();

                    let entry = self.uber_states.entry(uber_state.clone()).or_insert(UberValue::Float(0.0));
                    if let UberValue::Float(prior) = entry {
                        *prior = uber_value + *prior * sign as f32;
                    } else {
                        println!("Unable to grant uber state pickup {} because the uber state type didn't match", command);
                    }
                    entry
                },
                _ => { panic!("Unable to grant malformed uber state pickup {}", command); },
            };

            let uber_state = UberState {
                identifier: uber_state,
                value: format!("{}", entry),
            };
            self.collect_preplacements(&[&uber_state]);
        } else {
            self.player.inventory.grant(item.clone(), amount);
        }
        self.pool.remove(item, amount);
    }

    pub fn collect_preplacements(&mut self, reached: &[&UberState]) {
        for uber_state in reached {
            let mut inventory = Inventory::default();
            if let Some(items) = self.preplacements.get(&uber_state) {
                inventory = items.clone();
                self.preplacements.remove(&uber_state);
            }

            for item in inventory.inventory.keys() {
                self.grant_player(item.clone(), inventory.inventory[item]);
            }
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use super::super::*;
    use util::*;
    use rustc_hash::FxHashSet;

    use std::path::PathBuf;

    #[test]
    fn reach_check() {
        let graph = &lexer::parse_logic(&PathBuf::from("areas.wotw"), &PathBuf::from("loc_data.csv"), &PathBuf::from("state_data.csv"), &[Pathset::Moki], false).unwrap();
        let mut world = World::new(graph);
        world.player.inventory = default_pool();
        world.player.inventory.grant(Item::Resource(Resource::SpiritLight), 10000);

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
            println!("difference ({} / {} items): {:#?}", reached.len(), locations.len(), diff);
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

    #[test]
    fn uber_states() {
        let uber_state = UberState::from_parts("25432", "7854").unwrap();
        assert_eq!(format!("{}", uber_state), "25432|7854");
        let uber_state = UberState::from_parts("25432", "65195=11").unwrap();
        assert_eq!(format!("{}", uber_state), "25432|65195=11");
        assert!(UberState::from_parts("", "3").is_err());
        assert!(UberState::from_parts("a", "3").is_err());
    }
}
