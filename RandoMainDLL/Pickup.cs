using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public enum PickupType : byte {
    SpiritLight = 0,
    Resource = 1,
    Ability = 2,
    Shard = 3,
    QuestItem = 4,
    Teleporter = 5,
    Message = 6,
    Multi = 7,
    UberState = 8,
    WorldEvent = 9
  }

  public enum WorldEventType : byte {
    [Description("Clean Water")]
    Water = 0
  }

  public enum TeleporterType : byte {
    [Description("Midnight Burrows")]
    MidnightBurrows = 0,
    [Description("Howl's Den")]
    HowlsDen = 1,
    [Description("Luma Pools (East)")]
    LumaPoolsA = 2,
    [Description("Wellspring")]
    Wellspring = 3,
    [Description("Baur's Reach")]
    BaursReach = 4,
    [Description("Kwolok's Hollow")]
    KwoloksHollow = 5,
    [Description("Mouldwood Depths")]
    Mouldwood = 6,
    [Description("Silent Woods (West)")]
    SilentWoodsA = 7,
    [Description("Silent Woods (East)")]
    SilentWoodsB = 8,
    [Description("Windswept Wastes (West)")]
    WindsweptWastesA = 9,
    [Description("Windswept Wastes (East)")]
    WindsweptWastesB = 10,
    [Description("Windtorn Ruins (Outer)")]
    WindtornRuinsA = 11,
    [Description("Willow's End")]
    WillowsEnd = 12,
    [Description("Luma Pools (West)")]
    LumaPoolsB = 13,
    [Description("Windtorn Ruins (Inner)")]
    WindtornRuinsB = 14,
    [Description("Spirit Willow")]
    WillowsEndShriek = 15,
    [Description("Inkwater Marsh")]
    InkwaterMarsh = 16,
    [Description("Wellspring Glades")]
    builderProjectSpiritWell = 17, // note: not currently supported
  }

  public enum ResourceType : byte {
    [Description("Half-Health Cell")]
    Health = 0,
    [Description("Half-Energy Cell")]
    Energy = 1,
    [Description("Gorlek Ore")]
    Ore = 2,
    [Description("Keystone")]
    Keystone = 3,
    [Description("Shard Slot")]
    ShardSlot = 4
  }

  public abstract class Pickup {
    public int Frames = 240;
    public virtual bool NonEmpty() => true;
    public abstract PickupType Type { get; }

    public virtual void Grant(bool squelch = false, bool inc = true) {
      if (!squelch) {
        AHK.Pickup(ToString(), Frames);
      }
      if(inc) {
        SaveController.Data.FoundCount++;
        InterOp.magicFunction();
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
      // this can only really happen if one of these was Multi.Empty, but we do concat on empties, soooo
      if (children.Count == 1) {
        return children[0];
      }

      return new Multi(children);
    }

    public abstract override string ToString();
  }

  public class UberStatePickup : Pickup {
    public readonly UberState State;
    public override PickupType Type => PickupType.UberState;
    public UberStatePickup(UberState state) => State = state;
    public override void Grant(bool squelch = false, bool inc = true) {
      Randomizer.Memory.WriteUberState(State);
    }
    public override string ToString() => $"{State.GroupID},{State.ID} -> {State.FmtVal()}";
  }

  public class Multi : Pickup {
    public Multi(List<Pickup> children) {
      Children = children;
    }

    public static Multi Empty => new Multi(new List<Pickup>());
    public List<Pickup> Children;
    public override PickupType Type => PickupType.Multi;

    public override bool NonEmpty() => Children.Count > 0;

    public override void Grant(bool squelch = false, bool inc = true) {
      foreach (var Child in Children) {
        Child.Grant(true, false);
      }

      var child = Children.Find(p => p is Message msg && msg.Squelch);
      if (child != null) {
        child.Grant(false, true);
      } else {
        base.Grant(squelch, true);
      }
    }

    public override string ToString() => string.Join("\n", Children.Select(c => c.ToString()));
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

    public override string ToString() => Msg;
  }

  public interface Checkable {
      Pickup me { get; }

      bool Has();
  }
  public abstract class Sellable : Pickup {
    public abstract int DefaultCost();
    public virtual float ModEffectiveness() => 1.0f;
    public virtual int CostWithMod(float mod) => Convert.ToInt32(DefaultCost() * (1f + mod * ModEffectiveness()));
  }

  public class Teleporter : Sellable, Checkable {
    public Teleporter(TeleporterType teleporter) => type = teleporter;

    public Pickup me { get => this; }

    public override PickupType Type => PickupType.Teleporter;
    public readonly TeleporterType type;

    public bool Has() {
      if (TeleporterStates.TryGetValue(type, out UberState state))
        return state.CurrentValue().GetValueOrDefault(new UberValue(false)).Bool;
      return false;
    }
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

    public override void Grant(bool squelch = false, bool inc = true) {
      TeleporterStates[type].Value.Byte = 1;
      Randomizer.Memory.WriteUberState(TeleporterStates[type]);
      base.Grant(squelch, inc);
    }

    public override int DefaultCost() => 250;
    public override string ToString() {
      var str = type.GetDescription();
      return !(str is null) ? $"Teleporter: {str}" : $"Unknown Teleporter {type}";
    }
  }

  public class Ability : Sellable, Checkable {
    public Pickup me { get => this; }
    public Ability(AbilityType ability) => type = ability;

    public override PickupType Type => PickupType.Ability;
    public readonly AbilityType type;
    public bool Has() {
      try {
        if(type == AbilityType.Dash) 
          return InterOp.haveRealDash();
        return Randomizer.Memory.HasAbility(type);
      } catch(Exception e) {
        Randomizer.Error("Ability.Has", e);
        return false;
      }
    }
    public override int DefaultCost() => (type == AbilityType.Blaze) ? 420 : 500;
    public override float ModEffectiveness() => (type == AbilityType.Blaze) ? 0f : 1f;

    public override void Grant(bool squelch = false, bool inc = true) {
      Randomizer.Memory.SetAbility(type);
      base.Grant(squelch, inc);
    }

    public override string ToString() => $"*{type.GetDescription()}*" ?? $"Unknown Ability {type}";
  }

  public class Shard : Sellable, Checkable {
    public Pickup me { get => this; }
    public Shard(ShardType shard) => type = shard;

    public override PickupType Type => PickupType.Shard;
    public readonly ShardType type;
    public bool Has() {
      try {
        return Randomizer.Memory.HasShard(type);
      }
      catch (Exception e) {
        Randomizer.Error("Ability.Has", e);
        return false;
      }
    }
    public override void Grant(bool squelch = false, bool inc = true) {
      Randomizer.Memory.SetShard(type);
      base.Grant(squelch, inc);
    }

    public override int DefaultCost() => 300;
    public override string ToString() => $"${type.GetDescription()}$" ?? $"Unknown Shard {type}";
  }

  public class Cash : Pickup {
    public Cash(int amount) => Amount = amount;

    public override PickupType Type => PickupType.SpiritLight;
    public readonly int Amount;

    public override void Grant(bool squelch = false, bool inc = true) {
      Randomizer.Memory.Experience += Amount;
      base.Grant(squelch, inc);
    }

    private static readonly List<string> MoneyNames = new List<string>() { "Spirit Light", "Gallons", "Spirit Bucks", "Gold", "Geo", "Experience", "Gil", "GP", "Dollars", "Tokens", "Tickets", "Pounds Sterling", "BTC", "Euros", "Credits", "Bells", "Zenny", "Pesos", "Exalted Orbs", "Poké", "Glod", "Dollerydoos", "Boonbucks" };

    public override string ToString() => $"{Amount} {MoneyNames[new Random().Next(MoneyNames.Count)]}";
  }
  public class WorldEvent : Sellable, Checkable {
    public Pickup me { get => this; }
    public WorldEvent(WorldEventType ev) => type = ev;

    public override PickupType Type => PickupType.WorldEvent;
    public readonly WorldEventType type;

    public override int DefaultCost() => 400;
    public bool Has() => SaveController.Data.WorldEvents.Contains(type);

  public override void Grant(bool squelch = false, bool inc = true) {
      SaveController.Data.WorldEvents.Add(type);
      switch (type) {
        case WorldEventType.Water:
          // marks the escape as complete if you get clean water
          UberStateDefaults.watermillEscapeState.Write(new UberValue(2));
          UberStateDefaults.cleanseWellspringQuestUberState.Write(new UberValue(4));
          UberStateDefaults.finishedWatermillEscape.Write(new UberValue(true));
          break;
      }
      base.Grant(squelch, inc);
    }

    public override string ToString() => $"#{type.GetDescription()}#" ?? $"Unknown resource type {type}";
  }

  public class Resource : Sellable {
    public Resource(ResourceType resource) => type = resource;

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

    public override void Grant(bool squelch = false, bool inc = true) {
      switch (type) {
        case ResourceType.Health:
          Randomizer.Memory.FakeHalfHealth();
          break;
        case ResourceType.Energy:
          Randomizer.Memory.FakeHalfEnergy();
          break;
        case ResourceType.Ore:
          InterOp.setOre(++Randomizer.Memory.Ore);
          break;
        case ResourceType.Keystone:
          Randomizer.Memory.Keystones++;
          break;
        case ResourceType.ShardSlot:
          Randomizer.Memory.Shards++;
          break;
      }
      base.Grant(squelch, inc);
    }

    public override string ToString() => type.GetDescription() ?? $"Unknown resource type {type}";
  }

}
