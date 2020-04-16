using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public enum PickupType : byte {
    SpiritLight,
    Resource,
    Ability,
    Shard,
    QuestItem,
    Teleporter,
    Message,
    Multi,
  }

  public enum TeleporterType : byte {
    [Description("Midnight Burrows")]
    MidnightBurrows,
    [Description("Howl's Den")]
    HowlsDen,
    [Description("Luma Pools (East)")]
    LumaPoolsA,
    [Description("Wellspring")]
    Wellspring,
    [Description("Baur's Reach")]
    BaursReach,
    [Description("Kwolok's Hollow")]
    KwoloksHollow,
    [Description("Mouldwood Depths")]
    Mouldwood,
    [Description("Silent Woods (West)")]
    SilentWoodsA,
    [Description("Silent Woods (East)")]
    SilentWoodsB,
    [Description("Windswept Wastes (West)")]
    WindsweptWastesA,
    [Description("Windswept Wastes (East)")]
    WindsweptWastesB,
    [Description("Windtorn Ruins (Outer)")]
    WindtornRuinsA,
    [Description("Willow's End")]
    WillowsEnd,
    [Description("Luma Pools (West)")]
    LumaPoolsB,
    [Description("Windtorn Ruins (Inner)")]
    WindtornRuinsB,
    [Description("Spirit Willow")]
    WillowsEndShriek,
    [Description("Inkwater Marsh")]
    InkwaterMarsh,
    [Description("Wellspring Glades")]
    builderProjectSpiritWell,
  }

  public enum ResourceType : byte {
    [Description("Half-Health Cell")]
    Health,
    [Description("Half-Energy Cell")]
    Energy,
    [Description("Gorlek Ore")]
    Ore,
    [Description("Keystone")]
    Keystone,
    [Description("Shard Slot")]
    ShardSlot
  }

  public abstract class Pickup {
    public int Frames = 240;
    public virtual bool NonEmpty() => false;
    public abstract PickupType Type { get; }

    public virtual void Grant(bool squelch = false) {
      if (!squelch) {
        AHK.Print(ToString(), Frames);
      }
    }

    public Pickup Concat(Pickup other) {
      var children = new List<Pickup>();
      if (this is Multi multi) {
        children.AddRange(multi.Children);
      }
      else {
        children.Add(this);
      }

      if (other is Multi otherM) {
        children.AddRange(otherM.Children);
      }
      else {
        children.Add(other);
      }
      // this can only really happen if one of these was Multi.Empty
      if (children.Count == 1) {
        return children[0];
      }

      return new Multi(children);
    }

    public abstract override string ToString();
  }

  public class Multi : Pickup {
    public Multi(List<Pickup> children) {
      Children = children;
    }

    public static Multi Empty => new Multi(new List<Pickup>());

    public List<Pickup> Children;

    public override PickupType Type => PickupType.Multi;

    public override bool NonEmpty() => Children.Count > 0;

    public override void Grant(bool squelch = false) {
      foreach (var Child in Children) {
        Child.Grant(true);
      }

      var child = Children.Find(p => p is Message msg && msg.Squelch);
      if (child != null) {
        child.Grant(false);
      }
      else {
        base.Grant(squelch);
      }
    }

    public override string ToString() => string.Join(", ", Children.Select(c => c.ToString()));
  }

  public class Message : Pickup {
    public Message(string msg, int frames = 240, bool squelch = false) {
      Msg = msg;
      Frames = frames;
      Squelch = squelch;
    }

    public string Msg;
    public bool Squelch = false;

    public override PickupType Type => PickupType.Message;

    public override void Grant(bool squelch = false) {
      if (!squelch) {
        AHK.Print(Msg, Frames);
      }
    }

    public override string ToString() => Msg;
  }

  public abstract class Sellable : Pickup {
    public abstract int DefaultCost();
  }

  public class Teleporter : Sellable {
    public Teleporter(TeleporterType teleporter) {
      type = teleporter;
    }

    public override PickupType Type => PickupType.Teleporter;
    public readonly TeleporterType type;
    
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

    public override void Grant(bool squelch = false) {
      base.Grant(squelch);
      TeleporterStates[type].Value.Byte = 1;
      Randomizer.Memory.WriteUberState(TeleporterStates[type]);
    }

    public override int DefaultCost() => 250;
    public override string ToString() {
      var str = type.GetDescription();
      return !(str is null) ? $"Teleporter: {str}" : $"Unknown Teleporter {type}";
    }
  }

  public class Ability : Sellable {
    public Ability(AbilityType ability) {
      type = ability;
    }

    public override PickupType Type => PickupType.Ability;
    public readonly AbilityType type;

    public override int DefaultCost() {
      if (type == AbilityType.Blaze) {
        return 420; // :3
      }

      return 500;
    }
    public override void Grant(bool squelch = false) {
      base.Grant(squelch);
      Randomizer.Memory.SetAbility(type);
    }

    public override string ToString() => type.GetDescription() ?? $"Unknown Ability {type}";
  }

  public class Shard : Sellable {
    public Shard(ShardType shard) {
      type = shard;
    }

    public override PickupType Type => PickupType.Shard;
    public readonly ShardType type;

    public override void Grant(bool squelch = false) {
      base.Grant(squelch);
      Randomizer.Memory.SetShard(type);
    }

    public override int DefaultCost() => 300;
    public override string ToString() => type.GetDescription() ?? $"Unknown Shard {type}";
  }

  public class Cash : Pickup {
    public Cash(int amount) {
      this.amount = amount;
    }

    public override PickupType Type => PickupType.SpiritLight;
    public readonly int amount;

    public override void Grant(bool squelch = false) {
      base.Grant(squelch);
      Randomizer.Memory.Experience += amount;
    }

    private static readonly List<string> MoneyNames = new List<string>() { "Spirit Light", "Gallons", "Spirit Bucks", "Gold", "Geo", "Experience", "Gil", "GP", "Dollars", "Tokens", "Tickets", "Pounds Sterling", "BTC", "Euros", "Credits", "Bells", "Zenny", "Pesos", "Exalted Orbs", "Poké", "Glod", "Dollerydoos", "Boonbucks" };

    public override string ToString() => $"{amount} {MoneyNames[new Random().Next(MoneyNames.Count)]}";
  }

  public class Resource : Sellable {
    public Resource(ResourceType resource) {
      type = resource;
    }

    public override PickupType Type => PickupType.Resource;
    public readonly ResourceType type;

    public override int DefaultCost() {
      switch (type) {
        case ResourceType.Health:
          return 200;
        case ResourceType.Energy:
          return 150;
        case ResourceType.Ore:
        case ResourceType.Keystone:
          return 100;
        case ResourceType.ShardSlot:
          return 400;
        default:
          return 0;
      }
    }

    public override void Grant(bool squelch = false) {
      base.Grant(squelch);
      switch (type) {
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

    public override string ToString() => type.GetDescription() ?? $"Unknown resource type {type}";
  }
}
