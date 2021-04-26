using System;
using System.Collections.Generic;
using RandoMainDLL.Memory;

namespace RandoMainDLL {

  public abstract class ShopSlot {
    public abstract UberId State { get; }
    public abstract UberId CostState { get; }
    public int Cost {
      get => UberGet.Int(CostState);  // TODO; overriding
      set => UberSet.Int(CostState, value);
    }
    public Pickup Contents => State.toCond().Pickup();


    public static OpherSlot Sentry = new OpherSlot(AbilityType.Sentry);
    public static OpherSlot Star = new OpherSlot(AbilityType.SpiritStar);
    public static OpherSlot Smash = new OpherSlot(AbilityType.SpiritSmash);
    public static OpherSlot Spike = new OpherSlot(AbilityType.Spike);
    public static OpherSlot Blaze = new OpherSlot(AbilityType.Blaze);
    public static OpherSlot Teleport = new OpherSlot(AbilityType.TeleportSpell);
    public static OpherSlot WaterBreath = new OpherSlot(AbilityType.WaterBreath);

    public static List<OpherSlot> Opher = new List<OpherSlot> { Sentry, Star, Smash, Spike, Blaze, Teleport, WaterBreath };

    public static TwillenSlot Overcharge = new TwillenSlot(ShardType.Overcharge);
    public static TwillenSlot Energy = new TwillenSlot(ShardType.Energy);
    public static TwillenSlot Vitality = new TwillenSlot(ShardType.Vitality);
    public static TwillenSlot Wingclip = new TwillenSlot(ShardType.Wingclip);
    public static TwillenSlot TripleJump = new TwillenSlot(ShardType.TripleJump);
    public static TwillenSlot Finesse = new TwillenSlot(ShardType.Finesse);
    public static TwillenSlot Swap = new TwillenSlot(ShardType.Swap);
    public static TwillenSlot LightHarvest = new TwillenSlot(ShardType.LightHarvest);

    public static List<TwillenSlot> Twillen = new List<TwillenSlot> { Overcharge, Energy, Vitality, Wingclip, TripleJump, Finesse, Swap, LightHarvest };

    public static LupoStoreSlot HealthIcons = new LupoStoreSlot(19396);
    public static LupoStoreSlot EnergyIcons = new LupoStoreSlot(57987);
    public static LupoStoreSlot ShardIcons = new LupoStoreSlot(41666);

    public static List<LupoStoreSlot> LupoStore = new List<LupoStoreSlot> { HealthIcons, EnergyIcons, ShardIcons };
  }
  public class OpherSlot : ShopSlot {
    public readonly AbilityType Weapon;
    public readonly bool IsUpgrade;
    public override UberId CostState => new UberId(1, 10000 + (int)Weapon);
    public override UberId State => new UberId(1, (int)Weapon);
    public OpherSlot(AbilityType at, bool upgrade = false) => (Weapon, IsUpgrade) = (at, upgrade);
  }
  public class LupoStoreSlot : ShopSlot {
    private readonly int id;
    public override UberId CostState => new UberId(48248, id + 1);
    public override UberId State => new UberId(48248, id);
    public LupoStoreSlot(int _id) => id = _id;
  }

  public class TwillenSlot : ShopSlot {
    public readonly ShardType Shard;
    public override UberId CostState => new UberId(2, 100 + (int)Shard);
    public override UberId State => new UberId(2, (int)Shard);
    public TwillenSlot(ShardType st) => Shard = st;
  }

