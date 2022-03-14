using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using Newtonsoft.Json;
using RandoMainDLL.Memory;
using RandoMainDLL.Wheel;

namespace RandoMainDLL {
  public static class SaveController {

    // extensions! C:
    public static UberId State(this QuestEventType at) => new UberId(6, 2000 + (int)at);
    public static bool Have(this QuestEventType at) => UberGet.Bool(at.State());

    public static UberId State(this AbilityType at) => new UberId(6, 1000 + (int)at);
    public static bool Have(this AbilityType at) => UberGet.Bool(at.State());
    public static UberId TreeState(this AbilityType at) => new UberId(0, (int)at);
    public static bool HaveTree(this AbilityType at) => UberGet.Bool(at.TreeState());
    public static UberId BoughtState(this ShardType st) => new UberId(2, (int)st);
    public static bool Bought(this ShardType st) => UberGet.Bool(st.BoughtState());

    public static List<AbilityType> SkillsFound { get => ((AbilityType[])Enum.GetValues(typeof(AbilityType))).Where(at => at != AbilityType.NONE && at != AbilityType.TeleportSpell && at.Have()).ToList(); }
    public static List<QuestEventType> WorldEvents { get => ((QuestEventType[])Enum.GetValues(typeof(QuestEventType))).Where(at => at.Have()).ToList(); }

    public static List<AbilityType> TreeAbilities = new List<AbilityType>() {
                     AbilityType.SpiritEdge,
                     AbilityType.DoubleJump,
                     AbilityType.Regenerate,
                     AbilityType.SpiritArc,
                     AbilityType.Dash,
                     AbilityType.Bash,
                     AbilityType.Grapple,
                     AbilityType.WaterDash,
                     AbilityType.Flash,
                     AbilityType.LightBurst,
                     AbilityType.Burrow,
                     AbilityType.Launch,
                     AbilityType.DamageUpgrade1,
                     AbilityType.DamageUpgrade2,
    };
    public static int TreeCount { get => TreeAbilities.Count(at => at.HaveTree()); }
    public static int KSBought { get => UberGet.Int(6, 1); set => UberSet.Int(6, 1, value); }
    public static int FoundCount { get => UberGet.Int(6, 2); set => UberSet.Int(6, 2, value); }
    public static bool HasAbility(AbilityType ability) => ability.Have();
    public static void SetAbility(AbilityType ability, bool setTo = true) {
      UberSet.Bool(ability.State(), setTo);
      TrackFileController.Write();
    }
    public static void SetEvent(QuestEventType ev, bool setTo = true) {
      UberSet.Bool(ev.State(), setTo);
      TrackFileController.Write();
    }

    public static int CurrentSlot = -1;

    public static void NewGame(int slot) {
      CurrentSlot = slot;
    }

    public static void OnLoad(int slot, int backupSlot = -1) {
      try {
        if (slot != CurrentSlot) {
          if (Randomizer.InputUnlockCallback.Count != 0) {
            MessageController.ShowSingleMessage("Warning: Callback overwritten on slot change!", time: 4f, list: ListType.Debug, log: true);
            Randomizer.InputUnlockCallback.Clear();
          }
          // slot swap
          CurrentSlot = slot;
        }

        UberStateController.SkipListeners = true;
        UberStateController.UberStates.Clear();
        UberStateController.TimerUberStates.Clear();
        StatsTracking.OnLoad(DidWeJustDie);
        if (DidWeJustDie) {
          MessageController.Clear();
          UberStateDefaults.cleanseWellspringQuestUberState.GetUberId().Refresh();
          UberStateDefaults.finishedWatermillEscape.GetUberId().Refresh();
          UberStateDefaults.watermillEscapeState.GetUberId().Refresh();
          UberStateController.QueueSyncedStateUpdate();
          DidWeJustDie = false;
        } else {
          ShopSlot.ResetSlotData();
          WheelManager.ResetWheels();
          PsuedoLocs.LOAD_SEED.Pickup().Grant();
        }
        BonusItemController.Refresh();
        MapController.UpdateReachable();
      }
      catch (Exception e) { Randomizer.Error("SaveCont.OnLoad", e); }
    }
    private static bool DidWeJustDie = false;
    public static void OnSave(int slot, int backupSlot = -1) {
      DidWeJustDie = InterOp.get_health() == 0;
      StatsTracking.OnSave(DidWeJustDie);
      if (DidWeJustDie) return;

      if (slot == -1) {
        Randomizer.Log("Error: tried to save to empty slot");
        return;
      }
      if (slot != CurrentSlot) {
        // this is a slot swap and not a save
        CurrentSlot = slot;
        if (Randomizer.InputUnlockCallback.Count != 0) {
          MessageController.ShowSingleMessage($"Warning: Callback overwritten on slot change!", time: 4f, list: ListType.Debug, log: true);
          Randomizer.InputUnlockCallback.Clear();
        }
        return;
      }
    }

    public static void OnCopy(int fromSlot, int toSlot) {
    }

    public static void OnDelete(int slot) {
    }
  }
}
