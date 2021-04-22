use criterion::{criterion_group, criterion_main, Criterion};

use std::path::PathBuf;

use rustc_hash::FxHashSet;
use rand::prelude::*;
use rand::distributions::Uniform;

use seedgen::*;
use lexer::*;
use world::*;
use requirements::*;
use player::*;
use pool::*;
use inventory::*;
use util::*;
use settings::*;

fn parsing(c: &mut Criterion) {
    let areas = PathBuf::from("areas.wotw");
    let locations = PathBuf::from("loc_data.csv");
    let states = PathBuf::from("state_data.csv");

    c.bench_function("tokenize", |b| b.iter(|| tokenizer::tokenize(&areas)));
    let tokens = tokenizer::tokenize(&areas).unwrap();

    c.bench_function("parse areas", |b| b.iter(|| parser::parse_areas(&tokens)));
    let (areas, metadata) = match parser::parse_areas(&tokens) {
        Ok(areas) => areas,
        _ => panic!(),
    };

    c.bench_function("parse locations", |b| b.iter(|| parser::parse_locations(&locations, false)));
    let locations = parser::parse_locations(&locations, false).unwrap();

    c.bench_function("parse states", |b| b.iter(|| parser::parse_states(&states, false)));
    let states = parser::parse_states(&states, false).unwrap();

    c.bench_function("emit", |b| b.iter(|| emitter::emit(&areas, &metadata, &locations, &states, &vec![Pathset::Moki, Pathset::Gorlek, Pathset::Glitch, Pathset::Unsafe], false)));
}

fn requirements(c: &mut Criterion) {
    let mut player = Player {
        unsafe_paths: true,
        ..Player::default()
    };
    let states = FxHashSet::default();

    let req_a = Requirement::EnergySkill(Skill::Blaze, 2.0);
    let req_b = Requirement::Damage(20.0);
    let req_c = Requirement::EnergySkill(Skill::Blaze, 1.0);
    let req_d = Requirement::Damage(10.0);
    player.inventory.grant(Item::Skill(Skill::Blaze), 1);
    player.inventory.grant(Item::Resource(Resource::Energy), 4);
    player.inventory.grant(Item::Resource(Resource::Health), 4);
    let req = Requirement::And(vec![Requirement::Or(vec![req_a.clone(), req_d.clone()]), Requirement::Or(vec![req_b.clone(), req_c.clone()]), Requirement::Or(vec![req_a.clone(), req_d.clone()]), Requirement::Or(vec![req_b.clone(), req_c.clone()])]);
    c.bench_function("nested ands and ors", |b| b.iter(|| req.is_met(&player, &states, player.max_orbs())));

    player = Player::default();
    player.inventory.grant(Item::Skill(Skill::Bow), 1);
    player.inventory.grant(Item::Resource(Resource::Energy), 40);
    let req = Requirement::Combat(vec![
        (Enemy::Lizard, 3),
    ]);
    c.bench_function("short combat", |b| b.iter(|| req.is_met(&player, &states, player.max_orbs())));
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
    c.bench_function("long combat", |b| b.iter(|| req.is_met(&player, &states, player.max_orbs())));
}

fn reach_checking(c: &mut Criterion) {
    let graph = parse_logic(&PathBuf::from("areas.wotw"), &PathBuf::from("loc_data.csv"), &PathBuf::from("state_data.csv"), &[Pathset::Moki], false).unwrap();
    c.bench_function("short reach check", |b| b.iter(|| {
        let mut player = Player::default();
        player.inventory.grant(Item::Resource(Resource::Health), 40);
        player.inventory.grant(Item::Resource(Resource::Energy), 40);
        player.inventory.grant(Item::Resource(Resource::Keystone), 34);
        player.inventory.grant(Item::Resource(Resource::Ore), 40);
        player.inventory.grant(Item::SpiritLight(1), 10000);
        player.inventory.grant(Item::Resource(Resource::ShardSlot), 8);
        player.inventory.grant(Item::Skill(Skill::Sword), 1);
        player.inventory.grant(Item::Skill(Skill::DoubleJump), 1);
        player.inventory.grant(Item::Skill(Skill::Dash), 1);
        let world = World::new(&graph);
        world.graph.reached_locations(&world.player, "MarshSpawn.Main", &world.uber_states).unwrap();
    }));
    c.bench_function("long reach check", |b| b.iter(|| {
        let mut world = World::new(&graph);
        world.player.inventory = Pool::preset(&[Pathset::Moki]).progressions;
        world.player.inventory.grant(Item::SpiritLight(1), 10000);
        world.graph.reached_locations(&world.player, "MarshSpawn.Main", &world.uber_states).unwrap();
    }));
}

fn generation(c: &mut Criterion) {
    seedgen::initialize_log(true, log::LevelFilter::Off).unwrap();

    let graph = parse_logic(&PathBuf::from("areas.wotw"), &PathBuf::from("loc_data.csv"), &PathBuf::from("state_data.csv"), &[Pathset::Moki], false).unwrap();
    let settings = Settings::default();

    c.bench_function("seed generation", |b| b.iter(|| {
        let mut generated_seed = String::new();
        let numeric = Uniform::from('0'..='9');
        let mut rng = rand::thread_rng();
        for _ in 0..16 {
            generated_seed.push(numeric.sample(&mut rng));
        }

        match seedgen::generate_seed(&graph, &settings, &vec![], &generated_seed) {
            Ok(_) => log::info!("Generated seed"),
            Err(err) => log::error!("Generation failed! ({})", err),
        }
    }));
}

criterion_group!(all, parsing, requirements, reach_checking, generation);
criterion_group!(only_parsing, parsing);
criterion_group!(only_requirements, requirements);
criterion_group!(only_reach_checking, reach_checking);
criterion_group!(only_generation, generation);
criterion_main!(only_generation);  // put any of the group names in here
