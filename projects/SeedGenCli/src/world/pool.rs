use rustc_hash::FxHashMap;

use rand::{Rng, distributions::Bernoulli, prelude::Distribution, seq::IteratorRandom};

use crate::inventory::{Inventory, Item};
use crate::generator::PartialItem;
use crate::util::{Resource, Skill, Shard, Pathset, constants::RANDOM_PROGRESSION};

#[derive(Debug, Clone)]
pub struct Pool {
    pub progressions: Inventory,
    pub fillers: Inventory,
    pub spirit_light: u16,
    random_progression: Bernoulli,
}
impl Pool {
    pub fn new() -> Pool {
        Pool {
            progressions: Inventory::default(),
            fillers: Inventory::default(),
            spirit_light: 0,
            random_progression: Bernoulli::new(RANDOM_PROGRESSION).unwrap(),
        }
    }

    pub fn preset(pathsets: &[Pathset]) -> Pool {
        let mut progressions = FxHashMap::default();
        progressions.reserve(48);
        let mut fillers = FxHashMap::default();
        fillers.reserve(37);

        let items = [
            (Item::Resource(Resource::Health), 24),
            (Item::Resource(Resource::Energy), 24),
            (Item::Resource(Resource::Ore), 40),
            (Item::Resource(Resource::Keystone), 34),
            (Item::Resource(Resource::ShardSlot), 5),
            (Item::Skill(Skill::Bash), 1),
            (Item::Skill(Skill::DoubleJump), 1),
            (Item::Skill(Skill::Launch), 1),
            (Item::Skill(Skill::Glide), 1),
            (Item::Skill(Skill::WaterBreath), 1),
            (Item::Skill(Skill::Grenade), 1),
            (Item::Skill(Skill::Grapple), 1),
            (Item::Skill(Skill::Flash), 1),
            (Item::Skill(Skill::Spear), 1),
            (Item::Skill(Skill::Regenerate), 1),
            (Item::Skill(Skill::Bow), 1),
            (Item::Skill(Skill::Hammer), 1),
            (Item::Skill(Skill::Sword), 1),
            (Item::Skill(Skill::Burrow), 1),
            (Item::Skill(Skill::Dash), 1),
            (Item::Skill(Skill::WaterDash), 1),
            (Item::Skill(Skill::Shuriken), 1),
            (Item::Skill(Skill::Blaze), 1),
            (Item::Skill(Skill::Sentry), 1),
            (Item::Skill(Skill::Flap), 1),
            (Item::Skill(Skill::AncestralLight), 2),
            (Item::Water, 1),
            (Item::Shard(Shard::Overcharge), 1),
            (Item::Shard(Shard::TripleJump), 1),
            (Item::Shard(Shard::Wingclip), 1),
            (Item::Shard(Shard::Bounty), 1),
            (Item::Shard(Shard::Swap), 1),
            (Item::Shard(Shard::Magnet), 1),
            (Item::Shard(Shard::Splinter), 1),
            (Item::Shard(Shard::Reckless), 1),
            (Item::Shard(Shard::Quickshot), 1),
            (Item::Shard(Shard::Resilience), 1),
            (Item::Shard(Shard::SpiritLightHarvest), 1),
            (Item::Shard(Shard::Vitality), 1),
            (Item::Shard(Shard::LifeHarvest), 1),
            (Item::Shard(Shard::EnergyHarvest), 1),
            (Item::Shard(Shard::Energy), 1),
            (Item::Shard(Shard::LifePact), 1),
            (Item::Shard(Shard::LastStand), 1),
            (Item::Shard(Shard::Sense), 1),
            (Item::Shard(Shard::UltraBash), 1),
            (Item::Shard(Shard::UltraGrapple), 1),
            (Item::Shard(Shard::Overflow), 1),
            (Item::Shard(Shard::Thorn), 1),
            (Item::Shard(Shard::Catalyst), 1),
            (Item::Shard(Shard::Turmoil), 1),
            (Item::Shard(Shard::Sticky), 1),
            (Item::Shard(Shard::Finesse), 1),
            (Item::Shard(Shard::SpiritSurge), 1),
            (Item::Shard(Shard::Lifeforce), 1),
            (Item::Shard(Shard::Deflector), 1),
            (Item::Shard(Shard::Fracture), 1),
            (Item::Shard(Shard::Arcing), 1),
        ];

        for (item, amount) in items.iter().cloned() {
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

        Pool {
            progressions,
            fillers,
            spirit_light: 20000,
            random_progression: Bernoulli::new(RANDOM_PROGRESSION).unwrap(),
        }
    }

    pub fn grant(&mut self, item: Item, amount: u16, pathsets: &[Pathset]) {
        if let Item::SpiritLight(amount) = item {
            self.spirit_light += amount;
        } else if item.is_progression(pathsets) {
            self.progressions.grant(item, amount);
        } else {
            self.fillers.grant(item, amount);
        }
    }
    pub fn remove(&mut self, item: &Item, amount: u16) {
        if let Item::SpiritLight(stacked_amount) = item {
            self.spirit_light -= self.spirit_light.min(amount * stacked_amount);
        } else if self.progressions.has(item, 1) {
            self.progressions.remove(item, amount);
        } else {
            self.fillers.remove(item, amount);
        }
    }

    pub fn inventory(&self) -> Inventory {
        self.progressions.merge(&self.fillers)
    }

    pub fn contains(&self, other: &Inventory) -> bool {
        for item in other.inventory.keys() {
            if let Item::SpiritLight(1) = item {
                if self.spirit_light < other.inventory[item] {
                    return false;
                }
            } else if !self.progressions.has(item, other.inventory[item]) {
                return false;
            }
        }
        true
    }

    pub fn choose_random<R>(&mut self, rng: &mut R) -> PartialItem
    where
        R: Rng
    {
        if self.random_progression.sample(rng) {
            while let Some(item) = self.progressions.inventory.keys().choose(rng) {
                let cost = item.cost();

                if cost > 5000 {
                    let reroll_chance = -5000.0 / f64::from(item.cost()) + 1.0;

                    if rng.gen_bool(reroll_chance) {
                        log::trace!("Rerolling random placement {}", item);
                        continue;
                    }
                }

                return PartialItem::Item(item.clone());
            }
        }
        PartialItem::Placeholder
    }
}
