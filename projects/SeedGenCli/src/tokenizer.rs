use std::{fs, io, path::PathBuf};

#[derive(Debug)]
pub enum TokenType {
    Whitespace,
    Definition,
    Anchor,
    Position,
    Indent,
    Dedent,
    Newline,
    Refill,
    State,
    Quest,
    Pickup,
    Connection,
    Requirement,
    Group,
    And,
    Or,
}
#[derive(Debug)]
pub struct Token {
    pub name: TokenType,
    pub value: String,
    pub line: usize,
    pub position: usize,
}
struct TokenContext {
    line: usize,
    position: usize,
    indent_stack: Vec<usize>,
}

fn skip_whitespace(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    if !input.starts_with(|c: char| c.is_whitespace() || c == '#') {
        return None;
    }

    let mut comment = false;
    let mut index = input.len();
    let mut last_newline = 0;
    let mut newlines = 0;
    for (i, c) in input.chars().enumerate() {
        if c == '\n' {
            last_newline = i + 1;
            comment = false;
            newlines += 1;
        } else if comment {
            continue;
        } else if c == '#' {
            comment = true;
        } else if !c.is_whitespace() {
            if last_newline == 0 {
                index = i;
            } else {
                index = last_newline - 1;
            }
            break;
        }
    }
    let input = &input[..index];
    if input.is_empty() {
        return None;
    }
    if newlines > 0 {
        context.line += newlines - 1;
    }
    Some((
        input.len(),
        Token {
            name: TokenType::Whitespace,
            value: String::new(),
            line: 0,
            position: 0,
        }
    ))
}

fn tokenize_indent(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    if !input.starts_with('\n') {
        return None;
    }
    let mut newlines = 1;
    let mut depth = 0;
    while input[1 + depth..].starts_with(' ') {
        depth += 1;
    }
    let name;
    let mut consumed = 1 + depth;
    let last_indent = context.indent_stack.last()?;
    if last_indent < &depth {
        context.indent_stack.push(depth);
        name = TokenType::Indent;
    } else if last_indent == &depth {
        name = TokenType::Newline;
    } else {
        context.indent_stack.pop();
        name = TokenType::Dedent;
        let last_indent = context.indent_stack.last()?;
        if last_indent > &depth {
            consumed = 0;
            newlines = 0;
        } else if last_indent < &depth {
            // well whatever
            return None;
        }
    }
    context.line += newlines;
    Some((
        consumed,
        Token {
            name,
            value: String::new(),
            line: context.line,
            position: context.position,
        }
    ))
}

fn tokenize_identifier(input: &str, context: &mut TokenContext, keyword: &str, name: TokenType) -> Option<(usize, Token)> {
    if !input.starts_with(keyword) {
        return None;
    }
    let identifier = &input[keyword.len()..];
    let delimiter = identifier.find(|c: char| char::is_whitespace(c) || c == ':' || c == '#')?;
    let mut consume_colon = 0;
    if identifier.bytes().nth(delimiter)? == b':' {
        consume_colon = 1;
    }
    let identifier = &identifier[..delimiter];
    Some((
        keyword.len() + identifier.len() + consume_colon,
        Token {
            name,
            value: identifier.to_string(),
            line: context.line,
            position: context.position,
        },
    ))
}
fn tokenize_definition(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    tokenize_identifier(input, context, "requirement ", TokenType::Definition)
}
fn tokenize_anchor(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    tokenize_identifier(input, context, "anchor ", TokenType::Anchor)
}
fn tokenize_refill(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    tokenize_identifier(input, context, "refill ", TokenType::Refill)
}
fn tokenize_state(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    tokenize_identifier(input, context, "state ", TokenType::State)
}
fn tokenize_quest(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    tokenize_identifier(input, context, "quest ", TokenType::Quest)
}
fn tokenize_pickup(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    tokenize_identifier(input, context, "pickup ", TokenType::Pickup)
}
fn tokenize_connection(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    tokenize_identifier(input, context, "conn ", TokenType::Connection)
}

fn tokenize_position(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    if !input.starts_with("at ") {
        return None;
    }
    let input = &input[..input.find(':')?];
    let mut coords = input[3..].split(',');
    let x = &coords.next()?.trim();
    let y = &coords.next()?.trim();
    if coords.next().is_some() {
        return None;
    }
    Some((
        input.len() + 1,
        Token {
            name: TokenType::Position,
            value: format!("{},{}", x, y),
            line: context.line,
            position: context.position,
        }
    ))
}

fn tokenize_group(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    if !input.starts_with(':') {
        return None;
    }
    Some((
        1,
        Token {
            name: TokenType::Group,
            value: String::new(),
            line: context.line,
            position: context.position,
        }
    ))
}
fn tokenize_and(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    if !input.starts_with(',') {
        return None;
    }
    Some((
        1,
        Token {
            name: TokenType::And,
            value: String::new(),
            line: context.line,
            position: context.position,
        }
    ))
}
fn tokenize_or(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    if !input.starts_with("OR ") {
        return None;
    }
    Some((
        3,
        Token {
            name: TokenType::Or,
            value: String::new(),
            line: context.line,
            position: context.position,
        }
    ))
}

fn tokenize_requirement(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    let delimiter = input.find(|c: char| c.is_whitespace() || c == ',' || c == ':' || c == '#')?;
    if delimiter == 0 {
        return None;
    }
    Some((
        delimiter,
        Token {
            name: TokenType::Requirement,
            value: input[..delimiter].to_string(),
            line: context.line,
            position: context.position,
        }
    ))
}

pub fn tokenize(areas: &PathBuf) -> Result<Vec<Token>, io::Error> {
    // could optimize some here by choosing the order more deliberately
    let tokenizers = [
        skip_whitespace,
        tokenize_indent,
        tokenize_definition,
        tokenize_anchor,
        tokenize_position,
        tokenize_refill,
        tokenize_state,
        tokenize_quest,
        tokenize_pickup,
        tokenize_connection,
        tokenize_group,
        tokenize_and,
        tokenize_or,
        tokenize_requirement,
    ];

    let input = fs::read_to_string(areas)?;
    let length = input.len();
    let mut tokens = Vec::<Token>::new();

    let mut context = TokenContext {
        line: 1,
        position: 0,
        indent_stack: vec![0],
    };

    while context.position < length {
        let mut tokenized = false;
        for tokenizer in &tokenizers {
            if let Some((consumed, token)) = tokenizer(&input[context.position..], &mut context) {
                context.position += consumed;
                match token.name {
                    TokenType::Whitespace => {},
                    _ => tokens.push(token),
                }
                tokenized = true;
                break;
            }
        }
        if !tokenized {
            let mut failed = &input[context.position..];
            if let Some(index) = failed[1..].find('\n') {
                failed = &failed[..index - 1];
            }
            return Err(io::Error::new(io::ErrorKind::InvalidData, format!("Failed to read line {} from {:?} (this is most likely due to a wrong indent): {}", context.line + 1, areas, failed)));
        }
    }
    Ok(tokens)
}
