using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text.RegularExpressions;
using Microsoft.VisualBasic;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public enum PickupType : byte {
    SpiritLight = 0,
    Resource = 1,
    Ability = 2,
    Shard = 3,
    SystemCommand = 4,
    Teleporter = 5,
    Message = 6,
    Multi = 7,
    UberState = 8,
    QuestEvent = 9,
    BonusItem = 10
  }

  public class DoneWithThis : Exception { };

  public enum QuestEventType : byte {
    [Description("Clean Water")]
    Water = 0
  }

  public enum SysState : byte {
    KwolokDoorAvailable = 0,
    DayTime = 1,
    HowlEscape = 2
  }

  public enum SysCommandType : byte {
    Save = 0,
    ProcUberStates = 1, 
    ProcUberStatesAndSurpress = 2, 
    SupressMagic = 3, 
    StopIfEqual = 4,
    StopIfGreater = 5,
    StopIfLess = 6,
    SetState = 7
  }

  public enum TeleporterType : byte {
    [Description("Burrows")]
    Burrows = 0,
    [Description("Den")]
    Den = 1,
    [Description("East Pools")]
    EastPools = 2,
    [Description("Wellspring")]
    Wellspring = 3,
    [Description("Reach")]
    Reach = 4,
    [Description("Hollow")]
    Hollow = 5,
    [Description("Depths")]
    Depths = 6,
    [Description("West Woods")]
    WestWoods = 7,
    [Description("East Woods")]
    EastWoods = 8,
    [Description("West Wastes")]
    WestWastes = 9,
    [Description("East Wastes")]
    EastWastes = 10,
    [Description("Outer Ruins")]
    OuterRuins = 11,
    [Description("Willow's End")]
    WillowsEnd = 12,
    [Description("West Pools")]
    WestPools = 13,
    [Description("Inner Ruins")]
    InnerRuins = 14,
    [Description("Shriek")]
    Shriek = 15,
    [Description("Marsh")]
    Spawn = 16,
    [Description("Glades")]
    Glades = 17,
  }

  public enum ResourceType : byte {
    [Description("Health Fragment")]
    Health = 0,
    [Description("Energy Fragment")]
    Energy = 1,
    [Description("Gorlek Ore")]
    Ore = 2,
    [Description("Keystone")]
    Keystone = 3,
    [Description("Shard Slot")]
    ShardSlot = 4
  }

  public abstract class Pickup {
    public virtual int Frames { get => 240; }
    public bool NonEmpty = true;
    public abstract PickupType Type { get; }

    public virtual int DefaultCost() => 1;
    public virtual float ModEffectiveness() => 1.0f;
    public virtual int CostWithMod(float mod) => Convert.ToInt32(DefaultCost() * (1f + mod * ModEffectiveness()));

    public virtual void Grant(bool skipBase = false) {
      if (skipBase)
        return;
      if (Frames > 0)
        AHK.Pickup(ToString(), Frames);
      SaveController.Data.FoundCount++;
    }
    public bool Collect(bool isGoal = false) {
      SeedController.GrantingGoalModeLoc = isGoal;
      Grant();
      SeedController.GrantingGoalModeLoc = false;
      return NonEmpty;
    }

    public Pickup Concat(Pickup other) {
      var children = new List<Pickup>();
      if (this is Multi multi) {
        children.AddRange(multi.Children);
      } else {
        children.Add(this);
      }

      if (other is Multi otherM) {
        children.AddRange(otherM.Children);
      } else {
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

  public class UberStateSetter : Pickup {
    public readonly UberState State;
    public override PickupType Type => PickupType.UberState;
    public int supCount = 0;
    public UberStateSetter(UberState state, int sup = 0) {
      State = state;
      supCount = sup;
    }
    public override void Grant(bool skipBase = false) {
      var id = State.GetUberId();
      UberStateController.SkipUberStateMapCount[id] = supCount;
      InterOp.set_uber_state_value(State.GroupID, State.ID, State.ValueAsFloat());
    }
    public override string ToString() => $"{State.GroupID},{State.ID} -> {State.FmtVal()}";
  }

  public class UberStateModifier : UberStateSetter {
    Func<UberValue, UberValue> Modifier;
    string ModStr;

    public UberStateModifier(UberState state, Func<UberValue, UberValue> modifier, String modstr, int supCount = 0) : base(state, supCount) {
      Modifier = modifier;
      ModStr = modstr;
    }
    public override void Grant(bool skipBase = false) {
      var id = State.GetUberId();
      UberStateController.SkipUberStateMapCount[id] = supCount;
      State.Value = Modifier(State.ValueOr(State.Value));
      InterOp.set_uber_state_value(State.GroupID, State.ID, State.ValueAsFloat());
    }
    public override string ToString() => $"{State.GroupID},{State.ID} -> {ModStr}";

  }


  public class Multi : Pickup {
    public Multi(List<Pickup> children) {
      Children = children;
      NonEmpty = children.Count > 0;
    }

    public override int Frames {
      get {
        var messages = Children.FindAll(p => p is Message msg);
        if (messages.Count == 0)
          return base.Frames;
        return messages.Max(p => p.Frames);
      }
    }

    public static Multi Empty => new Multi(new List<Pickup>());

    public List<Pickup> Children;
    public override PickupType Type => PickupType.Multi;

    public override void Grant(bool skipBase = false) {
      if (!NonEmpty) return;
      foreach(var child in Children) {
        if (child is ConditionalStop s && s.StopActive())
          break;
        child.Grant(true);
      }
      base.Grant(false);
    }

    public override string ToString() {
      var squelching = Children.FindAll(p => p is Message msg && msg.Squelch);
      return string.Join("\n", (squelching.Count > 0 ? squelching : Children).Select(c => c.ToString()).Where(s => s.Length > 0));
    }

  }

  public class Message : Pickup {
    private int _frames;
    public override int Frames { get => _frames; }
    public Message(string msg, int frames = 240, bool squelch = false) {
      Msg = msg;
      _frames = frames;
      Squelch = squelch;
    }
    public string Msg;
    public bool Squelch = false;

    public override PickupType Type => PickupType.Message;

    private static Regex uberMsg = new Regex(@"\$\(([0-9]+)[\|,]([0-9]+)\)");
    public override string ToString() => uberMsg.Replace(Msg, (Match m) => new UberId(m.Groups[1].Value.ParseToInt(), m.Groups[2].Value.ParseToInt()).State().FmtVal());
  }

  public abstract class Checkable : Pickup {
    public abstract bool Has();
  }

  public class Teleporter : Checkable {
    public static Pickup Build(String value) => !value.StartsWith("-") ? (Pickup)new Teleporter((TeleporterType)value.ParseToByte()) : new RemoveTeleporter((TeleporterType)value.Substring(1).ParseToByte());
    public Teleporter(TeleporterType teleporter) => type = teleporter;
    public override PickupType Type => PickupType.Teleporter;
    public readonly TeleporterType type;
    private List<UberState> states() => TeleporterStates.GetOrElse(type, new List<UberState>());
    public override bool Has() => states().All((s) => s.ValueOr(new UberValue(false)).Bool);

    public static Dictionary<TeleporterType, List<UberState>> TeleporterStates = new Dictionary<TeleporterType, List<UberState>> {
      { TeleporterType.Burrows, new List<UberState> { UberStateDefaults.savePedestalMidnightBurrows} },
      { TeleporterType.Den, new List<UberState> { UberStateDefaults.savePedestalHowlsDen} },
      { TeleporterType.Wellspring, new List<UberState> { UberStateDefaults.savePedestalWellspring} },
      { TeleporterType.Reach, new List<UberState> { UberStateDefaults.savePedestalBaursReach} },
      { TeleporterType.Hollow, new List<UberState> { UberStateDefaults.savePedestalKwoloksHollow} },
      { TeleporterType.Depths, new List<UberState> { UberStateDefaults.savePedestalMouldwood} },
      { TeleporterType.WestWoods, new List<UberState> { UberStateDefaults.savePedestalSilentWoodsA} },
      { TeleporterType.EastWoods, new List<UberState> { UberStateDefaults.savePedestalSilentWoodsB} },
      { TeleporterType.WestWastes, new List<UberState> { UberStateDefaults.savePedestalWindsweptWastesA} },
      { TeleporterType.EastWastes, new List<UberState> { UberStateDefaults.savePedestalWindsweptWastesB} },
      { TeleporterType.OuterRuins, new List<UberState> { UberStateDefaults.savePedestalWindtornRuinsA} },
      { TeleporterType.WillowsEnd, new List<UberState> { UberStateDefaults.savePedestalWillowsEnd} },
      { TeleporterType.InnerRuins, new List<UberState> { UberStateDefaults.savePedestalWindtornRuinsB} },
      { TeleporterType.EastPools, new List<UberState> {
        UberStateDefaults.savePedestalLumaPoolsA,
        new UberState() {Name = "waterLowered", ID = 63173, GroupName = "lumaPoolsStateGroup", GroupID = 5377, Type = UberStateType.SerializedBooleanUberState }
      } },
      { TeleporterType.WestPools, new List<UberState> { UberStateDefaults.savePedestalLumaPoolsB} },
      { TeleporterType.Shriek, new List<UberState> { UberStateDefaults.savePedestalWillowsEndShriek } },
      { TeleporterType.Spawn, new List<UberState> { UberStateDefaults.savePedestalInkwaterMarsh} },
      { TeleporterType.Glades, new List<UberState> { UberStateDefaults.savePedistalGladesTown} },
    };

    public override void Grant(bool skipBase = false) {
      states().ForEach((s) => s.Write(new UberValue(true)));
      base.Grant(skipBase);
    }

    public override int DefaultCost() => 250;
    public override string ToString() {
      var str = type.GetDescription();
      return !(str is null) ? $"{str} TP" : $"Unknown Teleporter {type}";
    }
  }
  public class RemoveTeleporter : Pickup {
    public RemoveTeleporter(TeleporterType ability) => type = ability;
    public override PickupType Type => PickupType.Teleporter;
    public readonly TeleporterType type;
    private List<UberState> states() => Teleporter.TeleporterStates.GetOrElse(type, new List<UberState>());
    public override void Grant(bool skipBase = false) {
      states().ForEach((s) => s.Write(new UberValue(false)));
      base.Grant(skipBase);
    }
    public override string ToString() => $"Removed {type.GetDescription()}" ?? $"Unknown Teleporter {type}";
  }
  public class Ability : Checkable {
    public Ability(AbilityType ability) => type = ability;
    public static Pickup Build(String value) => !value.StartsWith("-") ? (Pickup)new Ability((AbilityType)value.ParseToByte()) : new RemoveAbility((AbilityType)value.Substring(1).ParseToByte());
    public override PickupType Type => PickupType.Ability;
    public readonly AbilityType type;
    public override bool Has() => SaveController.HasAbility(type);
    public override int DefaultCost() => (type == AbilityType.Blaze) ? 420 : 500;
    public override float ModEffectiveness() => (type == AbilityType.Blaze) ? 0f : 1f;

    public override void Grant(bool skipBase = false) {
      SaveController.SetAbility(type);
      base.Grant(skipBase);
    }

    public override string ToString() => $"*{type.GetDescription()}*" ?? $"Unknown Ability {type}";
  }

  public class RemoveAbility : Pickup {
    public RemoveAbility(AbilityType ability) => type = ability;
    public override PickupType Type => PickupType.Ability;
    public readonly AbilityType type;
    public override void Grant(bool skipBase = false) {
      SaveController.SetAbility(type, false);
      base.Grant(skipBase);
    }
    public override string ToString() => $"Removed {type.GetDescription()}" ?? $"Unknown Ability {type}";
  }

  public class Shard : Checkable {
    public Shard(ShardType shard) => type = shard;
    public static Pickup Build(String value) => !value.StartsWith("-") ? (Pickup)new Shard((ShardType)value.ParseToByte()) : new RemoveShard((ShardType)value.Substring(1).ParseToByte());
    public override PickupType Type => PickupType.Shard;
    public readonly ShardType type;
    public override bool Has() {
      return InterOp.has_shard(type);
    }
    public override void Grant(bool skipBase = false) {
      InterOp.set_shard(type, true);
      InterOp.refresh_shards();
      base.Grant(skipBase);
    }

    public override int DefaultCost() => 300;
    public override string ToString() => $"${type.GetDescription()}$" ?? $"Unknown Shard {type}";
  }
  public class RemoveShard : Pickup {
    public RemoveShard(ShardType shard) => type = shard;
    public override PickupType Type => PickupType.Shard;
    public readonly ShardType type;
    public override void Grant(bool skipBase = false) {
      InterOp.set_shard(type, false);
      InterOp.refresh_shards();
      base.Grant(skipBase);
    }
    public override string ToString() => $"Removed {type.GetDescription()}" ?? $"Unknown Shard {type}";
  }

  public class Cash : Pickup {
    public Cash(int amount) => Amount = amount;

    public override PickupType Type => PickupType.SpiritLight;
    public readonly int Amount;

    public override void Grant(bool skipBase = false) {
      InterOp.set_experience(InterOp.get_experience() + Amount);
      InterOp.shake_spiritlight();
      base.Grant(skipBase);
    }

    private static readonly List<string> MoneyNames = new List<string>() {
      "Spirit Light", "Gallons", "Spirit Bucks", "Gold", "Geo", 
     "Experience", "Gil", "GP", "Dollars", "Tokens", "Tickets",
      "Pounds Sterling", "BTC", "Euros", "Credits", "Bells",
      "Zenny", "Pesos", "Exalted Orbs", "Poké", "Glod", "Dollerydoos",
      "Boonbucks", "Pieces of Eight", "Shillings", "Farthings"
    };

    public override string ToString() => $"{Amount} {MoneyNames[new Random().Next(MoneyNames.Count)]}";
  }
  public class QuestEvent : Checkable {
    public QuestEvent(QuestEventType ev) => type = ev;
    public static Pickup Build(String value) => !value.StartsWith("-") ? (Pickup)new QuestEvent((QuestEventType)value.ParseToByte()) : new RemoveQuestEvent((QuestEventType)value.Substring(1).ParseToByte());


    public override PickupType Type => PickupType.QuestEvent;
    public readonly QuestEventType type;

    public override int DefaultCost() => 400;
    public override bool Has() => SaveController.Data.WorldEvents.Contains(type);

    public override void Grant(bool skipBase = false) {
      SaveController.SetEvent(type);
      // put this behind a switch statement if we ever add another world event
      UberStateDefaults.cleanseWellspringQuestUberState.GetUberId().Refresh();
      UberStateDefaults.finishedWatermillEscape.GetUberId().Refresh();
      UberStateDefaults.watermillEscapeState.GetUberId().Refresh();
      base.Grant(skipBase);
    }
    public override string ToString() => $"#{type.GetDescription()}#" ?? $"Unknown resource type {type}";
  }
  public class RemoveQuestEvent : Pickup {
    public RemoveQuestEvent(QuestEventType ev) => type = ev;


    public override PickupType Type => PickupType.QuestEvent;
    public readonly QuestEventType type;

    public override int DefaultCost() => 400;
    public override void Grant(bool skipBase = false) {
      SaveController.SetEvent(type, false);
      // put this behind a switch statement if we ever add another world event
      UberStateDefaults.cleanseWellspringQuestUberState.GetUberId().Refresh();
      UberStateDefaults.finishedWatermillEscape.GetUberId().Refresh();
      UberStateDefaults.watermillEscapeState.GetUberId().Refresh();
      base.Grant(skipBase);
    }
    public override string ToString() => $"Remove #{type.GetDescription()}#" ?? $"Unknown resource type {type}";
  }
  public class BonusItem : Pickup {
    public override int DefaultCost() => 300;
    public override PickupType Type => PickupType.BonusItem;
    public readonly BonusType type;
    public BonusItem(BonusType command) => type = command;
    public override void Grant(bool skipBase = false) {
      SaveController.Data.BonusItems[type] = type.Count() + 1;
      switch(type) {
        case BonusType.ExtraAirDash:
          InterOp.set_extra_dashes(type.Count());
          break;
        case BonusType.ExtraDoubleJump:
          InterOp.set_extra_jumps(type.Count());
          break;
      }
      base.Grant(skipBase);
    }
    public override string ToString() => $"#{type.GetDescription()}{(type.Count()>1 ? $" x{type.Count()}" : "")}#";
  }

  public class SystemCommand : Pickup {
    public override PickupType Type => PickupType.SystemCommand;
    public readonly SysCommandType type;
    public SystemCommand(SysCommandType command) => type = command;
    public override void Grant(bool skipBase = false) {
      switch (type) {
        case SysCommandType.Save:
          InterOp.save();
          break;
        case SysCommandType.ProcUberStates:
          UberStateController.Update();
          break;
        case SysCommandType.ProcUberStatesAndSurpress:
          UberStateController.SkipListenersNextUpdate = true;
          UberStateController.Update();
          break;
      }
    }
    public override string ToString() => type.ToString();
  }
  public class ConditionalStop : SystemCommand {
    private UberId targetState;
    private float targetValue;
    public ConditionalStop(SysCommandType type, UberId s, float v) : base(type) {
      targetState = s;
      targetValue = v;
    }

    public bool StopActive() {
      var state = targetState.State();
      switch (type) {
        case SysCommandType.StopIfEqual:
          Randomizer.Log($"{state.ValueAsFloat()} ?= {targetValue} -> {state.ValueAsFloat() == targetValue}");
          if (state.ValueAsFloat() == targetValue)
            return true;
          break;
        case SysCommandType.StopIfGreater:
          Randomizer.Log($"{state.ValueAsFloat()} ?> {targetValue} -> {state.ValueAsFloat() > targetValue}");
          if (state.ValueAsFloat() > targetValue)
            return true;
          break;
        case SysCommandType.StopIfLess:
          Randomizer.Log($"{state.ValueAsFloat()} ?< {targetValue} -> {state.ValueAsFloat() < targetValue}");
          if (state.ValueAsFloat() < targetValue)
            return true;
          break;
      }
      return false;
    }

    public override void Grant(bool skipBase = false) {
      base.Grant(skipBase);
    }

  }
  public class SetStateCommand : SystemCommand {
    SysState state;
    int value;

    public SetStateCommand(SysCommandType command, SysState state, int value) : base(command) {
      this.state = state;
      this.value = value;
    }
    public override void Grant(bool skipBase = false) {
      switch (state) {
        case SysState.KwolokDoorAvailable:
          InterOp.set_kvolok_door_availability(value > 0);
          break;
        case SysState.DayTime:
          AHK.Print("Disabled for now (ping eiko to talk to badwolf about how these should work)");
//          SeedController.DayTimeOverride = value > 0;
          break;
        case SysState.HowlEscape:
          AHK.Print("Disabled for now (ping eiko to talk to badwolf about how these should work)");
          //          SeedController.HowlEscapeOverride = value > 0;
          break;
      }
    }
  }

  public class Resource : Pickup {
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
          return 1;
      }
    }


    public override void Grant(bool skipBase = false) {
      switch (type) {
        case ResourceType.Health:
          InterOp.set_max_health(InterOp.get_max_health() + 5);
          InterOp.fill_health();
          break;
        case ResourceType.Energy:
          InterOp.set_max_energy(InterOp.get_max_energy() + 0.5f);
          InterOp.fill_energy();
          break;
        case ResourceType.Ore:
          InterOp.set_ore(InterOp.get_ore() + 1);
          InterOp.shake_ore();
          break;
        case ResourceType.Keystone:
          InterOp.set_keystones(InterOp.get_keystones() + 1);
          InterOp.shake_keystone();
          break;
        case ResourceType.ShardSlot:
          InterOp.set_shard_slots(InterOp.get_shard_slots() + 1);
          break;
      }
      base.Grant(skipBase);
    }

    public override string ToString() => type.GetDescription() ?? $"Unknown resource type {type}";
  }

}
