use super::{
    Zone, Teleporter,
    uberstate::UberIdentifier,
};
use crate::inventory::Item;

use ansi_term::Colour;

pub const DEFAULT_SPAWN: &str = "MarshSpawn.Main";
pub const TP_ANCHOR: &str = "Teleporters";
pub const MOKI_SPAWNS: &[&str] = &[
    "MarshSpawn.Main",
    "HowlsDen.Teleporter",
    "GladesTown.Teleporter",
    "InnerWellspring.Teleporter",
    "MidnightBurrows.Teleporter",
];
pub const GORLEK_SPAWNS: &[&str] = &[
    "MarshSpawn.Main",
    "HowlsDen.Teleporter",
    "EastHollow.Teleporter",
    "GladesTown.Teleporter",
    "InnerWellspring.Teleporter",
    "MidnightBurrows.Teleporter",
    "WoodsEntry.Teleporter",
    "WoodsMain.Teleporter",
    "LowerReach.Teleporter",
    "UpperDepths.Teleporter",
    "EastPools.Teleporter",
    "LowerWastes.WestTP",
    "LowerWastes.EastTP",
];
pub const SPAWN_GRANTS: &[(&str, Item)] = &[
    ("EastPools.Teleporter", Item::Teleporter(Teleporter::EastLuma)),
];
pub const RELIC_ZONES: &[Zone] = &[
    Zone::Marsh,
    Zone::Burrows,
    Zone::Hollow,
    Zone::Glades,
    Zone::Wellspring,
    Zone::Pools,
    Zone::Reach,
    Zone::Depths,
    Zone::Wastes,
    Zone::Willow,
];
pub const KEYSTONE_DOORS: &[(&str, u16)] = &[
    ("MarshSpawn.KeystoneDoor", 2),
    ("HowlsDen.KeystoneDoor", 2),
    ("MarshPastOpher.EyestoneDoor", 2),
    ("MidnightBurrows.KeystoneDoor", 4),
    ("WoodsEntry.KeystoneDoor", 2),
    ("WoodsMain.KeystoneDoor", 4),
    ("LowerReach.KeystoneDoor", 4),
    ("UpperReach.KeystoneDoor", 4),
    ("UpperDepths.EntryKeystoneDoor", 2),
    ("UpperDepths.CentralKeystoneDoor", 2),
    ("UpperPools.KeystoneDoor", 4),
    ("UpperWastes.KeystoneDoor", 2),
];

pub const WISP_STATES: &[UberIdentifier] = &[
    UberIdentifier {
        uber_group: 46462,
        uber_id: 59806,
    },
    UberIdentifier {
        uber_group: 945,
        uber_id: 49747,
    },
    UberIdentifier {
        uber_group: 28895,
        uber_id: 25522,
    },
    UberIdentifier {
        uber_group: 18793,
        uber_id: 63291,
    },
    UberIdentifier {
        uber_group: 10289,
        uber_id: 22102,
    },
];

pub const RESERVE_SLOTS: usize = 1;  // how many slots to reserve after random placements for the next iteration
pub const PLACEHOLDER_SLOTS: usize = 25;  // how many slots to keep as placeholders for bigger progressions
pub const RETRIES: u16 = 10;  // How many retries to allow when generating a seed
pub const RANDOM_PROGRESSION: f64 = 0.4;  // How likely to choose a progression item as random placement

pub const HEADER_INDENT: usize = 24;  // Which column to align header descriptions on
pub const NAME_COLOUR: Colour = Colour::Yellow;
pub const UBERSTATE_COLOUR: Colour = Colour::Cyan;

pub const SHOP_PRICES: &[(&str, UberIdentifier, UberIdentifier)] = &[
    (
        "TwillenShop.Overcharge",
        UberIdentifier {
            uber_group: 2,
            uber_id: 1,
        },
        UberIdentifier {
            uber_group: 2,
            uber_id: 101,
        }
    ),
    (
        "TwillenShop.TripleJump",
        UberIdentifier {
            uber_group: 2,
            uber_id: 2,
        },
        UberIdentifier {
            uber_group: 2,
            uber_id: 102,
        }
    ),
    (
        "TwillenShop.Wingclip",
        UberIdentifier {
            uber_group: 2,
            uber_id: 3,
        },
        UberIdentifier {
            uber_group: 2,
            uber_id: 103,
        }
    ),
    (
        "TwillenShop.Swap",
        UberIdentifier {
            uber_group: 2,
            uber_id: 5,
        },
        UberIdentifier {
            uber_group: 2,
            uber_id: 105,
        }
    ),
    (
        "TwillenShop.LightHarvest",
        UberIdentifier {
            uber_group: 2,
            uber_id: 19,
        },
        UberIdentifier {
            uber_group: 2,
            uber_id: 119,
        }
    ),
    (
        "TwillenShop.Vitality",
        UberIdentifier {
            uber_group: 2,
            uber_id: 22,
        },
        UberIdentifier {
            uber_group: 2,
            uber_id: 122,
        }
    ),
    (
        "TwillenShop.Energy",
        UberIdentifier {
            uber_group: 2,
            uber_id: 26,
        },
        UberIdentifier {
            uber_group: 2,
            uber_id: 126,
        }
    ),
    (
        "TwillenShop.Finesse",
        UberIdentifier {
            uber_group: 2,
            uber_id: 40,
        },
        UberIdentifier {
            uber_group: 2,
            uber_id: 140,
        }
    ),
    (
        "OpherShop.WaterBreath",
        UberIdentifier {
            uber_group: 1,
            uber_id: 23,
        },
        UberIdentifier {
            uber_group: 1,
            uber_id: 10023,
        }
    ),
    (
        "OpherShop.Spike",
        UberIdentifier {
            uber_group: 1,
            uber_id: 74,
        },
        UberIdentifier {
            uber_group: 1,
            uber_id: 10074,
        }
    ),
    (
        "OpherShop.ExplodingSpike",
        UberIdentifier {
            uber_group: 1,
            uber_id: 1074,
        },
        UberIdentifier {
            uber_group: 1,
            uber_id: 11074,
        }
    ),
    (
        "OpherShop.SpiritSmash",
        UberIdentifier {
            uber_group: 1,
            uber_id: 98,
        },
        UberIdentifier {
            uber_group: 1,
            uber_id: 10098,
        }
    ),
    (
        "OpherShop.ShockSmash",
        UberIdentifier {
            uber_group: 1,
            uber_id: 1098,
        },
        UberIdentifier {
            uber_group: 1,
            uber_id: 11098,
        }
    ),
    (
        "OpherShop.Teleport",
        UberIdentifier {
            uber_group: 1,
            uber_id: 105,
        },
        UberIdentifier {
            uber_group: 1,
            uber_id: 10105,
        }
    ),
    (
        "OpherShop.SpiritStar",
        UberIdentifier {
            uber_group: 1,
            uber_id: 106,
        },
        UberIdentifier {
            uber_group: 1,
            uber_id: 10106,
        }
    ),
    (
        "OpherShop.StaticStar",
        UberIdentifier {
            uber_group: 1,
            uber_id: 1106,
        },
        UberIdentifier {
            uber_group: 1,
            uber_id: 11106,
        }
    ),
    (
        "OpherShop.Blaze",
        UberIdentifier {
            uber_group: 1,
            uber_id: 115,
        },
        UberIdentifier {
            uber_group: 1,
            uber_id: 10115,
        }
    ),
    (
        "OpherShop.ChargeBlaze",
        UberIdentifier {
            uber_group: 1,
            uber_id: 1115,
        },
        UberIdentifier {
            uber_group: 1,
            uber_id: 11115,
        }
    ),
    (
        "OpherShop.Sentry",
        UberIdentifier {
            uber_group: 1,
            uber_id: 116,
        },
        UberIdentifier {
            uber_group: 1,
            uber_id: 10116,
        }
    ),
    (
        "OpherShop.RapidSentry",
        UberIdentifier {
            uber_group: 1,
            uber_id: 1116,
        },
        UberIdentifier {
            uber_group: 1,
            uber_id: 11116,
        }
    ),
    (
        "LupoShop.HCMapIcon",
        UberIdentifier {
            uber_group: 48248,
            uber_id: 19396,
        },
        UberIdentifier {
            uber_group: 48248,
            uber_id: 19397,
        }
    ),
    (
        "LupoShop.ECMapIcon",
        UberIdentifier {
            uber_group: 48248,
            uber_id: 57987,
        },
        UberIdentifier {
            uber_group: 48248,
            uber_id: 57988,
        }
    ),
    (
        "LupoShop.ShardMapIcon",
        UberIdentifier {
            uber_group: 48248,
            uber_id: 41666,
        },
        UberIdentifier {
            uber_group: 48248,
            uber_id: 41667,
        }
    ),
];