  public static class ShopController {
    public static ShopSlot Slot(this AbilityType at) {
    switch(at) {
        case AbilityType.WaterBreath:
          return ShopSlot.WaterBreath;
        case AbilityType.Sentry:
          return ShopSlot.Sentry;
        case AbilityType.SpiritStar:
          return ShopSlot.Star;
        case AbilityType.SpiritSmash:
          return ShopSlot.Smash;
        case AbilityType.Spike:
          return ShopSlot.Spike;
        case AbilityType.Blaze:
          return ShopSlot.Blaze;
        case AbilityType.TeleportSpell:
          return ShopSlot.Teleport;
        default:
          throw new ArgumentException($"{at} has no associated shop slot");
      }
    }
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
      foreach (var s in ShopSlot.Opher) {
        var t = s.Weapon;
        if (t == AbilityType.WaterBreath) {
          var pickup = s.Contents;
          if (pickup.NonEmpty)
            InterOp.set_opher_item((int)t, 255, pickup.ShopName, pickup.DescOrChatter(), "Locked: escape Wellspring to unlock", pickup is Ability a && costsEnergy.Contains(a.type), s.Cost);
        }
        else if (KSOverride(t)) {
          var i = t == AbilityType.TeleportSpell ? 255 : (int)t;
          InterOp.set_opher_item(i, 255, bmKeysName, bmKeysDesc, "", false, KS_PRICE);
        }
        else {
          var pickup = s.Contents;
          var i = t == AbilityType.TeleportSpell ? 255 : (int)t;
          if (pickup.NonEmpty)
            InterOp.set_opher_item(i, 255, pickup.ShopName, pickup.DescOrChatter(), lockedTillGlades, pickup is Ability a && costsEnergy.Contains(a.type), s.Cost);
        }
      }
      foreach (var s in ShopSlot.Twillen) {
        var pickup = s.Contents;
        if (pickup.NonEmpty)
          InterOp.set_twillen_item((int)s.Shard, pickup.ShopName, Chatter(), lockedTillGlades, s.Cost);
      }
      foreach (var s in ShopSlot.LupoStore) {
        var pickup = s.Contents;
        InterOp.set_lupo_item(s.State.GroupID, s.State.ID, pickup.ShopName, pickup.DescOrChatter(), "n/a");
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

    private static Dictionary<AbilityType, int> WepCostOverrides = new Dictionary<AbilityType, int>();
    private static Dictionary<ShardType, int> ShardCostOverrides = new Dictionary<ShardType, int>();

    public static void SetCostMod(AbilityType type, float multi) => weaponCostMods[type] = multi;
    public static void SetCostMod(ShardType type, float multi) => shardCostMods[type] = multi;

    public static float GetCostMod(AbilityType type) => weaponCostMods.ContainsKey(type) ? weaponCostMods[type] : 0f;
    public static float GetCostMod(ShardType type) => shardCostMods.ContainsKey(type) ? shardCostMods[type] : 0f;

    public static void OnBuyOpherWeapon(AbilityType slot) {
      if (KSOverride(slot)) {
        (new Resource(ResourceType.Keystone)).Grant();
        SaveController.KSBought++;
        SaveController.FoundCount--;
        UberSet.Int(slot.PriceState(), KS_PRICE);
        InterOp.set_opher_item(255, 255, bmKeysName, bmKeysDesc, "", false, KS_PRICE);
        return;
      }
      UberSet.Bool(slot.BoughtState(), true);

      Pickup item = SeedController.OpherWeapon(slot);
      Randomizer.Log($"sold {item} from {slot} for ${slot.Cost()}", false);
      return;
    }

    public static void SetCostsAfterLoad() {
      foreach(var at in opherWeaponInv) {
        if (KSOverride(at))
          UberSet.Int(at.PriceState(), KS_PRICE);
        else
          UberSet.Int(at.PriceState(), SeedController.OpherWeapon(at).CostWithMod(GetCostMod(at)));
      }
      foreach(var st in twillenShardInv)
        UberSet.Int(st.PriceState(), SeedController.TwillenShard(st).CostWithMod(GetCostMod(st)));
    }

    public static void OnBuyOpherUpgrade(AbilityType slot) => UberSet.Bool(slot.UpgradedState(), true);

    private static bool KSOverride(AbilityType a) => a == AbilityType.TeleportSpell && !SeedController.KSDoorsOpen;

    public static void OnBuyTwillenShard(ShardType slot) {
      Pickup item = SeedController.TwillenShard(slot);
      Randomizer.Log($"sold {item} from {slot} for ${slot.Cost()}", false);
      UberSet.Bool(slot.BoughtState(), true);
      return;
    }
    public static bool OpherBoughtWeapon(AbilityType granted) => granted.Bought();
    public static bool TwillenBoughtShard(ShardType shard) => shard.Bought();
    public static bool OpherBoughtUpgrade(AbilityType slot) => slot.Upgraded();
    public static int TwillenShardCost(ShardType shard) => shard.Cost();
    public static int OpherWeaponCost(AbilityType ability) => ability.Cost();

    private static HashSet<UberId> LupoUberIds = new HashSet<UberId>() {
       new UberId(48248, 19396),
       new UberId(48248, 57987),
       new UberId(48248, 41666),
    };

    public static int LupoUpgradeCost(int id) => new LupoStoreSlot(id).Cost;
  }
}
