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
        TreesActivated = new HashSet<AbilityType>();
        OpherSold = new HashSet<AbilityType>();
        OpherUpgraded = new Dictionary<AbilityType, int>();
        TwillenSold = new HashSet<ShardType>();
      }

      [JsonConstructor]
      public SaveData(int slot, HashSet<AbilityType> trees, HashSet<AbilityType> opherSell, Dictionary<AbilityType, int> opherUpgrade, HashSet<ShardType> shardSlots) {
        Slot = slot;
        TreesActivated = trees;
        OpherSold = opherSell;
        OpherUpgraded = opherUpgrade;
        TwillenSold = shardSlots;
      }

      public int Slot;
      public HashSet<AbilityType> TreesActivated;
      public HashSet<AbilityType> OpherSold;
      public Dictionary<AbilityType, int> OpherUpgraded;
      public HashSet<ShardType> TwillenSold;

      [JsonIgnore]
      public string Filename => $"{Randomizer.SaveFolder}\\randosave_{Slot}.json";

      public void Save() {
        if (File.Exists(Filename)) {
          File.Delete(Filename);
        }

        using (var sw = new StreamWriter(Filename))
        using (JsonWriter writer = new JsonTextWriter(sw)) {
          var serializer = new JsonSerializer();
          serializer.Serialize(writer, this);
        }
      }

      public void Load() {
        var copyFrom = new SaveData(-1);
        if (File.Exists(Filename)) {
          using (var sr = new StreamReader(Filename))
          using (JsonReader reader = new JsonTextReader(sr)) {
            var serializer = new JsonSerializer();
            copyFrom = serializer.Deserialize<SaveData>(reader);
          }
        }
        TreesActivated = new HashSet<AbilityType>(copyFrom.TreesActivated);
        OpherSold = new HashSet<AbilityType>(copyFrom.OpherSold);
        OpherUpgraded = new Dictionary<AbilityType, int>(copyFrom.OpherUpgraded);
        TwillenSold = new HashSet<ShardType>(copyFrom.TwillenSold);
      }
    }

    public static SaveData Data;
    public static int CurrentSlot = -1;

    [DllExport]
    public static void NewGame(int slot) {
      // overwrite the message log TODO: save a backup maybe?
      File.WriteAllText(Randomizer.MessageLog, "");
      SeedController.ReadSeed();
      UberStateController.NeedsNewGameInit = true;
      CurrentSlot = slot;
      Data = new SaveData(slot);
      Data.Save();
    }

    [DllExport]
    public static void OnLoad(int slot) {
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
        Data.Load();
      }
      catch (Exception e) { Randomizer.Error("SaveCont.OnLoad", e); }
    }

    [DllExport]
    public static void OnSave(int slot) {
      if (slot == -1) {
        Randomizer.Log("Error: tried to load from empty slot");
        return;
      }
      if (slot != CurrentSlot) {
        // this is a slot swap and not a save
        CurrentSlot = slot;
        Data = new SaveData(slot);
        Data.Load();
        if (Randomizer.InputUnlockCallback != null) {
          AHK.Print("Warning: Callback overwritten on slot change!", 240);
          Randomizer.InputUnlockCallback = null;
        }
        return;
      }
      Data.Save();
    }
  }
}
