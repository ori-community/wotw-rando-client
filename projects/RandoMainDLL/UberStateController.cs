using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class UberStateController {
    public static Dictionary<UberId, UberState> UberStates = new Dictionary<UberId, UberState>();
    public static UberValue? CurrentValue(this UberState state) => state.GetUberId().GetValue();
    public static UberValue ValueOr(this UberState state, UberValue value) => state.GetUberId().GetValue().GetValueOrDefault(value);
    public static UberState State(this UberId id) {
      UberStates.TryGetValue(id, out UberState s);
      return s;
    }

    public static UberValue? GetValue(this UberId id) {
      if (UberStates.TryGetValue(id, out UberState curr)) {
        return curr.Value;
      }
      return null;
    }
    public static bool Write(this UberState state) => state.Write(state.Value);

    public static bool Write(this UberState state, UberValue value) {
      state.Value = value;
      Randomizer.Memory.WriteUberState(state);
      return true;
    }
    public static void Update() {
      if (NeedsNewGameInit)
        NewGameInit();
      bool SkipListners = SkipListenersNextUpdate;
      SkipListenersNextUpdate = false;

      var memory = Randomizer.Memory;
      Dictionary<long, UberState> uberStates = memory.GetUberStates();
      foreach (KeyValuePair<long, UberState> pair in uberStates) {
        try {
          UberState state = pair.Value;
          UberId key = state.GetUberId();

          if (UberStates.TryGetValue(key, out UberState oldState)) {
            UberValue value = state.Value;
            UberValue oldValue = oldState.Value;
            if (value.Int != oldValue.Int) {
              var oldValFmt = oldState.FmtVal(); // get this now because we overwrite the value by reference 
              if (ShouldRevert(state)) {
                Randomizer.Log($"Reverting state change of {state.Name} from {oldValFmt} to {state.FmtVal()}", false);
                memory.WriteUberState(oldState);
                continue;
              }
              HandleSpecial(state);
              UberStates[key].Value = state.Value;
              if (!SkipListners) {
                var pos = Randomizer.Memory.Position();
                bool found = false;
                if (value.Int > 0)
                  found = SeedController.OnUberState(state);
                if ((value.Int == 0 || !found) && !(state.GroupName == "statsUberStateGroup" || state.GroupName == "achievementsGroup"))
                  Randomizer.Log($"State change: {state.Name} {state.ID} {state.GroupName} {state.GroupID} {state.Type} {state.FmtVal()} (was {oldValFmt}, pos ({Math.Round(pos.X)},{Math.Round(pos.Y)}) )", false);
              }
            }
          } else {
            UberStates[key] = state.Clone();
          }
        } catch (Exception e) {
          Randomizer.Error($"USC.Update {pair}", e);
        }
      }
    }
    private static void HandleSpecial(UberState state) {
      if (state.Name == "arenaBByteStateSerialized" && state.Value.Byte == 4)
        // lumaPoolsStateGroup.arenaByteStateSerialized
        new UberId(5377, 1373).State().Write(state.Value);
      else if (state.Name == "findToadQuestUberState" && state.Value.Int == 2)
        Randomizer.InputUnlockCallback = () => {
          // this is really questionable!!
          var voiceState = new UberId(46462, 59806).State();
          if (!(voiceState.Value.Bool)) {
            voiceState.Write(new UberValue(true));
            Stats stats = Randomizer.Memory.PlayerStats;
            stats.MaxHealth += 10;
            stats.MaxEnergy++;
            Randomizer.Memory.PlayerStats = stats;
            Randomizer.Memory.FillEnergy();
            Randomizer.Memory.FillHealth();
          }
        };
    }
    private static bool ShouldRevert(UberState state) {
      if (NeedsNewGameInit || SkipListenersNextUpdate)
        return false;
      if (state.Name == "cleanseWellspringQuestUberState" && state.Value.Int < 2 && !AHK.IniFlag("ShowShortCutscenes")) 
          return true;
      else if (state.Name == "findKuQuest" && state.Value.Int < 4) 
        return true;
      return false;
    }

    public static void NewGameInit() {
      var memory = Randomizer.Memory;
      if (!memory.IsLoadingGame()) {
        Randomizer.Log("New Game Init", false);
        SaveController.SetAbility(AbilityType.SpiritEdge);
        foreach (UberState s in DefaultUberStates) { memory.WriteUberState(s); }
        foreach (UberState s in Kuberstates) { memory.WriteUberState(s); }
        foreach (UberState s in DialogAndRumors) { memory.WriteUberState(s); }

        if (SeedController.KSDoorsOpen)
          foreach (UberState s in KeystoneDoors) { memory.WriteUberState(s); }

        if (!AHK.IniFlag("ShowShortCutscenes"))
          foreach (UberState s in ShortCutscenes) { memory.WriteUberState(s); }

        if (!AHK.IniFlag("ShowLongCutscenes"))
          foreach (UberState s in LongCutscenes) { memory.WriteUberState(s); }

        if (PsuedoLocs.GAME_START.Pickup().NonEmpty) {
          Randomizer.InputUnlockCallback = () => {
            PsuedoLocs.GAME_START.Pickup().Grant();
            InterOp.magic_function();
            InterOp.save();
          };
        }

        InterOp.discover_everything();
        InterOp.bind_sword();
        InterOp.save();
        NeedsNewGameInit = false;
      }
    }

    public static bool SkipListenersNextUpdate = false;

    public static bool NeedsNewGameInit = false;

    public static List<UberState> DefaultUberStates = new List<UberState>() {
      new UberState() { Name = "fastTravelEnabledUberState", ID = 16489, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedByteUberState, Value = new UberValue((byte)1)},
      new UberState() { Name = "savePedestalSwampIntroTop", ID = 10185, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SavePedestalUberState, Value = new UberValue((byte)1)},
      new UberState() { Name = "builderProjectSpiritWell", ID = 16825, GroupName = "hubUberStateGroup", GroupID = 42178, Type = UberStateType.SerializedByteUberState, Value = new UberValue((byte)3) },
      new UberState() { Name = "torchHolded", ID = 47458, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
      new UberState() { Name = "eyesPlacedIntoStatue", ID = 1038, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SerializedByteUberState, Value = new UberValue((byte)3) },
      new UberState() { Name = "entranceStatueOpened", ID = 64003, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
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
      new UberState() { Name = "marshKeystoneQuest", ID = 51645, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
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
      new UberState() { Name = "cleanseWellspringQuestUberState", ID = 34641, GroupName = "kwolokGroupDescriptor",  GroupID = 937, Type = UberStateType.SerializedIntUberState, Value = new UberValue(4) },
      //new UberState() { Name = "findKuQuest", ID = 34504, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(4) },
      new UberState() { Name = "desertWispQuestUberState", ID = 35399, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
      new UberState() { Name = "lagoonWispQuestUberState", ID = 35087, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
      new UberState() { Name = "mouldwoodDepthsWispQuestUberState", ID = 45931, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
      new UberState() { Name = "winterForestWispQuestUberState", ID = 8973, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
      //new UberState() { Name = "marshKeystoneQuest", ID = 51645, GroupName = "npcsStateGroup",  GroupID = 48248, Type = UberStateType.SerializedIntUberState, Value = new UberValue(3) },
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
      //new UberState() { Name = "mouldwoodRumorState", ID = 53066, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "desertRumorState", ID = 57552, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "howlsOriginRumorState", ID = 40952, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "mouldwoodShrineRumorState", ID = 18061, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "silentWoodsShrineRumorState", ID = 27011, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "inkwaterShrineRumorState", ID = 23863, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "gardenerHutRumorState", ID = 30596, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "mapstoneRumorState", ID = 39957, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      //new UberState() { Name = "firstRaceRumorState", ID = 42501, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      new UberState() { Name = "rebuildGladesQuest", ID = 44578, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
      new UberState() { Name = "regrowGladesQuest", ID = 26394, GroupName = "questUberStateGroup",  GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
    };
  }
}
