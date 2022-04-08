using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class UberStateController {
    public interface IUberStateCommand {
      void Resolve();
    }

    public class SetUberStateCommand : IUberStateCommand {
      private Network.UberStateUpdateMessage message;

      public SetUberStateCommand(Network.UberStateUpdateMessage message) {
        this.message = message;
      }

      public void Resolve() {
        var (id, val) = message.FromNet();
        if (UberGet.AsDouble(id) != val)
          UberSet.Raw(id.GroupID, id.ID, val);
      }
    }

    public class ResetUberStatesCommand : IUberStateCommand {
      public void Resolve() {
        SaveController.ResetUberStateValueStore();
      }
    }

    public static HashSet<UberId> TimerUberStates = new HashSet<UberId>();
    public static HashSet<UberId> SyncedUberStates = new HashSet<UberId>();
    public static Dictionary<UberId, UberState> UberStates = new Dictionary<UberId, UberState>();
    public static UberValue GetValue(this UberState state) => state.GetUberId().GetValue();
    public static UberState State(this UberId id) {
      if (!UberStates.TryGetValue(id, out UberState s)) {
        s = createUberStateEntry(id);
        UberStates.Add(id, s);
      }

      return s;
    }
    public static Dictionary<Tuple<int, int>, TeleporterType> TPsByPos = new Dictionary<Tuple<int, int>, TeleporterType>() {
      { Tuple.Create(-798, -4308), TeleporterType.Spawn },
      { Tuple.Create(-328, -4534), TeleporterType.Den},
      { Tuple.Create(-1308, -3672), TeleporterType.Wellspring},
      { Tuple.Create(-944, -4580), TeleporterType.Burrows},
      { Tuple.Create(-150, -4236), TeleporterType.Hollow },
      { Tuple.Create(-307, -4151), TeleporterType.Glades },
      { Tuple.Create(-259, -3959), TeleporterType.Reach},
      { Tuple.Create(513, -4359), TeleporterType.Depths},
      { Tuple.Create(611, -4159), TeleporterType.WestWoods},
      { Tuple.Create(1082, -4050), TeleporterType.EastWoods},
      { Tuple.Create(1456, -3995), TeleporterType.WestWastes},
      { Tuple.Create(1992, -3900), TeleporterType.EastWastes},
      { Tuple.Create(2043, -3677), TeleporterType.OuterRuins},
      { Tuple.Create(2130, -3982), TeleporterType.InnerRuins},
      { Tuple.Create(-1316, -4151), TeleporterType.EastPools },
      { Tuple.Create(554, -3605), TeleporterType.Shriek },
      { Tuple.Create(421, -3862), TeleporterType.WillowsEnd },
      { Tuple.Create(-1656, -4168), TeleporterType.WestPools},
    };
    public static HashSet<TeleporterType> GrantOnNextUpdate = new HashSet<TeleporterType>();
    public static Dictionary<String, TeleporterType> TpsByID = new Dictionary<String, TeleporterType>() {
      { "howlsOriginA", TeleporterType.Burrows},
      { "howlsDenSaveRoom", TeleporterType.Den},
      { "wellSpringSaveRoomOld", TeleporterType.Wellspring},
      { "baursReachSaveroom", TeleporterType.Reach},
      { "mouldwoodDepthsF", TeleporterType.Depths},
      { "silentWoodlandsHowlReveal", TeleporterType.WestWoods},
      { "kuDeathSceneBlockout", TeleporterType.EastWoods},
      { "feedingGroundsSaveRoom", TeleporterType.WestWastes},
      { "e3DesertI", TeleporterType.EastWastes},
      { "desertRuinsTowerSaveRoom", TeleporterType.OuterRuins},
      { "willowsEnd", TeleporterType.WillowsEnd},
      { "desertRuinsSaveRoom", TeleporterType.InnerRuins},
      { "lagoonSaveRoomB", TeleporterType.EastPools},
      { "lagoonSaveRoom", TeleporterType.WestPools},
      { "willowCeremonyIntro", TeleporterType.Shriek},
      { "swampIntroTop", TeleporterType.Spawn},
    };

    public static bool DoingTrial = false;

    public static void OnRaceStart() {
      DoingTrial = true;
    }

    public static void OnRaceEnd() {
      DoingTrial = false;
    }

    public static void OnTeleporting() {
      UberInc.Int(StatsTracking.WarpsUsed);
      PsuedoLocs.ON_TELEPORT.OnCollect();
    }

    public static void FoundTP(TeleporterType type) {
      // If water is not lowered don't grant.
      if (type == TeleporterType.EastPools && !UberGet.Bool(5377, 63173))
        return;

      GrantOnNextUpdate.Add(type);
    }
    
    public static void MapTPActivated(float x, float y) {
      if (TPsByPos.TryGetValue(Tuple.Create((int)Math.Truncate(x), (int)Math.Truncate(y)), out var tpt))
        GrantOnNextUpdate.Add(tpt);
      else
        Randomizer.Log($"unknown tp at {(int)Math.Truncate(x)}, {(int)Math.Truncate(y)}", false);
    }
    public static void OnTeleporterActivated(String identifier) {
      try {
        if (identifier == "kwoloksCavernSaveRoomA")
          GrantOnNextUpdate.Add(StatsTracking.CurrentZone == ZoneType.Glades ? TeleporterType.Glades : TeleporterType.Hollow);
        else
          GrantOnNextUpdate.Add(TpsByID[identifier]);
      }
      catch (Exception e) { Randomizer.Error($"OTA, key of {identifier}", e); }
    }

    public static void HandleSyncedUberStateChange(UberId id, double value) {
      UberSet.Raw(id.GroupID, id.ID, value);
    }

    private static bool FullSyncNextUpdate = false;
    public static void QueueSyncedStateUpdate() {
      FullSyncNextUpdate = true;
    }

    private static UberState createUberStateEntry(UberId id) {
      if (!InterOp.UberState.get_uber_state_exists(id.GroupID, id.ID)) {
        Randomizer.Error("cuse", $"Failed to find {id} in uber state system.", false);
        return null;
      }
      
      byte[] buffer = new byte[256];
      int len = InterOp.UberState.get_uber_state_name(id.GroupID, id.ID, buffer, buffer.Length);
      string name = System.Text.Encoding.ASCII.GetString(buffer, 0, len);
      len = InterOp.UberState.get_uber_state_group_name(id.GroupID, id.ID, buffer, buffer.Length);
      string groupName = System.Text.Encoding.ASCII.GetString(buffer, 0, len);

      var s = new UberState() {
        ID = id.ID,
        GroupID = id.GroupID,
      };

      if (id.GroupID == 12) {
        s.Name = $"fake_{id.ID}";
        s.GroupName = "multi_vars";
        s.Type = UberStateType.SerializedBooleanUberState;
      }
      else {
        s.Name = name;
        s.GroupName = groupName;
        s.Type = InterOp.UberState.get_uber_state_type(id.GroupID, id.ID);
      }

      s.Value = CreateValue(s.Type, UberGet.AsDouble(id.GroupID, id.ID));
      return s;
    }

    public static UberValue GetValue(this UberId id) => InterOp.UberState.get_uber_state_exists(id.GroupID, id.ID) ? 
      new UberValue(InterOp.UberState.get_uber_state_type(id.GroupID, id.ID), UberGet.AsDouble(id.GroupID, id.ID)) :
      new UberValue();
    public static UberStateType UberType(this UberId id) => InterOp.UberState.get_uber_state_exists(id.GroupID, id.ID) ?
      InterOp.UberState.get_uber_state_type(id.GroupID, id.ID) : UberStateType.SerializedIntUberState;

    public static bool Write(this UberState state) => state.Write(state.Value);

    public static bool Write(this UberState state, UberValue value) {
      state.Value = value;
      UberSet.Raw(state.GroupID, state.ID, state.ValueAsDouble());
      return true;
    }

    private static Dictionary<UberId, UberState> uberStateLookup = null;
    public static void PopulateUberStates() {
      uberStateLookup = new Dictionary<UberId, UberState>();
      unsafe {
        var size = 0;
        var states = InterOp.UberState.get_uber_states(ref size);
        for (var i = 0; i < size; ++i) {
          var def = states[i];
          if (def.GroupID == 12) continue; // this is banned for reasons
          var name = Marshal.PtrToStringAnsi(def.Name);
          var groupName = Marshal.PtrToStringAnsi(def.GroupName);
          uberStateLookup.Add(new UberId(def.GroupID, def.ID), new UberState() {
            ID = def.ID,
            GroupID = def.GroupID,
            Name = name,
            GroupName = groupName,
            Type = def.Type
          });
        }
      }
    }

    private static bool serializableUberState(UberStateType type) {
      switch (type) {
        case UberStateType.PlayerUberStateDescriptor:
        case UberStateType.SavePedestalUberState:
        case UberStateType.SerializedByteUberState:
        case UberStateType.SerializedBooleanUberState:
        case UberStateType.SerializedIntUberState:
        case UberStateType.SerializedFloatUberState:
          return true;
        default:
          return false;
      }
    }

    public static UberValue CreateValue(UberStateType type, double value) {
      switch (type) {
        case UberStateType.PlayerUberStateDescriptor:
        case UberStateType.SavePedestalUberState:
        case UberStateType.SerializedByteUberState:
          return new UberValue((byte)value);
        case UberStateType.SerializedBooleanUberState:
          return new UberValue(!(Math.Abs(value) < 0.001f));
        case UberStateType.SerializedIntUberState:
          return new UberValue((int)value);
        default:
          return new UberValue((float)value);
      }
    }

    private static HashSet<UberId> RaceIDs = new HashSet<UberId> {
      new UberId(44964, 45951),
      new UberId(44964, 25545),
      new UberId(44964, 11512),
      new UberId(44964, 54686),
      new UberId(44964, 22703),
      new UberId(44964, 23661),
      new UberId(44964, 28552),
      new UberId(44964, 30767)
    };

    public static void OnUberStateChanged(int groupID, int stateID, byte type, double oldValue, double newValue) {
      if (DoingTrial) {
        // We don't care about no resets.
        if (newValue < 0.5f)
          return;

        // Special case for reach trial.
        if (groupID == 28895 && (stateID == 29898 || stateID == 10823 || stateID == 37444 || stateID == 18358))
          InterOp.Player.set_keystones(InterOp.Player.get_keystones() + 1);

        if (!RaceIDs.Contains(new UberId(groupID, stateID)))
          return;

        OnRaceEnd();
      }

      if (uberStateLookup == null) {
        PopulateUberStates();
      }

      if (groupID == 15 && stateID == 112 && newValue > 0.5) {
        Randomizer.Log("Player input disabled", false);
      }

      UberId key = new UberId(groupID, stateID);
      if (uberStateLookup.TryGetValue(key, out UberState cachedState)) {
        UberState state = cachedState.Clone();
        state.Value = CreateValue(state.Type, newValue);
        var value = CreateValue(state.Type, oldValue);
        ResolveUberStateChange(state, value);
      } else if (serializableUberState((UberStateType)type)) {
        var state = createUberStateEntry(key);
        state.Value = CreateValue(state.Type, oldValue);
        uberStateLookup.Add(key, state);
        state = state.Clone();
        state.Value = CreateValue(state.Type, newValue);
        var value = CreateValue(state.Type, oldValue);
        ResolveUberStateChange(state, value);
      }
    }

    private static bool shouldLogStateChange(UberState state, bool found) {
      // If we are not in dev mode or we are doing a new game initialization don't log.
      if (!Randomizer.Dev || NeedsNewGameInit)
        return false;

      // Don't log states that have a pickup or have a value already?
      if (state.Value.Int != 0 && found)
        return false;

      // Don't log timer uberstates.
      if (TimerUberStates.Contains(state.GetUberId()))
        return false;

      // Don't log vanilla stats and achievemnts.
      if (state.GroupName == "statsUberStateGroup" || state.GroupName == "achievementsGroup" || state.GroupID == 8 || state.GroupID == 10)
        return false;

      // Don't log our own StatTracking.
      if (!StatsTracking.ShouldLog(state.GetUberId()))
        return false;

      return true;
    }

    public static bool SharingExceptions(UberState state) {
      // Because Moon is weird and sets it to 5 for a frame.
      return state.GroupID == 937 && state.ID == 34641 && state.ValueAsDouble() > 4;
    }

    public static bool shouldTriggerReachableCheck(UberState state, UberValue old) {
      return MapController.TrackedConds.Any(c => c.Met(state, old));
    }

    public static void ResolveUberStateChange(UberState state, UberValue old) {
      try {
        UberId key = state.GetUberId();
        if (!UberStates.TryGetValue(key, out UberState oldState)) {
          oldState = state.Clone();
          oldState.Value = old;
          UberStates.Add(key, oldState);
        }

        UberValue value = state.Value;
        if (value.Int == old.Int)
          return;

        var oldValFmt = old.FmtVal(state.Type); // get this now because we overwrite the value by reference 
        if (ShouldRevert(state, old)) {
          Randomizer.Log($"Reverting state change of {state.Name} from {oldValFmt} to {state.FmtVal()}", false);
          oldState.Write();
          return;
        }

        HandleSpecial(state);
        UberStates[key].Value = state.Value;
        if (SkipUberStateMapCount.GetOrElse(key, 0) > 0) {
          var id = state.GetUberId();
          var p = id.Pickup(state.ValueAsInt());
          if (p.NonEmpty) {
            SkipUberStateMapCount[key] -= 1;
            Randomizer.Log($"Suppressed granting {p} from {id}={state.ValueAsInt()}. Will suppress {SkipUberStateMapCount[key]} more times", false, "DEBUG");
            return;
          }
        }

        bool found = SeedController.OnUberState(state, old);
        if (SyncedUberStates.Contains(key) && !UnsharableIds.Contains(key) && !SharingExceptions(state)) {
          WebSocketClient.SendUpdate(key, state.ValueAsDouble());
        }

        BonusItemController.OnUberState(state);
        var zone = ZoneType.Void;
        if (InterOp.Utils.get_game_state() == GameState.Game)
          zone = InterOp.Map.get_player_area().toZone();

        if (shouldLogStateChange(state, found)) {
          var pos = InterOp.Player.get_position();
          Randomizer.Debug($"State change: {state.GroupName}.{state.Name} ({state.GroupID}|{state.ID}) {state.Type} {oldValFmt}->{state.FmtVal()} at ({Math.Round(pos.X)}, {Math.Round(pos.Y)}) in {zone}");
        }

        InterOp.System.report_uber_state_change(state.GroupID, state.ID, state.ValueAsDouble());
        if (shouldTriggerReachableCheck(state, old)) {
          MapController.UpdateReachable();
        }
      }
      catch (Exception e) {
        Randomizer.Error($"USC.Update {state}", e);
      }
    }

    public static void Update(float delta) {
      try {
        // We don't want to do any updates if we are doing a trial.
        if (DoingTrial)
          return;

        if (NeedsNewGameInit)
          NewGameInit();
        foreach(var tpt in GrantOnNextUpdate) tpt.p().Grant(true);
        GrantOnNextUpdate.Clear();
        if (!SkipListeners && !InterOp.Utils.in_menu()) {
          // We do ToArray here so we can change the hashset while we are looping.
          foreach (var state in TimerUberStates.ToArray()) {
            // Maybe change this to use our own cache lookup?
            var value = UberGet.AsDouble(state.GroupID, state.ID);
            UberSet.Raw(state.GroupID, state.ID, value + delta);
          }

          foreach (var timer in SeedController.TimerList) {
            if (timer.Toggle.Met()) {
              var value = UberGet.AsDouble(timer.Increment.GroupID, timer.Increment.ID);
              UberSet.Raw(timer.Increment.GroupID, timer.Increment.ID, value + delta);
            }
          }
        }

        if (FullSyncNextUpdate) {
          FullSyncNextUpdate = false;
          Randomizer.Debug($"Syncing {SyncedUberStates.Count} states", false);
          var bad = SyncedUberStates.Where(uid => !InterOp.UberState.get_uber_state_exists(uid.GroupID, uid.ID)).ToHashSet();
          WebSocketClient.SendBulk(SyncedUberStates.Where(uid => !bad.Contains(uid)).ToDictionary(uid => uid, (uid) => UberGet.AsDouble(uid)));
          Randomizer.Debug($"Not sending {bad.Count} bad states", false);
          foreach (var baduid in bad) SyncedUberStates.Remove(baduid);
        }
        while (WebSocketClient.UberStateQueue.TryTake(out var stateUpdate))
          stateUpdate.Resolve();
      }
      catch (Exception e) { Randomizer.Error("USC.Update", e, false); }
    }

    delegate void SpecialCallback(UberState state);
    static Dictionary<UberId, SpecialCallback> SpecialHandlers = new Dictionary<UberId, SpecialCallback>() {
      {
        new UberId(5377, 53480),
        (UberState state) => {
          // lumaPoolsStateGroup.arenaBByteStateSerialized ; water dash version of the fight room
          if (state.Value.Byte == 4)
            UberSet.Byte(5377, 1373, 4);
        }
      },
      {
        new UberId(42178, 2654),
        (UberState state) => {
          // hubUberStateGroup.craftCutsceneState ; diamond in the rough
          if (0 < state.Value.Byte && state.Value.Byte < 3) {
            state.Write(new UberValue((byte)3));
            // Give diamond in the rough pickup.
            UberSet.Bool(23987, 14832, true);
          }
        }
      },
      { new UberId(37858, 12379), // wellspring escape complete
        (UberState state) => UberSet.Int(937, 34641, 3) // kwolokGroupDescriptor.cleanseWellspringQuestUberState
      },
      {
        new UberId(14019, 48794),
        (UberState state) => {
          if (state.Value.Int == 2)
            Randomizer.InputUnlockCallback.Add(GiveVoice);
        }
      },
      {
        new UberId(937, 34641),
        (UberState state) => {
          // Wellspring quest
          if (state.Value.Int >= 3)
            // Tuley exists.
            UberSet.Bool(6, 300, true);
        }
      },
      {
        new UberId(58674, 32810),
        (UberState state) => {
          // Petrified forest chase state.
          if (state.Value.Int == 7)
            // Prevent from getting stuck on shriek killing you.
            UberSet.Int(58674, 32810, 8);
        }
      },
      {
        new UberId(16155, 28478),
        (UberState state) => {
          // Finish willow stone if the vine gets destroyed
          if (state.Value.Bool)
            UberSet.Byte(16155, 12971, 4);
        }
      },
      {
        new UberId(5377, 63173),
        (UberState state) => {
          if (state.Value.Bool && InterOp.Map.is_visited(AreaType.LumaPools, 6073))
            InterOp.UberState.set_uber_state_value(945, 26601, 3); // Give LumaPools tp.
        }
      },
    };

    public static AbilityType GetAbilityType(this UberState state) {
      foreach (var val in Enum.GetValues(typeof(AbilityType))) {
        var value = (AbilityType)val;
        if (value != AbilityType.NONE && value.State().Equals(state.GetUberId())) {
          return value;
        }
      }

      return AbilityType.NONE;
    }

    private static void HandleSpecial(UberState state) {
      if (SpecialHandlers.TryGetValue(state.GetUberId(), out var callback))
        callback(state);
      var abilityType = state.GetAbilityType();
      if (abilityType != AbilityType.NONE) {
        var hasEquip = abilityType.Equip().HasValue;
        if (hasEquip && !state.Value.Bool) {
          InterOp.Ability.unbind(abilityType.Equip().Value);
        }

        InterOp.Ability.set_ability(abilityType, state.Value.Bool);
        if (abilityType.Equip().HasValue) {
          InterOp.Ability.set_equipment(abilityType.Equip().Value, state.Value.Bool);
        }

        BonusItemController.Refresh();
      }
    }
    private static void GiveVoice() {
      // this is really questionable!!
      var vid = new UberId(46462, 59806);
      if (!UberGet.Bool(vid)) {
        UberSet.Bool(vid, true);
        InterOp.Player.set_max_health(InterOp.Player.get_max_health() + 10);
        InterOp.Player.set_max_energy(InterOp.Player.get_max_energy() + 1);
        InterOp.Player.fill_health();
        InterOp.Player.fill_energy();
        InterOp.System.save();
      }
      // should happen in both branches
      if (SeedController.Flags.Contains(Flag.ALLWISPS))
        HintsController.ProgressWithHints();
    }
    private static bool ShouldRevert(UberState state, UberValue old) {
      if (NeedsNewGameInit || SkipListeners)
        return false;
      if (state.GroupID == 937 && state.ID == 34641 && state.Value.Int < old.Int)
        return true;
      // questUberStateGroup.findKuQuest
      else if (state.GroupID == 14019 && state.ID == 34504 && state.Value.Int < 4)
        return true;
      return false;
    }

    public static void NewGameInit() {
      if (!InterOp.System.is_loading_game()) {
        UnsharableIds.Clear();
        InterOp.Messaging.clear_quest_messages();
        Randomizer.Log($"New Game Init - {SeedController.SeedName}", false);

        foreach (UberState s in DefaultUberStates) { s.Write(); }
        foreach (UberState s in Kuberstates) { s.Write(); }
        foreach (UberState s in DialogAndRumors) { s.Write(); }

        if (SeedController.KSDoorsOpen)
          foreach (UberState s in KeystoneDoors) { s.Write(); }

        if (!AHK.IniFlag("ShowShortCutscenes"))
          foreach (UberState s in ShortCutscenes) { s.Write(); }

        if (!AHK.IniFlag("ShowLongCutscenes"))
          foreach (UberState s in LongCutscenes) { s.Write(); }

        InterOp.Map.discover_everything();
        if (SeedController.Settings.LegacySeedgen && !SeedController.Flags.Contains(Flag.NOSWORD)) {
          SaveController.SetAbility(AbilityType.SpiritEdge);
          var slotRaw = AHK.IniString("Misc", "SpawnSlot");
          var slot = 0;
          if (slotRaw != string.Empty) {
            slot = slotRaw.ParseToInt("Spawn Slot Ini") - 1;
            if (slot > 2 || slot < 0) {
              MessageController.ShowMessage($"Ignoring invalid slot specifier {slotRaw}", queue: "debug");
              slot = 0;
            }
          }
          InterOp.Ability.bind(slot, EquipmentType.Weapon_Sword);
        }

        WheelManager.ResetWheels();
        ShopSlot.ResetSlotData();
        if (PsuedoLocs.GAME_START.Pickup().NonEmpty || PsuedoLocs.LOAD_SEED.Pickup().NonEmpty) {
          Randomizer.InputUnlockCallback.Add(() => {
            PsuedoLocs.GAME_START.OnCollect();
            PsuedoLocs.LOAD_SEED.OnCollect();
            InterOp.System.save();
            MapController.UpdateReachable();
          });
        } else MapController.UpdateReachable();
        InterOp.Shard.set_shard_slots(3);
        InterOp.System.save();

        NeedsNewGameInit = false;
      }
    }

    public static HashSet<UberId> UnsharableIds = new HashSet<UberId>();

    public static Dictionary<UberId, int> SkipUberStateMapCount = new Dictionary<UberId, int>();

    public static bool SkipListeners = false;

    public static bool NeedsNewGameInit = false;

    public static List<UberState> DefaultUberStates = new List<UberState>() {
      new UberState() { Name = "fastTravelEnabledUberState", ID = 16489, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedByteUberState, Value = new UberValue((byte)1)},
      new UberState() { Name = "builderProjectSpiritWell", ID = 16825, GroupName = "hubUberStateGroup", GroupID = 42178, Type = UberStateType.SerializedByteUberState, Value = new UberValue((byte)3) },
      new UberState() { Name = "builderProjectBeautify", ID = 15068, GroupName = "hubUberStateGroup", GroupID = 42178, Type = UberStateType.SerializedByteUberState, Value = new UberValue((byte)3) },
      new UberState() { Name = "torchHolded", ID = 47458, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "risingPedestals", ID = 54318, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "mokiTorchPlayed", ID = 3621, GroupName = "inkwaterMarshStateGroup", GroupID = 9593, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "leverA", ID = 50432, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
    };

    public static List<UberState> ShortCutscenes = new List<UberState>() {
      new UberState() { Name = "hasOriUsedSavePedestal", ID = 4220, GroupName = "howlsDenGRoup", GroupID = 11666, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "mokiFoulWaterVignetteTriggered", ID = 41644, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "mokiCleanWaterVignetteTriggered", ID = 37811, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "playedMokiVignette", ID = 35023, GroupName = "lumaPoolsStateGroup", GroupID = 5377, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "stenchTease", ID = 3846, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "wispSequencePlayedOut", ID = 9367, GroupName = "lagoonStateGroup", GroupID = 945, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "baurReachWispIntro", ID = 40451, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "mouldwoodDepthsWisptIntro", ID = 37364, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "wispSequencePlayedOut", ID = 55196, GroupName = "windsweptWastesGroupDescriptor", GroupID = 20120, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "interactedWithTokk", ID = 45740, GroupName = "howlsOriginGroup", GroupID = 24922, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "rescuedOpher", ID = 25031, GroupName = "waterMillStateGroupDescriptor", GroupID = 37858, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "talkedToKwolok", ID = 21700, GroupName = "lumaPoolsStateGroup", GroupID = 5377, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "findToadQuestUberState", ID = 48794, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(1) },
      new UberState() { Name = "cleanseWellspringQuestUberState", ID = 34641, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      new UberState() { Name = "ruinsVisited", ID = 3621, GroupName = "windtornRuinsGroup", GroupID = 10289, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
    };

    public static List<UberState> LongCutscenes = new List<UberState>() {
      new UberState() { Name = "powlTeaseTriggered", ID =  51018, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "powlTeaseTriggered", ID =  2108, GroupName = "baursReachGroup", GroupID = 28895, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "playedNaruGumoCutaway", ID =  23225, GroupName = "waterMillStateGroupDescriptor", GroupID = 37858, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "introPlayed", ID =  32922, GroupName = "willowsEndGroup", GroupID = 16155, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
    };

    public static List<UberState> DialogAndRumors = new List<UberState>() {
      new UberState() { Name = "metOpherHubAfterWatermill", ID = 5982, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "metOpherHubBeforeWatermill", ID = 55122, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "opherMentiodedWatermill", ID = 46745, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "twillenKwolokDialogState", ID = 25267, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      new UberState() { Name = "twillenHubDialogState", ID = 12799, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
      new UberState() { Name = "twillenMournedKu", ID = 34756, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "twillenGaveRumor", ID = 6194, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "metGrom", ID = 9394, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "desertRumorState", ID = 57552, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      new UberState() { Name = "gromIntroSequencePlayed", ID = 50418, GroupName = "hubUberStateGroup", GroupID = 42178, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "gromGaveWarning", ID = 7646, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "gromTalkedAboutDesert", ID = 45751, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "gromTalkedAboutWatermill", ID = 54806, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "gromTalkedAboutMouldwoodGate", ID = 46471, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "gromTalkedAboutBaur", ID = 7321, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "gromTalkedAboutLagoon", ID = 30073, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "builderProjectHouses", ID = 51230, GroupName = "hubUberStateGroup", GroupID = 42178, Type = UberStateType.SerializedByteUberState, Value = new UberValue(1) },
      new UberState() { Name = "luposMapQuest", ID = 24683, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(4) },
      new UberState() { Name = "talkedInHub", ID = 10337, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      new UberState() { Name = "willowsEndSeirExitCutscene", ID = 8985, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "metOpherHub", ID = 56448, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "gromMentionedOre", ID = 5186, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "wispCutscenePlayed", ID = 58268, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "playerPurchasedWeaponMasterUpgrade", ID = 20131, GroupName = "playerUberStateGroupDescriptor", GroupID = 3440, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "rebuildGladesQuest", ID = 44578, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(1) },
      new UberState() { Name = "wellspringShrineRumorState", ID = 16509, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      new UberState() { Name = "gardenerHutRumorState", ID = 30596, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      new UberState() { Name = "desertRuinsLoreWispA", ID = 7160, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "desertRuinsLoreWispB", ID = 15833, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "desertRuinsLoreWispC", ID = 52065, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "desertRuinsLoreWispD", ID = 13320, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "desertRuinsLoreWispE", ID = 5269, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "luposMapQuest", ID = 24683, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(5) }, 
    };

    public static List<UberState> Kuberstates = new List<UberState>() {
      new UberState() { Name = "narratorLineShown", ID = 22056, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "powlVignettePlayed", ID = 32369, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "powlVignettePlayed", ID = 14539, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "skeletonState", ID = 61252, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "narratorLineShownHowl", ID = 10677, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "featherVignettePlayed", ID = 36965, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "petrifiedOwlStalkSequenceCompleted", ID = 7636, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "winterForestWispQuestUberState", ID = 8973, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(1) },
      new UberState() { Name = "lagoonWispQuestUberState", ID = 35087, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(1) },
      new UberState() { Name = "desertWispQuestUberState", ID = 35399, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(1) },
      new UberState() { Name = "mouldwoodDepthsWispQuestUberState", ID = 45931, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(1) },
      new UberState() { Name = "petrifiedForestNewTransitionOriVignettePlayed", ID = 46980, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "petrifiedForestNewTransitionKuVignettePlayed", ID = 44798, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      new UberState() { Name = "lastGlobalEvent", ID = 54675, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2)  },
      new UberState() { Name = "findKuQuest", ID = 34504, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(4)  },
      new UberState() { Name = "lookForKuQuestUberState", ID = 44500, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(4) },
    };

    public static List<UberState> KeystoneDoors = new List<UberState>() {
      new UberState() { Name = "e3DesertG_clone0_KeystoneDoor", ID = 28786, GroupName = "windsweptWastesGroupDescriptor",  GroupID = 20120, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true)},
      new UberState() { Name = "swampTorchIntroductionADoorWithTwoSlotsBooleanDescriptor", ID = 42309, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "swampNightcrawlerCavernADoorWithTwoSlotsBooleanDescriptor", ID = 47445, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "doorWithTwoSlots", ID = 59990, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "mouldwoodDepthsGDoorWithTwoSlotsOpened", ID = 10758, GroupName = "mouldwoodDepthsGroup", GroupID = 18793, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "keystoneGate", ID = 47621, GroupName = "lumaPoolsStateGroup", GroupID = 5377, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "doorWithFourSlots", ID = 4290, GroupName = "baursReachGroup", GroupID = 28895, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "keystoneGate", ID = 49900, GroupName = "baursReachGroup", GroupID = 28895, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "doorWithFourSlots", ID = 3171, GroupName = "moulwoodDepthsGroup", GroupID = 18793, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "doorState", ID = 21500, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "mouldwoodDepthsHDoorWithFourSlotsOpened", ID = 41544, GroupName = "mouldwoodDepthsGroup", GroupID = 18793, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "eyesPlacedIntoStatue", ID = 1038, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SerializedByteUberState, Value = new UberValue((byte)3) },
      new UberState() { Name = "entranceStatueOpened", ID = 64003, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
    };

    public static List<UberState> Wisps = new List<UberState>() {
      UberStateDefaults.wispRewardPickupBaur,
      UberStateDefaults.wispRewardPickupMouldwood,
      UberStateDefaults.wispRewardPickupLagoon,
      UberStateDefaults.wispRewardPickupWindtorn,
      UberStateDefaults.wispRewardPickupKwolok
  };

    public static List<UberState> Quests = new List<UberState>() {
      //new UberState() { Name = "wotwQuestUberState", ID = 13020, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(true) },
      //new UberState() { Name = "findToadQuestUberState", ID = 48794, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "findKuQuest", ID = 34504, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(4) },
      //new UberState() { Name = "mouldwoodRumorState", ID = 53066, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "desertRumorState", ID = 57552, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "howlsOriginRumorState", ID = 40952, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "mouldwoodShrineRumorState", ID = 18061, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "silentWoodsShrineRumorState", ID = 27011, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "inkwaterShrineRumorState", ID = 23863, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "gardenerHutRumorState", ID = 30596, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "mapstoneRumorState", ID = 39957, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "firstRaceRumorState", ID = 42501, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      new UberState() { Name = "cleanseWellspringQuestUberState", ID = 34641, GroupName = "kwolokGroupDescriptor",  GroupID = 937, Type = UberStateType.SerializedIntUberState, Value = new UberValue(4) },
      new UberState() { Name = "desertWispQuestUberState", ID = 35399, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
      new UberState() { Name = "lagoonWispQuestUberState", ID = 35087, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
      new UberState() { Name = "mouldwoodDepthsWispQuestUberState", ID = 45931, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
      new UberState() { Name = "winterForestWispQuestUberState", ID = 8973, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
      new UberState() { Name = "marshKeystoneQuest", ID = 51645, GroupName = "npcsStateGroup",  GroupID = 48248, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
      new UberState() { Name = "inkwaterWellQuest", ID = 18458, GroupName = "npcsStateGroup",  GroupID = 48248, Type = UberStateType.SerializedIntUberState, Value = new UberValue(4) },
      new UberState() { Name = "lostCompassQuest", ID = 20667, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
      new UberState() { Name = "braveMokiQuest", ID = 15983, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
      new UberState() { Name = "familyReunionQuest", ID = 27804, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(4) },
      new UberState() { Name = "treeKeeperQuest", ID = 59708, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
      new UberState() { Name = "desertCogQuest", ID = 61011, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(5) },
      new UberState() { Name = "tradeSequenceQuest", ID = 26318, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(11) },
      new UberState() { Name = "darkCaveQuest", ID = 33776, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
      new UberState() { Name = "kwoloksWisdomQuest", ID = 50597, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(4) },
//      new UberState() { Name = "luposMapQuest", ID = 24683, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(5) },
      new UberState() { Name = "rebuildGladesQuest", ID = 44578, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      new UberState() { Name = "regrowGladesQuest", ID = 26394, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
    };
  }
}