pub const SLUGSTRINGS: &[&[&str]] = &[
    &[
        "Legislative", "Conformable", "Relieved", "Hectic", "Irritable", "Blatant", "Recessive", "Tyrannous", "Inextricable", "Lifelike", "Magenta", "Unrepresentative", "Successful", "Precarious", "Soulful", "Adored", "Extended", "Judgmental", "Cracked", "Indisputable", "Noxious", "Barbaric", "Stoic", "Affable", "Troubled", "Nonabrasive", "Effusive", "Solemn", "Gilded", "Assignable", "Sporting", "Newest", "Fried", "Perturbed", "Timorous", "Gruesome", "Intermediate", "Skillful", "Paternalistic", "Sentimental", "Irate", "Domineering", "Undisguised", "Current", "Aware", "Extreme", "Scared", "Plane", "Insulting", "Derogative", "Fuming", "Fidgety", "Disorganized", "Mouthwatering", "Unused", "Noncommittal", "Massive", "Nightmarish", "Unjustifiable", "Exasperating", "Expanding", "Favorite", "Rampant", "Sweeping", "Muted", "Unsurprising", "Compliant", "Stereophonic", "Palatial", "Smaller", "Tearful", "Exhausting", "Trustful", "Dissimilar", "Reprehensible", "Fastidious", "Perilous", "Creaking", "Novel", "Tanned", "Modest", "Regal", "Warning", "Lucid", "Horrible", "Captive", "Disheartening", "Pathetic", "Attractive", "Eventual", "Nervous", "Ultimate", "Plopping", "Squeezable", "Inappropriate", "Euphemistic", "Warlike", "Incredible", "Trashed", "Total", "Forward", "Dependable", "Helpless", "Defiant", "Tremulous", "Allusive", "Undaunted", "Revamped", "Enchanted", "Beefy", "Iridescent", "Inexhaustible", "Untainted", "Coldhearted", "Undeserved", "Gurgling", "Inexpressive", "Semiofficial", "Embarrassed", "Appealing", "Flavorful", "Consensual", "Undefeated", "Technical", "Incongruent", "Unmistakable", "Thoughtful", "Disconnected", "Random", "Inhabitable", "Livable", "Allowable", "Ashamed", "Loyal", "Springy", "Impossible", "Subordinate", "Pleasing", "Sisterly", "Unambiguous", "Depressed", "Deplorable", "Fleeting", "Unwatchable", "Pleasurable", "Remaining", "Insufficient", "Provocative", "Inconceivable", "Cunning", "Binary", "Idiosyncratic", "Impartial", "Peaceful", "Hygienic", "Dissuasive", "Relentless", "Convinced", "Shabbiest", "Motivating", "Unflinching", "Anxious", "Maneuverable", "Squawking", "Hyperirritable", "Inaudible", "Federal", "Efficacious", "Nonproductive", "Reputed", "Upsetting", "Plodding", "Mocking", "Psychedelic", "Arguable", "Commanding", "Ethereal", "Instinctive", "Disrespectful", "Poorest", "Singular", "Outstanding", "Bewildering", "Smoky", "Permissible", "Tonal", "Captivated", "Detrimental", "Demented", "Concise", "Sizable", "Lackadaisical", "Sinister", "Humorless", "Civilian", "Inauspicious", "Disturbing", "Ungentlemanly", "Primitive", "Tiresome", "Waspish", "Provoking", "Addicted", "Incomprehensible", "Ungracious", "Trusted", "Subterranean", "Sportsmanly", "Tattered", "Careless", "Adept", "Eatable", "Sloping", "Renegotiable", "Quackish", "Unanticipated", "Front", "Signed", "Undeclared", "Preventable", "Fundamental", "Doting", "Beeping", "Unsound", "Litigious", "Literary", "Steadfast", "Twinkling", "Reviewable", "Unselfish", "Professional", "Incorrect", "Plentiful", "Reddish", "Presidential", "Uncreative", "Uncoordinated", "Forgivable", "Semiprecious", "Disheartened", "Finicky", "Hypothetical", "Organizational", "Favorable", "Stupendous", "Vulgar", "Stagnant", "Anticorrosive", "Undisciplined", "Unassertive", "Underfunded", "Uncanny", "Immediate", "Divided", "Uncontrollable", "Unhelpful", "Lifelong", "Touched", "Dramatic", "Penetrating", "Infuriating", "Fraudulent", "Irretrievably", "Conversational", "Surprised", "Thrilled", "Irrelevant", "Gushy", "Holistic", "Ethical", "Selective", "Haunting", "Soulless", "Whistling", "Undeveloped", "Nauseous", "Meditative", "Introverted", "Intrigued", "Unqualified", "Youngest", "Stereotypical", "Useless", "Alienated", "Overbearing", "Transparent", "Dashing", "Smothering", "Cutting", "Additional", "Eventful", "Horizontal", "Spiteful", "Nonnegotiable", "Chattering", "Climatic", "Redeemable", "Horrific", "Enough", "Promising", "Richest", "Racial", "Penetrable", "Odious", "Simultaneous", "Partial", "Individualistic", "Suffering", "Direct", "Bloodied", "Competent", "Iconoclastic", "Dissatisfied", "Spacious", "Improving", "Beaming", "Congressional", "Considerable", "Invincible", "Pedestrian", "Contemporary", "Unreachable", "Medicinal", "Congruent", "Amphibian", "Weightless", "Raging", "Hopeless", "Enthused", "Hushed", "Concealable", "Perpendicular", "Troubling", "Absolute", "Supernatural", "Autobiographic", "Unraveled", "Antsy", "Traitorous", "Factitious", "Preparative", "Tenable", "Tormented", "Intangible", "Interdependent", "Desirable", "Vital", "Highest", "Literal", "Unmarketable", "Sweltering", "Salient", "Graceful", "Wriggly", "Wholehearted", "Apologizing", "Clogged", "Innocent", "Stilled", "Alarming", "Revised", "Unsupervised", "Preemptive", "Criminal", "Bloated", "Assorted", "Concerted", "Illuminating", "Lithe", "Aloof", "Ritualistic", "Diversified", "Sober", "Steamy", "Metaphoric", "Bankable", "Congruous", "Conscientious", "Collectable", "Robust", "Glowing", "Hallowed", "Unsympathetic", "Obnoxious", "Moralistic", "Silent", "Overwrought", "Appreciative", "Sickened", "Occasional", "Venturous", "Retired", "Terrific", "Imminent", "Insufferable", "Ferocious", "Inhospitable", "Sufficient", "Therapeutic", "Unbending", "Scandalous", "Adamant", "Double", "Interested", "Intuitive", "Ungraceful", "Erratic", "Eccentric", "Venal", "Pyrotechnic", "Deniable", "Degenerative", "Haphazard", "Squirming", "Habitual", "Suspicious", "Punishable", "Bribable", "Seasonable", "Brutish", "Feebleminded", "Perverse", "Extendable", "Mechanical", "Unbeaten", "Tolerant", "Belligerent", "Torturous", "Indeterminable", "Lower", "Discourteous", "Delirious", "Vagabond", "Booming", "Unrecognized", "Contemplative", "Unaccountable", "Tangled", "Prolific", "Retrogressive", "Tired", "Yielding", "Sparing", "Unperturbed", "Nonconsecutive", "Succulent", "Crumply", "Lascivious", "Intrinsic", "Proportionate", "Mutual", "Unofficial", "Breathable", "Shattered", "Milky", "Richer", "Referential", "Blindfolded", "Superlative", "Infantile", "Nonviolent", "Uncomplaining", "Distressed", "Funniest", "Exhilarated", "Charismatic", "Following", "Stout", "Cocky", "Mumbled", "Skeptical", "Unconditional", "Least", "Lordly", "Former", "Confusing", "Domed", "Instinctual", "Transformational", "Cultured", "Formal", "Disgusting", "Entranced", "Euphoric", "Purposeful", "Compulsive", "Normal", "Psychosomatic", "Unceremonious", "Aggressive", "Odorless", "Uninhabitable", "Interdepartmental", "Arresting", "Voracious", "Talkative", "Exquisite", "Slushy", "Midweek", "Substantiated", "Scrabbled", "Profitable", "Ubiquitous", "Confirmable", "Scorching", "Neurological", "Superabundant", "Compelling", "Disloyal", "Nondescript", "Prodigious", "Acerbic", "Inapplicable", "Extraordinary", "Forged", "Inexpensive", "Fabled", "Ornate", "Disputed", "Purified", "Crotchety", "Stony", "Disapproving", "Fading", "Obligatory", "Officious", "Pragmatic", "Neurotic", "Unadorned", "Contoured", "Marbled", "Unsatisfactory", "Tallest", "Positive", "Elastic", "Homey", "Intricate", "Repentant", "Durable", "Faltering", "Magnificent", "Considerate", "Anecdotal", "Replaceable", "Incoherent", "Riotous", "Telegraphic", "Unmerciful", "Curvy", "Unprovoked", "Irrefutable", "Belching", "Regrettable", "Dogged", "Quantifiable", "Objectionable", "Radical", "Disparaging", "Unrestrained", "Carnivorous", "Calculated", "Jumbled", "Gallant", "Imperialistic", "Willing", "Whining", "Degraded", "Punitive", "Thrashed", "Annoyed", "Congested", "Acknowledged", "Pliable", "Inalterable", "Minor", "Unmanned", "Relaxing", "Mystifying", "Varied", "Corrective", "Mirthful", "Argumentative", "Infamous", "Disruptive", "Unenthusiastic", "Saddened", "Uncompromising", "Unheeded", "Phonemic", "Disabled", "Earthshaking", "Horrid", "Fragrant", "Nonchalant", "Uncharacteristic", "Shivery", "Winsome", "Punctual", "Frugal", "Statistical", "Rural", "Unconvincing", "Smoked", "Ingenious", "Forgetful", "Humongous", "Prevalent", "Circumstantial", "Unattractive", "Artificial", "Optimistic", "Unbecoming", "Inoffensive", "Exacting", "Ancient", "Pristine", "Militant", "Bellowing", "Receptive", "Mutinous", "Amazed", "Instantaneous", "Erasable", "Heartbroken", "Intended", "Eruptive", "Chilling", "Tolerable", "Renewable", "Tragic", "Undeterred", "Satisfactory", "Overpowering", "Faded", "Disorderly", "Final", "Crushed", "Disarming", "Bodacious", "Transformative", "Sorrowful", "Tedious", "Adventurous", "Peeved", "Unintentional", "Appalling", "Coveted", "Unobtrusive", "Gifted", "Numeric", "Prior", "Wounding", "Sculptural", "Grinding", "Preeminent", "Studious", "Cleanable", "Cordial", "Despised", "Connected", "Bigoted", "Unwieldy", "Clingy", "Linguistic", "Capricious", "Caring", "Minimal", "Explicit", "Schematic", "Scientific", "Imaginable", "Displeased", "Military", "Undisputed", "Impetuous", "Educational", "Conspicuous", "Balmy", "Illegitimate", "Uncritical", "Animated", "Insightful", "Unnecessary", "Fractious", "Cheerful", "Luminescent", "Splendid", "Presumable", "Imprudent", "Inquiring", "Credible", "Premium", "Contradicting", "Informal", "Inarticulate", "Crystallized", "Wailing", "Lulling", "Illiterate", "Identical", "Unsubstantiated", "Entire", "Merciful", "Reputable", "Logarithmic", "Undeniable", "Immobile", "Rustic", "Serrated", "Outermost", "Socialist", "Aerial", "Unauthorized", "Precise", "Quacky", "Shocked", "Danceable", "Pallid", "Locked", "Fictional", "Contrite", "Demonic", "Grieving", "Enforceable", "Expensive", "Adroit", "Alleged", "Jaded", "Magnanimous", "Infectious", "Connectable", "Unquestionable", "Chuckling", "Inhumane", "Permissive", "Impressive", "Yelping", "Unwitting", "Erroneous", "Lavish", "Pleased", "Serial", "Unconventional", "Peerless", "Deploring", "Overt", "Repeated", "Discriminating", "Acrimonious", "Informed", "Contradictory", "Nonexclusive", "Municipal", "Preposterous", "Satisfied", "Enormous", "Prophetic", "Humanlike", "Unfriendly", "Snoopy", "Peevish", "Inartistic", "Unremarkable", "Deliberate", "Smudged", "Unaggressive", "Lined", "Clamoring", "Incontrovertible", "Imposing", "Silver", "Cooing", "Hissing", "Unscheduled", "Parental", "Diminutive", "Treasonable", "Jovial", "Omnivorous", "Western", "Fantastic", "Secular", "Sustainable", "Elusive", "Nearest", "Luxurious", "Worrisome", "Exterior", "Historical", "Exploding", "Supple", "Tantalizing", "Temporary", "Harmful", "Surmountable", "Ultraconservative", "Proverbial", "Camouflaged", "Spirited", "Patronizing", "Relevant", "Maddening", "Jittery", "Southern", "Anemic", "Inconsiderate", "Environmental", "Biographical", "Factual", "Ruinous", "Charging", "Conscious", "Innate", "Repetitious", "Unsafe", "Joyous", "Impeccable", "Malicious", "Worthwhile", "Nostalgic", "Challenged", "Dorsal", "Unchanging", "Polyunsaturated", "Hypercritical", "Solicitous", "Religious", "Restored", "Encrusted", "Refreshing", "Versatile", "Voiceless", "Sensual", "Unmentionable", "Uttermost", "Wholesale", "Opposed", "Daring", "Verbose", "Viperous", "Verifiable", "Impulsive", "Uninterrupted", "Nonreturnable", "Sensible", "Unlawful", "Gaseous", "Known", "Vexed", "Inconvenient", "Latent", "Groomed", "Indigenous", "Enticing", "Heroic", "Disinclined", "Convoluted", "Verified", "Illustrious", "Stubborn", "Biased", "Unblushing", "Nondestructive", "Infuriated", "Velvety", "Refutable", "Certifiable", "Nominal", "Insensitive", "Maniacal", "Artful", "Charming", "Refundable", "Glittering", "Feigned", "Troublesome", "Unashamed", "Intriguing", "Fastest", "Amiable", "Permeable", "Sinful", "Kaput", "Extravagant", "Terminal", "Exceptional", "Overqualified", "Tremendous", "Dehydrated", "Learnable", "Instrumental", "Insolent", "Philosophical", "Indifferent", "Lingering", "Untamed", "Distinguished", "Accommodating", "Disputable", "Complaining", "Dried", "Terrible", "Deficient", "Expected", "Approachable", "Volatile", "Tempted", "Hurtful", "Verdant", "Unworkable", "Portable", "Frightful", "Shadowed", "Falsified", "Genuine", "Furtive", "Incomparable", "Changing", "Envious", "Treasured", "Intimate", "Valuable", "Colossal", "Slanted", "Wonderful", "Leading", "Admiring", "Spatial", "Dreaded", "Barbequed", "Delectable", "Unbendable", "Undetected", "Coquettish", "Profound", "Heinous", "Energetic", "Overenthusiastic", "Supersonic", "Uninjured", "Frustrating", "Convenient", "Incomplete", "Defendable", "Infernal", "Reflective", "Southwestern", "Truthful", "Efficient", "Gluey", "Fruitful", "Junior", "Uninterested", "Putrid", "Necessary", "Applicable", "Professorial", "Unintelligent", "Devoted", "Despairing", "Unrelenting", "Inquisitive", "Joyless", "Colloquial", "Responsible", "Mortified", "Pastoral", "Inconsiderable", "Digressive", "Dripping", "Limping", "Grinning", "Persistent", "Antiseptic", "Discreet", "Scrumptious", "Undefined", "Accused", "Suave", "Fatigued", "Barefooted", "Unbearable", "Perceptual", "Interpersonal", "Inscrutable", "Political", "Smiling", "Uncharted", "Waterproof", "Oxymoronic", "Immortal", "Monopolistic", "Convincing", "Unsuccessful", "Theatrical", "Smeared", "Languishing", "Irreversible", "Inconsequential", "Imperceptive", "Unpronounceable", "Rutted", "Vibrant", "Unceasing", "Ecstatic", "Pugnacious", "Unblinking", "Tipsy", "Floating", "Downward", "Adequate", "Symptomatic", "Frequent", "Pricey", "Forgotten", "Deserted", "Boyish", "Unavailing", "Tuneful", "Maiden", "Unbreakable", "Toothsome", "Shimmering", "Gratified", "Flagrant", "Delightful", "Rectangular", "Lethal", "Ironic", "Blasphemous", "Alone", "Linear", "Cropped", "Syllogistic", "Presumptive", "Disenchanted", "Calming", "Zoological", "Gargantuan", "Sharpened", "Tangible", "Moved", "Overcast", "Expedient", "Populous", "Negligible", "Inane", "Weighty", "Upper", "Crossed", "Discernable", "Petite", "Secluded", "Impassable", "Facetious", "Immovable", "Vaporous", "Absentminded", "Undiminished", "Geologic", "Fearless", "Barren", "Vibrating", "Resourceful", "Attentive", "Untried", "Drunk", "Persuasive", "Innovative", "Feeling", "Exchangeable", "Spoiled", "Timid", "Trying", "Adaptable", "Wolfish", "Stock", "Unconscious", "Indistinct", "Visible", "Rakish", "Foolish", "Teachable", "Frayed", "Loving", "Exuberant", "Obsolete", "Meteoric", "Doubtful", "Mountainous", "Nameless", "Miscreant", "Brooding", "Bedazzling", "Unheated", "Tainted", "Filtered", "Unendurable", "Pitiless", "Evenhanded", "Ravishing", "Pious", "Famous", "Obtainable", "Vehement", "Rumpled", "Fruitless", "Puritanical", "Monetary", "Enterprising", "Ceremonial", "Backhanded", "Larcenous", "Influential", "Resealable", "Tentative", "Ethnic", "Temperate", "Salvaged", "Unencumbered", "Habitable", "Flirtatious", "Collegial", "Villainous", "Overwhelming", "Confidential", "Useful", "Sublime", "Speckled", "Unimpeded", "Observable", "Recognizable", "Anticlimactic", "Concerned", "Treacherous", "Widespread", "Subsequent", "Prosperous", "Motivational", "Pedantic", "Coincidental", "Geometric", "Virtuous", "Perturbing", "Opposite", "Ringing", "Farsighted", "Bookish", "Unnerved", "Blooming", "Sanctimonious", "Consummate", "Unyielding", "Sugary", "Nippy", "Tiring", "Unmatched", "Quality", "Monotone", "Prenatal", "Discussable", "Cloudless", "Delinquent", "Frustrated", "Stereotyped", "Enlarged", "Local", "Managerial", "Emotionless", "Remorseful", "Uniform", "Sculpted", "Whimsical", "Insensible", "Victorious", "Incorruptible", "Unerring", "Symbiotic", "Asymmetrical", "Continuous", "Platonic", "Desperate", "Natural", "Unsophisticated", "Abusive", "Inhibited", "Unsurpassable", "Precious", "Residential", "Indestructible", "Various", "Restful", "Modified", "Latest", "Stealth", "Cowardly", "Opinionated", "Preferential", "Inexpedient", "Meaningless", "Stackable", "Intolerable", "Applauding", "Astounded", "Impractical", "Vicarious", "Chivalrous", "Tightfisted", "Unquantifiable", "Synthetic", "Distinctive", "Unconfirmed", "Unfailing", "Craven", "Giving", "Breathless", "Shining", "Meaningful", "Waxen", "Waiting", "Prejudicial", "Unkind", "Lacking", "Unsuited", "Worse", "Ineffectual", "Thunderous", "Inexcusable", "Structural", "Wonted", "Curved", "Illicit", "Generic", "Emaciated", "Stifling", "Morbid", "Formidable", "Unincorporated", "Fervent", "Unsteady", "Uncertain", "Wretched", "Commendable", "Despondent", "Inharmonious", "Academic", "Ambulant", "Technological", "Precipitous", "Exalted", "Dazzling", "Astonished", "Territorial", "Gracious", "Vexing", "Fainthearted", "Limited", "Central", "Ruddy", "Conventional", "Patched", "Failed", "Parallel", "Scathing", "Threatened", "Unapproachable", "Unconvinced", "Stirring", "Homeopathic", "Theoretical", "Thermal", "Caged", "Stretchy", "Numbing", "Disturbed", "Statutory", "Unalienable", "Stigmatic", "Unpretentious", "Vegetative", "Pensive", "Harmonious", "Snide", "Choking", "Demonstrative", "Spotty", "Romantic", "Vernacular", "Inflammatory", "Flattened", "Thankful", "Opposing", "Irreplaceable", "Enlightened", "Fractional", "Enhanced", "Matronly", "Supportive", "Cavernous", "Addictive", "Unfavorable", "Licensed", "Unadventurous", "Expiring", "Unimpeachable", "Intrusive", "Sleepless", "Orange", "Endemic", "Actual", "Foreseeable", "Jagged", "Receding", "Corrosive", "Demanding", "Inflexible", "Repugnant", "Unlikable", "Adaptive", "Inelegant", "Copious", "Increasing", "Embattled", "Scintillating", "Unfocused", "Binding", "Culpable", "Official", "Unappetizing", "Subversive", "Longing", "Middle", "Violet", "Constitutional", "Unopened", "Diagonal", "Mischievous", "Grimacing", "Cinematic", "Undiplomatic", "Spattered", "Lamentable", "Smashing", "Civilized", "Daily", "Unenforceable", "Changeable", "Vigorous", "Despicable", "Infrequent", "Brutal", "Horrified", "Momentous", "Periodic", "Overconfident", "Tempting", "Vertical", "Makeshift", "Diverging", "Refractive", "Subservient", "Lustrous", "Mangy", "Democratic", "Wasted", "Longest", "Screaming", "Acrid", "Embarrassing", "Invaluable", "Unprincipled", "Cowering", "Unblemished", "Mixed", "Unbelievable", "Ridiculing", "Needless", "Constructive", "Fraternal", "Reasonable", "Disjointed", "Meandering", "Qualitative", "Working", "Eroding", "Priceless", "Accepting", "Impatient", "Fiendish", "Modern", "Doleful", "Pampered", "Standing", "Tetchy", "Unavailable", "Lurid", "Concealed", "Benevolent", "Accurate", "Connecting", "Beginning", "Principled", "Forbidding", "Omniscient", "Stringent", "Previous", "Inflamed", "Responsive", "Hysterical", "Streaked", "Southeasterly", "Premature", "Patterned", "Equable", "Tacit", "Awful", "Noncompetitive", "Triangular", "Spectral", "Upmost", "Authoritarian", "Unsolved", "Expeditious", "Ruined", "Proximate", "Venerable", "Rechargeable", "Undoubted", "Halting", "Royal", "Bureaucratic", "Insurable", "Injured", "Ominous", "Drained", "Comical", "Felonious", "Telekinetic", "Seething", "Retrospective", "Bashful", "Entrepreneurial", "Unfortunate", "Unstable", "Descriptive", "Obese", "Coordinated", "Instructive", "Fanatical", "Boastful", "Understood", "Revolting", "Insistent", "Undiscovered", "Definitive", "Pessimistic", "Adjacent", "Helpful", "Liberal", "Longer", "Unassisted", "Flexible", "Endangered", "Hurried", "Lucent", "Cheering", "Inalienable", "Irreparable", "Hardworking", "Impressionable", "Dubious", "Introspective", "Contented", "Completed", "Sloped", "Loquacious", "Redolent", "Pressing", "Annual", "Charmed", "Purported", "Oceanic", "Forgiving", "Eastern", "Mysterious", "Improbable", "Theological", "Pungent", "Adoring", "Nocturnal", "Boisterous", "Terrified", "Petulant", "Preoperative", "Potential", "Untapped", "Predisposed", "Constant", "Rudimentary", "Public", "Evasive", "Astronomical", "Untrustworthy", "Distraught", "Inconsolable", "Knightly", "Duplicitous", "Disappearing", "Unsolicited", "Clownish", "Wholesome", "Galling", "Effortless", "Whimpering", "Collapsed", "Absurd", "Lecherous", "Squatting", "Eloquent", "Decrepit", "Discouraging", "Problematic", "Unearthly", "Blossoming", "Wrinkled", "Incongruous", "Aimless", "Mordant", "Unrecognizable", "Plaid", "Tumultuous", "Disgruntled", "Uncomely", "Watchful", "Infallible", "Inorganic", "Clueless", "Earthy", "Diminishing", "Worst", "Unremitting", "Pernicious", "Motivated", "Sanitary", "Soldierly", "Irksome", "Classical", "Irritating", "Mandatory", "Fulfilled", "Stronger", "Excellent", "Boorish", "Standoffish", "Flowering", "Balding", "Telepathic", "Guaranteed", "Definable", "Finite", "Diabolical", "Dexterous", "Touchy", "Horrifying", "Materialistic", "Telescopic", "Voluminous", "Irremovable", "Inordinate", "Preoccupied", "Solid", "Hypnotic", "Immoral", "Uncooked", "Impure", "Unruffled", "Hated", "Speechless", "Cancelled", "Willful", "Calculating", "Effective", "Dreadful", "Generative", "Presumptuous", "Parenthetic", "Mystical", "Prized", "Spiraled", "Unmitigated", "Spurious", "Obscene", "Committed", "Clinging", "Unrespectable", "Unimaginable", "Terrifying", "Emotional", "Passive", "Greatest", "Melodious", "Kindhearted", "Disgusted", "Specific", "Measly", "Confirmed", "Cooperative", "Doable", "Deadpan", "Entertained", "Grating", "Nefarious", "Downloadable", "Ticklish", "Rescued", "Domestic", "Frowning", "Unrealistic", "Valorous", "Existing", "Placid", "Perceptible", "Jiggling", "Unmodified", "Flippant", "Quizzical", "Egalitarian", "Stilted", "Verbal", "Ecological", "Fortuitous", "Cheapest", "Adhesive", "Perishable", "Soaring", "Pompous", "Lethargic", "Lying", "Whopping", "Facial", "Expectant", "Gleaming", "Arduous", "Lopsided", "Divergent", "Compulsory", "Minute", "Transitory", "Numberless", "Accessible", "Utopian", "Delicious", "Hotheaded", "Rampageous", "Organic", "Elevated", "Brunette", "Blistering", "Successive", "Squeamish", "Abandoned", "Growling", "Occupational", "Festive", "Macho", "Sudden", "Wordless", "Imponderable", "Prospective", "Withering", "Immensurable", "Inarguable", "Admirable", "Babbling", "Callous", "Inconsistent", "Enraged", "Berserk", "Irrevocable", "Lukewarm", "Assured", "Advantageous", "Engaging", "Dignified", "Undignified", "Eager", "Careful", "Digestive", "Leathery", "Unforgiving", "Unintended", "Unaffected", "Highfalutin", "Synonymous", "Reactive", "Adopted", "Uncomprehending", "Elaborate", "Harebrained", "Crass", "Larger", "Clashing", "Bellicose", "Unfilled", "Expendable", "Injurious", "Documentary", "Motionless", "Insignificant", "Unflagging", "Classified", "Cavalier", "Narcissistic", "Elderly", "Metallic", "Voluntary", "Suspected", "Derogatory", "Scalding", "Compact", "Rasping", "Adrenalized", "Stinking", "Exacerbating", "Baffling", "Nonstop", "Conflicting", "Suggestive", "Resounding", "Partisan", "Conceivable", "Imperceptible", "Volcanic", "Obstinate", "Elegant", "Similar", "Wondrous", "Anonymous", "Savage", "Humorous", "Unrepentant", "Chief", "Uninspired", "Unsinkable", "Bleached", "Daunting", "Scholarly", "Nontransferable", "Engrossing", "Intimidating", "Declining", "Tested", "Swinish", "Sluggish", "Defective", "Monumental", "Formative", "Undated", "Hawkish", "Drastic", "Subconscious", "Tripping", "Viable", "Unnatural", "Matchless", "Unripe", "Idiotic", "Preventative", "Huffy", "Unalterable", "Unsalvageable", "Awakening", "Nonsensical", "Sullen", "Moronic", "Viral", "Global", "Frantic", "Condemned", "Gushing", "Unthinkable", "Sparkling", "Shrieking", "Popular", "Indelible", "Masterful", "Venomous", "Myopic", "Independent", "Buzzing", "Relatable", "Nonverbal", "Exciting", "Unquenchable", "Peppery", "Taller", "Stunned", "Reciprocal", "Combative", "Cohesive", "Cumulative", "Dangerous", "Suppressive", "Mythical", "Unequivocal", "Didactic", "Uncomfortable", "Fearsome", "Scheduled", "Functional", "Outlandish", "Laborious", "Unanswerable", "Glamorous", "Training", "Indeterminate", "Disadvantaged", "Rabid", "Horrendous", "Expert", "Contractual", "Incredulous", "Openhearted", "Beckoning", "Disobedient", "Raving", "Crippled", "Somatic", "Equivalent", "Snarling", "Automatic", "Grueling", "Curious", "Burning", "Unfulfilled", "Diverse", "Oldest", "Surgical", "Scholastic", "Hilarious", "Youthful", "Detestable", "Powerful", "Improvable", "Embittered", "Prepared", "Towering", "Practical", "Nonspecific", "Welcoming", "Bloodthirsty", "Howling", "Scant", "Flavored", "Frigid", "Grotesque", "Fascinated", "Antagonistic", "Muffled", "Defenseless", "Jubilant", "Pronounced", "Inaccurate", "Innocuous", "Disinterested", "Expressionless", "Angular", "Rented repeatable", "Briny", "Nutritional", "Damaged", "Substitute", "Rusted", "Level", "Parasitic", "Redundant", "Typical", "Folded", "Matted", "Deceiving", "Superior", "Wintery", "Dynamic", "Chewy", "Sacrificial", "Irrelative", "Inflammable", "Scornful", "Meticulous", "Hydrothermal", "Sensuous", "Obsessive", "Eminent", "Circling", "Squealing", "Soothing", "Cosmic", "Immanent", "Upright", "Preferable", "Trainable", "Unknown", "Unsure", "Predictable", "Conspiratorial", "Dogmatic", "Dismal", "Outraged", "Potable", "Unstoppable", "Informative", "Unquestioned", "Hanging", "Consenting", "Underprivileged", "Ponderous", "Daughterly", "Incremental", "Posthumous", "Weakened", "Errant", "Curative", "Awesome", "Stable", "Upward", "Manicured", "Relaxed", "Operational", "Modular", "Capable", "Comparable", "Heartrending", "Mindless", "Agonizing", "Astounding", "Cognitive", "Unconstructive", "Approaching", "Marvelous", "Numerable", "Unconstrained", "Stinging", "Editable", "Slanting", "Tamed", "Infinitesimal", "Cleared", "Lesser", "Hazardous", "Genial", "Notable", "Blamable", "Closeable", "Outward", "Avian", "Devious", "Certified", "Zippy", "Undependable", "Productive", "Neutral", "Ingenuous", "Deluded", "Predicative", "Improved", "Groaning", "Thankless", "Unspoiled", "Unattached", "Phenomenal", "Spongy", "Breakable", "Musical", "Systematic", "Unfaltering", "Compassionate", "Tepid", "Disreputable", "Sociable", "Universal", "Savvy", "Surrealistic", "Bizarre", "Oblong", "Piquant", "Wanting", "Rational", "Pusillanimous", "Limber", "Assuring", "Uppity", "Unacceptable", "Frightening", "Major", "Hairless", "Classifiable", "Vicious", "Fragmented", "Creative", "Cursed", "Lateral", "Miniature", "Unbounded", "Unexplainable", "Taxing", "Transplanted", "Collaborative", "Unwary", "Insulted", "Bothered", "Bigger", "Painless", "Static", "Hateful", "Popping", "Spendthrift", "Betrayed", "Squandered", "Symbolic", "Uninvited", "Furthest", "Polished", "Commercial", "Startled", "Feathery", "Roasted", "Slender", "Supposed", "Displaced", "Chanting", "Wheezing", "Overaggressive", "Cockamamie", "Worthless", "Elementary", "Unpleasant", "Intravenous", "Sheltered", "Otherwise", "Costly", "Convulsive", "Transitional", "Fiscal", "Fertile", "Exhaustive", "Mammoth", "Crashing", "Stanch"
    ],
    &[
        "Vine", "Heart", "Tree", "Wisp",
        "Marsh", "Mill", "Wastes", "Keystone",
        "Desert", "Glades", "Reach", "Forest",
        "Depths", "Grove", "Burrows", "Ore",
        "Ruins", "Pools", "Woods", "Graveyard",
        "Shrine", "Trial", "Leaf", "Shard",
        "Willow", "Relic", "Feather", "Soup",
        "Bow", "Hammer", "Shuriken", "Fragment",
    ],
    &[
        "Indistinct", "Inward", "Theological", "Divided", "Unprincipled", "Acrobatic", "Variable", "Judicious", "Biased", "Tenuous", "Leering", "Prior", "Physiological", "Discussable", "Spacious", "Bronchial", "Decayed", "Multipurpose", "Nonreturnable", "Unenforceable", "Undesirable", "Bleary", "Irregular", "Undefeated", "Melted", "Undisciplined", "Gifted", "Abounding", "Meandering", "Sportsmanly", "Didactic", "Psychedelic", "Connecting", "Bloated", "Bodacious", "Inconsistent", "Nondescript", "Irrepressible", "Presentable", "Interesting", "Elevated", "Disparaging", "Continual", "Prying", "Invited", "Movable", "Reassuring", "Hydrothermal", "Unnerving", "Silent", "Understated", "Relatable", "Unforgettable", "Recent", "Turbulent", "Greatest", "Schematic", "Eruptive", "Compulsory", "Unbreakable", "Stuttering", "Conventional", "Established", "Hyperbolic", "Imperative", "Nippy", "Professional", "Popping", "Unworkable", "Hormonal", "Transitory", "Domed", "Mordant", "Unromantic", "Prepared", "Richer", "Angelic", "Ultraviolet", "Vocational", "Addictive", "Touchy", "Unaccountable", "Weakened", "Hapless", "Humorless", "Inaccessible", "Inconvenient", "Restored", "Tearful", "Indirect", "Idiosyncratic", "Uncompromising", "Oceanic", "Individualistic", "Humongous", "Flaming", "Regional", "Unproductive", "Huffy", "Quantitative", "Curved", "Inoffensive", "Spherical", "Sequential", "Angular", "Enticing", "Irascible", "Reclusive", "Futuristic", "Revolutionary", "Communicative", "Blistering", "Mystifying", "Identifiable", "Fatigued", "Controllable", "Aggravated", "Melancholy", "Classical", "Fading", "Ignorant", "Smallest", "Aimless", "Ineloquent", "Plopping", "Forgotten", "Bankable", "Makeshift", "Scant", "Forgivable", "Fabled", "Shadowed", "Clogged", "Illegitimate", "Glistening", "Internal", "Irksome", "Nonnegotiable", "Despondent", "Entire", "Legible", "Civilian", "Gluey", "Spontaneous", "Prophetic", "Boring", "Animated", "Anecdotal", "Oldest", "Diverging", "Cosmic", "Stinging", "Circular", "Treatable", "Stupendous", "Inescapable", "Unauthorized", "Prolific", "Danceable", "Ambulatory", "Immense", "Communist", "Moderate", "Raving", "Unfocused", "Permissible", "Afraid", "Searching", "Superior", "Confusing", "Serrated", "Trained", "Written", "Awakening", "Disastrous", "Visual", "Spendthrift", "Polished", "Obliging", "Horrified", "Favorable", "Malevolent", "Flammable", "Ecstatic", "Muted", "Consumable", "Spatial", "Lingering", "Neurotic", "Stubborn", "Bribable", "Tremulous", "Maddening", "Adept", "Ungallant", "Vulgar", "Astonishing", "Flushed", "Inequitable", "Ungenerous", "Blushing", "Demure", "Conservative", "Prohibitive", "Unspoiled", "Extensive", "Collaborative", "Consecutive", "Unfailing", "Flattered", "Apologetic", "Multicultural", "Disillusioned", "Clueless", "Ungraceful", "Shameless", "Systematic", "Unofficial", "Uninhabitable", "Tranquil", "Inhumane", "Lofty", "Uninhibited", "Unmanly", "Wrathful", "Objectionable", "Ragged", "Lustrous", "Enhanced", "Affordable", "Interpersonal", "Egomaniacal", "Absorbed", "Weightless", "Derivative", "Farcical", "Outspoken", "Squatting", "Irresponsible", "Orthopedic", "Insightful", "Scorching", "Exasperating", "Coordinated", "Bureaucratic", "Haunting", "Raging", "Similar", "Completed", "Nonverbal", "Heartbroken", "Pressurized", "Toxic", "Phosphorescent", "Contented", "Scornful", "Equable", "Observant", "Spongy", "Erroneous", "Limping", "Unverified", "Squirming", "Scholastic", "Massive", "Golden", "Educated", "Circling", "Dulcet", "Inert", "Unconquerable", "Fathomable", "Evenhanded", "Awesome", "Unseemly", "Average", "Expressive", "Prestigious", "Undamaged", "Imperialistic", "Unthinkable", "Consenting", "Libelous", "Inane", "Destructive", "Militant", "Fantastic", "Stigmatic", "Perplexing", "Openhearted", "Unfair", "Dehydrated", "Adaptable", "Unsystematic", "Disproved", "Ingenious", "Reusable", "Resounding", "Plentiful", "Spellbinding", "Capable", "Impermeable", "Tyrannical", "Estimated", "Viral", "Screaming", "Quivering", "Mortified", "Huggable", "Despised", "Trusted", "Spinal", "Concise", "Correctable", "Springy", "Quizzical", "Unenviable", "Versed", "Apathetic", "Exposed", "Eventual", "Imaginative", "Biographical", "Unfortunate", "Deceiving", "Discontented", "Brooding", "Irremovable", "Unregulated", "Continuous", "Excited", "Enumerable", "Dozing", "Odorous", "Timeless", "Bigoted", "Supposed", "Cumulative", "Rhetorical", "Captivating", "Luscious", "Sporting", "Hushed", "Disposable", "Numerous", "Salted", "Liable", "Unspeakable", "Autographed", "Versatile", "Available", "Approximate", "Hostile", "Drooping", "Unfaltering", "Referential", "Skeptical", "Satiny", "Robotic", "Usual", "Horrendous", "Inauspicious", "Ashamed", "Preventive", "Preoccupied", "Industrial", "Unattached", "Quantifiable", "Admirable", "Chatting", "Iconoclastic", "Lethal", "Carsick", "Administrative", "Dogmatic", "Vengeful", "Torpid", "Steaming", "Semiconscious", "Facial", "Agrarian", "Mutual", "Alike", "Competitive", "Horizontal", "Abysmal", "Operational", "Mammoth", "Unyielding", "Emergency", "Incurable", "Unmatched", "Removable", "Exuberant", "Humanitarian", "Wooing", "Eastern", "Dazed", "Western", "Digital", "Unconfirmed", "Illegal", "Motionless", "Unsurprising", "Enigmatic", "Midweek", "Worrisome", "Rudimentary", "Rippling", "Flooded", "Ruinous", "Unceasing", "Terrestrial", "Rampageous", "Unreadable", "Peaceful", "Ultraconservative", "Unworldly", "Livable", "Preparative", "Noncommittal", "Unseasonable", "Anticlimactic", "Antisocial", "Burnable", "Major", "Insurable", "Overconfident", "Quintessential", "Vexed", "Overjoyed", "Worried", "Unpredictable", "Tangible", "Numerable", "Sensuous", "Thankless", "Syntactic", "Consummate", "Rescued", "Uproarious", "Reliable", "Retrogressive", "Ageless", "Coldhearted", "Distant", "Pensive", "Tireless", "Squealing", "Unforgivable", "Impossible", "Commemorative", "Irrational", "Untrained", "Bewildered", "Incomplete", "Defenseless", "Racial", "Shining", "Unequivocal", "Manipulative", "Useful", "Statutory", "Stylish", "Unique", "Princely", "Substantiated", "Vehement", "Unflagging", "Displaced", "Depressive", "Monstrous", "Preferable", "Shortsighted", "Pluralistic", "Stony", "Continuing", "Appropriate", "Coolest", "Tiresome", "Sanguine", "Venomous", "Funniest", "Unapproachable", "Willing", "Childlike", "Faraway", "Unopened", "Heated", "Livid", "Bewitched", "Sleepless", "Fortunate", "Inflatable", "Tedious", "Crackling", "Suitable", "Socialist", "Unquestioning", "Unbridled", "Depressing", "Modular", "Crippling", "Medical", "Disproportionate", "Mocking", "Garrulous", "Atomic", "Unripe", "Undistinguished", "Viperous", "Significant", "Therapeutic", "Unnatural", "Gushing", "Opinionated", "Proper", "Purified", "Overenthusiastic", "Instinctual", "Inquiring", "Floating", "Miniature", "Charming", "Confirmable", "Lyrical", "Screeching", "Cryptic", "Flying", "Presumptuous", "Momentous", "Condemned", "Annoying", "Undeviating", "Crunchable", "Reassured", "Ponderous", "Common", "Symmetrical", "Visible", "Inanimate", "External", "Finicky", "Unwavering", "Plausible", "Unwritten", "Vagabond", "Accidental", "Hysterical", "Shattered", "Predictable", "Victorious", "Plodding", "Concealed", "Possible", "Unfettered", "Taxing", "Provisional", "Laborious", "Befitting", "Fallacious", "Platonic", "Aware", "Unassailable", "Eager", "Emblematic", "Teachable", "Riveting", "Groomed", "Fixed", "Outstanding", "Biggest", "Staggering", "Subterranean", "Ineffective", "Plaid", "Dollish", "Enough", "Electronic", "Specialized", "Undependable", "Brunette", "Hotheaded", "Sickened", "Negligible", "Literate", "Fumbling", "Institutional", "Useless", "Meticulous", "Endemic", "Discourteous", "Advisable", "Exhilarating", "Obscene", "Elastic", "Unrepresented", "Weekly", "Lenient", "Astronomical", "Susceptible", "Miserly", "Resilient", "Charitable", "Matted", "Stirring", "Prudential", "Devious", "Unobtainable", "Hardworking", "Ridiculous", "Desperate", "Enchanting", "Topical", "Stagnant", "Penetrable", "Unconditional", "Discernable", "Knobbed", "Structural", "Relentless", "Regrettable", "Shamefaced", "Unlikable", "Tremendous", "Deadpan", "Adjoining", "Shimmering", "Barren", "Unplanned", "Tragic", "Standard", "Odorless", "Contemptuous", "Thoughtful", "Cheapest", "Stinking", "Momentary", "Gripping", "Garbled", "Scattered", "Mistrustful", "Oversensitive", "Contemporary", "Legitimate", "Bouncing", "Inflammable", "Monotonous", "Frowning", "Musky", "Constructive", "Antagonistic", "Erasable", "Inconsequential", "Impulsive", "Drunk", "Patented", "Lanky", "Fertile", "Infectious", "Factual", "Cohesive", "Nonviolent", "Wordless", "Reddish", "Cheering", "Appetizing", "Coughing", "Initial", "Harmonious", "Mature", "Separate", "Caustic", "Underprivileged", "Indifferent", "Poisonous", "Sheepish", "Urbane", "Acerbic", "Amused", "Unaffordable", "Querulous", "Deluded", "Infinitesimal", "Unblemished", "Unmanned", "Operative", "Deliberate", "Estranged", "Supple", "Torturous", "Enthused", "Zoological", "Preventable", "Loving", "Acrimonious", "Avoidable", "Enlightened", "Unannounced", "Lukewarm", "Pusillanimous", "Fortuitous", "Overwhelming", "Supernatural", "Unrecognized", "Hopeless", "Iridescent", "Elusive", "Sufficient", "Belching", "Unerring", "Lackadaisical", "Unimaginative", "Occupied", "Broken", "Parental", "Ringing", "Definable", "Fetid", "Selective", "Integral", "Suffering", "Stretchy", "Conscientious", "Poorer", "Divine", "Cornered", "Tempting", "Responsive", "Frozen", "Industrious", "Inflexible", "Fastest", "Postoperative", "Speculative", "Unstated", "Undeclared", "Improbable", "Unscientific", "Specific", "Blazing", "Monosyllabic", "Furthest", "Attractive", "Ominous", "Doubting", "Ironic", "Brutish", "Synonymous", "Refillable", "Unconstrained", "Eventful", "Ignorable", "Climatic", "Expeditious", "Orphaned", "Panoramic", "Portable", "Repulsive", "Excessive", "Imperfect", "Excellent", "Watertight", "Ritualistic", "Maintainable", "Indisputable", "Influential", "Frigid", "Inconsiderate", "Assorted", "Unhelpful", "Solitary", "Unchangeable", "Hilarious", "Soulless", "Explicit", "Substantial", "Impractical", "Accepting", "Contextual", "Sealed", "Indispensable", "Unpromising", "Binary", "Heartrending", "Unmasked", "Alternative", "Considerate", "Wistful", "Closeable", "Relaxing", "Lethargic", "Unilateral", "Lesser", "Appreciative", "Democratic", "Inexpressive", "Dizzying", "Fermented", "Promised", "Innate", "Emotionless", "Binding", "Visceral", "Snippy", "Vernacular", "Unscrupulous", "Nefarious", "Fanatical", "Extraordinary", "Pastoral", "Exclusive", "Diligent", "Inviting", "Incorrect", "Superficial", "Compound", "Cutting", "Oblique", "Multifaceted", "Unaccustomed", "Trainable", "Demonic", "Unintelligent", "Syllabic", "Sordid", "Ardent", "Luminous", "Unabated", "Incapable", "Highest", "Sacrificial", "Unbounded", "Unsupported", "Optimistic", "Symptomatic", "Least", "Permissive", "Fascinated", "Endurable", "Picturesque", "Accusing", "Impassioned", "Exaggerated", "Airsick", "Envious", "Planned", "Illustrious", "Inadmissible", "Effusive", "Unkempt", "Agreeable", "Ornamental", "Cultural", "Uncommunicative", "Sensual", "Fidgeting", "Nebulous", "Thoughtless", "Licensed", "Cleared", "Fragile", "Howling", "Contrary", "Instrumental", "Abusive", "Terminal", "Vulnerable", "Unobserved", "Peripheral", "Distraught", "Thrilled", "Definitive", "Expert", "Overemotional", "Tasteful", "Inventive", "Entrepreneurial", "Foreseeable", "Surmountable", "Balding", "Honking", "Problematic", "Enchanted", "Codified", "Operatic", "Frustrating", "Occasional", "Utilitarian", "Inapt", "Comical", "Valiant", "Fluttering", "Dilapidated", "Contrite", "Unknown", "Gratifying", "Perishable", "Carnivorous", "Unconstructive", "Conformable", "Hallowed", "Audacious", "Seamless", "Resonant", "Threatening", "Marked", "Hanging", "Confirmed", "Lithe", "Unsalvageable", "Blamable", "Trenchant", "Pitiless", "Feathery", "Territorial", "Disparate", "Nonabrasive", "Puzzled", "Spoiled", "Uncritical", "Inadvisable", "Repentant", "Minute", "Flattering", "Bearable", "Reviled", "Fragmented", "Alluring", "Disreputable", "Opulent", "Perfumed", "Dysfunctional", "Psychological", "Prototypical", "Ready", "Phonetic", "Tuneful", "Expandable", "Pleasing", "Unadvised", "Authentic", "Scheduled", "Bawling", "Surprising", "Digressive", "Cautious", "Global", "Poetic", "Reactive", "Documentary", "Unreasonable", "Motivated", "Clinging", "Halting", "Accompanying", "Receding", "Generic", "Sparkling", "Embarrassing", "Unsuspecting", "Unacceptable", "Assertive", "Numbing", "Closed", "Hopeful", "Unsparing", "Expendable", "Robust", "Whistling", "Roundtable", "Crying", "Unskilled", "Measly", "Curvy", "Irreplaceable", "Episodic", "Inactive", "Locked", "Undisguised", "Pleasurable", "Precise", "Unavailable", "Inquisitive", "Thunderous", "Carpeted", "Unstoppable", "Sedate", "Refutable", "Instructive", "Pampered", "Rutted", "Adventurous", "Compassionate", "Egalitarian", "Resolvable", "Insipid", "Neighborly", "Delectable", "Disadvantaged", "Measurable", "Distrustful", "Uncommon", "Antiseptic", "Braided", "Disdainful", "Fractional", "Wandering", "Dedicated", "Insistent", "Craven", "Wanting", "Junior", "Compliant", "Unsurpassable", "Inexplicable", "Bohemian", "Perilous", "Parallel", "Patient", "Mobile", "Sumptuous", "Inspiring", "Backhanded", "Exacting", "Tired", "Inelegant", "Perpetual", "Neglected", "Unexcited", "Enthusiastic", "Piquant", "Tainted", "Barbaric", "Artful", "Disrespectful", "Exponential", "Squashed", "Displeased", "Startling", "Stinky", "Casual", "Crooked", "Authoritarian", "Reported", "Inglorious", "Untimely", "Lovable", "Widespread", "Fidgety", "Addicted", "Bioactive", "Towering", "Ostentatious", "Awkward", "Muddled", "Monotone", "Grinding", "Judgmental", "Decipherable", "Absurd", "Detached", "Unrepresentative", "Trusting", "Incompatible", "Taunting", "Reprehensible", "Proficient", "Principal", "Bountiful", "Excitable", "Dignified", "Maximum", "Soulful", "Numberless", "Unfilled", "Detectable", "Asymmetrical", "Ruthless", "Rocketing", "Shabbiest", "Indefensible", "Vacuous", "Inherent", "Omnivorous", "Disapproving", "Surgical", "Jumpy", "Praiseworthy", "Inferior", "Galling", "Renewable", "Unbearable", "Distracting", "Cavalier", "Immanent", "Unbending", "Preposterous", "Desolate", "Inconsiderable", "Squeamish", "Subjective", "Untainted", "Perturbing", "Melodramatic", "Waspish", "Sparkly", "Undemocratic", "Vegetative", "Incidental", "Double", "Muttering", "Earthy", "Squeezable", "Thumping", "Precious", "Injudicious", "Indefinite", "Cottony", "Phobic", "Educational", "Dovish", "Flawed", "Macho", "Improvable", "Acclaimed", "Worrying", "Waxen", "Homogeneous", "Blameless", "Abhorrent", "Milky", "Irritating", "Nocturnal", "Heady", "Metabolic", "Aquatic", "Unpalatable", "Disgraceful", "Concurrent", "Emotional", "Inexcusable", "Supercilious", "Overrated", "Salvaged", "Chivalrous", "Sloped", "Unbeaten", "Imported", "Heavenly", "Acidic", "Largest", "Shrieking", "Seasonable", "Standing", "Mountainous", "Obtuse", "Imitative", "Tantalizing", "Rewarding", "Encouraged", "Pretend", "Sullen", "Irresistible", "Overpriced", "Breathless", "Earnest", "Dishonest", "Knowable", "Bored", "Dreadful", "Beneficial", "Infatuated", "Blundering", "Cerebral", "Elderly", "Calculating", "Unwashed", "Hyperirritable", "Suppressive", "Nonstop", "Anxious", "Unhealthy", "Piercing", "Experimental", "Rasping", "Stilted", "Rampant", "Vitriolic", "Adopted", "Sorrowful", "Celestial", "Overpowering", "Derogative", "Impoverished", "Earthshaking", "Caring", "Immortal", "Billable", "Usable", "Following", "Delicious", "Exhausting", "Arguable", "Soothed", "Berserk", "Immoral", "Insignificant", "Dried", "Maternal", "Uninvited", "Blossoming", "Conspicuous", "Cultured", "Irrefutable", "Unnoticeable", "Limber", "Wasted", "Dynamic", "Uncontainable", "Emaciated", "Horrible", "Local", "Upbeat", "Official", "Recognizable", "Failed", "Natural", "Lying", "Serial", "Adamant", "Despicable", "Supersensitive", "Unjustifiable", "Inconsolable", "Incorrigible", "Scathing", "Breakable", "Spineless", "Peerless", "Bedazzling", "Deliverable", "Unglamorous", "Honest", "Coachable", "Inexpressible", "Senseless", "Interracial", "Indiscreet", "Unaided", "Miserable", "Peculiar", "Torrential", "Thievish", "Fastidious", "Rambunctious", "Amusing", "Containable", "Virulent", "Optional", "Uncaring", "Velvety", "Complex", "Collapsed", "Radioactive", "Unsteady", "Affected", "Encouraging", "Intestinal", "Dogged", "Illogical", "Prejudicial", "Unrecognizable", "Injured", "Tanned", "Ambitious", "Sprite", "Immovable", "Historical", "Wasteful", "Uncanny", "Tactful", "Revamped", "Powerful", "Despairing", "Congenial", "Disciplined", "Swaggering", "Thriftless", "Joyous", "Warmest", "Sizzling", "Delirious", "Comparative", "Overcast", "Mystified", "Unassertive", "Discreet", "Irrevocable", "Innocent", "Exemplary", "Clinical", "Abandoned", "Splendid", "Languid", "Payable", "Bandaged", "Underhanded", "Reproductive", "Extreme", "Provocative", "Alone", "Stock", "Crammed", "Obedient", "Secretive", "Secondary", "Unforgiving", "Grueling", "Joyless", "Miscreant", "Verbal", "Impenetrable", "Debatable", "Shapely", "Comprehensive", "Unmistakable", "Noiseless", "Wrinkled", "Marketable", "Furtive", "Translucent", "Dishonorable", "Equivalent", "Sloping", "Unmerciful", "Larcenous", "Unprecedented", "Unsociable", "Grumbling", "Venturesome", "Harried", "Poised", "Digestive", "Nauseating", "Mandatory", "Eatable", "Transformational", "Proportional", "Colloquial", "Concerned", "Opposing", "Saddened", "Surprised", "Improper", "Seething", "Heartbreaking", "Knowing", "Transformative", "Afternoon", "Nostalgic", "Disagreeable", "Otherwise", "Unscheduled", "Mythical", "Lateral", "Seeming", "Voluntary", "Worthwhile", "Unaltered", "Fuming", "Temperate", "Sentimental", "Stunning", "Truthful", "Buoyant", "Splashy", "Advantageous", "Neurological", "Taboo", "Belligerent", "Unsightly", "Shaded", "Inadvertent", "Recessive", "Spattered", "Inhabitable", "Republican", "Twisted", "Ordinary", "Transient", "Wailing", "Bewitching", "Shadowy", "Relative", "Immodest", "Treacherous", "Overbearing", "Telekinetic", "Harebrained", "Unremitting", "Vibrating", "Dripping", "Prodigious", "Amphibian", "Charmed", "Strongest", "Frequent", "Introductory", "Forward", "Willful", "Inalienable", "Neutral", "Unstable", "Indecent", "Moronic", "Devastated", "Lined", "Exploding", "Bronzed", "Warning", "Anonymous", "Grating", "Jealous", "Irreversible", "Eccentric", "Trustful", "Burning", "Unblinking", "Actual", "Criminal", "Trapped", "Crass", "Basic", "Decreasing", "Vagrant", "Snobbish", "Sweltering", "Unfashionable", "Expiring", "Onerous", "Angered", "Cognitive", "Gigantic", "Elite", "Absentminded", "Briny", "Esoteric", "Training", "Sweeping", "Strenuous", "Eloquent", "Pleading", "Magenta", "Undated", "Diseased", "Creeping", "Extendable", "Violent", "Accusative", "Tipsy", "Calculable", "Coquettish", "Saccharin", "Streaked", "Feigned", "Indignant", "Dependent", "Erratic", "Executable", "Jobless", "Powerless", "Tempestuous", "Unrealistic", "Illuminating", "Nonproductive", "Frightened", "Cleanable", "Seditious", "Effective", "Unappreciative", "Putrid", "Aggressive", "Unreceptive", "Decrepit", "Congruent", "Diverse", "Isolated", "Hypothetical", "Depressed", "Witless", "Barefooted", "Covert", "Spurious", "Uncreative", "Pneumatic", "Snapping", "Physical", "Microwaveable", "Unorthodox", "Implicit", "Fretful", "Impure", "Smartest", "Incomprehensible", "Alive", "Incessant", "Impartial", "Palatial", "Affirmative", "Exploitative", "Unsympathetic", "Famous", "Automatic", "Progressive", "Unbelievable", "Unexpected", "Monopolistic", "Conditional", "Sporadic", "Doubtful", "Impertinent", "Limitless", "Indiscriminate", "Indulgent", "Unabashed", "Knavish", "Minor", "Untamed", "Teenage", "Stacked", "Incongruent", "Unrelenting", "Legal", "Pristine", "Amicable", "Dashing", "Disgusting", "Inorganic", "Veritable", "Axiomatic", "Learnable", "Glorious", "Talented", "Static", "Imaginable", "Tested", "Current", "Unsafe", "Unwholesome", "Throbbing", "Terrified", "Regretful", "Durable", "Retrospective", "Whispering", "Glowing", "Offbeat", "Scrupulous", "Peaceable", "Engrossing", "Uttermost", "Yielding", "Aggravating", "Holistic", "Scandalous", "Prescriptive", "Graceful", "Crawling", "Transcendental", "Defendable", "Proactive", "Formative", "Limited", "Corresponding", "Unrealized", "Possessive", "Aching", "Scratched", "Deplorable", "Conflicting", "Suspected", "Calculated", "Unheeded", "Supersonic", "Fervid", "Contradicting", "Needless", "Unconventional", "Tenable", "Indeterminate", "Purple", "Acrid", "Abnormal", "Interactive", "Lower", "Ensuing", "Inconceivable", "Insensible", "Redundant", "Disruptive", "Convinced", "Oversized", "Lopsided", "Leased", "Zippy", "Uneventful", "Clingy", "Obeisant", "Intellectual", "Betrayed", "Inside", "Divisive", "Sociable", "Stringent", "Solemn", "Outrageous", "Bewildering", "Welcoming", "Convulsive", "Tidal", "Obsessive", "Upright", "Verdant", "Untried", "Tolerable", "Voiceless", "Abstracted", "Hypertensive", "Derogatory", "Tearing", "Abrupt", "Academic", "Declining", "Lifelong", "Enormous", "Primitive", "Rebellious", "Persistent", "Descriptive", "Overqualified", "Flippant", "Rugged", "Radiant", "Stuffed", "Ghoulish", "Presidential", "Swishing", "Masterful", "Bordering", "Semiprecious", "Illicit", "Competent", "Unsure", "Nightmarish", "Intricate", "Upper", "Respective", "Blasphemous", "Untrustworthy", "Wavering", "Conflicted", "Undetected", "Degenerative", "Wizardly", "Disappearing", "Concerning", "Oafish", "Discouraging", "Opaque", "Fatal", "Remedial", "Passing", "Predicative", "Cheerful", "Changeable", "Precipitous", "Vertical", "Latent", "Beeping", "Primordial", "Unwatchable", "Functional", "Hairless", "Woolen", "Dissuasive", "Tense", "Cancelled", "Unintended", "Transparent", "Controversial", "Meaningless", "Rested", "Boiling", "Pithy", "Discordant", "Swollen", "Implosive", "Organic", "Venturous", "Dwindling", "Ultrasensitive", "Tempted", "Catchable", "Monumental", "Sensational", "Replicable", "Sensitive", "Visionary", "Lawful", "Deranged", "Adorable", "Unhesitating", "Unremarkable", "Connectable", "Reverential", "Anticipated", "Freezing", "Stronger", "Literary", "Dreaded", "Dissolving", "Photographic", "Candid", "Predominant", "Effervescent", "Genial", "Apologizing", "Tickling", "Rakish", "Inapplicable", "Successive", "Bruised", "Falsified", "Primary", "Fleeting", "Genuine", "Slanderous", "Infamous", "Unaccompanied", "Dazzling", "Worthless", "Informative", "Unquestioned", "Prevalent", "Geometric", "Solicitous", "Reigning", "Organizational", "Ungracious", "Boundless", "Singular", "Scared", "Partisan", "Unperturbed", "Delightful", "Loveable", "Unusual", "Newest", "Astounding", "Jaded", "Communicable", "Explosive", "Panicky", "Unappetizing", "Intimidating", "Pigheaded", "Grateful", "Pricey", "Unmotivated", "Unworthy", "Potable", "Acknowledged", "Joyful", "Collectable", "Subversive", "Protective", "Faithful", "Fulfilled", "Contentious", "Repetitive", "Predisposed", "Catastrophic", "Multitalented", "Startled", "Metaphoric", "Interdepartmental", "Subdued", "Soaring", "Diabolical", "Evasive", "Centered", "Communal", "Nonexclusive", "General", "Undaunted", "Devastating", "Personal", "Deceitful", "Corporate", "Irreverent", "Modified", "Meaty", "Smothering", "Forensic", "Disputatious", "Unsolvable", "Unbecoming", "Abundant", "Frugal", "Knightly", "Operable", "Twinkly", "Paranormal", "Equal", "Presumable", "Oblivious", "Diminutive", "Flavorful", "Uninsurable", "Majestic", "Intrinsic", "Invaluable", "Credible", "Menial", "Euphemistic", "Hypercritical", "Doleful", "Frivolous", "Uncertain", "Ridiculing", "Standoffish", "Coherent", "Babbling", "Proximate", "Talkative", "Distracted", "Accountable", "Rigid", "Textual", "Cackling", "Rumpled", "Irreparable", "Sterile", "Aromatic", "Lamentable", "Public", "Speechless", "Bloodied", "Unthinking", "Hypnotic", "Diplomatic", "Opening", "Amazed", "Purposeful", "Expectant", "Pernicious", "Venerable", "Sluggish", "Chewy", "Bellowing", "Snide", "Fawning", "Uncomprehending", "Disgusted", "Astringent", "Renegotiable", "Transformed", "Divergent", "Tarnished", "Imminent", "Worst", "Rousing", "Secular", "Spare", "Constant", "Groaning", "Undignified", "Tectonic", "Surrealistic", "Hurried", "Adjustable", "Inexhaustible", "Irreconcilable", "Tripping", "Selfish", "Stunned", "Unharmed", "Suggestive", "Booming", "Vicious", "Serious", "Pugnacious", "Baffling", "Irrelative", "Environmental", "Daily", "Polluted", "Clashing", "Restrained", "Poorest", "Untidy", "Medium", "Stereotyped", "Conceited", "Obese", "Apprehensive", "Wolfish", "Devout", "Uppity", "Whooping", "Expanding", "Specialist", "Stylistic", "Untruthful", "Microscopic", "Stumbling", "Living", "Neglectful", "Nonresponsive", "Winsome", "Unmentionable", "Valuable", "Vinegary", "Thematic", "Latest", "Embittered", "Bustling", "Symbiotic", "Provoking", "Confused", "Insubordinate", "Maiden", "Refreshing", "Gratified", "Mystical", "Proverbial", "Culpable", "Groovy", "Errant", "Peeved", "Unforeseeable", "Artless", "Unintelligible", "Valid", "Applicable", "Obtrusive", "Uneducated", "Unostentatious", "Intolerant", "Intangible", "Tyrannous", "Feudal", "Preeminent", "Immensurable", "Swaying", "Astounded", "Skilled", "Magnetic", "Dissimilar", "Original", "Bookish", "Reviewable", "Invigorating", "Myopic", "Central", "Eminent", "Replaceable", "Convincing", "Unfulfilled", "Adequate", "Horrifying", "Exotic", "Transitional", "Stifled", "Anemic", "Rectangular", "Tepid", "Militaristic", "Nearby", "Uncivilized", "Mortal", "Moaning", "Volcanic", "Helpless", "Wrongful", "Musty", "Floral", "Independent", "Insensitive", "Formless", "Relevant", "Soldierly", "Additional", "Disturbed", "Unsophisticated", "Cooperative", "Smudged", "Tuneless", "Unclean", "Inspirational", "Egocentric", "Temporary", "Gradual", "Infallible", "Indecisive", "Imprecise", "Inflated", "Timorous", "Existing", "Wholesale", "Sacrilegious", "Unpleasant", "Gargantuan", "Argumentative", "Controlling", "Perpendicular", "Insulted", "Preoperative", "Whimpering", "Fearless", "Unscholarly", "Equidistant", "Breathtaking", "Workable", "Urgent", "Repetitious", "Absolute", "Perturbed", "Detestable", "Dependable", "Synergistic", "Outraged", "Euphoric", "Furious", "Chanting", "Boastful", "Malleable", "Disputed", "Incomparable", "Unconvincing", "Longest", "Unstructured", "Busiest", "Determined", "Waiting", "Insidious", "Pallid"
    ],
    &[
        "Grom", "Motay", "Veral", "Tuley",
        "Baur", "Shriek", "Ku", "Mokk",
        "Mantis", "Hornbug", "Skeeto", "Kii",
        "Miner", "Tokk", "Lupo", "Mora",
        "Howl", "Bear", "Light", "Gorlek",
        "Opher", "Lupo", "Kwolok", "Moki",
        "Worm", "Owl", "Gumo", "Naru",
        "Spirit", "Wolf", "Twillen", "Seir",
    ],
];
