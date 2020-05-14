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
    UberState,
    WorldEvent
  }

  public enum WorldEventType : byte {
    [Description("Clean Water")]
    Water
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
    public virtual bool NonEmpty() => true;
    public abstract PickupType Type { get; }

    public virtual void Grant(bool squelch = false) {
      if (!squelch) {
        AHK.Pickup(ToString(), Frames);
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

  public class UberStatePickup : Pickup {
    public readonly UberState State;
    public override PickupType Type => PickupType.UberState;
    public UberStatePickup(UberState state) => State = state;
    public override void Grant(bool squelch = false) {
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
        AHK.Pickup(Msg, Frames);
      }
    }

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

  public class Ability : Sellable, Checkable {
    public Pickup me { get => this; }
    public Ability(AbilityType ability) => type = ability;

    public override PickupType Type => PickupType.Ability;
    public readonly AbilityType type;
    public bool Has() {
      try {
        return Randomizer.Memory.HasAbility(type);
      } catch(Exception e) {
        Randomizer.Error("Ability.Has", e);
        return false;
      }
    }
    public override int DefaultCost() => (type == AbilityType.Blaze) ? 420 : 500;
    public override float ModEffectiveness() => (type == AbilityType.Blaze) ? 0f : 1f;

    public override void Grant(bool squelch = false) {
      base.Grant(squelch);
      Randomizer.Memory.SetAbility(type);
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
    public override void Grant(bool squelch = false) {
      base.Grant(squelch);
      Randomizer.Memory.SetShard(type);
    }

    public override int DefaultCost() => 300;
    public override string ToString() => $"${type.GetDescription()}$" ?? $"Unknown Shard {type}";
  }

  public class Cash : Pickup {
    public Cash(int amount) => Amount = amount;

    public override PickupType Type => PickupType.SpiritLight;
    public readonly int Amount;

    public override void Grant(bool squelch = false) {
      base.Grant(squelch);
      Randomizer.Memory.Experience += Amount;
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

  public override void Grant(bool squelch = false) {
      base.Grant(squelch);
      SaveController.Data.WorldEvents.Add(type);
      switch (type) {
        case WorldEventType.Water:
          // marks the escape as complete if you get clean water
          UberStateDefaults.watermillEscapeState.Write(new UberValue(2));
          UberStateDefaults.cleanseWellspringQuestUberState.Write(new UberValue(4));
          UberStateDefaults.finishedWatermillEscape.Write(new UberValue(true));
          break;
      }
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
          InterOp.setOre(++Randomizer.Memory.Ore);
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
