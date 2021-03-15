use criterion::{criterion_group, criterion_main, Criterion};

use std::path::PathBuf;

use seed_gen_cli::*;
use player::*;
use world::*;
use requirements::*;
use util::*;

fn parsing(c: &mut Criterion) {
    let areas = PathBuf::from("C:\\moon\\areas.wotw");
    let locations = PathBuf::from("C:\\moon\\loc_data.csv");

    c.bench_function("tokenize", |b| b.iter(|| tokenizer::tokenize(&areas)));
    let tokens = tokenizer::tokenize(&areas).unwrap();

    c.bench_function("parse areas", |b| b.iter(|| parser::parse_areas(&tokens)));
    let (areas, metadata) = match parser::parse_areas(&tokens) {
        Ok(areas) => areas,
        _ => panic!(),
    };

    c.bench_function("parse locations", |b| b.iter(|| parser::parse_locations(&locations, false)));
    let locations = parser::parse_locations(&locations, false).unwrap();

    c.bench_function("emit", |b| b.iter(|| emitter::emit(&areas, &metadata, &locations, &vec![Pathset::Moki, Pathset::Gorlek, Pathset::Glitch, Pathset::Unsafe], false)));
}

fn requirements(c: &mut Criterion) {
    let mut player = Player {
        unsafe_paths: true,
        ..Default::default()
    };
    {
        let req_a = Requirement::EnergySkill(Skill::Blaze, 2.0);
        let req_b = Requirement::Damage(20.0);
        let req_c = Requirement::EnergySkill(Skill::Blaze, 1.0);
        let req_d = Requirement::Damage(10.0);
        player.grant(Item::Skill(Skill::Blaze), 1);
        player.grant(Item::Resource(Resource::Energy), 4);
        player.grant(Item::Resource(Resource::Health), 4);
        let req = Requirement::And(vec![Requirement::Or(vec![req_a.clone(), req_d.clone()]), Requirement::Or(vec![req_b.clone(), req_c.clone()]), Requirement::Or(vec![req_a.clone(), req_d.clone()]), Requirement::Or(vec![req_b.clone(), req_c.clone()])]);
        c.bench_function("nested ands and ors", |b| b.iter(|| req.is_met(&player, &player.max_orbs())));
    }
    player = Default::default();
    player.grant(Item::Skill(Skill::Bow), 1);
    player.grant(Item::Resource(Resource::Energy), 40);
    let req = Requirement::Combat(vec![
        (Enemy::Lizard, 3),
    ]);
    c.bench_function("short combat", |b| b.iter(|| req.is_met(&player, &player.max_orbs())));
    let req = Requirement::Combat(vec![
        (Enemy::Mantis, 2),
        (Enemy::Lizard, 2),
        (Enemy::EnergyRefill, 4),
        (Enemy::SneezeSlug, 2),
        (Enemy::Mantis, 1),
        (Enemy::Skeeto, 1),
        (Enemy::EnergyRefill, 4),
        (Enemy::SmallSkeeto, 7),
        (Enemy::Skeeto, 2),
        (Enemy::EnergyRefill, 4),
        (Enemy::Lizard, 2),
        (Enemy::Mantis, 2),
    ]);
    c.bench_function("long combat", |b| b.iter(|| req.is_met(&player, &player.max_orbs())));
}

fn reach_checking(c: &mut Criterion) {
    let graph = &parse_logic(&PathBuf::from("C:\\moon\\areas.wotw"), &PathBuf::from("C:\\moon\\loc_data.csv"), &[Pathset::Moki], false);
    c.bench_function("short reach check", |b| b.iter(|| {
        let mut player: Player = Default::default();
        player.grant(Item::Resource(Resource::Health), 40);
        player.grant(Item::Resource(Resource::Energy), 40);
        player.grant(Item::Resource(Resource::Keystone), 34);
        player.grant(Item::Resource(Resource::Ore), 40);
        player.grant(Item::Resource(Resource::SpiritLight), 10000);
        player.grant(Item::Resource(Resource::ShardSlot), 8);
        player.grant(Item::Skill(Skill::Sword), 8);
        player.grant(Item::Skill(Skill::DoubleJump), 8);
        player.grant(Item::Skill(Skill::Dash), 8);
        let mut world = World {
            graph,
            player,
        };
        world.reached_locations("MarshSpawn.Main").unwrap();
    }));
    c.bench_function("long reach check", |b| b.iter(|| {
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
        world.reached_locations("MarshSpawn.Main").unwrap();
    }));
}

criterion_group!(benches, parsing, requirements, reach_checking);
criterion_main!(benches);
