use std::fmt;

use rand_pcg::Pcg32;

use crate::world::{World, Node, UberState};
use crate::player::Item;
use crate::util::{Settings, Skill};

#[derive(Debug)]
pub struct Placement {
    pub uber_state: UberState,
    pub pickup: String,
}
impl fmt::Display for Placement {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}|{}", self.uber_state, self.pickup)
    }
}

// TODO: this is a placeholder
pub fn generate_placements<'a>(world: World<'a>, _settings: &'a Settings, _rng: &mut Pcg32) -> Result<Vec<Placement>, String> {
    Ok(world.graph.iter().filter_map(|node| match node {
        Node::Pickup(pickup) => Some(Placement {
            uber_state: pickup.uber_state.clone(),
            pickup: format!("{}", Item::Skill(Skill::Blaze)),
        }),
        Node::Quest(quest) => Some(Placement {
            uber_state: quest.uber_state.clone(),
            pickup: format!("{}", Item::Skill(Skill::Blaze)),
        }),
        _ => None,
    }).collect())
}
