pub mod graph;
pub mod pool;
pub mod player;
pub mod requirements;

use rustc_hash::FxHashMap;

use graph::Graph;
use pool::Pool;
use player::Player;
use crate::inventory::Item;
use crate::util::{
    Resource,
    uberstate::{UberState, UberValue, UberIdentifier},
    constants::WISP_STATES,
};

#[derive(Debug, Clone)]
pub struct World<'a> {
    pub graph: &'a Graph,
    pub player: Player,
    pub pool: Pool,
    pub preplacements: FxHashMap<UberState, Vec<Item>>,
    pub uber_states: FxHashMap<UberIdentifier, UberValue>,
}
impl<'a> World<'a> {
    pub fn new(graph: &Graph) -> World {
        World {
            graph,
            player: Player::default(),
            pool: Pool::default(),
            preplacements: FxHashMap::default(),
            uber_states: FxHashMap::default(),
        }
    }

    pub fn grant_player(&mut self, item: Item, amount: u16) -> Result<(), String> {
        self.pool.remove(&item, amount);
        match item {
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

                for _ in 0..amount {
                    let entry = match uber_type {
                        "bool" | "teleporter" => {
                            let uber_value: bool = uber_value.parse().unwrap();

                            let entry = self.uber_states.entry(uber_state.clone()).or_insert(UberValue::Bool(false));
                            if let UberValue::Bool(prior) = entry {
                                *prior = uber_value;
                            } else {
                                log::warn!("Unable to grant uber state pickup {} because the uber state type didn't match", command);
                            }
                            entry
                        },
                        "byte" | "int" => {
                            let uber_value: i32 = uber_value.parse().unwrap();

                            let entry = self.uber_states.entry(uber_state.clone()).or_insert(UberValue::Int(0));
                            if let UberValue::Int(prior) = entry {
                                if sign == 0 {
                                    *prior = uber_value
                                } else {
                                    *prior += uber_value * i32::from(sign);
                                }
                            } else {
                                log::warn!("Unable to grant uber state pickup {} because the uber state type didn't match", command);
                            }
                            entry
                        },
                        "float" => {
                            let uber_value: f32 = uber_value.parse().unwrap();

                            let entry = self.uber_states.entry(uber_state.clone()).or_insert(UberValue::Float(0.0));
                            if let UberValue::Float(prior) = entry {
                                if sign == 0 {
                                    *prior = uber_value
                                } else {
                                    *prior += uber_value * f32::from(sign);
                                }
                            } else {
                                log::warn!("Unable to grant uber state pickup {} because the uber state type didn't match", command);
                            }
                            entry
                        },
                        _ => { return Err(format!("Unable to grant malformed uber state pickup {}", command)); },
                    };

                    if match entry {
                        UberValue::Bool(false) | UberValue::Int(0) => true,
                        UberValue::Float(float) if *float == 0.0 => true,
                        _ => false,
                    } { break; }
                    let is_bool = matches!(entry, UberValue::Bool(_));

                    let uber_state = UberState {
                        identifier: uber_state.clone(),
                        value: format!("{}", entry),
                    };

                    // TODO don't trigger on unchanged values
                    log::trace!("Granting player UberState {}", uber_state);
                    self.collect_preplacements(&uber_state);
                    if !is_bool {
                        let without_value = UberState {
                            value: String::new(),
                            ..uber_state
                        };
                        self.collect_preplacements(&without_value);
                    }
                }
            },
            Item::SpiritLight(stacked_amount) => {
                log::trace!("Granting player {} Spirit Light", amount * stacked_amount);

                self.player.inventory.grant(Item::SpiritLight(1), amount * stacked_amount);
            }
            item => {
                if item.is_progression(&self.player.pathsets) {
                    log::trace!("Granting player {}{}", if amount == 1 { String::new() } else { format!("{} ", amount) }, item);

                    self.player.inventory.grant(item, amount);
                }
            },
        }

        Ok(())
    }

    pub fn preplace(&mut self, uber_state: UberState, item: Item) {
        let preplacement = self.preplacements.entry(uber_state).or_insert_with(Vec::default);
        preplacement.push(item);
    }
    pub fn collect_preplacements(&mut self, reached: &UberState) -> bool {
        if let Some(items) = self.preplacements.get(reached) {
            log::trace!("Collecting preplacements on {}", reached);
            let items = items.clone();

            for item in items {
                self.grant_player(item, 1).unwrap_or_else(|err| log::error!("{}", err));
            }

            true
        } else if WISP_STATES.contains(&reached.identifier) {
            log::trace!("Granting player Wisp");
            self.player.inventory.grant(Item::Resource(Resource::Health), 2);
            self.player.inventory.grant(Item::Resource(Resource::Energy), 2);

            false
        } else {
            false
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use super::super::*;
    use world::pool::Pool;
    use util::*;
    use rustc_hash::FxHashSet;

    use std::path::PathBuf;

    #[test]
    fn reach_check() {
        let graph = &lexer::parse_logic(&PathBuf::from("areas.wotw"), &PathBuf::from("loc_data.csv"), &PathBuf::from("state_data.csv"), &Pathsets::default(), false).unwrap();
        let mut world = World::new(graph);
        world.player.inventory = Pool::preset(&Pathsets::default()).progressions;
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
            eprintln!("difference ({} / {} items): {:?}", reached.len(), locations.len(), diff);
        }

        assert_eq!(reached, locations);

        let graph = &lexer::parse_logic(&PathBuf::from("areas.wotw"), &PathBuf::from("loc_data.csv"), &PathBuf::from("state_data.csv"), &Pathsets::from(vec![Pathset::Moki, Pathset::Gorlek]), false).unwrap();
        let mut world = World::new(graph);

        world.player.pathsets.add(Pathset::Unsafe);
        world.player.inventory.grant(Item::Resource(Resource::Health), 7);
        world.player.inventory.grant(Item::Resource(Resource::Energy), 6);
        world.player.inventory.grant(Item::Skill(Skill::DoubleJump), 1);
        world.player.inventory.grant(Item::Shard(Shard::TripleJump), 1);

        let reached = world.graph.reached_locations(&world.player, "GladesTown.Teleporter", &world.uber_states).unwrap();
        let reached: Vec<_> = reached.iter().filter_map(|node| node.uber_state()).cloned().collect();
        assert_eq!(reached, vec![UberState::from_parts("42178", "63404").unwrap(), UberState::from_parts("42178", "42762").unwrap(), UberState::from_parts("23987", "14014").unwrap(), UberState::from_parts("42178", "6117").unwrap()]);
    }
}
