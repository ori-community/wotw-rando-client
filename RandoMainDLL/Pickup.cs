using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using RandoMainDLL.Memory;
namespace RandoMainDLL {
    public enum PickupType : byte {
        SpiritLight,
        Resource,
        Ability,
        Shard,
        QuestItem,
        Teleporter
    }

    public enum TeleporterType : byte {
        MidnightBurrows,
        HowlsDen,
        LumaPoolsA,
        Wellspring,
        BaursReach,
        KwoloksHollow,
        Mouldwood,
        SilentWoodsA,
        SilentWoodsB,
        WindsweptWastesA,
        WindsweptWastesB,
        WindtornRuinsA,
        WillowsEnd,
        LumaPoolsB,
        WindtornRuinsB,
        WillowsEndShriek,
        builderProjectSpiritWell,
        InkwaterMarsh,
    }
    public enum ResourceType : byte {
        Health,
        Energy,
        Ore,
        Keystone,
        ShardSlot
    }
    public abstract class Pickup {
        public abstract PickupType Type();
        public abstract void Grant();
    }

    public class Teleporter : Pickup {
        public override PickupType Type() { return PickupType.Teleporter; }
        public static Dictionary<TeleporterType, UberState> TeleporterStates = new Dictionary<TeleporterType, UberState>() {
            { TeleporterType.MidnightBurrows, UberStateDefaults.savePedestalMidnightBurrows },
            { TeleporterType.HowlsDen, UberStateDefaults.savePedestalHowlsDen },
            { TeleporterType.LumaPoolsA, UberStateDefaults.savePedestalLumaPoolsA },
            { TeleporterType.Wellspring, UberStateDefaults.savePedestalWellspring },
            { TeleporterType.BaursReach, UberStateDefaults.savePedestalBaursReach },
            { TeleporterType.KwoloksHollow, UberStateDefaults.savePedestalKwoloksHollow },
            { TeleporterType.Mouldwood, UberStateDefaults.savePedestalMouldwood },
            { TeleporterType.SilentWoodsA, UberStateDefaults.savePedestalSilentWoodsA },
            { TeleporterType.SilentWoodsB, UberStateDefaults.savePedestalSilentWoodsB },
            { TeleporterType.WindsweptWastesA, UberStateDefaults.savePedestalWindsweptWastesA },
            { TeleporterType.WindsweptWastesB, UberStateDefaults.savePedestalWindsweptWastesB },
            { TeleporterType.WindtornRuinsA, UberStateDefaults.savePedestalWindtornRuinsA },
            { TeleporterType.WillowsEnd, UberStateDefaults.savePedestalWillowsEnd },
            { TeleporterType.WindtornRuinsB, UberStateDefaults.savePedestalWindtornRuinsB },
            { TeleporterType.LumaPoolsB, UberStateDefaults.savePedestalLumaPoolsB },
            { TeleporterType.WillowsEndShriek, UberStateDefaults.savePedestalWillowsEndShriek },
            { TeleporterType.InkwaterMarsh, UberStateDefaults.savePedestalInkwaterMarsh },
        };
        public static Dictionary<TeleporterType, String> TeleporterNames = new Dictionary<TeleporterType, String>() {
            { TeleporterType.MidnightBurrows,  "Midnight Burrows" },
            { TeleporterType.HowlsDen,  "Howls Den" },
            { TeleporterType.LumaPoolsA,  "Luma Pools West" },
            { TeleporterType.Wellspring,  "Wellspring" },
            { TeleporterType.BaursReach,  "Baur's Reach" },
            { TeleporterType.KwoloksHollow,  "Kwoloks Hollow" },
            { TeleporterType.Mouldwood,  "Mouldwood Depths" },
            { TeleporterType.SilentWoodsA,  "Silent Woods (East)" },
            { TeleporterType.SilentWoodsB,  "Silent Woods (West)" },
            { TeleporterType.WindsweptWastesA,  "Windswept Wastes (East)" },
            { TeleporterType.WindsweptWastesB,  "Windswept Wastes (West)" },
            { TeleporterType.WindtornRuinsA,  "Windtorn Ruins (Outer)" },
            { TeleporterType.WillowsEnd,  "Willows End (" },
            { TeleporterType.LumaPoolsB,  "Luma Pools (West)" },
            { TeleporterType.WindtornRuinsB,  "Windtorn Ruins (Inner)" },
            { TeleporterType.WillowsEndShriek,  "Spirit Willow" },
            { TeleporterType.InkwaterMarsh,  "Inkwater Marsh" },
        };
        public TeleporterType type;
        public Teleporter(TeleporterType _type) { type = _type; }
        public override void Grant() {
            Teleporter.TeleporterStates[type].Value.Byte = 1;
            Randomizer.Memory.WriteUberState(Teleporter.TeleporterStates[type]);
        }
        public override string ToString() {
            return $"{TeleporterNames[type]} Teleporter";
        }
    }
    public class Ability : Pickup {
        public override PickupType Type() { return PickupType.Ability; }
        public AbilityType type;

        public Ability(AbilityType ability) {
            type = ability;
        }
        public override void Grant() {
            Randomizer.Memory.SetAbility(type);
        }
        public override string ToString() {
            return AbilityN.ame(type);
        }
    }
    public class Shard : Pickup {
        public override PickupType Type() { return PickupType.Shard; }
        public ShardType type;
        public Shard(ShardType shard) {
            type = shard;
        }
        public override void Grant() {
            Randomizer.Memory.SetShard(type);
        }
        public override string ToString() {
            return ShardN.ame(type);
        }

    }
    public class Cash : Pickup {
        public override PickupType Type() { return PickupType.SpiritLight; }
        public int amount;

        public Cash(int money) {
            amount = money;
        }
        public override void Grant() {
            Randomizer.Memory.Experience += amount;
        }
        private static List<String> MoneyNames = new List<String>() { "Spirit Light", "Gallon", "Gold", "Geo", "Experience", "Gil", "GP", "Dollars", "Tokens", "Tickets", "Pounds Sterling", "BTC", "Euros", "Credits", "Bells", "Zenny", "Pesos", "Exalted Orbs", "Poké", "Glod"};
        public override string ToString() {
            return $"{amount} {MoneyNames[new Random().Next(MoneyNames.Count)]}";
        }
    }

    public class Resource : Pickup {
        public override PickupType Type() { return PickupType.Resource; }
        public ResourceType type;

        public Resource(ResourceType resource) {
            type = resource;
        }

        public override void Grant() {
            switch(type) {
                case ResourceType.Health:
                    Randomizer.Memory.FakeHalfHealth();
                    break;
                case ResourceType.Energy:
                    Randomizer.Memory.FakeHalfEnergy();
                    break;
                case ResourceType.Ore:
                    Randomizer.Memory.Ore++;
                    Randomizer.OreFound = true;
                    break;
                case ResourceType.Keystone:
                    Randomizer.Memory.Keystones++;
                    break;
                case ResourceType.ShardSlot:
                    Randomizer.Memory.Shards++;
                    break;
            }
        }
        public override string ToString() {
            switch (type) {
                case ResourceType.Health:
                    return "Half-Health Cell";
                case ResourceType.Energy:
                    return "Half-Energy Cell";
                case ResourceType.Ore:
                    return "Gorlek Ore";
                case ResourceType.Keystone:
                    return "Keystone";
                case ResourceType.ShardSlot:
                    return "Shard Slot";
                default:
                    return $"Unknown resource type {type}";
            }
        }
    }
}
