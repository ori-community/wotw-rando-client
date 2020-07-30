using System;
using System.Collections.Generic;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class ShopController {
    public static HashSet<string> Strings = new HashSet<string>();
    private static readonly HashSet<AbilityType> opherWeaponInv = new HashSet<AbilityType> { AbilityType.Sentry, AbilityType.SpiritSmash, AbilityType.SpiritStar, AbilityType.Spike, AbilityType.Blaze, AbilityType.TeleportSpell, AbilityType.WaterBreath };
    private static readonly HashSet<AbilityType> opherUpgradeInv = new HashSet<AbilityType> { AbilityType.Sentry, AbilityType.SpiritSmash, AbilityType.SpiritStar, AbilityType.Spike, AbilityType.Blaze };
    private static readonly HashSet<AbilityType> costsEnergy = new HashSet<AbilityType> { AbilityType.Sentry, AbilityType.SpiritStar, AbilityType.Spike, AbilityType.Blaze, AbilityType.SpiritArc, AbilityType.Regenerate, AbilityType.Flash };
    private static readonly HashSet<ShardType> twillenShardInv = new HashSet<ShardType> { ShardType.Energy, ShardType.Vitality, ShardType.Overcharge, ShardType.Wingclip, ShardType.TripleJump, ShardType.Finesse, ShardType.Swap, ShardType.LightHarvest };
    private static string bmKeysDesc { get => $"Never logically required\\nNext will cost: {(KSBought == KSMAX ?  "#500#" : $"{150 + 50 * KSBought /* look at this! the function-y prop? the inline teriary? the nested string interpolation? this awful comment dragging it out? *chef's kiss */ }")}"; }
    private static readonly string bmKeysName  = "Black Market Keystone";
    private static readonly string hintOneName = "Bash/Clean Water/Flap Hint";
    private static readonly string hintOneDesc = "Will tell you what Zone *Bash*, #Clean Water#, and *Flap* are in";
    // can actually use this for all of them besides the water one since they're either unlocked at spawn
    private static readonly string lockedTillGlades = "Locked: enter Glades\nfrom Hollow to unlock"; 
    public static void UpdateShopData() {
      foreach(AbilityType t in opherWeaponInv) {
        if (WaterOverride(t)) {
          InterOp.set_opher_item((int)t, 255, hintOneName, hintOneDesc, "Locked: Escape Wellspring\nto unlock", false, 2500);
        }
        else if (KSOverride(t)) {

          var i = t == AbilityType.TeleportSpell ? 255 : (int)t;
          InterOp.set_opher_item(i, 255, bmKeysName, bmKeysDesc, "", false, 100 + 50 * KSBought);
        }
        else {
          var pickup = SeedController.OpherWeapon(t);
          if (pickup.NonEmpty) {
            InterOp.set_opher_item((int)t, 255, pickup.ToString(), Chatter(), lockedTillGlades, pickup is Ability s && costsEnergy.Contains(s.type), pickup.CostWithMod(GetCostMod(t)));
          }
          else
            Randomizer.Warn("UpdateShopData", $"Couldn't find a pickup for {t.GetDescription()}");
        }
      }
      foreach(ShardType s in twillenShardInv) {
        var pickup = SeedController.TwillenShard(s);
        if (pickup.NonEmpty)
          InterOp.set_twillen_item((int)s, pickup.ToString(), Chatter(), lockedTillGlades, pickup.CostWithMod(GetCostMod(s)));
      }
      foreach(LupoHintData d in lupoDataByID.Values)
        d.Setup();
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
        SaveController.Data.KSBought++;
        SaveController.Data.FoundCount--;
        return;
      } 
      if (WaterOverride(slot)) {
        SaveController.Data.OpherSold.Add(slot);
        AHK.SendPlainText(new PlainText($"Bought Hint: {HintsController.GetKeySkillHintOne()}", 300));
        return;
      }

      Pickup item = SeedController.OpherWeapon(slot);
      if (SaveController.Data.OpherSold.Contains(slot)) {
        Randomizer.Log($"OBW: slot already sold");
        return;
      }
      SaveController.Data.OpherSold.Add(slot);
      Randomizer.Log($"sold {item} from {slot} for ${SeedController.OpherWeapon(slot).CostWithMod(GetCostMod(slot))}", false);
      item.Grant();
      return;
    }

    public static void OnBuyOpherUpgrade(AbilityType slot) => SaveController.Data.OpherUpgraded.Add(slot, 1);

    private static bool KSOverride(AbilityType a)    => a == AbilityType.TeleportSpell && !SeedController.KSDoorsOpen;
    private static bool WaterOverride(AbilityType a) => a == AbilityType.WaterBreath   && !SeedController.HintsDisabled;

    private static readonly int KSMAX = 8;
    private static int KSBought { get => Math.Min(KSMAX, SaveController.Data?.KSBought ?? 0); }
    public static void OnBuyTwillenShard(ShardType slot) {
      Pickup item = SeedController.TwillenShard(slot);
      if (SaveController.Data.TwillenSold.Contains(slot)) {
        Randomizer.Log($"TBS: slot already sold???");
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

    public static int TwillenShardCost(ShardType shard) => SeedController.TwillenShard(shard).CostWithMod(GetCostMod(shard));
    public static int OpherWeaponCost(AbilityType ability) => KSOverride(ability) ?
      100 + 50 * KSBought : 
      (WaterOverride(ability) ? 2500 : 
      SeedController.OpherWeapon(ability).CostWithMod(GetCostMod(ability)));

    class LupoHintData {
      public readonly String Name;
      public readonly String Desc;
      public readonly int Cost;
      public readonly UberId Id;

      public LupoHintData(string name, string desc, int cost, UberId id) {
        Name = name;
        Desc = desc;
        Cost = cost;
        Id   = id;
      }
      public void Setup() => InterOp.set_lupo_item(Id.GroupID, Id.ID, Name, Desc, "test3");

    }
    private static Dictionary<int, LupoHintData> lupoDataByID = new Dictionary<int, LupoHintData>() {
      {19396, new LupoHintData("Glades hint", "information on $Key Items$ in #Wellspring Glades#", 200, new UberId(48248, 19396)) },  // energy -> glades
      {57987, new LupoHintData("Woods hint", "information on $Key Items$ in #Silent Woods#", 200, new UberId(48248, 57987)) },  // health -> woods
      {41666, new LupoHintData("Burrow/Water Dash/Light Burst hint", "Will tell you what Zone *Water Dash*, *Burrow* and *Light Burst* are in", 4000, new UberId(48248, 41666)) }, // shards -> key item hints
    };
    public static int LupoUpgradeCost(int upgradeId) => lupoDataByID.TryGetValue(upgradeId, out LupoHintData d) ? d.Cost : 250;
  }
}
