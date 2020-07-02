using System;
using System.Collections.Generic;
using System.IO;
using Newtonsoft.Json;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public static class SaveController {
    public class SaveData {
      public SaveData(int slot) {
        Slot = slot;
      }

      [JsonConstructor]
      public SaveData(int slot, HashSet<AbilityType> trees, HashSet<AbilityType> opherSell, Dictionary<AbilityType, int> opherUpgrade, 
        HashSet<ShardType> shardSlots, HashSet<QuestEventType> worldEvents, HashSet<AbilityType> skillsFound, int count = 0, int ksBought = 0) {
        Slot = slot;
        TreesActivated = trees;
        OpherSold = opherSell;
        OpherUpgraded = opherUpgrade;
        TwillenSold = shardSlots;
        SkillsFound = skillsFound;
        WorldEvents = worldEvents;
        FoundCount = count;
        KSBought = ksBought;
      }

      public int Slot;
      public HashSet<AbilityType> TreesActivated = new HashSet<AbilityType>();
      public HashSet<AbilityType> OpherSold = new HashSet<AbilityType>();
      public Dictionary<AbilityType, int> OpherUpgraded = new Dictionary<AbilityType, int>();
      public HashSet<ShardType> TwillenSold = new HashSet<ShardType>();
      public HashSet<QuestEventType> WorldEvents = new HashSet<QuestEventType>();
      public HashSet<AbilityType> SkillsFound = new HashSet<AbilityType>();
      public int FoundCount = 0;
      public int KSBought = 0;

      [JsonIgnore]
      public string Filename => $"{Randomizer.SaveFolder}\\randosave_{Slot}.json";
      public string fullName(int backup) => Filename + (backup != -1 ? $".{backup}.bak" : "");
      public override string ToString() => $"slot: {Slot}\npickups: {FoundCount}\nks: {KSBought}\nTreesActivated: {TreesActivated}\nOpherSold: {OpherSold}\nOpherUpgraded: {OpherUpgraded}\nTwillenSold: {TwillenSold}\nWorldEvents: {WorldEvents}\nSkills: {SkillsFound}";
      public void Save(int backup = -1) {
        string targetFile = fullName(backup);
        if (File.Exists(targetFile)) 
          File.Delete(targetFile);
        
        using (var sw = new StreamWriter(targetFile))
          using (JsonWriter writer = new JsonTextWriter(sw)) {
            var serializer = new JsonSerializer();
            serializer.Serialize(writer, this);
          }
        TrackFileController.Write();
      }
      public void Load(int backup = -1) {
        string targetFile = fullName(backup);
        var copyFrom = new SaveData(-1);
        if (File.Exists(targetFile)) {
          using (var sr = new StreamReader(targetFile))
          using (JsonReader reader = new JsonTextReader(sr)) {
            var serializer = new JsonSerializer { DefaultValueHandling = DefaultValueHandling.Populate };
            copyFrom = serializer.Deserialize<SaveData>(reader);
          }
        }
        TreesActivated = new HashSet<AbilityType>(copyFrom.TreesActivated);
        OpherSold = new HashSet<AbilityType>(copyFrom.OpherSold);
        OpherUpgraded = new Dictionary<AbilityType, int>(copyFrom.OpherUpgraded);
        TwillenSold = new HashSet<ShardType>(copyFrom.TwillenSold);
        WorldEvents = new HashSet<QuestEventType>(copyFrom.WorldEvents);
        SkillsFound = new HashSet<AbilityType>(copyFrom?.SkillsFound ?? new HashSet<AbilityType>());
        FoundCount = copyFrom.FoundCount;
        KSBought = copyFrom.KSBought;
        TrackFileController.Write();
      }
    }
    public static bool HasAbility(AbilityType ability) => Data?.SkillsFound?.Contains(ability) ?? false;
    public static void SetAbility(AbilityType ability, bool setTo = true) {
      if (setTo)
        Data.SkillsFound.Add(ability);
      else
        Data.SkillsFound.Remove(ability);
      
      InterOp.set_ability(ability, setTo);
      if (ability.Equip().HasValue)
        InterOp.set_equipment(ability.Equip().Value, setTo);

      TrackFileController.Write();
    }
    public static void SetEvent(QuestEventType ev, bool setTo = true) {
      if (setTo)
        Data.WorldEvents.Add(ev);
      else
        Data.WorldEvents.Remove(ev);
      TrackFileController.Write();
    }

    public static SaveData Data;
    public static int CurrentSlot = -1;

    public static void NewGame(int slot) {
      CurrentSlot = slot;
      Data = new SaveData(slot);
      Data.Save();
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
          Data = new SaveData(slot);
        }
        UberStateController.SkipListenersNextUpdate = true;
        Data.Load(backupSlot);
        if (DidWeJustDie)
          InterOp.magic_function();
      }
      catch (Exception e) { Randomizer.Error("SaveCont.OnLoad", e); }
    }
    private static bool DidWeJustDie = false;

    public static void OnSave(int slot, int backupSlot = -1) {
      if (Randomizer.Memory.PlayerStats.Health == 0) {
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
        Data = new SaveData(slot);
        Data.Load(backupSlot);
        if (Randomizer.InputUnlockCallback != null) {
          AHK.Print("Warning: Callback overwritten on slot change!", 240);
          Randomizer.InputUnlockCallback = null;
        }
        return;
      }
      Data.Save(backupSlot);
    }
  }
}
