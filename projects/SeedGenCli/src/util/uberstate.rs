use std::fmt;

#[derive(Debug, PartialEq, Eq, Hash, Clone, PartialOrd, Ord)]
pub struct UberIdentifier {
    pub uber_group: u16,
    pub uber_id: u16,
}
impl UberIdentifier {
    pub fn from_parts(group: &str, id: &str) -> Result<UberIdentifier, String> {
        let uber_group: u16 = group.parse().map_err(|_| format!("invalid uber group {}", group))?;
        let uber_id: u16 = id.parse().map_err(|_| format!("invalid uber id {}", id))?;
        Ok(UberIdentifier {
            uber_group,
            uber_id,
        })
    }
}
impl fmt::Display for UberIdentifier {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        write!(f, "{}|{}", self.uber_group, self.uber_id)
    }
}

#[derive(Debug, PartialEq, Eq, Hash, Clone, PartialOrd, Ord)]
pub struct UberState {
    pub identifier: UberIdentifier,
    pub value: String,
}
impl UberState {
    pub fn from_parts(group: &str, id: &str) -> Result<UberState, String> {
        let uber_group: u16 = group.parse().map_err(|_| format!("invalid uber group {}", group))?;
        let mut id_parts = id.splitn(2, '=');
        let uber_id: u16 = id_parts.next().unwrap().parse().map_err(|_| format!("invalid uber id {}", id))?;
        let value = id_parts.next().unwrap_or("");
        Ok(UberState {
            identifier: UberIdentifier {
                uber_group,
                uber_id,
            },
            value: value.to_string(),
        })
    }
    pub fn from_str(uber_state: &str) -> Result<UberState, String> {
        let mut parts = uber_state.split(&['|', ','][..]);
        let uber_group = parts.next().ok_or_else(|| String::from("expected uber group"))?;
        let uber_id = parts.next().ok_or_else(|| String::from("expected uber id"))?;
        if parts.next().is_some() { return Err(String::from("expected only two parts")); }

        UberState::from_parts(uber_group, uber_id)
    }

    #[inline]
    pub fn spawn() -> UberState {
        UberState {
            identifier: UberIdentifier {
                uber_group: 3,
                uber_id: 0,
            },
            value: String::new(),
        }
    }
    #[inline]
    pub fn load() -> UberState {
        UberState {
            identifier: UberIdentifier {
                uber_group: 3,
                uber_id: 1,
            },
            value: String::new(),
        }
    }

    pub fn is_shop(&self) -> bool {
        self.identifier.uber_group == 1 ||
        self.identifier.uber_group == 2 ||
        self.identifier.uber_group == 48248 && (
            self.identifier.uber_id == 19396 ||
            self.identifier.uber_id == 57987 ||
            self.identifier.uber_id == 41666
        )
    }
}
impl fmt::Display for UberState {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        if self.value.is_empty() {
            write!(f, "{}", self.identifier)
        } else {
            write!(f, "{}={}", self.identifier, self.value)
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn uber_states() {
        let uber_state = UberState::from_parts("25432", "7854").unwrap();
        assert_eq!(format!("{}", uber_state), "25432|7854");
        let uber_state = UberState::from_parts("25432", "65195=11").unwrap();
        assert_eq!(format!("{}", uber_state), "25432|65195=11");
        assert!(UberState::from_parts("", "3").is_err());
        assert!(UberState::from_parts("a", "3").is_err());
    }
}
