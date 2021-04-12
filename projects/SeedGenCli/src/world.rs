pub mod graph;
pub mod pool;
pub mod player;
pub mod requirements;

use rustc_hash::FxHashMap;

use graph::Graph;
use pool::Pool;
use player::Player;
use crate::inventory::{Item, Inventory};
use crate::util::uberstate::{UberState, UberValue, UberIdentifier};

#[derive(Debug, Clone)]
pub struct World<'a> {
    pub graph: &'a Graph,
    pub player: Player,
    pub pool: Pool,
    pub preplacements: FxHashMap<UberState, Inventory>,
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

    pub fn grant_player(&mut self, item: Item, amount: u16, verbose: bool) {
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
                // TODO don't think this should be kept
                if verbose { eprintln!("Modified uber state to {}", uber_state); }
                self.collect_preplacements(&uber_state, verbose);
            },
            Item::Custom(_) => {},
            Item::SpiritLight(stacked_amount) => {
                self.player.inventory.grant(Item::SpiritLight(1), amount * stacked_amount);
            }
            item => {
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
            self.grant_player(item.clone(), inventory.inventory[item], verbose);
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
        let graph = &lexer::parse_logic(&PathBuf::from("areas.wotw"), &PathBuf::from("loc_data.csv"), &PathBuf::from("state_data.csv"), &[Pathset::Moki], false).unwrap();
        let mut world = World::new(graph);
        world.player.inventory = Pool::preset(&[Pathset::Moki]).progressions;
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
