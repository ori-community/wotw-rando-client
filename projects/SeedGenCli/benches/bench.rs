use criterion::{criterion_group, criterion_main, Criterion};

use std::path::PathBuf;

use seed_gen_cli::*;
use util::Pathset;

fn bench_parsing(c: &mut Criterion) {
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

    c.bench_function("emit", |b| b.iter(|| emitter::emit(&areas, &metadata, &locations, vec![Pathset::Moki, Pathset::Gorlek, Pathset::Glitch, Pathset::Unsafe], false)));
}

criterion_group!(benches, bench_parsing);
criterion_main!(benches);
