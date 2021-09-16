﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Net;
using Newtonsoft.Json;
using RandoMainDLL.Memory;

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
      MapController.InitLupoPrices();
    }

    public static void OnLoad(int slot, int backupSlot = -1) {
      try {
        if (slot != CurrentSlot) {
          if (Randomizer.InputUnlockCallback.Count != 0) {
            AHK.Print("Warning: Callback overwritten on slot change!", 240);
            Randomizer.InputUnlockCallback.Clear();
          }
          // slot swap
          CurrentSlot = slot;
        }

        MapController.InitLupoPrices();
        UberStateController.SkipListeners = true;
        UberStateController.UberStates.Clear();
        UberStateController.TickingUberStates.Clear();
        if (DidWeJustDie) {
          UberStateDefaults.cleanseWellspringQuestUberState.GetUberId().Refresh();
          UberStateDefaults.finishedWatermillEscape.GetUberId().Refresh();
          UberStateDefaults.watermillEscapeState.GetUberId().Refresh();
          UberStateController.QueueSyncedStateUpdate();
        } else {
          InterOpWeaponWheel.clear_wheels();
          InterOpWeaponWheel.initialize_default_wheel();
          PsuedoLocs.LOAD_SEED.Pickup().Grant();
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
        if (Randomizer.InputUnlockCallback.Count != 0) {
          AHK.Print("Warning: Callback overwritten on slot change!", 240);
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
