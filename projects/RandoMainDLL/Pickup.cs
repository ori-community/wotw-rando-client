﻿using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Globalization;
using System.Linq;
using System.Text.RegularExpressions;
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
    CheckableHint = 13,
    Relic = 14,
    SysMessage = 15,
    Wheel = 16,
    Shop = 17
  }

  public class DoneWithThis : Exception { };

  public enum QuestEventType : byte {
    [Description("Clean Water")]
    Water = 0
  }

  public enum SysState : byte {
    KwolokDoorAvailable = 0,
    Rain = 1,
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
    SetHealth = 12,
    SetEnergy = 13,
    SetSpiritLight = 14,
    Bind = 15,
    AHKSignal = 16,
    GrantIfEqual = 17,
    GrantIfGreater = 18,
    GrantIfLess = 19,
    DisableSync = 20,
    EnableSync = 21,
    CreateWarp = 22,
    DestroyWarp = 23,
    GrantIfBounds = 24,
    GrantIfCondEqual = 25,
    GrantIfCondGreater = 26,
    GrantIfCondLess = 27,
    Unbind = 28,
  }

  public enum WheelCommandType : byte {
    SetName = 0,
    SetDescription = 1,
    SetTexture = 2,
    SetColor = 3,
    Action = 4,
    SetSticky = 5,
    SetActiveWheel = 6,
    ClearItem = 7,
    ClearAll = 8,
  }

  public enum ShopCommandType : byte {
    Icon = 0
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

  public enum SysMessageType : byte {
    RelicList = 0,
    MapRelicList = 1,
    PickupCount = 2,
    GoalProgress = 3,
    ListHint = 4,
  }

  public abstract class Pickup {
    public virtual int Frames { get => _frames; set => _frames = value; }
    private int _frames = 240;
    public virtual bool Clear { get => true; }
    public virtual bool Immediate { get => false; }
    public virtual bool Quiet { get => false; }
    public virtual float? Pos { get => null; }
    public bool NonEmpty = true;
    public bool Muted = false;
    public abstract PickupType Type { get; }
    public abstract string DisplayName { get; }
    public virtual string ShopName { get => DisplayName; }
    public virtual string Name { get => DisplayName; }
    public override string ToString() => Name;
    public virtual WorldMapIconType Icon { get => WorldMapIconType.QuestItem; }
    public virtual int DefaultCost() => 1;

    public virtual void Grant(int framesOverride, bool skipBase = false) {
      var origFrames = Frames;
      Frames = framesOverride;
      Grant(skipBase);
      Frames = origFrames;
    }
    public virtual void Grant(bool skipBase = false) {
      if (!skipBase && Frames > 0 && DisplayName.Length > 0 && !Muted)
        Msg.Pickup(DisplayName, Frames, Pos, Clear, Immediate, Quiet);
    }
    public bool Collect(UberStateCondition foundAt) {
      if (NonEmpty) {
        SeedController.GrantingGoalModeLoc = foundAt.IsGoal();
        Grant();
        SeedController.GrantingGoalModeLoc = false;
        var loc = foundAt.Loc();
        if (loc.Type != LocType.Unknown || foundAt.Id.GroupID == 12) {
          if(loc.Type != LocType.Unknown) 
            StatsTracking.OnPickup(loc);
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

  public class UberStateModifier : Pickup {
    public readonly UberId Id;
    public override PickupType Type => PickupType.UberState;
    public override int Frames { get => 0; }
    public int SupCount = 0;

    Func<UberValue, double> Modifier;

    string ModStr;

    public UberStateModifier(UberId id, Func<UberValue, double> modifier, String modstr, int supCount = 0) {
      Id = id;
      SupCount = supCount;
      Modifier = modifier;
      ModStr = modstr;
    }
    public override void Grant(bool skipBase = false) {
      UberStateController.SkipUberStateMapCount[Id] = SupCount;
      UberSet.Raw(Id.GroupID, Id.ID, Modifier(UberGet.value(Id)));
    }
    public override string DisplayName { get => ""; }
    public override string Name { get => $"{Id.GroupID},{Id.ID} -> {ModStr}"; }
  }


  public class Multi : Pickup {
    public Multi(List<Pickup> children) {
      Children = children;
      NonEmpty = children.Count > 0;
    }
    private List<Pickup> messages => Children.SelectMany(p => {
      switch(p.Type) {
        case PickupType.Message:
          return new List<Pickup>() { p };
        case PickupType.SystemCommand:
          var sc = p as SystemCommand;
          if (p is GrantIf g && g.IsCondMet() && g.Pickup is Message m) return new List<Pickup>() { m };
          return new List<Pickup>();
        default:
          return new List<Pickup>();
      }
    }).ToList();

    public override int Frames => messages.MaxOrElse(p => p.Frames, base.Frames);     // highest frame count of any message
    public override float? Pos => messages.Select(p => p.Pos).FirstOrElse(pos => pos != base.Pos, base.Pos); // use the first non-default position
    // these are true if they're true for any message
    public override bool Clear => NonEmpty ? messages.Exists(p => p.Clear) : base.Clear;
    public override bool Immediate => NonEmpty ? messages.Exists(p => p.Immediate) : base.Immediate;
    public override bool Quiet => NonEmpty ? messages.Exists(p => p.Quiet) : base.Quiet;
    public static Multi Empty => new Multi(new List<Pickup>());

    public List<Pickup> Children;
    public override PickupType Type => PickupType.Multi;
    private string nameAfterGrant = null;
    public override void Grant(bool skipBase = false) {
      if (!NonEmpty) return;
      nameAfterGrant = "";
      bool squelchActive = Children.Exists(p => p is Message msg && msg.Squelch);
      foreach (var child in Children) {
        if (child is ConditionalStop s && s.StopActive())
          break;
        child.Grant(true);
        if (child.Muted || child.DisplayName == "" || child.Frames == 0 || squelchActive && !(child is Message m && m.Squelch) || child is Message _m && _m.Prepend)
          continue;
        nameAfterGrant += child.DisplayName + (child.DisplayName.EndsWith("<\\>") ? "" : "\n");
      }
      base.Grant(false);
      nameAfterGrant = null;
    }

    public override string DisplayName {
      get {
        if (nameAfterGrant != null) return nameAfterGrant.TrimEnd('\n');
        bool squelchActive = Children.Exists(p => p is Message msg && msg.Squelch);
        var ret = "";
        foreach (var child in Children) {
          if (child is ConditionalStop s && s.StopActive())
            break;
          if (child.Muted || child.DisplayName == "" || child.Frames == 0 || squelchActive && !(child is Message m && m.Squelch) || child is Message _m && _m.Prepend)
            continue;
          ret += child.DisplayName + (child.DisplayName.EndsWith("<\\>") ? "" : "\n");
        }
        return ret.TrimEnd('\n');
      }
    }

    public override string ShopName { get => Children.Exists(p => p is Message) ? Children.Find(p => p is Message).DisplayName : DisplayName; }

    public override int DefaultCost() => Children.Sum(p => p.DefaultCost());

    public override string Name { get => string.Join("\n", Children.Select(c => c.Name).Where(s => s.Length > 0)); }
  }

  public class Message : Pickup {
    public override int Frames { get; set; }
    public override bool Clear { get; }
    public override bool Immediate { get; }
    public override bool Quiet { get; }
    public override float? Pos { get; }
    public Message(string msg, int frames = 240, bool squelch = false, float? pos = null, bool clear = true, bool immediate = false, bool quiet = false, bool prepend = false) {
      MessageStr = msg;
      Frames = frames;
      Clear = clear;
      Pos = pos;
      Immediate = immediate;
      Quiet = quiet;
      Prepend = prepend;
      Squelch = squelch;
    }
    public bool Prepend { get; }
    public string MessageStr;
    public bool Squelch = false;
    public override void Grant(bool skipBase = false) {
      if (Prepend)
        Msg.PrependToNextText(DisplayName);
      else if (!skipBase) // don't print during multis
        Msg.Pickup(DisplayName, Frames, Pos, Clear, Immediate, Quiet);

      base.Grant(true);
    }

    public override PickupType Type => PickupType.Message;

    private static readonly Regex uberMsg = new Regex(@"\$\(([0-9]+)[\|,;]([0-9]+)[\|,;]?([a-z]*)?\)", RegexOptions.Compiled);
    private static readonly Regex nameFrag = new Regex(@"\$\[([0-9]+)[\|,;](.*?)\]", RegexOptions.Compiled);
    private static readonly Regex uberNameFrag = new Regex(@"\$\[\(([0-9]+)\|(.*?)\)\]", RegexOptions.Compiled);
    private static readonly Func<double, String> secToStr = (double sec) => (sec < 3600) ? TimeSpan.FromSeconds(sec).ToString(@"mm\:ss\.f") : TimeSpan.FromSeconds(sec).ToString(@"hh\:mm\:ss\.f");
    public override string DisplayName { get {
        var withUberNameRepl = uberNameFrag.Replace(MessageStr, (Match m) => new UberStateCondition(m.Groups[1].Value.ParseToInt("uberNameGroup"), m.Groups[2].Value).Pickup().DisplayName);
        var withStateRepl = uberMsg.Replace(withUberNameRepl, (Match m) => {
        var uid = new UberId(m.Groups[1].Value.ParseToInt(), m.Groups[2].Value.ParseToInt());
        switch (m.Groups.Count > 3 ? m.Groups[3].Value : "") {
          case "tsec":
            return secToStr(UberGet.AsDouble(uid));
          // this is maybe insane
          case "ppm": // the format here is $(14|<Zone Number>,ppm)) so state() is time
            if (uid.GroupID == 14) {
              // yes yes this is obviously horrible
              var val = UberGet.AsDouble(uid);
              if (val < 0.5) return "N/A"; // if you were in a zone for less than half a second, PPM is not meaningful
              if (uid.ID == 100) return Math.Round(UberGet.Int(6, 2) / (val / 60f), 2).ToString(CultureInfo.InvariantCulture);  // total PPM (6|2 is total pickup count)
              if (uid.ID == 107) return Math.Round(UberGet.Int(14, 108) / (val / 60f), 2).ToString(CultureInfo.InvariantCulture); // peak PPM (14|108 is peak PPM count)
              return Math.Round(((ZoneType)uid.ID).PickupState().GetValue().Byte / (val / 60f), 2).ToString(CultureInfo.InvariantCulture);
            }
            return $"@Invalid PPM state {uid.GroupID}|{uid.ID}@";
          case "pcnt":
            if (uid.GroupID == 6 && uid.ID == 2) return $"{UberGet.Int(6, 2)}/{SeedController.Total}";
            if (uid.GroupID != 14 || uid.ID > 13) return $"@Invalid pcnt state {uid.GroupID}|{uid.ID}";
            var z = (ZoneType)uid.ID;
            return $"{UberGet.Byte(z.PickupState())}/{SeedController.CountByZone[z]}";
          default:
            return uid.GetValue().FmtVal(uid.UberType());
          }
        });
        return nameFrag.Replace(withStateRepl, (Match m) => {
          var ptype = (PickupType)m.Groups[1].Value.ParseToByte("rawName type");
          var rest = m.Groups[2].Value.Split('|').ToList();
          return SeedController.BuildPickup(ptype, rest[0], rest.Skip(1).ToList(), null).DisplayName;
        });
      }
    }
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
    private List<UberState> states => TeleporterStates.GetOrElse(type, new List<UberState>());
    public override bool Has() => states[0].GetValue().AsDouble(states[0].Type) != 0;

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
        states.ForEach(s => s.Write(s.Type == UberStateType.SerializedBooleanUberState ? new UberValue(true) : new UberValue((byte)3)));
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

    public override void Grant(bool skipBase = false) {
      SaveController.SetAbility(type);
      base.Grant(skipBase);
    }

    public override string Name { get => type.GetDescription() ?? $"Unknown Ability {type}"; }
    public override string DisplayName { get => type == AbilityType.DamageUpgrade1 || type == AbilityType.DamageUpgrade2 ? $"#{Name}#" : $"*{Name}*"; }
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
    public Cash(int amount, int hash) => (Amount, Hash) = (amount, hash);
    public override PickupType Type => PickupType.SpiritLight;
    public override WorldMapIconType Icon => WorldMapIconType.Experience;
    public readonly int Amount;
    public readonly int Hash;

    public override void Grant(bool skipBase = false) {
      InterOp.set_experience(InterOp.get_experience() + Amount);
      UberInc.Int(6, 3, Amount);
      InterOp.shake_spiritlight();
      base.Grant(skipBase);
    }

    private static readonly List<string> MoneyNames = new List<string>() {
      "Spirit Light", "Gallons", "Spirit Bucks", "Gold", "Geo", "EXP",
      "Experience", "XP", "Gil", "GP", "Dollars", "Tokens", "Tickets",
      "Pounds Sterling", "Brownie Points", "Euros", "Credits", "Bells", "Fish",
      "Zenny", "Pesos", "Exalted Orbs", "Poké", "Glod", "Dollerydoos",
      "Boonbucks", "Pieces of Eight", "Shillings", "Farthings", "Kalganids",
      "Quatloos", "Etherium", "Dogecoin", "Crowns", "Solari", "Widgets",
      "Money", "Cash", "BTC", "Munny", "Nuyen", "Rings", "Rupees", "Coins",
      "Echoes", "Sovereigns", "Points", "Drams", "Doubloons", "Spheres",
      "Silver", "Slivers", "Rubies", "Emeralds", "Notes", "Yen", "Zloty",
      "Likes", "Comments", "Subs", "Bananas", "Sapphires", "Diamonds", "Fun",
      "Minerals", "Vespine Gas", "Sheep", "Brick", "Wheat", "Wood", "Quills"
    };
    public override string Name { get => $"{Amount} Spirit Light"; }
    public override string DisplayName { get => AHK.IniFlag("BoringMoney") ? Name : $"{Amount} {MoneyNames[new Random(Hash).Next(MoneyNames.Count)]}"; }
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
    public static BonusItem Build(BonusType t, ZoneType z) => t == BonusType.Relic ? LegacyRelic.Build(z) : new BonusItem(t);

    public override void Grant(bool skipBase = false) {
      UberInc.Byte(stateId);
      base.Grant(skipBase);
    }
    public override string Name { get => type.GetDescription() ?? $"Unknown Bonus Item {type}"; }
    public override string DisplayName { get => $"#{type.GetDescription() ?? $"Unknown Bonus Item {type}"}{(UberGet.Byte(stateId) > 1 ? $" x{UberGet.Byte(stateId)}" : "")}#"; }
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
          InterOp.set_max_health(newResourceValue);
          break;
        case ResourceType.Energy:
          InterOp.set_max_energy(newResourceValue);
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
  public class SetHealth : SystemCommand {
    private readonly float newHealth;
    public SetHealth(float v) : base(SysCommandType.SetHealth) {
      newHealth = v;
    }
    public override void Grant(bool skipBase = false) {
      InterOp.set_health(newHealth);
    }
  }
  public class SendInputSignal : SystemCommand {
    private readonly Input.Action action;
    public SendInputSignal(Input.Action a) : base(SysCommandType.AHKSignal) {
      action = a;
    }
    public override void Grant(bool skipBase = false) {
      Input.OnActionTriggered(action);
    }
    public override string Name => $"ahkSignal(\"{Enum.GetName(typeof(Input.Action), action)}\")";
  }
  public class SetEnergy : SystemCommand {
    private readonly float newEnergy;
    public SetEnergy(float v) : base(SysCommandType.SetEnergy) {
      newEnergy = v;
    }
    public override void Grant(bool skipBase = false) {
      InterOp.set_energy(newEnergy);
    }
  }
  public class SetSpiritLight : SystemCommand {
    private readonly int newSL;
    public SetSpiritLight(int v) : base(SysCommandType.SetSpiritLight) {
      newSL = v;
    }
    public override void Grant(bool skipBase = false) {
      InterOp.set_experience(newSL);
    }
  }
  public class SyncToggler : SystemCommand {
    private readonly UberId state;
    public SyncToggler(SysCommandType type, UberId s) : base(type) => state = s;
    public override void Grant(bool skipBase = false) {
      switch (type) {
        case SysCommandType.DisableSync:
          UberStateController.UnsharableIds.Add(state);
          break;
        case SysCommandType.EnableSync:
          UberStateController.UnsharableIds.Remove(state);
          break;
      }
      base.Grant(skipBase);
    }
  }
  public class Icon : SystemCommand {
    private readonly int id;
    private readonly float x;
    private readonly float y;

    public Icon(int id, float x, float y) : base(SysCommandType.CreateWarp) {
      this.id = id;
      this.x = x;
      this.y = y;
    }

    public Icon(int id) : base(SysCommandType.DestroyWarp) {
      this.id = id;
    }

    public override void Grant(bool skipBase = false) {
      switch (type) {
        case SysCommandType.CreateWarp:
          InterOp.add_icon(AreaType.InkwaterMarsh, id, WorldMapIconType.SavePedestal, x, y, -1, -1, true);
          break;
        case SysCommandType.DestroyWarp:
          InterOp.remove_icon(AreaType.InkwaterMarsh, id);
          break;
      }
      base.Grant(skipBase);
    }
  }

  public class ConditionalStop : SystemCommand {
    private readonly UberId targetState;
    private readonly double targetValue;
    public ConditionalStop(SysCommandType type, UberId s, double v) : base(type) {
      targetState = s;
      targetValue = v;
    }

    public bool StopActive() {

      var val = UberGet.AsDouble(targetState);
      switch (type) {
        case SysCommandType.StopIfEqual:
          if(Randomizer.Dev) Randomizer.Debug($"{val} ?= {targetValue} -> {val == targetValue}", false);
         return val == targetValue;
        case SysCommandType.StopIfGreater:
          if (Randomizer.Dev) Randomizer.Debug($"{val} ?> {targetValue} -> {val > targetValue}", false);
          return val > targetValue;
        case SysCommandType.StopIfLess:
          if (Randomizer.Dev) Randomizer.Debug($"{val} ?< {targetValue} -> {val < targetValue}", false);
          return val < targetValue;
      }
      return false;
    }

    public override void Grant(bool skipBase = false) {
      base.Grant(skipBase);
    }
  }

  public abstract class GrantIf : SystemCommand {
    public readonly Pickup Pickup;
    public GrantIf(SysCommandType command, Pickup p) : base(command) { Pickup = p; }
    public abstract bool IsCondMet();
    public override void Grant(bool skipBase = false) {
      if (IsCondMet())
        Pickup.Grant(skipBase);
    }
    public override PickupType Type => PickupType.SystemCommand;
    public override string Name { get => type.ToString(); }
    public override string DisplayName => IsCondMet() ? Pickup.DisplayName : "";
    public override int Frames => IsCondMet() ? Pickup.Frames : base.Frames;
    public override float? Pos => IsCondMet() ? Pickup.Pos: base.Pos;
    public override bool Clear => IsCondMet() ? Pickup.Clear : base.Clear;
    public override bool Immediate => IsCondMet() ? Pickup.Immediate : base.Immediate;
    public override bool Quiet => IsCondMet() ? Pickup.Quiet : base.Quiet;
  }

  public class GrantIfVal : GrantIf {
    private readonly UberId targetState;
    private readonly double targetValue;
    public GrantIfVal(SysCommandType command, UberId s, double v, Pickup p) : base(command, p) {
      targetState = s;
      targetValue = v;
    }
    public override bool IsCondMet() {
      var val = UberGet.AsDouble(targetState);
      switch (type) {
        case SysCommandType.GrantIfEqual:
        case SysCommandType.GrantIfCondEqual:
          return val == targetValue;
        case SysCommandType.GrantIfGreater:
        case SysCommandType.GrantIfCondGreater:
          return val > targetValue;
        case SysCommandType.GrantIfLess:
        case SysCommandType.GrantIfCondLess:
          return val < targetValue;
        default:
          Randomizer.Error("IsCondMet", "this should literally never happen");
          return false;
      }
    }
  }
  public class GrantIfBounds : GrantIf {
    private readonly float x1;
    private readonly float y1;
    private readonly float x2;
    private readonly float y2;
    public GrantIfBounds(SysCommandType command, float _x1, float _y1, float _x2, float _y2, Pickup p) : base(command, p) {
      x1 = Math.Min(_x1, _x2);
      x2 = Math.Max(_x1, _x2);
      y1 = Math.Min(_y1, _y2);
      y2 = Math.Max(_y1, _y2);
    }

    public override bool IsCondMet() {
      var pos = InterOp.get_position();
      return pos.X >= x1 && pos.X <= x2 && pos.Y >= y1 && pos.Y <= y2;
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
        case SysState.Rain:
          Msg.Print("Deprecated: use Uberstate 7|2");
          break;
        case SysState.HowlEscape:
          Msg.Print("Deprecated: use Uberstate 7|3");
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

  public class BindCommand : SystemCommand {
    short Slot;
    EquipmentType Equip;

    public BindCommand(short slot, EquipmentType equip) : base(SysCommandType.Bind) {
      Slot = slot;
      Equip = equip;
    }
    public override void Grant(bool skipBase = false) {
      InterOp.bind(Slot, Equip);
      base.Grant(skipBase);
    }
    public override string DisplayName { get => $"Bind {Equip} to {Slot}"; }
  }

  public class UnbindCommand : SystemCommand {
    EquipmentType Equip;

    public UnbindCommand(EquipmentType equip) : base(SysCommandType.Unbind) {
      Equip = equip;
    }
    public override void Grant(bool skipBase = false) {
      InterOp.unbind(Equip);
      base.Grant(skipBase);
    }
    public override string DisplayName { get => $"Unbind {Equip}"; }
  }

  public class TimerCommand : SystemCommand {
    private readonly UberId id;

    public TimerCommand(SysCommandType type, UberId id) : base(type) {
      this.id = id;
    }
    public override void Grant(bool skipBase = false) {
      switch (type) {
        case SysCommandType.StartTimer:
          UberStateController.TimerUberStates.Add(id);
          break;
        case SysCommandType.StopTimer:
          UberStateController.TimerUberStates.Remove(id);
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
    ExplodingSpike = 45,
    ShockSmash = 46,
    StaticStar = 47,
    ChargeBlaze = 48,
    RapidSentry = 49,

  }
  public class WeaponUpgrade : Pickup {
    public override PickupType Type => PickupType.WeaponUpgrade;
    public override string DisplayName { get => $"#{_name}{(Value() > 1 ? $" x{Value()}" : "")}#"; }
    private readonly string _name;
    public readonly string Desc;
    public readonly AbilityType Weapon;
    public readonly WeaponUpgradeType Id;
    public override int DefaultCost() {
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
    public UberId UberId() => new UberId(4, (int)Id + 50);
    public byte Value() => UberGet.Byte(UberId());
    public override void Grant(bool skipBase = false) {
      UberInc.Byte(UberId());
      switch (Id) {
        case WeaponUpgradeType.RapidSmash:
        case WeaponUpgradeType.RapidSword:
          UberSet.Float(4, (int)Id, Convert.ToSingle(Math.Pow(1.25f, Value())));
          break;
        case WeaponUpgradeType.SpikeEfficiency:
        case WeaponUpgradeType.StarEfficiency:
        case WeaponUpgradeType.SentryEfficiency:
        case WeaponUpgradeType.BlazeEfficiency:
        case WeaponUpgradeType.BowEfficiency:
        case WeaponUpgradeType.RegenerationEfficiency:
        case WeaponUpgradeType.LightBurstEfficiency:
        case WeaponUpgradeType.FlashEfficiency:
          UberSet.Float(4, (int)Id, Convert.ToSingle(Math.Pow(0.5f, Value())));
          break;
        case WeaponUpgradeType.ExplodingSpike:
          UberSet.Byte(3440, 5687, 1);
          break;
        case WeaponUpgradeType.ShockSmash:
          UberSet.Byte(3440, 46488, 1);
          break;
        case WeaponUpgradeType.StaticStar:
          UberSet.Byte(3440, 10776, 1);
          break;
        case WeaponUpgradeType.ChargeBlaze:
          UberSet.Byte(3440, 61898, 1);
          break;
        case WeaponUpgradeType.RapidSentry:
          UberSet.Byte(3440, 57376, 1);
          break;
        default:
          Randomizer.Log($"Unknown upgrade {Id}, can't apply");
          break;
      }
      base.Grant(skipBase);
    }

    public static Dictionary<WeaponUpgradeType, WeaponUpgrade> ById = new List<WeaponUpgrade> {
      new WeaponUpgrade(WeaponUpgradeType.RapidSmash, AbilityType.SpiritSmash, "Rapid Smash", "*Hammer* attacks are 25% faster"),
      new WeaponUpgrade(WeaponUpgradeType.RapidSword, AbilityType.SpiritEdge, "Rapid Sword", "*Sword* attacks are 25% faster"),
      new WeaponUpgrade(WeaponUpgradeType.BlazeEfficiency, AbilityType.Blaze, "Blaze Efficiency", "*Blaze* costs 50% less energy"),
      new WeaponUpgrade(WeaponUpgradeType.SpikeEfficiency, AbilityType.Spike, "Spike Efficiency", "*Spike* costs 50% less energy"),
      new WeaponUpgrade(WeaponUpgradeType.StarEfficiency, AbilityType.SpiritStar, "Star Efficiency", "*Shuriken* costs 50% less energy"),
      new WeaponUpgrade(WeaponUpgradeType.SentryEfficiency, AbilityType.Sentry, "Sentry Efficiency", "*Sentry* costs 50% less energy"),
      new WeaponUpgrade(WeaponUpgradeType.BowEfficiency, AbilityType.SpiritArc, "Bow Efficiency", "*Spirit Arc* costs 50% less energy"),
      new WeaponUpgrade(WeaponUpgradeType.RegenerationEfficiency, AbilityType.Regenerate, "Regen Efficiency", "*Regenerate* costs 50% less energy"),
      new WeaponUpgrade(WeaponUpgradeType.FlashEfficiency, AbilityType.Flash, "Flash Efficiency", "*Flash* uses 50% less energy"),
      new WeaponUpgrade(WeaponUpgradeType.LightBurstEfficiency, AbilityType.LightBurst, "Grenade Efficiency", "*Grenade* costs 50% less energy"),
      new WeaponUpgrade(WeaponUpgradeType.ShockSmash, AbilityType.SpiritSmash, "Shock Smash", "Drop attacks with *Hammer* create a shockwave"),
      new WeaponUpgrade(WeaponUpgradeType.StaticStar, AbilityType.SpiritStar, "Static Star", "Tap to pause the *Shuriken*'s flight and spin it in place"),
      new WeaponUpgrade(WeaponUpgradeType.RapidSentry, AbilityType.Sentry, "Sentry Speed", "Doubles *Sentry* attack speed"),
      new WeaponUpgrade(WeaponUpgradeType.ChargeBlaze, AbilityType.Blaze, "Charge Blaze", "Charge up *Blaze* to damage and set all enemies in sight on fire"),
      new WeaponUpgrade(WeaponUpgradeType.ExplodingSpike, AbilityType.Spike, "Exploding Spike", "*Spike* explodes on hit"),
    }.ToDictionary(e => e.Id, e => e);
  }

  public class SysMessage : Pickup {
    public override PickupType Type => PickupType.SysMessage;
    public readonly SysMessageType messageType;
    public readonly string extraData;

    public static Pickup Build(SysMessageType mt, string extra = "") {
      if (mt == SysMessageType.ListHint) return new ListHint(mt, extra);
      return new SysMessage(mt, extra);
    }
    public SysMessage(SysMessageType mt, string extra = "") {
      messageType = mt;
      extraData = extra;
    }

    public override string Name => messageType.GetDescription();
    public override string DisplayName { get {
        switch(messageType) {
          case SysMessageType.RelicList:
            return Relic.RelicMessage();
          case SysMessageType.MapRelicList:
            return Relic.MapMessage((ZoneType)extraData.ParseToByte("SysMessage.MapRelicList: ZoneType"));
          case SysMessageType.PickupCount:
            return SeedController.PickupCount;
          case SysMessageType.GoalProgress:
            return SeedController.GoalModeMessages(withRelics: false);
          default:
            return "";
        }
      }
    }
  }
  public class ListHint : SysMessage {
    public List<UberStateCondition> targets;
    public ListHint(SysMessageType mt, string extra = "") : base(mt, extra) {
      targets = new List<UberStateCondition>();
      if (extra == "") return;
      var pieces = extra.Split(',').ToList();
      if (pieces.Count % 2 != 0)
        Randomizer.Warn("ListHint.Init", $"{extra} has an odd number of parts; the last one will be ignored");
      while (pieces.Count > 1) {
        targets.Add(new UberStateCondition(pieces[0].ParseToInt("ListHint.GID"), pieces[1]));
        pieces = pieces.Skip(2).ToList();
      }
    }
    public override string DisplayName {
      get {
        var tc = targets.Count;
        var found = targets.Where(uc => uc.Met()).ToList();
        var fc = found.Count;
        if (found.Count == 0)
          return $"0/{tc}";
        var cnt = fc == tc ? $"${tc}/{tc}$" : $"{fc}/{tc}";
        return $"{cnt}: {String.Join(", ", found.Select(uc => uc.Pickup().DisplayName))}";
      }
    }

  }

  namespace Wheel {
    public class WheelCommand : Pickup {
      public override PickupType Type => PickupType.Wheel;
      public readonly WheelCommandType type;
      public WheelCommand(WheelCommandType command) => type = command;
      public override void Grant(bool skipBase = false) {
        switch (type) {
          case WheelCommandType.ClearAll:
            WheelManager.ResetWheels();
            break;
        }
      }
      public override string Name { get => type.ToString(); }
      public override string DisplayName { get => ""; }
    }

    public class SetActiveWheelCommand : WheelCommand {
      public readonly int wheel;
      public SetActiveWheelCommand(int wheel) : base(WheelCommandType.SetActiveWheel) => this.wheel = wheel;
      public override void Grant(bool skipBase = false) {
        InterOp.Wheel.set_active_wheel(wheel);
      }
    }

    public class SetStickyWheelCommand : WheelCommand {
      public readonly int wheel;
      public readonly bool sticky;
      public SetStickyWheelCommand(int wheel, bool sticky) : base(WheelCommandType.SetSticky) {
        this.wheel = wheel;
        this.sticky = sticky;
      }
      public override void Grant(bool skipBase = false) {
        InterOp.Wheel.set_wheel_sticky(wheel, sticky);
      }
    }

    public class SetNameCommand : WheelCommand {
      public readonly int wheel;
      public readonly int item;
      public readonly string name;
      public SetNameCommand(int wheel, int item, string name) : base(WheelCommandType.SetName) {
        this.wheel = wheel;
        this.item = item;
        this.name = name;
      }
      public override void Grant(bool skipBase = false) {
        InterOp.Wheel.set_wheel_item_name(wheel, item, name);
      }
    }

    public class SetDescriptionCommand : WheelCommand {
      public readonly int wheel;
      public readonly int item;
      public readonly string description;
      public SetDescriptionCommand(int wheel, int item, string description) : base(WheelCommandType.SetDescription) {
        this.wheel = wheel;
        this.item = item;
        this.description = description;
      }
      public override void Grant(bool skipBase = false) {
        InterOp.Wheel.set_wheel_item_description(wheel, item, description);
      }
    }

    public class SetTextureCommand : WheelCommand {
      public readonly int wheel;
      public readonly int item;
      public readonly string texture;
      public SetTextureCommand(int wheel, int item, string texture) : base(WheelCommandType.SetTexture) {
        this.wheel = wheel;
        this.item = item;
        this.texture = texture;
      }
      public override void Grant(bool skipBase = false) {
        InterOp.Wheel.set_wheel_item_texture(wheel, item, texture);
      }
    }

    public class SetColorCommand : WheelCommand {
      public readonly int wheel;
      public readonly int item;
      public readonly byte r;
      public readonly byte g;
      public readonly byte b;
      public readonly byte a;
      public SetColorCommand(int wheel, int item, byte r, byte g, byte b, byte a) : base(WheelCommandType.SetColor) {
        this.wheel = wheel;
        this.item = item;
        this.r = r;
        this.g = g;
        this.b = b;
        this.a = a;
      }
      public override void Grant(bool skipBase = false) {
        InterOp.Wheel.set_wheel_item_color(wheel, item, r, g, b, a);
      }
    }

    public class ClearCommand : WheelCommand {
      public readonly int wheel;
      public readonly int item;
      public ClearCommand(int wheel, int item) : base(WheelCommandType.ClearItem) {
        this.wheel = wheel;
        this.item = item;
      }
      public override void Grant(bool skipBase = false) {
        InterOp.Wheel.clear_wheel_item(wheel, item);
        var key = new ActionCommand.ActionKey(wheel, item, 0);
        ActionCommand.linkedPickups.Remove(key);
        key.binding = 1;
        ActionCommand.linkedPickups.Remove(key);
        key.binding = 2;
        ActionCommand.linkedPickups.Remove(key);
        key.binding = 3;
        ActionCommand.linkedPickups.Remove(key);
      }
    }

    public class ActionCommand : WheelCommand {
      public struct ActionKey {
        public ActionKey(int wheel, int item, int binding) {
          this.wheel = wheel;
          this.item = item;
          this.binding = binding;
        }

        public int wheel;
        public int item;
        public int binding;
      }

      public static readonly Dictionary<ActionKey, Pickup> linkedPickups;

      public delegate void callback(int wheel, int item, int binding);

      public readonly ActionKey key;
      public readonly Pickup pickup;

      static ActionCommand() {
        linkedPickups = new Dictionary<ActionKey, Pickup>();
      }

      public ActionCommand(int wheel, int item, int binding, Pickup pickup) : base(WheelCommandType.Action) {
        key = new ActionKey(wheel, item, binding);
        this.pickup = pickup;
      }
      public override void Grant(bool skipBase = false) {
        linkedPickups[key] = pickup;
        InterOp.Wheel.set_wheel_item_callback(key.wheel, key.item, WheelManager.CallbackHandle(Callback));
      }
      private static void Callback(int wheel, int item, int binding) {
        // We offset binding by 1 here because we want to have 0 be 'Any' binding.
        var key = new ActionKey(wheel, item, binding + 1);
        if (linkedPickups.ContainsKey(key))
          linkedPickups[key].Grant();
        else {
          key.binding = 0;
          if (linkedPickups.ContainsKey(key))
            linkedPickups[key].Grant();
        }
      }
    }
  }

  namespace Shop {
    public abstract class ShopCommand : Pickup {
      public readonly UberId SlotId;
      public override PickupType Type => PickupType.Shop;
      public ShopCommandType CommandType { get; }

      public ShopCommand(ShopCommandType type, UberId slotId) {
        CommandType = type;
        SlotId = slotId;
      }
    }

    public class IconCommand : ShopCommand {

      public readonly string Texture;

      public override string Name { get => $"{Texture} icon for {SlotId}"; }
      public override string DisplayName { get => ""; }

      public IconCommand(UberId slotId, string texture) : base(ShopCommandType.Icon, slotId) {
        Texture = texture;
      }

      public override void Grant(bool skipBase = false) {
        switch (CommandType) {
          case ShopCommandType.Icon:
            var slot = ShopSlot.GetSlot(SlotId);
            slot.Texture = Texture;
            break;
        }
      }
    }
  }
}
