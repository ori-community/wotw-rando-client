use rustc_hash::FxHashMap;

use rand::Rng;
use rand::rngs::StdRng;
use rand::seq::IteratorRandom;

use crate::inventory::{Inventory, Item};
use crate::generator::PartialItem;
use crate::util::{Resource, Skill, Shard, Pathset};

const RANDOM_PROGRESSION: f64 = 0.1;

// TODO check performance of vec against hashmap - vec could rely on indices to store weights as an alternative to rerolls
#[derive(Debug, Default, Clone)]
pub struct ItemPool {
    pub progressions: Inventory,
    pub fillers: Inventory,
}
impl ItemPool {
    pub fn preset(pathsets: &[Pathset]) -> ItemPool {
        let mut progressions = FxHashMap::default();
        progressions.reserve(48);
        let mut fillers = FxHashMap::default();
        fillers.reserve(37);

        // TODO compare performance with an array and cloning
        let mut items = Vec::with_capacity(60);
        items.push((Item::Resource(Resource::Health), 24));
        items.push((Item::Resource(Resource::Energy), 24));
        items.push((Item::Resource(Resource::Ore), 40));
        items.push((Item::Resource(Resource::Keystone), 34));
        items.push((Item::Resource(Resource::ShardSlot), 5));
        items.push((Item::Skill(Skill::Bash), 1));
        items.push((Item::Skill(Skill::DoubleJump), 1));
        items.push((Item::Skill(Skill::Launch), 1));
        items.push((Item::Skill(Skill::Glide), 1));
        items.push((Item::Skill(Skill::WaterBreath), 1));
        items.push((Item::Skill(Skill::Grenade), 1));
        items.push((Item::Skill(Skill::Grapple), 1));
        items.push((Item::Skill(Skill::Flash), 1));
        items.push((Item::Skill(Skill::Spear), 1));
        items.push((Item::Skill(Skill::Regenerate), 1));
        items.push((Item::Skill(Skill::Bow), 1));
        items.push((Item::Skill(Skill::Hammer), 1));
        items.push((Item::Skill(Skill::Sword), 1));
        items.push((Item::Skill(Skill::Burrow), 1));
        items.push((Item::Skill(Skill::Dash), 1));
        items.push((Item::Skill(Skill::WaterDash), 1));
        items.push((Item::Skill(Skill::Shuriken), 1));
        items.push((Item::Skill(Skill::Blaze), 1));
        items.push((Item::Skill(Skill::Sentry), 1));
        items.push((Item::Skill(Skill::Flap), 1));
        items.push((Item::Skill(Skill::AncestralLight), 2));
        items.push((Item::Water, 1));
        items.push((Item::Shard(Shard::Overcharge), 1));
        items.push((Item::Shard(Shard::TripleJump), 1));
        items.push((Item::Shard(Shard::Wingclip), 1));
        items.push((Item::Shard(Shard::Bounty), 1));
        items.push((Item::Shard(Shard::Swap), 1));
        items.push((Item::Shard(Shard::Magnet), 1));
        items.push((Item::Shard(Shard::Splinter), 1));
        items.push((Item::Shard(Shard::Reckless), 1));
        items.push((Item::Shard(Shard::Quickshot), 1));
        items.push((Item::Shard(Shard::Resilience), 1));
        items.push((Item::Shard(Shard::SpiritLightHarvest), 1));
        items.push((Item::Shard(Shard::Vitality), 1));
        items.push((Item::Shard(Shard::LifeHarvest), 1));
        items.push((Item::Shard(Shard::EnergyHarvest), 1));
        items.push((Item::Shard(Shard::Energy), 1));
        items.push((Item::Shard(Shard::LifePact), 1));
        items.push((Item::Shard(Shard::LastStand), 1));
        items.push((Item::Shard(Shard::Sense), 1));
        items.push((Item::Shard(Shard::UltraBash), 1));
        items.push((Item::Shard(Shard::UltraGrapple), 1));
        items.push((Item::Shard(Shard::Overflow), 1));
        items.push((Item::Shard(Shard::Thorn), 1));
        items.push((Item::Shard(Shard::Catalyst), 1));
        items.push((Item::Shard(Shard::Turmoil), 1));
        items.push((Item::Shard(Shard::Sticky), 1));
        items.push((Item::Shard(Shard::Finesse), 1));
        items.push((Item::Shard(Shard::SpiritSurge), 1));
        items.push((Item::Shard(Shard::Lifeforce), 1));
        items.push((Item::Shard(Shard::Deflector), 1));
        items.push((Item::Shard(Shard::Fracture), 1));
        items.push((Item::Shard(Shard::Arcing), 1));

        for (item, amount) in items {
            if item.is_progression(pathsets) {
                progressions.insert(item, amount);
            } else {
                fillers.insert(item, amount);
            }
        }

        progressions.shrink_to_fit();
        fillers.shrink_to_fit();

        let progressions = Inventory {
            inventory: progressions,
        };
        let fillers = Inventory {
            inventory: fillers,
        };

        ItemPool {
            progressions,
            fillers,
        }
    }

    pub fn grant(&mut self, item: Item, amount: u16, pathsets: &[Pathset]) {
        // TODO how do you place arbitrary items as progression? :/
        if item.is_progression(pathsets) {
            self.progressions.grant(item, amount);
        } else {
            self.fillers.grant(item, amount);
        }
    }
    pub fn remove(&mut self, item: &Item, amount: u16) {
        if self.progressions.has(item, 1) {
            self.progressions.remove(item, amount);
        } else {
            self.fillers.remove(item, amount);
        }
    }

    pub fn contains(&self, other: &Inventory) -> bool {
        for item in other.inventory.keys() {
            if let Item::SpiritLight(_) = item { continue; }
            if !self.progressions.has(item, other.inventory[item]) {
                return false;
            }
        }
        true
    }

    pub fn choose_random(&mut self, rng: &mut StdRng) -> PartialItem {
        if rng.gen_bool(RANDOM_PROGRESSION) {
            // TODO weights or rerolls
            if let Some(item) = self.progressions.inventory.keys().choose(rng) {
                return PartialItem::Item(item.clone());
            }
        }
        PartialItem::Placeholder
    }
}
