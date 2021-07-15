use rand::{Rng, seq::SliceRandom};
use rustc_hash::FxHashMap;

use crate::inventory::{Inventory, Item};
use crate::util::{Resource, Skill, Shard};

#[derive(Default, Debug, Clone)]
pub struct Pool {
    pub inventory: Inventory,
    pub spirit_light: u16,
}
impl Pool {
    pub fn preset() -> Pool {
        let mut items = FxHashMap::default();

        items.insert(Item::Resource(Resource::Health), 24);
        items.insert(Item::Resource(Resource::Energy), 24);
        items.insert(Item::Resource(Resource::Ore), 40);
        items.insert(Item::Resource(Resource::Keystone), 34);
        items.insert(Item::Resource(Resource::ShardSlot), 5);
        items.insert(Item::Skill(Skill::Bash), 1);
        items.insert(Item::Skill(Skill::DoubleJump), 1);
        items.insert(Item::Skill(Skill::Launch), 1);
        items.insert(Item::Skill(Skill::Glide), 1);
        items.insert(Item::Skill(Skill::WaterBreath), 1);
        items.insert(Item::Skill(Skill::Grenade), 1);
        items.insert(Item::Skill(Skill::Grapple), 1);
        items.insert(Item::Skill(Skill::Flash), 1);
        items.insert(Item::Skill(Skill::Spear), 1);
        items.insert(Item::Skill(Skill::Regenerate), 1);
        items.insert(Item::Skill(Skill::Bow), 1);
        items.insert(Item::Skill(Skill::Hammer), 1);
        items.insert(Item::Skill(Skill::Sword), 1);
        items.insert(Item::Skill(Skill::Burrow), 1);
        items.insert(Item::Skill(Skill::Dash), 1);
        items.insert(Item::Skill(Skill::WaterDash), 1);
        items.insert(Item::Skill(Skill::Shuriken), 1);
        items.insert(Item::Skill(Skill::Blaze), 1);
        items.insert(Item::Skill(Skill::Sentry), 1);
        items.insert(Item::Skill(Skill::Flap), 1);
        items.insert(Item::Skill(Skill::AncestralLight), 2);
        items.insert(Item::Water, 1);
        items.insert(Item::Shard(Shard::Overcharge), 1);
        items.insert(Item::Shard(Shard::TripleJump), 1);
        items.insert(Item::Shard(Shard::Wingclip), 1);
        items.insert(Item::Shard(Shard::Bounty), 1);
        items.insert(Item::Shard(Shard::Swap), 1);
        items.insert(Item::Shard(Shard::Magnet), 1);
        items.insert(Item::Shard(Shard::Splinter), 1);
        items.insert(Item::Shard(Shard::Reckless), 1);
        items.insert(Item::Shard(Shard::Quickshot), 1);
        items.insert(Item::Shard(Shard::Resilience), 1);
        items.insert(Item::Shard(Shard::SpiritLightHarvest), 1);
        items.insert(Item::Shard(Shard::Vitality), 1);
        items.insert(Item::Shard(Shard::LifeHarvest), 1);
        items.insert(Item::Shard(Shard::EnergyHarvest), 1);
        items.insert(Item::Shard(Shard::Energy), 1);
        items.insert(Item::Shard(Shard::LifePact), 1);
        items.insert(Item::Shard(Shard::LastStand), 1);
        items.insert(Item::Shard(Shard::Sense), 1);
        items.insert(Item::Shard(Shard::UltraBash), 1);
        items.insert(Item::Shard(Shard::UltraGrapple), 1);
        items.insert(Item::Shard(Shard::Overflow), 1);
        items.insert(Item::Shard(Shard::Thorn), 1);
        items.insert(Item::Shard(Shard::Catalyst), 1);
        items.insert(Item::Shard(Shard::Turmoil), 1);
        items.insert(Item::Shard(Shard::Sticky), 1);
        items.insert(Item::Shard(Shard::Finesse), 1);
        items.insert(Item::Shard(Shard::SpiritSurge), 1);
        items.insert(Item::Shard(Shard::Lifeforce), 1);
        items.insert(Item::Shard(Shard::Deflector), 1);
        items.insert(Item::Shard(Shard::Fracture), 1);
        items.insert(Item::Shard(Shard::Arcing), 1);

        Pool {
            inventory: Inventory {
                items,
            },
            spirit_light: 20000,
        }
    }

    pub fn grant(&mut self, item: Item, amount: u16) {
        if let Item::SpiritLight(amount) = item {
            self.spirit_light += amount;
        } else {
            self.inventory.grant(item, amount);
        }
    }
    pub fn remove(&mut self, item: &Item, amount: u16) {
        if let Item::SpiritLight(stacked_amount) = item {
            self.spirit_light -= self.spirit_light.min(amount * stacked_amount);
        } else {
            self.inventory.remove(item, amount);
        }
    }

    pub fn contains(&self, other: &Inventory) -> bool {
        for (item, amount) in &other.items {
            if let Item::SpiritLight(1) = item {
                if &self.spirit_light < amount {
                    return false;
                }
            } else if !self.inventory.has(item, *amount) {
                return false;
            }
        }
        true
    }

    pub fn choose_random<R>(&mut self, multiworld_spread: bool, rng: &mut R) -> Option<&Item>
    where
        R: Rng
    {
        let mut items = self.inventory.items.iter().collect::<Vec<_>>();
        if multiworld_spread {
            items.retain(|&(item, _)| item.is_multiworld_spread());
        }

        loop {
            let (item, _) = *items.choose_weighted(rng, |&(_, amount)| amount).ok()?;
            let cost = item.cost();

            if cost > 10000 {
                let reroll_chance = -10000.0 / f64::from(item.cost()) + 1.0;

                if rng.gen_bool(reroll_chance) {
                    log::trace!("Rerolling random placement {}", item);
                    continue;
                }
            }

            return Some(item)
        }
    }
}
