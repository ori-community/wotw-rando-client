pub mod parser;

use std::{
    fs,
    io::{BufRead, BufReader},
    path::{Path, PathBuf},
};

use ansi_term::{Style, Colour};

use crate::util::{
    self,
    constants::{HEADER_INDENT, NAME_COLOUR, UBERSTATE_COLOUR},
};

fn is_preset(header: &str) -> bool {
    for line in header.lines() {
        let line = line.trim();

        if !(line.is_empty() || line.starts_with("#") || line.starts_with("//") || line.starts_with("!!include ")) {
            return false;
        }
    }

    true
}

fn is_hidden(header: &Path) -> Result<bool, String> {
    let file = fs::File::open(header).map_err(|err| format!("Failed to open header from {:?}: {}", header, err))?;
    let mut file = BufReader::new(file);

    let mut line = String::new();
    file.read_line(&mut line).map_err(|err| format!("Failed to read header from {:?}: {}", header, err))?;

    Ok(line.trim() == "#hide")
}

fn headers_in_directory(directory: &Path) -> Result<Vec<PathBuf>, String> {
    Ok(fs::read_dir(directory).map_err(|err| format!("Failed to read directory {:?}: {}", directory, err))?
        .filter_map(|entry| {
            if let Ok(entry) = entry {
                let path = entry.path();
                if let Some(extension) = path.extension() {
                    if extension.to_string_lossy() == "wotwrh" {
                        return Some(path);
                    }
                }
            }
            None
        })
        .collect())
}

fn find_headers(show_hidden: bool) -> Result<Vec<PathBuf>, String> {
    let mut headers = headers_in_directory(Path::new("."))?;
    if let Ok(mut more) = headers_in_directory(Path::new("./headers")) {
        headers.append(&mut more);
    }

    if !show_hidden {
        headers = headers.iter()
            .map(|header| is_hidden(header).map(|hidden| if hidden { None } else { Some(header) }))
            .collect::<Result<Vec<_>, _>>()?
            .iter()
            .filter_map(|&header| header)
            .cloned()
            .collect::<Vec<_>>();
    }

    Ok(headers)
}

fn find_presets() -> Result<Vec<PathBuf>, String> {
    let headers = find_headers(false)?;
    let presets = headers.into_iter()
        .map(|header| {
            util::read_file(&header, "headers").map(|contents| {
                if is_preset(&contents) {
                    return Some(header);
                }
                None
            })
        })
        .collect::<Result<Vec<_>, _>>()?
        .into_iter()
        .filter_map(|header| header)
        .collect::<Vec<_>>();
    Ok(presets)
}

fn summarize_headers(headers: &[PathBuf]) -> Result<String, String> {
    let mut output = String::new();

    for header in headers {
        let mut name = header.file_stem().unwrap().to_string_lossy().into_owned();
        let header = fs::read_to_string(header).map_err(|err| format!("Error reading header from {:?}: {}", header, err))?;

        let mut description = "no description";

        for line in header.lines() {
            if let Some(desc) = line.trim_start().strip_prefix("///") {
                let desc = desc.trim();
                if desc.is_empty() {
                    continue;
                }
                if description == "no description" {
                    description = desc;
                } else {
                    description = desc;
                    break;
                }
            }
        }

        util::add_trailing_spaces(&mut name, HEADER_INDENT);

        output += &format!("{}  {}\n", NAME_COLOUR.paint(name), description);
    }

    Ok(output)
}

pub fn list() -> Result<(), String> {
    let mut output = String::new();

    let mut headers = find_headers(false)?;

    if headers.is_empty() {
        println!("No headers found. Try moving into the script directory");
        return Ok(());
    }

    let mut presets = Vec::new();

    headers.retain(|header| {
        util::read_file(&header, "headers").map_or(false, |contents| {
            if is_preset(&contents) {
                presets.push(header.clone());
                return false;
            }
            true
        })
    });

    let presets_length = presets.len();
    output += &format!("{}", Style::new().fg(Colour::Green).bold().paint(format!("{} preset{} found\n\n", presets_length, if presets_length == 1 { "" } else { "s" })));

    output += &summarize_headers(&presets)?;
    output.push('\n');

    let headers_length = headers.len();
    output += &format!("{}", Style::new().fg(Colour::Green).bold().paint(format!("{} header{} found\n\n", headers_length, if headers_length == 1 { "" } else { "s" })));

    output += &summarize_headers(&headers)?;
    output.push('\n');

    output += "Use 'headers <name>...' for details about one or more headers or 'headers presets' to manage your personal presets";

    println!("{}", output);
    Ok(())
}

pub fn list_presets() -> Result<(), String> {
    let mut output = String::new();

    let presets = find_presets()?;

    let length = presets.len();
    output += &format!("{} preset{} found\n\n", length, if length == 1 { "" } else { "s" });

    output += &summarize_headers(&presets)?;

    output += "\nUse 'headers presets create' and 'headers presets remove' to manage your presets";

    println!("{}", output);
    Ok(())
}

pub fn inspect(headers: Vec<PathBuf>) -> Result<(), String> {
    let mut output = String::new();

    let hint = if headers.len() == 1 {
        let name = headers[0].file_stem().unwrap().to_string_lossy();
        format!("Use 'headers presets create {} ...' to add this and other headers to a preset", NAME_COLOUR.paint(name))
    } else {
        let mut arguments = headers.iter().fold(String::new(), |acc, header|
            format!("{}{} ", acc, header.file_stem().unwrap().to_string_lossy())
        );
        arguments.pop();

        format!("Use 'headers presets create {}' to add these headers to a preset", NAME_COLOUR.paint(arguments))
    };

    for mut header in headers {
        header.set_extension("wotwrh");
        let name = header.file_stem().unwrap().to_string_lossy();

        let contents = util::read_file(&header, "headers")?;

        let mut description = NAME_COLOUR.paint(format!("{} {}:\n", name, if is_preset(&contents) { "preset" } else { "header" })).to_string();

        for line in contents.lines() {
            if let Some(desc) = line.trim_start().strip_prefix("///") {
                description.push_str(desc.trim());
                description.push('\n');
            }
        }

        if description.is_empty() {
            output += &Style::new().italic().paint("No description provided\n");
        } else {
            output += &description;
            output.push('\n');
        }
    }

    output += &hint;
    println!("{}", output);
    Ok(())
}

