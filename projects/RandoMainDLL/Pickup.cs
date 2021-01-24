using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.ComponentModel.Design;
using System.Diagnostics;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Security.AccessControl;
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
    BonusItem = 10,
    WeaponUpgrade = 11,
    ZoneHint = 12,
    CheckableHint = 13
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
    SetResource = 1,
    Checkpoint = 2,
    SupressMagic = 3,
    StopIfEqual = 4,
    StopIfGreater = 5,
    StopIfLess = 6,
    SetState = 7,
    Warp = 8,
    StartTimer = 9,
    StopTimer = 10,
    RedirectState = 11,
  }

  public enum TeleporterType : byte {
    [Description("Midnight Burrows")]
    Burrows = 0,
    [Description("Howl's Den")]
    Den = 1,
    [Description("East Luma")]
    EastPools = 2,
    [Description("Wellspring")]
    Wellspring = 3,
    [Description("Baur's Reach")]
    Reach = 4,
    [Description("Kwolok's Hollow")]
    Hollow = 5,
    [Description("Mouldwood Depths")]
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
    [Description("West Luma")]
    WestPools = 13,
    [Description("Inner Ruins")]
    InnerRuins = 14,
    [Description("Shriek")]
    Shriek = 15,
    [Description("Inkwater Marsh")]
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
    public bool Muted = false;
    public abstract PickupType Type { get; }
    public virtual string DisplayName { get; }
    public virtual string ShopName { get => DisplayName; }
    public virtual string Name { get => DisplayName; }
    public override string ToString() => Name;
    public virtual WorldMapIconType Icon { get => WorldMapIconType.QuestItem; }
    public virtual int DefaultCost() => 1;
    public virtual float ModEffectiveness() => 1.0f;
    public virtual int CostWithMod(float mod) => Convert.ToInt32(DefaultCost() * (1f + mod * ModEffectiveness()));

    public virtual void Grant(bool skipBase = false) {
      if (skipBase)
        return;
      if (Frames > 0 && DisplayName.Length > 0 && !Muted)
        AHK.Pickup(DisplayName, Frames);
    }
    public bool Collect(UberStateCondition foundAt) {
      if (NonEmpty) {
        SeedController.GrantingGoalModeLoc = foundAt.IsGoal();
        Grant();
        SeedController.GrantingGoalModeLoc = false;
        if (foundAt.Loc().Type != LocType.Unknown) {
          SaveController.FoundCount++;
          MapController.UpdateReachable();
        }
      }
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
  }

  public class UberStateSetter : Pickup {
    public readonly UberState State;
    public override PickupType Type => PickupType.UberState;
    public override int Frames { get => 0; }
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
    public override string DisplayName { get => ""; }
    public override string Name { get => $"{State.GroupID},{State.ID} -> {State.FmtVal()}"; }
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
    public override string Name { get => $"{State.GroupID},{State.ID} -> {ModStr}"; }
  }


  public class Multi : Pickup {

    private string _lastDispName = "Empty";
    public Multi(List<Pickup> children) {
      Children = children;
      NonEmpty = children.Count > 0;
    }

    public override int Frames {
      get {
        if (!NonEmpty)
          return base.Frames;
        var msgs = Children.Where(p => p is Message msg).ToList();
        return (msgs.Count > 0 ? msgs : Children).Max(p => p.Frames);
      }
    }

    public static Multi Empty => new Multi(new List<Pickup>());

    public List<Pickup> Children;
    public override PickupType Type => PickupType.Multi;

    public override void Grant(bool skipBase = false) {
      if (!NonEmpty) return;
      List<string> lines = new List<string>();
      bool squelchActive = Children.Exists(p => p is Message msg && msg.Squelch);
      foreach (var child in Children) {
        if (child is ConditionalStop s && s.StopActive())
          break;
        child.Grant(true);
        if (child.Muted || child.DisplayName == "" || child.Frames == 0 || squelchActive && !(child is Message m && m.Squelch) || child is Message _m && _m.Prepend)
          continue;
        lines.Add(child.DisplayName);
      }
      _lastDispName = string.Join("\n", lines);
      base.Grant(false);
    }

    public override string ShopName { get => Children.Exists(p => p is Message) ? Children.Find(p => p is Message).DisplayName : DisplayName; }
    public override string DisplayName { get => _lastDispName; }

    public override string Name { get => string.Join("\n", Children.Select(c => c.Name).Where(s => s.Length > 0)); }
  }

  public class Message : Pickup {
    private int _frames;
    private bool _clear;
    private bool _immediate;
    private bool _mute;
    private float? _pos;
    public override int Frames { get => _frames; }
    public Message(string msg, int frames = 240, bool squelch = false, float? pos = null, bool clear = true, bool immediate = false, bool mute = false, bool prepend = false) {
      Msg = msg;
      _frames = frames;
      _clear = clear;
      _pos = pos;
      _immediate = immediate;
      _mute = mute;
      Prepend = prepend;
      Squelch = squelch;
    }
    public bool Prepend { get; }
    public string Msg;
    public bool Squelch = false;
    public override void Grant(bool skipBase = false) {
      if (Prepend)
        AHK.PrependToNextText(DisplayName);
      else if (!skipBase) // don't print during multis
        AHK.SendPlainText(new PlainText(DisplayName, Frames, _pos, _clear, _immediate, _mute));
      base.Grant(true);
    }

    public override PickupType Type => PickupType.Message;

    private static Regex uberMsg = new Regex(@"\$\(([0-9]+)[\|,]([0-9]+)\)");
    public override string DisplayName { get => uberMsg.Replace(Msg, (Match m) => new UberId(m.Groups[1].Value.ParseToInt(), m.Groups[2].Value.ParseToInt()).State().FmtVal()); }
  }

  public abstract class Checkable : Pickup {
    public abstract bool Has();
    public override bool Equals(object obj) {
      if ((obj == null) || !this.GetType().Equals(obj.GetType())) {
        return false;
      }
      else {
        Checkable other = (Checkable)obj;
        return other.Name == Name;
      }
    }
    public override int GetHashCode() {
      return Name.GetHashCode();
    }
  }

    public class Teleporter : Checkable {
    public static Pickup Build(String value) => !value.StartsWith("-") ? (Pickup)new Teleporter((TeleporterType)value.ParseToByte()) : new RemoveTeleporter((TeleporterType)value.Substring(1).ParseToByte());
    public Teleporter(TeleporterType teleporter) => type = teleporter;
    public override WorldMapIconType Icon => WorldMapIconType.SavePedestal;
    public override PickupType Type => PickupType.Teleporter;
    public readonly TeleporterType type;
    private List<UberState> states() => TeleporterStates.GetOrElse(type, new List<UberState>());
    public override bool Has() => states()[0].GetValue().AsFloat(states()[0].Type) != 0;

    public static Dictionary<TeleporterType, List<UberState>> TeleporterStates = new Dictionary<TeleporterType, List<UberState>> {
      { TeleporterType.Burrows, new List<UberState> { UberStateDefaults.savePedestalMidnightBurrows} },
      { TeleporterType.Den, new List<UberState> { UberStateDefaults.savePedestalHowlsDen} },
      { TeleporterType.Wellspring, new List<UberState> { UberStateDefaults.savePedestalWellspring} },
      { TeleporterType.Reach, new List<UberState> { UberStateDefaults.savePedestalBaursReach} },
      { TeleporterType.Hollow, new List<UberState> {
        new UberState() {Name = "HollowTP", ID = 106, GroupName = "rando_state", GroupID = 6, Type = UberStateType.SerializedBooleanUberState },
        UberStateDefaults.savePedestalKwoloksHollow
      } },
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
      if (!Has()) // don't write to these if they're already set; on that path lies dumb-ass loops
      states().ForEach(s => s.Write(new UberValue(true)));
      base.Grant(skipBase);
    }

    public override int DefaultCost() => 250;
    public override string Name { get => $"{type.GetDescription() ?? $"unknown {type}"} TP"; }
    public override string DisplayName { get => $"#{Name}#"; }
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
    public override string Name { get => $"Lose {type.GetDescription() ?? $"Unknown Teleporter {type}"}"; }
    public override string DisplayName { get => $"Removed {type.GetDescription() ?? $"Unknown Teleporter {type}"}"; }
  }
  public class Ability : Checkable {
    public Ability(AbilityType ability) => type = ability;

    public override WorldMapIconType Icon => WorldMapIconType.AbilityPedestal;
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

    public override string Name { get => type.GetDescription() ?? $"Unknown Ability {type}"; }
    public override string DisplayName { get => $"*{Name}*"; }
  }

  public class RemoveAbility : Pickup {
    public RemoveAbility(AbilityType ability) => type = ability;
    public override PickupType Type => PickupType.Ability;
    public readonly AbilityType type;
    public override void Grant(bool skipBase = false) {
      SaveController.SetAbility(type, false);
      base.Grant(skipBase);
    }
    public override string Name { get => $"Lose {type.GetDescription() ?? $"Unknown Ability {type}"}"; }
    public override string DisplayName { get => $"Removed {type.GetDescription() ?? $"Unknown Ability {type}"}"; }
  }

  public class Shard : Checkable {
    public Shard(ShardType shard) => type = shard;
    public override WorldMapIconType Icon => WorldMapIconType.SpiritShard;
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
    public override string Name { get => type.GetDescription() ?? $"Unknown Shard {type}"; }
    public override string DisplayName { get => $"${Name}$"; }
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
    public override string Name { get => $"Lose {type.GetDescription() ?? $"Unknown Shard {type}"}"; }
    public override string DisplayName { get => $"Removed {type.GetDescription() ?? $"Unknown Shard {type}"}"; }
  }

  public class Cash : Pickup {
    public Cash(int amount) => Amount = amount;

    public override PickupType Type => PickupType.SpiritLight;
    public override WorldMapIconType Icon => WorldMapIconType.Experience;
    public readonly int Amount;

    public override void Grant(bool skipBase = false) {
      InterOp.set_experience(InterOp.get_experience() + Amount);
      UberInc.Int(6, 3, Amount);
      InterOp.shake_spiritlight();
      base.Grant(skipBase);
    }

    private static readonly List<string> MoneyNames = new List<string>() {
      "Spirit Light", "Gallons", "Spirit Bucks", "Gold", "Geo",
     "Experience", "Gil", "GP", "Dollars", "Tokens", "Tickets",
      "Pounds Sterling", "BTC", "Euros", "Credits", "Bells",
      "Zenny", "Pesos", "Exalted Orbs", "Poké", "Glod", "Dollerydoos",
      "Boonbucks", "Pieces of Eight", "Shillings", "Farthings", "Kalganids",
      "Quatloos", "Etherium", "Dogecoin", "Crowns", "Solari", "Widgets",
      "Money", "Cash", "ISK", "Munny", "Nuyen", "Rings", "Rupees", "Coins",
      "Echoes", "Sovereigns", "Vbucks", "Robux"
    };
    public override string Name { get => $"{Amount} Spirit Light"; }
    public override string DisplayName { get => AHK.IniFlag("BoringMoney") ? Name : $"{Amount} {MoneyNames[new Random().Next(MoneyNames.Count)]}"; }
  }
  public class QuestEvent : Checkable {
    public QuestEvent(QuestEventType ev) => type = ev;
    public static Pickup Build(String value) => !value.StartsWith("-") ? (Pickup)new QuestEvent((QuestEventType)value.ParseToByte()) : new RemoveQuestEvent((QuestEventType)value.Substring(1).ParseToByte());


    public override PickupType Type => PickupType.QuestEvent;
    public readonly QuestEventType type;

    public override int DefaultCost() => 400;
    public override bool Has() => type.Have();
    public override WorldMapIconType Icon => WorldMapIconType.QuestEnd;

    public override void Grant(bool skipBase = false) {
      SaveController.SetEvent(type);
      // put this behind a switch statement if we ever add another world event
      UberStateDefaults.cleanseWellspringQuestUberState.GetUberId().Refresh();
      UberStateDefaults.finishedWatermillEscape.GetUberId().Refresh();
      UberStateDefaults.watermillEscapeState.GetUberId().Refresh();
      base.Grant(skipBase);
    }
    public override string Name { get => type.GetDescription() ?? $"Unknown Event {type}"; }
    public override string DisplayName { get => $"*{Name}*"; }
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
    public override string Name { get => $"Lose {type.GetDescription() ?? $"Unknown Event {type}"}"; }
    public override string DisplayName { get => $"Removed {type.GetDescription() ?? $"Unknown Event {type}"}"; }
  }
  public class BonusItem : Pickup {
    public override int DefaultCost() => 300;
    public override PickupType Type => PickupType.BonusItem;
    public readonly BonusType type;
    protected readonly UberId stateId;

    public BonusItem(BonusType t) {
      type = t;
      stateId = new UberId(4, (int)type);
    }
    public static BonusItem Build(BonusType t, ZoneType z) => t == BonusType.Relic ? Relic.Build(z) : new BonusItem(t);

    public override void Grant(bool skipBase = false) {
      var state = stateId.State();
      state.Value.Byte += 1;
      state.Write(state.Value);
      base.Grant(skipBase);
    }
    public override string Name { get => type.GetDescription() ?? $"Unknown Bonus Item {type}"; }
    public override string DisplayName { get => $"#{type.GetDescription() ?? $"Unknown Bonus Item {type}"}{(stateId.State().Value.Byte > 1 ? $" x{stateId.State().Value.Byte}" : "")}#"; }
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
        case SysCommandType.Checkpoint:
          InterOp.checkpoint();
          break;
      }
    }
    public override string Name { get => type.ToString(); }
    public override string DisplayName { get => ""; }
  }
  public class SetResource : SystemCommand {
    private readonly int newResourceValue;
    private readonly ResourceType resourceType;
    public SetResource(ResourceType r, int v) : base(SysCommandType.SetResource) {
      resourceType = r;
      newResourceValue = v;
    }
    public override void Grant(bool skipBase = false) {
      switch (resourceType) {
        case ResourceType.Health:
          InterOp.set_health(newResourceValue);
          break;
        case ResourceType.Energy:
          InterOp.set_energy(newResourceValue);
          break;
        case ResourceType.Ore:
          InterOp.set_ore(newResourceValue);
          break;
        case ResourceType.Keystone:
          InterOp.set_keystones(newResourceValue);
          break;
        case ResourceType.ShardSlot:
          InterOp.set_shard_slots(newResourceValue);
          break;
      }
    }

  }
  public class ConditionalStop : SystemCommand {
    private readonly UberId targetState;
    private readonly float targetValue;
    public ConditionalStop(SysCommandType type, UberId s, float v) : base(type) {
      targetState = s;
      targetValue = v;
    }

    public bool StopActive() {
      var state = targetState.State();
      switch (type) {
        case SysCommandType.StopIfEqual:
          Randomizer.Debug($"{state.ValueAsFloat()} ?= {targetValue} -> {state.ValueAsFloat() == targetValue}", false);
          if (state.ValueAsFloat() == targetValue)
            return true;
          break;
        case SysCommandType.StopIfGreater:
          Randomizer.Debug($"{state.ValueAsFloat()} ?> {targetValue} -> {state.ValueAsFloat() > targetValue}", false);
          if (state.ValueAsFloat() > targetValue)
            return true;
          break;
        case SysCommandType.StopIfLess:
          Randomizer.Debug($"{state.ValueAsFloat()} ?< {targetValue} -> {state.ValueAsFloat() < targetValue}");
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

    public SetStateCommand(SysState state, int value) : base(SysCommandType.SetState) {
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
  public class RedirectStateCommand : SystemCommand {
    int state;
    int value;

    public RedirectStateCommand(int state, int value) : base(SysCommandType.SetState) {
      this.state = state;
      this.value = value;
    }
    public override void Grant(bool skipBase = false) {
      InterOp.register_state_redirect(state, value);
    }
  }
  public class WarpCommand : SystemCommand {
    float X;
    float Y;

    public WarpCommand(float x, float y) : base(SysCommandType.Warp) {
      X = x;
      Y = y;
    }
    public override void Grant(bool skipBase = false) {
      InterOp.teleport(X, Y, true);
      base.Grant(skipBase);
    }
    public override string DisplayName { get => $"Warp to {X}, {Y}"; }
  }

  public class TimerCommand : SystemCommand {
    private readonly UberId id;

    public TimerCommand(SysCommandType type, UberId id) : base(type) {
      this.id = id;
    }
    public override void Grant(bool skipBase = false) {
      switch (type) {
        case SysCommandType.StartTimer:
          UberStateController.TickingUberStates.Add(id);
          break;
        case SysCommandType.StopTimer:
          UberStateController.TickingUberStates.Remove(id);
          break;
      }
      base.Grant(skipBase);
    }
    public override string Name { get => $"On trigger {id}"; }
    public override string DisplayName { get => ""; }
  }

  public class Resource : Pickup {
    public Resource(ResourceType resource) => type = resource;

    public override PickupType Type => PickupType.Resource;
    public readonly ResourceType type;
    public override WorldMapIconType Icon {
      get {
        switch (type) {
          case ResourceType.Health:
            return WorldMapIconType.HealthFragment;
          case ResourceType.Energy:
            return WorldMapIconType.EnergyFragment;
          case ResourceType.Ore:
            return WorldMapIconType.Ore;
          case ResourceType.Keystone:
            return WorldMapIconType.Keystone;
          case ResourceType.ShardSlot:
            return WorldMapIconType.ShardSlotUpgrade;
          default:
            return base.Icon;
        }
      }
    }
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
          UberInc.Int(6, 5);
          InterOp.shake_ore();
          break;
        case ResourceType.Keystone:
          InterOp.set_keystones(InterOp.get_keystones() + 1);
          UberInc.Int(6, 0);
          InterOp.shake_keystone();
          break;
        case ResourceType.ShardSlot:
          InterOp.set_shard_slots(InterOp.get_shard_slots() + 1);
          break;
      }
      base.Grant(skipBase);
    }
    public override string DisplayName { get => type.GetDescription() ?? $"Unknown resource type {type}"; }
  }

  public enum WeaponUpgradeType {
    RapidSmash = 0,
    RapidSword = 1,
    BlazeEfficiency = 2,
    SpikeEfficiency = 3,
    StarEfficiency = 4,
    SentryEfficiency = 5,
    BowEfficiency = 6,
    RegenerationEfficiency = 7,
    FlashEfficiency = 8,
    LightBurstEfficiency = 9,
  }
  public class WeaponUpgrade : Pickup {
    public override PickupType Type => PickupType.WeaponUpgrade;
    public override string DisplayName { get => _name; }
    private readonly string _name;
    public readonly string Desc;
    public readonly AbilityType Weapon;
    public readonly WeaponUpgradeType Id;
    public override int CostWithMod(float mod) {
      switch(Id) {
        case WeaponUpgradeType.RapidSmash:
        case WeaponUpgradeType.SentryEfficiency:
          return 600;
        default:
          return 300;
      }
    }
    public WeaponUpgrade(WeaponUpgradeType id, AbilityType weapon, string name, string desc) {
      _name = name;
      Id = id;
      Weapon = weapon;
      Desc = desc;
    }
    public UberId UberId() => new UberId(4, (int)Id);
    public float Value() => UberId().ValueOpt().Value.Float;
    public override void Grant(bool skipBase = false) {
      switch (Id) {
        case WeaponUpgradeType.RapidSmash:
        case WeaponUpgradeType.RapidSword:
          UberId().State().Write(new UberValue(Value() * 1.25f));
          break;
        case WeaponUpgradeType.SpikeEfficiency:
        case WeaponUpgradeType.StarEfficiency:
        case WeaponUpgradeType.SentryEfficiency:
        case WeaponUpgradeType.BlazeEfficiency:
          UberId().State().Write(new UberValue(Value() * 0.5f));
          break;
        default:
          Randomizer.Log($"Unknown upgrade {Id}, can't apply");
          break;
      }
      base.Grant(skipBase);
    }
//    public override string DisplayName { get => $"{Name}{(Value() > 1 ? $" x{Value()}" : "")}"; }
    public static WeaponUpgrade RapidSmash = new WeaponUpgrade(WeaponUpgradeType.RapidSmash, AbilityType.SpiritSmash, "Rapid Smash", "*Spirit Smash* attacks are 25% faster");
    public static WeaponUpgrade RapidSword = new WeaponUpgrade(WeaponUpgradeType.RapidSword, AbilityType.SpiritEdge, "Rapid Sword", "*Sword* attacks are 25% faster");
    public static WeaponUpgrade BlazeEfficiency = new WeaponUpgrade(WeaponUpgradeType.BlazeEfficiency, AbilityType.Blaze, "Blaze Efficiency", "*Blaze* costs 50% less energy");
    public static WeaponUpgrade SpikeEfficiency = new WeaponUpgrade(WeaponUpgradeType.SpikeEfficiency, AbilityType.Spike, "Spike Efficiency", "*Spike* costs 50% less energy");
    public static WeaponUpgrade StarEfficiency = new WeaponUpgrade(WeaponUpgradeType.StarEfficiency, AbilityType.SpiritStar, "Star Efficiency", "*Spirit Star* costs 50% less energy");
    public static WeaponUpgrade SentryEfficiency = new WeaponUpgrade(WeaponUpgradeType.SentryEfficiency, AbilityType.Sentry, "Sentry Efficiency", "*Sentry* costs 50% less energy");

    public static Dictionary<WeaponUpgradeType, WeaponUpgrade> ById = new Dictionary<WeaponUpgradeType, WeaponUpgrade>() {
      {RapidSmash.Id,       RapidSmash },
      {RapidSword.Id,       RapidSword },
      {BlazeEfficiency.Id,  BlazeEfficiency },
      {SpikeEfficiency.Id,  SpikeEfficiency },
      {StarEfficiency.Id,   StarEfficiency },
      {SentryEfficiency.Id, SentryEfficiency },
    };
  }

  public abstract class Hint : Pickup {
    public abstract string Desc { get; }
  }
  public class ZoneHint : Hint {
    public override PickupType Type => PickupType.ZoneHint;
    public readonly ZoneType Zone;
    public override WorldMapIconType Icon => WorldMapIconType.QuestItem;

    public override int DefaultCost() => 200;

    public override string DisplayName => $"{Zone} hint";
    public ZoneHint(ZoneType zone) {
      Zone = zone;
      HintsController.ZoneHints.Add(zone);
    }
    public override string Desc => $"information on $Key Items$ in #{Zone.GetDescription()}#";
    public override void Grant(bool skipBase = false) {
      UberSet.Bool(6, 10000 + (int)Zone, true);
      HintsController.ProgressWithHints(Zone, true);
      base.Grant(true);
    }
  }

  public class CheckableHint : Hint {
    public override PickupType Type => PickupType.CheckableHint;
    public readonly List<Checkable> targets;
    public readonly int baseCost;
    public readonly int costModifier;
    public override WorldMapIconType Icon => WorldMapIconType.QuestItem;

    public override string DisplayName => $"{String.Join("/", targets.Select((t) => t.Name))} hint";
    public CheckableHint(string raw) {
      try {
        targets = new List<Checkable>();
        var parts = raw.Split(',');
        if(parts.Length < 3) {
          Randomizer.Warn("CheckableHint.Constructor", $"Couldn't parse checkable hint {raw}; not enough pieces");
          return;
        }
        baseCost = parts[0].ParseToInt("hint base cost");
        costModifier = parts[1].ParseToInt("hint cost modifier");
        foreach(var part in parts.Skip(2)) {
          var itemParts = part.Split('-');
          if(itemParts.Length != 2) {
            Randomizer.Warn("CheckableHint.Constructor", $"Couldn't parse fragment {part}; skipping!");
            continue;
          }
          switch ((PickupType)itemParts[0].ParseToByte("hint frag ptype")) {
            case PickupType.Ability:
              targets.Add(((AbilityType)itemParts[1].ParseToByte("hint frag ability type")).p());
              break;
            case PickupType.QuestEvent:
              targets.Add(((QuestEventType)itemParts[1].ParseToByte("hint frag quest event type")).p());
              break;
            case PickupType.Teleporter:
              targets.Add(((TeleporterType)itemParts[1].ParseToByte("hint frag teleporter type")).p());
              break;
            case PickupType.Shard:
              targets.Add(((ShardType)itemParts[1].ParseToByte("hint frag shard type")).p());
              break;
            default:
              Randomizer.Warn("CheckableHint.Constructor", $"{part} does not correspond to a checkable: skipping!");
              break;
          }
      }
      HintsController.RegisterCheckable(this);
      } catch (Exception e) { Randomizer.Error("CheckableHint.Constructor", e); }
    }
    public override string Desc { get {
        if(targets.Count == 1)
          return $"Will tell you what Zone {targets[0].DisplayName} is in";
        var firstN = targets.Take(targets.Count - 1);
        return $"Will tell you what Zone {string.Join(", ", firstN.Select((t) => t.DisplayName))} and {targets.Last().DisplayName} are in";
      } }
    public string Hint => string.Join(", ", targets.Select((c) => c.HintFrag()));
    public override float ModEffectiveness() => 0.0f;
    public override int DefaultCost() => baseCost - costModifier * (targets.Count((t) => t.Has()));
    public override void Grant(bool skipBase = false) {
      HintsController.OnGrantCheckable(this);
      base.Grant(true);
    }
  }


}
