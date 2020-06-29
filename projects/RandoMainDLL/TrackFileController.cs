using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Newtonsoft.Json;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public class TrackData {
    public int spiritLight;
    public int keystones;
    public int ore;
    public HashSet<String> skills;
    public HashSet<String> events;
    public HashSet<String> teleporters;
    public TrackData() {
      try {
        keystones = Randomizer.Memory.Keystones;
        spiritLight = Randomizer.Memory.Experience;
        ore = Randomizer.Memory.Ore;
        skills = SaveController.Data.SkillsFound.Select((AbilityType type) => SaveController.Data.OpherUpgraded.GetOrElse(type, 0) == 1 ? $"{type.GetDescription()}Upgraded" : type.GetDescription()).ToHashSet();
        events = SaveController.Data.WorldEvents.Select((QuestEventType type) => type.GetDescription()).ToHashSet();
        teleporters = Teleporter.TeleporterStates.Keys.Where((TeleporterType t) => (new Teleporter(t)).Has()).Select((TeleporterType t) => t.GetDescription()).ToHashSet();
      }
      catch (Exception e) {
        Randomizer.Error("TrackData()", e);
      }
    }
  }

    public static class TrackFileController {
    public static TrackData Last;
    public static int IgnoreUpdateFrames = 0;
    public static String trackFilePath = @"C:\moon\trackfile.json";
    public static void Update() {
      if (IgnoreUpdateFrames > 0) {
        IgnoreUpdateFrames--;
        return;
      }
      if (Last.ore != Randomizer.Memory.Ore || Last.spiritLight != Randomizer.Memory.Experience)
        Write();
    }
    public static void Write() {
      Last = new TrackData();
      if (File.Exists(trackFilePath))
        File.Delete(trackFilePath);
      using (var sw = new StreamWriter(trackFilePath))
        sw.Write(JsonConvert.SerializeObject(Last));
      IgnoreUpdateFrames = 5;
    }
  }
}
