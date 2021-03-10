use std::path::PathBuf;
use std::fs::File;
use std::io::{self, Read, BufReader, Error, ErrorKind};
// use std::io::prelude::*;
use std::collections::HashMap;

use structopt::StructOpt;
use bugsalot::debugger;

use seed_gen_cli::*;

use parser::ParseError;
use world::Node;
use util::Pathset;

#[derive(StructOpt)]
struct Arguments {
    #[structopt(long = "validate")]
    validate: bool,
    #[structopt(long = "debug")]
    wait_on_debugger: bool,
    #[structopt(long = "spoilers")]
    spoilers: bool,
    #[structopt(parse(from_os_str), long = "areas")]
    areas: PathBuf,
    #[structopt(parse(from_os_str), long = "locations")]
    locations: PathBuf,
    #[structopt(parse(from_os_str), long = "output")]
    output: PathBuf,
    #[structopt(long = "gen_flags", required = true, min_values = 1)]
    generation_flags: Vec<String>,
    #[structopt(parse(from_os_str), long = "headers")]
    header_paths: Vec<PathBuf>,
    headers: Vec<String>
}

fn read_header() -> String {
    // If we do not have input, skip.
    if atty::is(atty::Stream::Stdin) {
        return String::new();
    }
    
    let stdin = io::stdin();
    let mut stdin = stdin.lock(); // locking is optional
    let mut output = String::new();

    // Could also `match` on the `Result` if you wanted to handle `Err` 
    loop {
        let result = stdin.read_to_string(&mut output);
        match result {
            Ok(n) => {
                if n == 0 {
                    break;
                }

                output += "\n";
            },
            Err(error) => {
                panic!("failed to read standard input ({:?})", error);
            }
        }
    }

    output
}

fn read_header_from_file(path: &PathBuf) -> Result<String, io::Error> {
    let file = File::open(path)?;
    let mut buf_reader = BufReader::new(file);
    let mut contents = String::new();
    buf_reader.read_to_string(&mut contents)?;
    if contents.is_empty() {
        return Err(Error::new(ErrorKind::InvalidData, "Empty header"));
    }

    Ok(contents)
}

fn parse_logic(areas: &PathBuf, locations: &PathBuf, pathsets: &[Pathset], validate: bool) -> HashMap<String, Node> {
    let tokens = match tokenizer::tokenize(areas) {
        Ok(tokens) => tokens,
        Err(error) => panic!("Error parsing areas.wotw: {}", error),
    };

    // let mut file = File::create("tokens.txt").unwrap();
    // for token in &tokens {
    //     let name = format!("{}, {:?} ({}) ", token.line, token.name, token.value);
    //     file.write_all(name.as_bytes()).unwrap();
    // }

    let (areas, metadata) = match parser::parse_areas(&tokens) {
        Ok(areas) => areas,
        Err(error) => {
            let ParseError { description, position } = error;
            panic!("Error parsing areas.wotw: {}: {}", description, util::trace_parse_error(areas, position));
        }
    };

    let locations = match parser::parse_locations(locations, validate) {
        Ok(locations) => locations,
        Err(error) => panic!("Error parsing loc_data.csv: {}", error),
    };

    match emitter::emit(&areas, &metadata, &locations, pathsets, validate) {
        Ok(graph) => graph,
        Err(error) => panic!("Error building the logic: {}", error),
    }
}

fn main() {
    let mut args = Arguments::from_args();
    if args.wait_on_debugger {
        debugger::wait_until_attached(None).expect("state() not implemented on this platform");
    }

    let header = read_header();
    if !header.is_empty() {
        args.headers.push(header)
    }

    for path in args.header_paths {
        match read_header_from_file(&path) {
            Ok(header) => args.headers.push(header),
            Err(error) => println!("Error from {}: {:?}", path.display(), error)
        }
    }

    let mut pathsets = Vec::new();
    for flag in &args.generation_flags {
        match &flag[..] {
            "moki" => pathsets.push(Pathset::Moki),
            "gorlek" => {
                pathsets.push(Pathset::Moki);
                pathsets.push(Pathset::Gorlek);
            },
            "glitch" => pathsets.push(Pathset::Glitch),
            "unsafe" => pathsets.push(Pathset::Unsafe),
            other => println!("Unknown generation flag '{}'", other),
        }
    }

    let areas = parse_logic(&args.areas, &args.locations, &pathsets, args.validate);

    std::fs::write(&args.output, format!("{:#?}", areas)).unwrap();

    // TODO: Generate a seed
}
