pub mod graph;
pub mod pool;
pub mod player;
pub mod requirements;

use rustc_hash::FxHashMap;

use graph::Graph;
use pool::Pool;
use player::Player;
use crate::inventory::{Item, UberStateOperator, UberStateRangeBoundary};
use crate::util::{
    Resource,
    uberstate::{UberState, UberIdentifier, UberType},
    constants::WISP_STATES,
};

#[derive(Debug, Clone)]
pub struct World<'a> {
    pub graph: &'a Graph,
    pub player: Player,
    pub pool: Pool,
    pub preplacements: FxHashMap<UberState, Vec<Item>>,
    pub uber_states: FxHashMap<UberIdentifier, String>,
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
        match item {
            Item::UberState(command) => {
                for _ in 0..amount {
                    let default = String::from("0");
                    let uber_value = match &command.operator {
                        UberStateOperator::Value(value) => value,
                        UberStateOperator::Pointer(uber_identifier) => self.uber_states.get(&uber_identifier).unwrap_or(&default),
                        UberStateOperator::Range(range) => match &range.start {
                            UberStateRangeBoundary::Value(value) => value,
                            UberStateRangeBoundary::Pointer(uber_identifier) => self.uber_states.get(&uber_identifier).unwrap_or(&default),
                        },
                    }.to_owned();

                    let entry = self.uber_states.entry(command.uber_identifier.to_owned()).or_insert_with(|| String::from("0"));
                    if !command.signed && entry == &uber_value { return Ok(()); }

                    let uber_value = match command.uber_type {
                        UberType::Bool | UberType::Teleporter => uber_value.to_string(),
                        UberType::Byte | UberType::Int => {
                            if command.signed {
                                let uber_value = uber_value.parse::<i32>().unwrap();
                                let mut prior = entry.parse::<i32>().map_err(|_| format!("Failed to apply uberState command {} because the current state ({}) doesn't match the specified type", command, entry))?;

                                if command.sign {
                                    prior += uber_value;
                                } else {
                                    prior -= uber_value;
                                }
                                prior.to_string()
                            } else {
                                uber_value.to_string()
                            }
                        },
                        UberType::Float => {
                            if command.signed {
                                let uber_value = uber_value.parse::<f32>().unwrap();
                                let mut prior = entry.parse::<f32>().map_err(|_| format!("Failed to apply uberState command {} because the current state ({}) doesn't match the specified type", command, entry))?;

                                if command.sign {
                                    prior += uber_value;
                                } else {
                                    prior -= uber_value;
                                }
                                prior.to_string()
                            } else {
                                uber_value.to_string()
                            }
                        },
                    };
                    *entry = uber_value;

                    if entry == "false" || entry == "0" { return Ok(()); }

                    let uber_state = UberState {
                        identifier: command.uber_identifier.to_owned(),
                        value: entry.clone(),
                    };

                    log::trace!("Granting player UberState {}", uber_state);
                    self.collect_preplacements(&uber_state);
                    let without_value = UberState {
                        value: String::new(),
                        ..uber_state
                    };
                    self.collect_preplacements(&without_value);
                }
            },
            Item::SpiritLight(stacked_amount) => {
                log::trace!("Granting player {} Spirit Light", amount * stacked_amount);

                self.player.inventory.grant(Item::SpiritLight(1), amount * stacked_amount);
            }
            item => {
                if item.is_progression(self.player.difficulty) {
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
        let graph = &lexer::parse_logic(&PathBuf::from("areas.wotw"), &PathBuf::from("loc_data.csv"), &PathBuf::from("state_data.csv"), &Settings::default(), false).unwrap();
        let mut world = World::new(graph);
        world.player.inventory = Pool::preset().inventory;
        world.player.inventory.grant(Item::SpiritLight(1), 10000);

        let spawn = world.graph.find_spawn("MarshSpawn.Main").unwrap();
        let reached = world.graph.reached_locations(&world.player, spawn, &world.uber_states).unwrap();
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

        let mut settings = Settings::default();
        settings.difficulty = Difficulty::Gorlek;

        let graph = &lexer::parse_logic(&PathBuf::from("areas.wotw"), &PathBuf::from("loc_data.csv"), &PathBuf::from("state_data.csv"), &settings, false).unwrap();
        let mut world = World::new(graph);

        world.player.difficulty = Difficulty::Unsafe;
        world.player.inventory.grant(Item::Resource(Resource::Health), 7);
        world.player.inventory.grant(Item::Resource(Resource::Energy), 6);
        world.player.inventory.grant(Item::Skill(Skill::DoubleJump), 1);
        world.player.inventory.grant(Item::Shard(Shard::TripleJump), 1);

        let spawn = world.graph.find_spawn("GladesTown.Teleporter").unwrap();
        let reached = world.graph.reached_locations(&world.player, spawn, &world.uber_states).unwrap();
        let reached: Vec<_> = reached.iter().filter_map(|node| node.uber_state()).cloned().collect();
        assert_eq!(reached, vec![UberState::from_parts("42178", "63404").unwrap(), UberState::from_parts("42178", "42762").unwrap(), UberState::from_parts("23987", "14014").unwrap(), UberState::from_parts("42178", "6117").unwrap()]);
    }
}
