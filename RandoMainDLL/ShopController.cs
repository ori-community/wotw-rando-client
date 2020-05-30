using System;
using System.Collections.Generic;
using RandoMainDLL.Memory;
using System.Runtime.InteropServices;

namespace RandoMainDLL {
  public static class ShopController {
    public static HashSet<string> Strings = new HashSet<string>();

    public static ulong MessageSwap(IntPtr str) {
      var strr = MemoryReader.ReadString(Randomizer.Memory.Program, str);
      var shopStr = GetShopNameReplacement(strr);
      if (shopStr != strr) {
        return (ulong)InterOp.Util.getIl2cppStringPointer(shopStr);
      }
      else if (!Strings.Contains(strr)) {
/*        if (Randomizer.Dev)
          Randomizer.Log($"New String: |{strr}|", false);*/
        Strings.Add(strr);
      }
      return 0;
    }


    public static string GetShopNameReplacement(string orig) {
      if (RemoveStrings.Contains(orig)) {
        return " ";
      }
      else if(LupoReplacements.ContainsKey(orig)) {
        return LupoReplacements[orig];
      }
      else if (OpherWeaponDetail.ContainsKey(orig)) {
        var weapon = OpherWeaponDetail[orig];
        if (!OpherWeaponChatter.ContainsKey(weapon)) {
          OpherWeaponChatter[weapon] = Chatter[new Random().Next(Chatter.Count)];
        }
        return OpherWeaponChatter[weapon];
      }
      else if (OpherWeaponNames.ContainsKey(orig)) {
        return SeedController.OpherWeapon(OpherWeaponNames[orig]).ToString();

      }
      else if (TwillenShardDetail.ContainsKey(orig)) {
        var shard = TwillenShardDetail[orig];
        if (!TwillenShardChatter.ContainsKey(shard)) {
          TwillenShardChatter[shard] = Chatter[new Random().Next(Chatter.Count)];
        }
        return TwillenShardChatter[shard];
      }
      else if (TwillenShardNames.ContainsKey(orig)) {
        return SeedController.TwillenShard(TwillenShardNames[orig]).ToString();
      }

      return orig;
    }

    public static HashSet<string> RemoveStrings = new HashSet<string> {
      "Level {0}:",
      "Next Level",
      "Uses Energy",
      "Upgrade for",
      "Gain 2 additional Energy cells",
      "Gain 3 additional Energy cells",
      "Gain 2 additional Life cells",
      "Gain 3 additional Life cells",
      "Enemies drop 3 extra Spirit Light orbs",
      "Enemies drop 4 extra Spirit Light orbs",
      "20% chance to deal 50% bonus damage",
    };

    public static Dictionary<string, string> LupoReplacements = new Dictionary<string, string> {
      {"Reveal Energy Cells", "Glades hint" },
      {"Reveal Life Cells", "Woods hint" },
      {"Reveal Shards", "Burrow/Water Dash/Light Burst hint" },
      {"Show all #Energy Cells# on maps", "information on $Key Items$ in #Wellspring Glades#" },
      {"Show all #Life Cells# on maps", "information on $Key Items$ in #Silent Woods#" },
      {"Show all #Spirit Shards# on maps", "Will tell you what Zone $Water Dash$, $Burrow$ and $Light Burst$ are in" },
    };

    public static Dictionary<string, AbilityType> OpherWeaponNames = new Dictionary<string, AbilityType> {
      { "Sentry", AbilityType.Sentry },
      { "Spirit Smash", AbilityType.SpiritSmash },
      { "Spirit Star", AbilityType.SpiritStar },
      { "Spike", AbilityType.Spike },
      { "Blaze", AbilityType.Blaze },
      { "Water Breath", AbilityType.WaterBreath },
      { "Fast Travel", AbilityType.TeleportSpell },
    };

