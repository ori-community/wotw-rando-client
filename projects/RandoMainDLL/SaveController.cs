using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Newtonsoft.Json;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class SaveController {

    // extensions! C:
    public static UberId State(this QuestEventType at) => new UberId(6, 2000 + (int)at);
    public static bool Have(this QuestEventType at) => UberGet.value(at.State()).Bool;

    public static UberId State(this AbilityType at) => new UberId(6, 1000 + (int)at);
    public static bool Have(this AbilityType at) => UberGet.value(at.State()).Bool;
    public static UberId TreeState(this AbilityType at) => new UberId(0, (int)at);
    public static bool HaveTree(this AbilityType at) => UberGet.value(at.TreeState()).Bool;
    public static UberId BoughtState(this AbilityType at) => new UberId(1, (int)at);
    public static bool Bought(this AbilityType at) => UberGet.value(at.BoughtState()).Bool;
    public static UberId UpgradedState(this AbilityType at) => new UberId(1, 1000 + (int)at);
    public static bool Upgraded(this AbilityType at) => UberGet.value(at.UpgradedState()).Bool;

    public static UberId BoughtState(this ShardType st) => new UberId(2, (int)st);
    public static bool Bought(this ShardType st) => UberGet.value(st.BoughtState()).Bool;

    public static List<AbilityType> UpgradeableATs = new List<AbilityType>() { AbilityType.Sentry, AbilityType.SpiritSmash, AbilityType.SpiritStar, AbilityType.Spike, AbilityType.Blaze, };

    public static List<AbilityType> UpgradedWeapons { get => UpgradeableATs.Where(at => at.Upgraded()).ToList(); }

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
    public static void FoundItem() {
      FoundCount++;
      MapController.UpdateReachable();
    }
    public static int KSBought { get => UberGet.value(6, 1).Int; set => UberSet.Int(6, 1, value); }
    public static int FoundCount { get => UberGet.value(6, 2).Int; set => UberSet.Int(6, 2, value); }
    public static bool HasAbility(AbilityType ability) => ability.Have();
    public static void SetAbility(AbilityType ability, bool setTo = true) {
      UberSet.Bool(ability.State(), setTo);      
      InterOp.set_ability(ability, setTo);
      if (ability.Equip().HasValue)
        InterOp.set_equipment(ability.Equip().Value, setTo);

      BonusItemController.Refresh();
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
          if (Randomizer.InputUnlockCallback != null) {
            AHK.Print("Warning: Callback overwritten on slot change!", 240);
            Randomizer.InputUnlockCallback = null;
          }
          // slot swap
          CurrentSlot = slot;
        }
        UberStateController.SkipListeners = true;
        UberStateController.UberStates.Clear();
        UberStateController.TickingUberStates.Clear();
        if (DidWeJustDie) {
          UberStateDefaults.cleanseWellspringQuestUberState.GetUberId().Refresh();
          UberStateDefaults.finishedWatermillEscape.GetUberId().Refresh();
          UberStateDefaults.watermillEscapeState.GetUberId().Refresh();
        }
        BonusItemController.Refresh();
        MapController.UpdateReachable();
      }
      catch (Exception e) { Randomizer.Error("SaveCont.OnLoad", e); }
    }
    private static bool DidWeJustDie = false;

    public static void OnSave(int slot, int backupSlot = -1) {
      if (InterOp.get_health() == 0) {
        DidWeJustDie = true;
        return; // the game saves right when you die, but we don't want to save progress when that happens.
      }
      if (slot == -1) {
        Randomizer.Log("Error: tried to save to empty slot");
        return;
      }
      if (slot != CurrentSlot) {
        // this is a slot swap and not a save
        CurrentSlot = slot;
        if (Randomizer.InputUnlockCallback != null) {
          AHK.Print("Warning: Callback overwritten on slot change!", 240);
          Randomizer.InputUnlockCallback = null;
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
