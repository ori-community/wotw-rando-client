use std::{io, cmp::Ordering, path::Path};

use smallvec::{SmallVec, smallvec};

use crate::util;

#[derive(Debug, Copy, Clone, PartialEq)]
pub enum TokenType {
    Whitespace,
    Definition,
    Region,
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
    Free,
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
    indent_stack: SmallVec<[usize; 8]>,
}

#[inline]
fn skip_whitespace(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    if !input.starts_with(|c: char| c.is_whitespace() || c == '#') {
        return None;
    }

    let mut comment = false;
    let mut index = input.len();
    let mut last_newline = 0;
    let mut newlines = 0;
    for (i, c) in input.bytes().enumerate() {
        if c == b'\n' {
            last_newline = i + 1;
            comment = false;
            newlines += 1;
        } else if comment {
            continue;
        } else if c == b'#' {
            comment = true;
        } else if !(c as char).is_whitespace() {
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

#[inline]
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
    match context.indent_stack.last()?.cmp(&depth) {
        Ordering::Greater => {
            context.indent_stack.pop();
            name = TokenType::Dedent;
            match context.indent_stack.last()?.cmp(&depth) {
                Ordering::Greater => {
                    consumed = 0;
                    newlines = 0;
                }
                Ordering::Less => {
                    // well whatever
                    return None;
                }
                Ordering::Equal => {}
            }
        },
        Ordering::Less => {
            context.indent_stack.push(depth);
            name = TokenType::Indent;
        },
        Ordering::Equal => name = TokenType::Newline,
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
    let delimiter = identifier.find(|c: char| c.is_whitespace() || c == ':' || c == '#')?;
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
#[inline]
fn tokenize_definition(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    tokenize_identifier(input, context, "requirement ", TokenType::Definition)
}
#[inline]
fn tokenize_region(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    tokenize_identifier(input, context, "region ", TokenType::Region)
}
#[inline]
fn tokenize_anchor(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    tokenize_identifier(input, context, "anchor ", TokenType::Anchor)
}
#[inline]
fn tokenize_refill(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    tokenize_identifier(input, context, "refill ", TokenType::Refill)
}
#[inline]
fn tokenize_state(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    tokenize_identifier(input, context, "state ", TokenType::State)
}
#[inline]
fn tokenize_quest(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    tokenize_identifier(input, context, "quest ", TokenType::Quest)
}
#[inline]
fn tokenize_pickup(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    tokenize_identifier(input, context, "pickup ", TokenType::Pickup)
}
#[inline]
fn tokenize_connection(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    tokenize_identifier(input, context, "conn ", TokenType::Connection)
}

#[inline]
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

#[inline]
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
#[inline]
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
#[inline]
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

#[inline]
fn tokenize_requirement(input: &str, context: &mut TokenContext) -> Option<(usize, Token)> {
    let delimiter = input.find(|c: char| c.is_whitespace() || c == ',' || c == ':' || c == '#')?;
    if delimiter == 0 {
        return None;
    }
    let mut name = TokenType::Requirement;
    let value = &input[..delimiter];
    if value == "free" {
        name = TokenType::Free;
    }
    Some((
        delimiter,
        Token {
            name,
            value: value.to_string(),
            line: context.line,
            position: context.position,
        }
    ))
}

pub fn tokenize(areas: &Path) -> Result<Vec<Token>, io::Error> {
    let tokenizers = [
        skip_whitespace,
        tokenize_indent,
        tokenize_and,               // ~7296 occurences
        tokenize_or,                // ~6285 occurences
        tokenize_group,             // ~1874 occurences
        tokenize_connection,        // ~469 occurences
        tokenize_pickup,            // ~402 occurences
        tokenize_refill,            // ~256 occurences
        tokenize_anchor,            // ~212 occurences
        tokenize_position,          // ~189 occurences
        tokenize_state,             // ~125 occurences
        tokenize_quest,             // ~48 occurences
        tokenize_region,            // 20 occurences
        tokenize_definition,        // 2 occurences
        tokenize_requirement,
    ];

    let input = util::read_file(areas, "logic")?;

    let length = input.len();
    let mut tokens = Vec::<Token>::with_capacity(length / 9);

    let mut context = TokenContext {
        line: 1,
        position: 0,
        indent_stack: smallvec![0],
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
            return Err(io::Error::new(io::ErrorKind::InvalidData, format!("Failed to read line {} from {} (this is most likely due to a wrong indent): {}", context.line + 1, areas.display(), failed)));
        }
    }
    while context.indent_stack.len() > 1 {
        context.indent_stack.pop();
        tokens.push(Token {
            name: TokenType::Dedent,
            value: String::new(),
            line: context.line,
            position: context.position,
        });
    }
    Ok(tokens)
}
