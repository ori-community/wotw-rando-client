using System;
using System.Collections.Generic;
using System.IO;
using RandoMainDLL.Memory;
namespace RandoMainDLL {
    public static class SeedManager {
        public static Dictionary<UberId, Pickup> pickupMap = new Dictionary<UberId, Pickup>();
        public static void ReadSeed() {
            foreach (var line in File.ReadLines("C:\\moon\\wotw.seed")) {
                try {
                    var frags = line.Split('|');
                    var uberId = new UberId(int.Parse(frags[0]), int.Parse(frags[1]));
                    var pickupType = (PickupType)byte.Parse(frags[2]);
//                    Randomizer.Log($"uberId {uberId} -> {pickupType} {frags[3]}");
                    pickupMap[uberId] = BuildPickup(pickupType, frags[3]);
                } catch(Exception e) {
                    Randomizer.Log($"Error parsing line: '{line}'\nError: {e.Message} \nStacktrace: {e.StackTrace}");
                }
            }
        }

        public static bool OnUberState(UberState state) {
            var id = state.GetUberId();
            if (pickupMap.TryGetValue(id, out Pickup p)) {
                AHK.Print(p.ToString());
                p.Grant();
                return true;
            }
            return false;
        }
        public static Pickup BuildPickup(PickupType type, String pickupData) {
            switch(type) {
                case PickupType.Ability:
                    return new Ability((AbilityType)byte.Parse(pickupData));
                case PickupType.Shard:
                    return new Shard((ShardType)byte.Parse(pickupData));
                case PickupType.SpiritLight:
                    return new Cash(int.Parse(pickupData));
                case PickupType.Resource:
                    return new Resource((ResourceType)byte.Parse(pickupData));
                default:
                    throw new NotImplementedException("I'm vewy sowwy but that featuwe is not yet impwemented");
            }
        }
    }

}