pub fn validate() -> Result<(), String> {
    let mut output = String::new();

    let headers = find_headers(true)?;
    let mut occupation_map = Vec::new();

    let length = headers.len();
    output += &format!("{}", Style::new().italic().paint(format!("validating {} header{}\n", length, if length == 1 { "" } else { "s" })));

    let mut passed = Vec::new();
    let mut failed = Vec::new();

    for header in headers {
        let mut name = header.file_stem().unwrap().to_string_lossy().into_owned();

        let contents = util::read_file(&header, "headers")?;

        match parser::validate_header(&contents) {
            Ok(occupied) => {
                occupation_map.push((name, occupied));
            },
            Err(err) => {
                util::add_trailing_spaces(&mut name, HEADER_INDENT);
                failed.push(format!("{}{}\n", NAME_COLOUR.paint(name), err))
            },
        }
    }

    for index in 0..occupation_map.len() {
        let (name, occupied) = &occupation_map[index];
        let mut collision_message = String::new();

        for uber_state in occupied {
            for (other_name, other_occupied) in &occupation_map {
                if name == other_name {
                    continue;
                }
                if let Some(collision) = other_occupied.iter().find(|&other| {
                    let generic = uber_state.value.is_empty() || other.value.is_empty();
                    uber_state == other || (generic && uber_state.identifier == other.identifier)
                }) {
                    collision_message = format!("Collision between used state {} and {} using {}",
                        UBERSTATE_COLOUR.paint(format!("{}", uber_state)),
                        NAME_COLOUR.paint(other_name),
                        UBERSTATE_COLOUR.paint(format!("{}", collision))
                    );
                    break;
                }
            }
            if !collision_message.is_empty() { break; }
        }

        if collision_message.is_empty() {
            let mut occupied_summary = String::new();
            let mut last_value = i32::MIN;
            let mut range = false;

            for uber_state in occupied {
                if let Ok(value) = uber_state.value.parse::<i32>() {
                    if value == last_value + 1 {
                        range = true;
                    } else if range {
                        for _ in 0..2 { occupied_summary.pop(); }
                        occupied_summary += &format!("{}, ", UBERSTATE_COLOUR.paint(format!("..{}", last_value)));
                        range = false;
                    }
                    last_value = value;
                    if range {
                        continue;
                    }
                } else if range {
                    for _ in 0..2 { occupied_summary.pop(); }
                    occupied_summary += &format!("{}, ", UBERSTATE_COLOUR.paint(format!("..{}", last_value)));
                    range = false;
                }

                occupied_summary += &format!("{}, ", UBERSTATE_COLOUR.paint(format!("{}", uber_state)));
            }

            for _ in 0..2 { occupied_summary.pop(); }

            if range {
                occupied_summary += &format!("{}", UBERSTATE_COLOUR.paint(format!("..{}", last_value)));
            }

            let mut name = name.clone();
            util::add_trailing_spaces(&mut name, HEADER_INDENT);

            if occupied_summary.is_empty() {
                passed.push(format!("{}--\n", NAME_COLOUR.paint(name)));
            } else {
                passed.push(format!("{}uses {}\n", NAME_COLOUR.paint(name), occupied_summary));
            }
        } else {
            let mut name = name.clone();
            util::add_trailing_spaces(&mut name, HEADER_INDENT);
            failed.push(format!("{}{}\n", NAME_COLOUR.paint(name), collision_message));
        }
    }

    let failed_length = failed.len();
    if failed_length > 0 {
        output += &format!("{}", Colour::Red.paint(format!("\n{}/{} failed\n", failed_length, length)));

        for failed in failed {
            output += &failed;
        }
    }
    let passed_length = passed.len();
    if passed_length > 0 {
        output += &format!("{}", Colour::Green.paint(format!("\n{}/{} passed\n", passed_length, length)));

        for passed in passed {
            output += &passed;
        }
    }

    println!("{}", output);
    Ok(())
}

pub fn create_preset(mut name: PathBuf, headers: Vec<String>) -> Result<(), String> {
    let mut contents = String::new();

    let existing = find_headers(true)?;

    for header in &headers {
        contents.push_str(&format!("/// {}\n", header));
    }

    for header in headers {
        if !existing.iter().any(|h| h.file_stem().unwrap().to_string_lossy() == header) { return Err(format!("Couldn't find header {}", header)); }
        contents.push_str(&format!("!!include {}\n", header));
    }

    name.set_extension("wotwrh");

    let name = util::create_new_file(&name, &contents, "headers")?;

    println!("Created preset {}", name.display());
    Ok(())
}

pub fn remove_preset(name: &str) -> Result<(), String> {
    let mut output = String::new();

    let presets: Vec<_> = find_presets()?;

    let mut removed = false;
    for preset in presets {
        let current = preset.file_stem().unwrap().to_string_lossy();
        if current == name {
            fs::remove_file(preset).map_err(|err| format!("Failed to remove preset: {}", err))?;
            output += &format!("Removed {}", name);
            removed = true;
        }
    }
    if !removed {
        return Err(format!("Couldn't find a preset called {}", name))
    }

    println!("{}", output);
    Ok(())
}
