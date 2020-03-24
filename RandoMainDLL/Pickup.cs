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
        Ore
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
                    break;
            }
        }

    }
}
