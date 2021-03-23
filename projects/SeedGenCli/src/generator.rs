use std::fmt;

use rand_pcg::Pcg32;

use crate::world::{World, Node};
use crate::player::Item;
use crate::util::{Settings, Skill};

#[derive(Debug)]
pub struct Placement {
    pub uber_group: String,
    pub uber_id: String,
    pub pickup: String,
}
impl fmt::Display for Placement {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}|{}|{}", self.uber_group, self.uber_id, self.pickup)
    }
}

// TODO: this is a placeholder
pub fn generate_placements<'a>(world: World<'a>, _settings: &'a Settings, _rng: &mut Pcg32) -> Result<Vec<Placement>, String> {
    Ok(world.graph.iter().filter_map(|node| match node {
        Node::Pickup(pickup) => Some(Placement {
            uber_group: pickup.uber_group.clone(),
            uber_id: pickup.uber_id.clone(),
            pickup: format!("{}", Item::Skill(Skill::Blaze)),
        }),
        Node::Quest(quest) => Some(Placement {
            uber_group: quest.uber_group.clone(),
            uber_id: quest.uber_id.clone(),
            pickup: format!("{}", Item::Skill(Skill::Blaze)),
        }),
        _ => None,
    }).collect())
}
