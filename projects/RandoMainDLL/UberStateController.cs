using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Security.Policy;
using System.Threading;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class UberStateController {
    public static HashSet<UberId> TickingUberStates = new HashSet<UberId>();
    public static HashSet<UberId> SyncedUberStates = new HashSet<UberId>();
    public static Dictionary<UberId, UberState> UberStates = new Dictionary<UberId, UberState>();
    public static UberValue? ValueOpt(this UberState state) => state.GetUberId().ValueOpt();
    public static UberValue ValueOr(this UberState state, UberValue value) => state.GetUberId().ValueOpt().GetValueOrDefault(value);
    public static UberValue GetValue(this UberState state) => state.GetUberId().GetValue();
    public static UberState State(this UberId id) {
      if (!UberStates.TryGetValue(id, out UberState s)) {
        s = createUberStateEntry(id);
        UberStates.Add(id, s);
      }

      return s;
    }

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

    public static void OnTeleporterActivated(String identifier) {
      try {
        if (identifier == "kwoloksCavernSaveRoomA")
          (HintsController.CurrentZone == ZoneType.Glades ? TeleporterType.Glades : TeleporterType.Hollow).p().Grant(true);
        else
          TpsByID[identifier].p().Grant(true);
      }
      catch (Exception e) { Randomizer.Error($"OTA, key of {identifier}", e); }
    }

    public static void RegisterSyncedUberState(UberId id) {
      SyncedUberStates.Add(id);
    }

    public static void HandleSyncedUberStateChange(UberId id, float value) {
      InterOp.set_uber_state_value(id.GroupID, id.ID, value);
    }

    private static bool FullSyncNextUpdate = false;
    public static void QueueSyncedStateUpdate() {
      FullSyncNextUpdate = true;
    }

    private static UberState createUberStateEntry(UberId id) {
      if (!InterOp.get_uber_state_exists(id.GroupID, id.ID)) {
        Randomizer.Error("cuse", $"Failed to find {id} in uber state system.", false);
        return null;
      }

      byte[] buffer = new byte[256];
      int len = InterOp.get_uber_state_name(id.GroupID, id.ID, buffer, buffer.Length);
      string name = System.Text.Encoding.ASCII.GetString(buffer, 0, len);
      len = InterOp.get_uber_state_group_name(id.GroupID, id.ID, buffer, buffer.Length);
      string groupName = System.Text.Encoding.ASCII.GetString(buffer, 0, len);

      var s = new UberState() {
        ID = id.ID,
        GroupID = id.GroupID,
        Name = name,
        GroupName = groupName,
        Type = InterOp.get_uber_state_type(id.GroupID, id.ID),
      };

      s.Value = CreateValue(s.Type, InterOp.get_uber_state_value(id.GroupID, id.ID));
      return s;
    }

    public static UberValue? ValueOpt(this UberId id) {
      if (UberStates.TryGetValue(id, out UberState curr)) {
        return curr?.Value;
      }
      var state = createUberStateEntry(id);
      try {
        UberStates.Add(id, state);
      }
      catch (Exception e) {
        Randomizer.Warn("ValueOpt", $"{e}", false);
      }
      return state?.Value;
    }
    public static UberValue GetValue(this UberId id) => id.ValueOpt().GetValueOrDefault(new UberValue(0));
    public static bool Write(this UberState state) => state.Write(state.Value);

    public static bool Write(this UberState state, UberValue value) {
      state.Value = value;
      InterOp.set_uber_state_value(state.GroupID, state.ID, state.ValueAsFloat());
      return true;
    }

    private static Dictionary<UberId, UberState> uberStateLookup = null;
    public static void PopulateUberStates() {
      uberStateLookup = new Dictionary<UberId, UberState>();
      unsafe {
        var size = 0;
        var states = InterOp.get_uber_states(ref size);
        for (var i = 0; i < size; ++i) {
          var def = states[i];
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

    public static UberValue CreateValue(UberStateType type, float value) {
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
          return new UberValue(value);
      }
    }

    public static void OnUberStateChanged(int groupID, int stateID, byte type, float oldValue, float newValue) {
      if (uberStateLookup == null) {
        PopulateUberStates();
      }

      UberId key = new UberId(groupID, stateID);
      if (uberStateLookup.TryGetValue(key, out UberState cachedState)) {
        UberState state = cachedState.Clone();
        state.Value = CreateValue(state.Type, newValue);
        var value = CreateValue(state.Type, oldValue);
        ResolveUberStateChange(state, value);
      }
      else if (serializableUberState((UberStateType)type)) {
        var state = createUberStateEntry(key);
        state.Value = CreateValue(state.Type, oldValue);
        uberStateLookup.Add(key, state);
        state = state.Clone();
        state.Value = CreateValue(state.Type, newValue);
        var value = CreateValue(state.Type, oldValue);
        ResolveUberStateChange(state, value);
      }
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
        if (ShouldRevert(state)) {
          Randomizer.Log($"Reverting state change of {state.Name} from {oldValFmt} to {state.FmtVal()}", false);
          oldState.Write();
          return;
        }

        HandleSpecial(state);
        UberStates[key].Value = state.Value;
        var pos = InterOp.get_position();
        bool found = false;
        if (value.Int > 0) {
          var id = state.GetUberId();
          if (SkipUberStateMapCount.GetOrElse(key, 0) > 0) {
            var p = id.toCond().Pickup().Concat(id.toCond(state.ValueAsInt()).Pickup());
            if (p.NonEmpty) {
              SkipUberStateMapCount[key] -= 1;
              Randomizer.Log($"Suppressed granting {p} from {id}={state.ValueAsInt()}. Will suppress {SkipUberStateMapCount[key]} more times", false, "DEBUG");
              return;
            }
          }
          found = SeedController.OnUberState(state);
          if (!found)
            HintsController.OnLupoState(id);
        }

        if (SyncedUberStates.Contains(key))
          Randomizer.Client.SendUpdate(key, state.ValueAsFloat());

        BonusItemController.OnUberState(state);
        var zone = ZoneType.Void;
        if (InterOp.get_game_state() == GameState.Game)
          zone = InterOp.get_player_area().toZone();
        if ((value.Int == 0 || !found) && !(state.GroupName == "statsUberStateGroup" || state.GroupName == "achievementsGroup" || state.GroupID == 8 || state.GroupID == 10))
          Randomizer.Debug($"State change: {state.GroupName}.{state.Name} ({state.GroupID}|{state.ID}) {state.Type} {oldValFmt}->{state.FmtVal()} at ({Math.Round(pos.X)}, {Math.Round(pos.Y)}) in {zone}");
          //Randomizer.Debug($"{state.GroupName}.{state.Name}, {state.GroupID}, {state.ID}, {state.Type}, {oldValFmt}, {state.FmtVal()}, {zone}, {Math.Round(pos.X)},{Math.Round(pos.Y)}");
      }
      catch (Exception e) {
        Randomizer.Error($"USC.Update {state}", e);
      }
    }

    public static void Update() {
      try {
        if (NeedsNewGameInit)
          NewGameInit();

        if (!SkipListeners) {
          // We do ToArray here so we can change the hashset while we are looping.
          foreach (var state in TickingUberStates.ToArray()) {
            // Maybe change this to use our own cache lookup?
            var value = InterOp.get_uber_state_value(state.GroupID, state.ID);
            InterOp.set_uber_state_value(state.GroupID, state.ID, value + 1);
          }
        }

        if (FullSyncNextUpdate) {
          FullSyncNextUpdate = false;
          var bad = new HashSet<UberId>();
          foreach (var uid in SyncedUberStates.ToList()) {
            if (uid.State() != null) {
              Randomizer.Client.SendUpdate(uid, uid.State().ValueAsFloat());
            }
            else
              bad.Add(uid);
          }
          foreach (var baduid in bad) SyncedUberStates.Remove(baduid);
        }
        while (Randomizer.Client.UberStateQueue.TryTake(out var stateUpdate)) {
          InterOp.set_uber_state_value(stateUpdate.State.Group, stateUpdate.State.State, stateUpdate.Value);
        }
      }
      catch (Exception e) { Randomizer.Error("USC.Update", e, false); }
    }
    private static void HandleSpecial(UberState state) {
      if (state.Name == "arenaBByteStateSerialized" && state.Value.Byte == 4)
        // lumaPoolsStateGroup.arenaByteStateSerialized
        new UberId(5377, 1373).State().Write(state.Value);
      else if (state.Name == "craftCutsceneState" && 0 < state.Value.Byte && state.Value.Byte < 3) {
        state.Write(new UberValue((byte)3));
        // Give diamond in the rough pickup.
        new UberId(23987, 14832).State().Write(new UberValue(true));
      }
      // the below is a fix for a vanilla bug where you can just miss getting voice if you
      else if (state.Name == "findToadQuestUberState" && state.Value.Int == 2 ||        // (a) skip the kwolok cutscene too fast
               state.Name == "cleanseWellspringQuestUberState" && state.Value.Int == 4  // (b) come to kwolok after wellspring and get the cutscenes stacked awkwardly
        )
        Randomizer.InputUnlockCallback = () => {
          // this is really questionable!!
          var voiceState = new UberId(46462, 59806).State();
          if (!voiceState.Value.Bool) {
            voiceState.Write(new UberValue(true));
            InterOp.set_max_health(InterOp.get_max_health() + 10);
            InterOp.set_max_energy(InterOp.get_max_energy() + 1);
            InterOp.fill_health();
            InterOp.fill_energy();
            InterOp.save();
          }
          // should happen in both branches
          if (SeedController.flags.Contains(Flag.ALLWISPS))
            HintsController.ProgressWithHints();
        };
    }
    private static bool ShouldRevert(UberState state) {
      if (NeedsNewGameInit || SkipListeners)
        return false;
      if (state.Name == "cleanseWellspringQuestUberState" && state.Value.Int < 2 && !AHK.IniFlag("ShowShortCutscenes"))
        return true;
      else if (state.Name == "findKuQuest" && state.Value.Int < 4)
        return true;
      return false;
    }

    public static void NewGameInit() {
      if (!InterOp.is_loading_game()) {
        InterOp.clear_quest_messages();
        Randomizer.Log("New Game Init", false);

        foreach (UberState s in DefaultUberStates) { s.Write(); }
        foreach (UberState s in Kuberstates) { s.Write(); }
        foreach (UberState s in DialogAndRumors) { s.Write(); }

        if (SeedController.KSDoorsOpen)
          foreach (UberState s in KeystoneDoors) { s.Write(); }

        if (!AHK.IniFlag("ShowShortCutscenes"))
          foreach (UberState s in ShortCutscenes) { s.Write(); }

        if (!AHK.IniFlag("ShowLongCutscenes"))
          foreach (UberState s in LongCutscenes) { s.Write(); }

        InterOp.discover_everything();
        if (!SeedController.flags.Contains(Flag.NOSWORD)) {
          SaveController.SetAbility(AbilityType.SpiritEdge);
          var slotRaw = AHK.IniString("Misc", "SpawnSlot");
          var slot = 0;
          if (slotRaw != string.Empty) {
            slot = slotRaw.ParseToInt("Spawn Slot Ini") - 1;
            if (slot > 2 || slot < 0) {
              AHK.Print($"Ignoring invalid slot specifier {slotRaw}", toMessageLog: false);
              slot = 0;
            }
          }
          InterOp.bind(slot, 1002);
        }
        if (PsuedoLocs.GAME_START.Pickup().NonEmpty) {
          Randomizer.InputUnlockCallback = () => {
            MapController.UpdateReachable(2000);
            PsuedoLocs.GAME_START.OnCollect();
            InterOp.save();
          };
        }
        else
          MapController.UpdateReachable();
        InterOp.save();

        NeedsNewGameInit = false;
      }
    }

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
      new UberState() { Name = "wellspringShrineRumorState", ID = 16509, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(1) },
      new UberState() { Name = "gardenerHutRumorState", ID = 30596, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(1) },
      new UberState() { Name = "desertRuinsLoreWispA", ID = 7160, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "desertRuinsLoreWispB", ID = 15833, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "desertRuinsLoreWispC", ID = 52065, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "desertRuinsLoreWispD", ID = 13320, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "desertRuinsLoreWispE", ID = 5269, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
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
      new UberState() { Name = "luposMapQuest", ID = 24683, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(5) },
      new UberState() { Name = "rebuildGladesQuest", ID = 44578, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      new UberState() { Name = "regrowGladesQuest", ID = 26394, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
    };
  }
}
