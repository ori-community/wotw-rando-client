using System;
using System.Collections.Generic;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class ShopController {
    private static int KSBought { get => Math.Min(KS_MAX, SaveController.KSBought); }
    private static int KS_MAX { get => !SeedController.HasInternalSpoilers ? 4 : 8; }
    private static int KS_INC { get => !SeedController.HasInternalSpoilers ? 200 : 50; }
    private static int KS_START { get => !SeedController.HasInternalSpoilers ? 200 : 100; }
    private static int KS_PRICE { get => KS_START + KS_INC * KSBought; }
    public static HashSet<string> Strings = new HashSet<string>();
    private static readonly HashSet<AbilityType> opherWeaponInv = new HashSet<AbilityType> { AbilityType.Sentry, AbilityType.SpiritSmash, AbilityType.SpiritStar, AbilityType.Spike, AbilityType.Blaze, AbilityType.TeleportSpell, AbilityType.WaterBreath };
    private static readonly HashSet<AbilityType> costsEnergy = new HashSet<AbilityType> { AbilityType.Sentry, AbilityType.SpiritStar, AbilityType.Spike, AbilityType.Blaze, AbilityType.SpiritArc, AbilityType.Regenerate, AbilityType.Flash };
    private static readonly HashSet<ShardType> twillenShardInv = new HashSet<ShardType> { ShardType.Energy, ShardType.Vitality, ShardType.Overcharge, ShardType.Wingclip, ShardType.TripleJump, ShardType.Finesse, ShardType.Swap, ShardType.LightHarvest };
    private static string bmKeysDesc { get => $"Never logically required\\nNext will cost: {(KSBought == KS_MAX ? $"@{KS_PRICE}@" : $"{KS_PRICE + KS_INC}" /* look at this! the function-y props? the inline teriary? the nested string interpolations? this awful comment dragging it out? *chef's kiss */ )}"; }
    private static readonly string bmKeysName = "Black Market Keystone";
    // can actually use this for all of them besides the water one since they're either unlocked at spawn
    private static readonly string lockedTillGlades = "Locked: enter Glades\nfrom Hollow to unlock";

    public static string DescOrChatter(this Pickup pickup) => pickup is WeaponUpgrade wu ? wu.Desc : (pickup is Hint ch ? ch.Desc : Chatter());
    public static void UpdateShopData() {
      foreach (AbilityType t in opherWeaponInv) {
        if (t == AbilityType.WaterBreath) {
          var pickup = SeedController.OpherWeapon(t);
          if (pickup.NonEmpty)
            InterOp.set_opher_item((int)t, 255, pickup.ShopName, pickup.DescOrChatter(), lockedTillGlades, pickup is Ability s && costsEnergy.Contains(s.type), pickup.CostWithMod(GetCostMod(t)));
        }
        else if (KSOverride(t)) {
          var i = t == AbilityType.TeleportSpell ? 255 : (int)t;
          InterOp.set_opher_item(i, 255, bmKeysName, bmKeysDesc, "", false, KS_PRICE);
        }
        else {
          var pickup = SeedController.OpherWeapon(t);
          if (pickup.NonEmpty)
            InterOp.set_opher_item((int)t, 255, pickup.ShopName, pickup.DescOrChatter(), lockedTillGlades, pickup is Ability s && costsEnergy.Contains(s.type), pickup.CostWithMod(GetCostMod(t)));
        }
      }
      foreach (ShardType s in twillenShardInv) {
        var pickup = SeedController.TwillenShard(s);
        if (pickup.NonEmpty)
          InterOp.set_twillen_item((int)s, pickup.ShopName, Chatter(), lockedTillGlades, pickup.CostWithMod(GetCostMod(s)));
      }
      foreach (var luid in LupoUberIds) {
        var cond = luid.toCond();
        if (cond.HasPickup()) {
          var pickup = cond.Pickup();
          InterOp.set_lupo_item(luid.GroupID, luid.ID, pickup.ShopName, pickup.DescOrChatter(), "n/a");
        }
      }
    }

    private static Random R = new Random();
    public static String Chatter() {
      return GenericChatter[R.Next(GenericChatter.Count)];
    }
    public static List<string> GenericChatter = new List<string> {
      "Nice, isn't it?",
      "Very shiny",
      "One of my favorites",
      "I've always loved these",
      "Popular among the Moki",
      "A crowd favorite",
      "Seems kind of useless",
      "I guess someone could use this?",
      "I found this nearby",
      "Traded for this from a Moki",
      "Grom said he's never\nseen one of these",
      "Grom loves these",
      "Tokk gave me this",
      "Lupo found this while\nexploring the Wellspring",
      "Lupo found this deep\nin Inkwater Marsh",
      "Lupo found this under\nthe big statue of Kwolok",
      "Lupo found this floating\nin Luma Pools",
      "It's dangerous to go alone",
      "It's fresh!",
      "Hot item!",
      "Found this in the Midnight Burrows",
      "Fresh out of Nibel!",
      "I have no idea where this came from",
      "Not really sure what this is for",
      "You can use this, right?",
      "Selling this one at a loss",
      "Caveat emptor!",
      "Heh",
      "Look...",
      "Don't worry about it",
      "I used to give out\ncoupons for these",
    };

    private static Dictionary<AbilityType, float> weaponCostMods = new Dictionary<AbilityType, float>();
    private static Dictionary<ShardType, float> shardCostMods = new Dictionary<ShardType, float>();

    public static void SetCostMod(AbilityType type, float multi) => weaponCostMods[type] = multi;
    public static void SetCostMod(ShardType type, float multi) => shardCostMods[type] = multi;

    public static float GetCostMod(AbilityType type) => weaponCostMods.ContainsKey(type) ? weaponCostMods[type] : 0f;
    public static float GetCostMod(ShardType type) => shardCostMods.ContainsKey(type) ? shardCostMods[type] : 0f;

    public static void OnBuyOpherWeapon(AbilityType slot) {
      if (KSOverride(slot)) {
        (new Resource(ResourceType.Keystone)).Grant();
        SaveController.KSBought++;
        SaveController.FoundCount--;
        InterOp.set_opher_item(255, 255, bmKeysName, bmKeysDesc, "", false, KS_PRICE);
        return;
      }
      UberSet.Bool(slot.BoughtState(), true);

      Pickup item = SeedController.OpherWeapon(slot);
      Randomizer.Log($"sold {item} from {slot} for ${SeedController.OpherWeapon(slot).CostWithMod(GetCostMod(slot))}", false);
      return;
    }

    public static void OnBuyOpherUpgrade(AbilityType slot) => UberSet.Bool(slot.UpgradedState(), true);

    private static bool KSOverride(AbilityType a) => a == AbilityType.TeleportSpell && !SeedController.KSDoorsOpen;

    public static void OnBuyTwillenShard(ShardType slot) {
      Pickup item = SeedController.TwillenShard(slot);
      Randomizer.Log($"sold {item} from {slot} for ${SeedController.TwillenShard(slot).CostWithMod(GetCostMod(slot))}", false);
      UberSet.Bool(slot.BoughtState(), true);
      return;
    }
    public static bool OpherBoughtWeapon(AbilityType granted) => granted.Bought();
    public static bool TwillenBoughtShard(ShardType shard) => shard.Bought();
    public static bool OpherBoughtUpgrade(AbilityType slot) => slot.Upgraded();
    public static int TwillenShardCost(ShardType shard) => SeedController.TwillenShard(shard).CostWithMod(GetCostMod(shard));
    public static int OpherWeaponCost(AbilityType ability) => KSOverride(ability) ? KS_PRICE : SeedController.OpherWeapon(ability).CostWithMod(GetCostMod(ability));

    private static HashSet<UberId> LupoUberIds = new HashSet<UberId>() {
       new UberId(48248, 19396),
       new UberId(48248, 57987),
       new UberId(48248, 41666),
    };

    public static int LupoUpgradeCost(int id) => new UberId(48248, id).toCond().Pickup()?.DefaultCost() ?? 250;
  }
}
