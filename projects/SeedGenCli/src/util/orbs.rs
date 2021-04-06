use std::ops::{Add, AddAssign};

#[derive(Debug, Default, PartialEq, Clone, Copy)]
pub struct Orbs {
    pub health: f32,
    pub energy: f32,
}
impl Add for Orbs {
    type Output = Orbs;
    fn add(self, other: Orbs) -> Orbs {
        Orbs {
            health: self.health + other.health,
            energy: self.energy + other.energy,
        }
    }
}
impl AddAssign for Orbs {
    fn add_assign(&mut self, other: Orbs) {
        *self = *self + other;
    }
}

pub fn either(a: &[Orbs], b: &[Orbs]) -> Vec<Orbs> {
    if b.is_empty() || a.is_empty() {
        vec![Orbs::default()]
    } else {
        let mut sum = a.to_vec();
        for b_ in b {
            let mut used = false;
            for a_ in &mut sum {
                if b_.energy >= a_.energy && b_.health >= a_.health {
                    *a_ = *b_;
                    used = true;
                }
            }
            if !used && sum.iter().all(|a_| a_.energy < b_.energy) || sum.iter().all(|a_| a_.health < b_.health) {
                sum.push(*b_);
            }
        }
        sum
    }
}
pub fn either_single(a: &[Orbs], b: Orbs) -> Vec<Orbs> {
    if a.is_empty() {
        vec![Orbs::default()]
    } else {
        let mut sum = a.to_vec();
        let mut used = false;
        for a_ in &mut sum {
            if b.energy >= a_.energy && b.health >= a_.health {
                *a_ = b;
                used = true;
            }
        }
        if !used && sum.iter().all(|a_| a_.energy < b.energy) || sum.iter().all(|a_| a_.health < b.health) {
            sum.push(b);
        }
        sum
    }
}
pub fn both(a: &[Orbs], b: &[Orbs]) -> Vec<Orbs> {
    if b.is_empty() {
        a.to_vec()
    } else if a.is_empty() {
        b.to_vec()
    } else {
        let mut product = Vec::<Orbs>::with_capacity(a.len());
        for a_ in a {
            for b_ in b {
                let orbs = *a_ + *b_;
                if !product.contains(&orbs) {
                    product.push(orbs);
                }
            }
        }
        product.clone().into_iter().filter(|orbs| {
            !product.iter().any(|other| other.energy > orbs.energy && other.health >= orbs.health || other.energy >= orbs.energy && other.health > orbs.health)
        }).collect()
    }
}
pub fn both_single(a: &[Orbs], b: Orbs) -> Vec<Orbs> {
    if a.is_empty() {
        vec![b]
    } else {
        let mut product = Vec::<Orbs>::with_capacity(a.len());
        for a_ in a {
            let orbs = *a_ + b;
            if !product.contains(&orbs) {
                product.push(orbs);
            }
        }
        product.clone().into_iter().filter(|orbs| {
            !product.iter().any(|other| other.energy > orbs.energy && other.health >= orbs.health || other.energy >= orbs.energy && other.health > orbs.health)
        }).collect()
    }
}

#[cfg(test)]
mod tests {
    use super::*;
    
    #[test]
    fn orb_tools() {
        let orbs = Orbs::default();
        let a = vec![Orbs { energy: 2.0, ..orbs }];
        let b = vec![Orbs { health: 30.0, ..orbs }];
        assert_eq!(either(&a, &b), vec![Orbs { energy: 2.0, ..orbs }, Orbs { health: 30.0, ..orbs }]);
        assert_eq!(both(&a, &b), vec![Orbs { health: 30.0, energy: 2.0 }]);
        let a = vec![Orbs { energy: 3.0, health: 10.0 }, Orbs { health: 20.0, ..orbs }];
        assert_eq!(either(&a, &b), vec![Orbs { energy: 3.0, health: 10.0 }, Orbs { health: 30.0, ..orbs }]);
        assert_eq!(both(&a, &b), vec![Orbs { health: 40.0, energy: 3.0 }, Orbs { health: 50.0, ..orbs }]);
        let a = vec![Orbs { energy: 30.0, health: 100.0 }, Orbs { health: 200.0, energy: 10.0 }];
        let b = vec![Orbs { energy: -10.0, ..orbs }, Orbs { energy: -3.0, health: -50.0 }, Orbs { health: -10.0, energy: -5.0 }, Orbs { health: -20.0, energy: -4.0 }];
        assert_eq!(both(&a, &b), vec![Orbs { health: 100.0, energy: 20.0 }, Orbs { health: 50.0, energy: 27.0 }, Orbs { health: 90.0, energy: 25.0 }, Orbs { health: 80.0, energy: 26.0 }, Orbs { health: 200.0, energy: 0.0 }, Orbs { health: 150.0, energy: 7.0 }, Orbs { health: 190.0, energy: 5.0 }, Orbs { health: 180.0, energy: 6.0 }]);
        let a = vec![Orbs { energy: 2.0, ..orbs }];
        let b = vec![];
        assert_eq!(either(&a, &b), vec![Orbs { ..orbs }]);
        assert_eq!(either(&b, &a), vec![Orbs { ..orbs }]);
        assert_eq!(both(&a, &b), vec![Orbs { energy: 2.0, ..orbs }]);
        assert_eq!(both(&b, &a), vec![Orbs { energy: 2.0, ..orbs }]);
    }
}