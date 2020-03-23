using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using RandoMainDLL.Memory;
namespace RandoMainDLL {
    public enum PickupType : byte {
        SpiritLight,
        Upgrade,
        Ability,
        Shard,
        QuestItem
    }
    public abstract class Pickup {
        public abstract PickupType Type();
        public abstract void Grant(MemoryManager memory);
    }

    public class AbilityPickup : Pickup {
        public override PickupType Type() { return PickupType.Ability; }
        public AbilityType abilityType;

        public AbilityPickup(AbilityType ability) {
            this.abilityType = ability;
        }
        public override void Grant(MemoryManager memory) {
            memory.SetAbility(abilityType);
        }
    }
}