    public static Dictionary<string, AbilityType> OpherWeaponDetail = new Dictionary<string, AbilityType> {
      { "Pound foes with a strong, sweeping blow", AbilityType.SpiritSmash },
      { @"Throw a powerful spear of light.\nUses a large amount of Energy", AbilityType.Spike },
      { "Spawn a spirit orb that attacks for you", AbilityType.Sentry },
      { "Throw a star that returns to you", AbilityType.SpiritStar },
      { "Set nearby enemies on fire", AbilityType.Blaze },
      { "Breathe under water", AbilityType.WaterBreath },
      { "Select Spirit Wells on the map and #warp# to them #from anywhere#.", AbilityType.TeleportSpell }
    };

    public static Dictionary<string, ShardType> TwillenShardNames = new Dictionary<string, ShardType> {
      { "Energy", ShardType.Energy },
      { "Vitality", ShardType.Vitality },
      { "Overcharge", ShardType.Overcharge },
      { "Wingclip", ShardType.Wingclip },
      { "Triple Jump", ShardType.TripleJump },
      { "Finesse", ShardType.Finesse },
      { "Swap", ShardType.Swap },
      { "Light Harvest", ShardType.LightHarvest },
    };

    public static Dictionary<string, ShardType> TwillenShardDetail = new Dictionary<string, ShardType> {
      { "Gain 1 additional Energy cell", ShardType.Energy },
      { "Gain 1 additional Life cell", ShardType.Vitality },
      { "Reduce Energy costs by 50% and increase damage taken by 100%", ShardType.Overcharge },
      { "Deal bonus damage to flying enemies", ShardType.Wingclip},
      { "Jump twice mid-air before landing", ShardType.TripleJump},
      { "10% chance to deal 50% bonus damage", ShardType.Finesse},
      { "Swap maximum Life and Energy", ShardType.Swap },
      { "Enemies drop 2 extra Spirit Light orbs", ShardType.LightHarvest },
    };

    public static Dictionary<AbilityType, string> OpherWeaponChatter = new Dictionary<AbilityType, string>();
    public static Dictionary<ShardType, string> TwillenShardChatter = new Dictionary<ShardType, string>();

    public static List<string> Chatter = new List<string> {
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
      Pickup item = SeedController.OpherWeapon(slot);
      if (SaveController.Data.OpherSold.Contains(slot)) {
        Randomizer.Log($"OBW: not enough money or slot already sold");
        return;
      }
      SaveController.Data.OpherSold.Add(slot);
      Randomizer.Log($"sold {item} from {slot} for ${SeedController.OpherWeapon(slot).CostWithMod(GetCostMod(slot))}", false);
      item.Grant();
      return;
    }

    public static void OnBuyOpherUpgrade(AbilityType slot) => SaveController.Data.OpherUpgraded.Add(slot, 1);

    public static void OnBuyTwillenShard(ShardType slot) {
      Pickup item = SeedController.TwillenShard(slot);
      if (SaveController.Data.TwillenSold.Contains(slot)) {
        Randomizer.Log($"TBS: not enough money or slot already sold ");
        return;
      }
      Randomizer.Log($"sold {item} from {slot} for ${SeedController.TwillenShard(slot).CostWithMod(GetCostMod(slot))}", false);
      SaveController.Data.TwillenSold.Add(slot);
      item.Grant();
      return;
    }
    public static bool OpherBoughtWeapon(AbilityType granted) => SaveController.Data.OpherSold.Contains(granted);

    public static bool TwillenBoughtShard(ShardType shard) => SaveController.Data.TwillenSold.Contains(shard);

    public static bool OpherBoughtUpgrade(AbilityType slot) => SaveController.Data.OpherUpgraded.GetOrElse(slot, 0) > 0;

    public static int TwillenShardCost(ShardType shard) => SeedController.TwillenShard(shard).CostWithMod(ShopController.GetCostMod(shard));
    public static int OpherWeaponCost(AbilityType ability) => SeedController.OpherWeapon(ability).CostWithMod(ShopController.GetCostMod(ability));

    private static Dictionary<int, int> lupoCosts = new Dictionary<int, int>() {
      {19396, 200 },  // energy -> glades
      {57987, 200 },  // health -> woods
      {41666, 4000 }, // shards -> key item hints
    };
    public static int LupoUpgradeCost(int upgradeId) => lupoCosts.GetOrElse(upgradeId, 250);


  }
}
