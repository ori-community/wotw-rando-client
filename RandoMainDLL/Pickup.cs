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
    public enum ResourceType : byte {
        Health,
        Energy,
        Ore,
        Keystone
    }
    public abstract class Pickup {
        public abstract PickupType Type();
        public abstract void Grant();
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
                    Randomizer.Memory.Ore += 1;
                    Randomizer.OreFound = true;
                    break;
                case ResourceType.Keystone:
                    Randomizer.Memory.Keystones += 1;
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
                default:
                    return $"Unknown resource type {type}";
            }
        }
    }
}
