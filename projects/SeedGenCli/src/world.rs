use rustc_hash::FxHashMap;

use crate::requirements::Requirement;
use crate::player::Player;
use crate::util::{RefillType, NodeType, Orbs, Pathset, either_single_orbs, both_orbs, both_single_orbs};

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

fn try_connection(connection: &Connection, player: &Player, best_orbs: &[Orbs], pathsets: &[Pathset]) -> Vec<Orbs> {
    let mut target_orbs: Vec<Orbs> = Default::default();
    for orbs in best_orbs {
        if let Some(orbcost) = connection.requirement.is_met(player, &orbs, pathsets) {
            target_orbs.append(&mut both_single_orbs(&orbcost, *orbs));
        }
    }
    target_orbs
}

#[derive(Debug)]
pub struct World<'a> {
    pub graph: &'a FxHashMap<String, Node>,
    pub player: Player<'a>,
}
impl<'a> World<'a> {
    fn reach_recursion(&mut self, entry: &'a Node, mut best_orbs: Vec<Orbs>, pathsets: &[Pathset], state_progressions: &mut FxHashMap<&'a str, Vec<(&'a str, &'a Connection)>>, world_state: &mut FxHashMap<&'a str, Vec<Orbs>>) -> Vec<&'a Node> {
        world_state.insert(entry.identifier(), best_orbs.clone());
        match entry {
            Node::Anchor(anchor) => {
                for refill in &anchor.refills {
                    for orbs in &best_orbs {
                        if let Some(orbcost) = refill.requirement.is_met(&self.player, orbs, pathsets) {
                            best_orbs = both_orbs(&best_orbs, &orbcost);
                            match refill.name {
                                RefillType::Full => best_orbs = vec![self.player.max_orbs()],
                                RefillType::Checkpoint => best_orbs = either_single_orbs(&best_orbs, self.player.checkpoint_orbs()),
                                RefillType::Health(amount) => best_orbs = both_single_orbs(&best_orbs, self.player.health_orbs(amount)),
                                RefillType::Energy(amount) => best_orbs = both_single_orbs(&best_orbs, Orbs { energy: amount, ..Default::default() }),
                            }
                            break;
                        }
                    }
                }

                let mut reached = Vec::<&Node>::new();
                for connection in &anchor.connections {
                    if world_state.contains_key(&connection.to[..]) {
                        // TODO loop with improved orbs?
                        continue;
                    }
                    let target_orbs = try_connection(connection, &self.player, &best_orbs, pathsets);
                    if !target_orbs.is_empty() {
                        reached.append(&mut self.reach_recursion(&self.graph[&connection.to], target_orbs, pathsets, state_progressions, world_state));
                    } else {
                        let states = connection.requirement.contained_states();
                        for state in states {
                            state_progressions.entry(state).or_default().push((&anchor.identifier, connection));
                        }
                    }
                }
                reached
            },
            Node::Pickup(_) => vec![entry],
            Node::State(state) => {
                self.player.states.insert(&state.identifier);
                let mut reached = Vec::<&Node>::new();
                if let Some(connections) = state_progressions.get(&state.identifier[..]) {
                    for (from, connection) in connections.clone() {
                        let target_orbs = try_connection(connection, &self.player, &world_state[from], pathsets);
                        if !target_orbs.is_empty() {
                            reached.append(&mut self.reach_recursion(&self.graph[&connection.to], target_orbs, pathsets, state_progressions, world_state));
                        }
                    }
                }
                reached
            },
            Node::Quest(quest) => {
                self.player.states.insert(&quest.identifier);
                let mut reached = vec![entry];
                if let Some(connections) = state_progressions.get(&quest.identifier[..]) {
                    for (from, connection) in connections.clone() {
                        let target_orbs = try_connection(connection, &self.player, &world_state[from], pathsets);
                        if !target_orbs.is_empty() {
                            reached.append(&mut self.reach_recursion(&self.graph[&connection.to], target_orbs, pathsets, state_progressions, world_state));
                        }
                    }
                }
                reached
            },
        }
    }

    pub fn reached_locations(&mut self, spawn: &'a str, pathsets: &[Pathset]) -> Result<Vec<&Node>, String> {
        let entry = self.graph.get(spawn).ok_or_else(|| format!("Spawn '{}' not found", spawn))?;
        if !matches!(entry, Node::Anchor(_)) { return Err(format!("Spawn has to be an anchor, '{}' is a {:?}", spawn, entry.node_type())); }

        let mut state_progressions = FxHashMap::<_, _>::default();
        let mut world_state = FxHashMap::<_, _>::default();

        let reached = self.reach_recursion(entry, vec![self.player.max_orbs()], pathsets, &mut state_progressions, &mut world_state);

        Ok(reached)
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    use super::super::*;
    use util::*;
    use player::*;
    use rustc_hash::FxHashSet;

    #[test]
    fn reach_check() {
        let graph = &parse_logic(&PathBuf::from("C:\\moon\\areas.wotw"), &PathBuf::from("C:\\moon\\loc_data.csv"), &[Pathset::Moki], false);
        let mut player: Player = Default::default();
        player.grant(Item::Resource(Resource::Health), 40);
        player.grant(Item::Resource(Resource::Energy), 40);
        player.grant(Item::Resource(Resource::Keystone), 34);
        player.grant(Item::Resource(Resource::Ore), 40);
        player.grant(Item::Resource(Resource::SpiritLight), 10000);
        player.grant(Item::Resource(Resource::ShardSlot), 8);
        player.grant(Item::Skill(Skill::Bash), 1);
        player.grant(Item::Skill(Skill::WallJump), 1);
        player.grant(Item::Skill(Skill::DoubleJump), 1);
        player.grant(Item::Skill(Skill::Launch), 1);
        player.grant(Item::Skill(Skill::Glide), 1);
        player.grant(Item::Skill(Skill::WaterBreath), 1);
        player.grant(Item::Skill(Skill::Grenade), 1);
        player.grant(Item::Skill(Skill::Grapple), 1);
        player.grant(Item::Skill(Skill::Flash), 1);
        player.grant(Item::Skill(Skill::Spear), 1);
        player.grant(Item::Skill(Skill::Regenerate), 1);
        player.grant(Item::Skill(Skill::Bow), 1);
        player.grant(Item::Skill(Skill::Hammer), 1);
        player.grant(Item::Skill(Skill::Sword), 1);
        player.grant(Item::Skill(Skill::Burrow), 1);
        player.grant(Item::Skill(Skill::Dash), 1);
        player.grant(Item::Skill(Skill::WaterDash), 1);
        player.grant(Item::Skill(Skill::Shuriken), 1);
        player.grant(Item::Skill(Skill::Seir), 1);
        player.grant(Item::Skill(Skill::Blaze), 1);
        player.grant(Item::Skill(Skill::Sentry), 1);
        player.grant(Item::Skill(Skill::Flap), 1);
        player.grant(Item::Skill(Skill::Water), 1);
        player.grant(Item::Skill(Skill::AncestralLight), 1);
        let mut world = World {
            graph,
            player,
        };

        let reached = world.reached_locations("MarshSpawn.Main", &[Pathset::Moki]).unwrap();
        let reached: FxHashSet<_> = reached.iter().map(|node| node.identifier()).collect();

        let locations = parser::parse_locations(&PathBuf::from("C:\\moon\\loc_data.csv"), false).unwrap();
        let locations: FxHashSet<_> = locations.iter().map(|location| &location.name[..]).collect();

        if !(reached == locations) {
            let mut diff: Vec<_> = locations.difference(&reached).collect();
            diff.sort();
            println!("difference ({} / {} items): {:#?}", reached.len(), locations.len(), diff);
        }

        assert_eq!(reached, locations);

        let mut player: Player = Default::default();
        let graph = &parse_logic(&PathBuf::from("C:\\moon\\areas.wotw"), &PathBuf::from("C:\\moon\\loc_data.csv"), &[Pathset::Moki, Pathset::Gorlek, Pathset::Glitch], false);
        player.grant(Item::Resource(Resource::Health), 7);
        player.grant(Item::Resource(Resource::Energy), 6);
        player.grant(Item::Skill(Skill::DoubleJump), 1);
        player.grant(Item::Shard(Shard::TripleJump), 1);
        let mut world = World {
            graph,
            player,
        };

        let reached = world.reached_locations("GladesTown.Teleporter", &[Pathset::Moki, Pathset::Gorlek, Pathset::Glitch]).unwrap();
        let mut reached: Vec<_> = reached.iter().map(|node| node.identifier()).collect();
        reached.sort();
        assert_eq!(reached, vec!["GladesTown.AboveTpEX", "GladesTown.BelowHoleHutEX", "GladesTown.BountyShard", "GladesTown.UpdraftCeilingEX"]);
    }
}
