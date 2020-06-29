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
    public HashSet<String> skills;
    public HashSet<String> events;
    public HashSet<String> teleporters;
    public TrackData() {
      keystones = Randomizer.Memory.Keystones;

      spiritLight = Randomizer.Memory.Experience;
      skills = SaveController.Data.SkillsFound.Select((AbilityType type) => SaveController.Data.OpherUpgraded.GetOrElse(type, 0) == 1 ? $"{type.GetDescription()}Upgraded" : type.GetDescription()).ToHashSet();
      events = SaveController.Data.WorldEvents.Select((QuestEventType type) => type.GetDescription()).ToHashSet();
      teleporters = Teleporter.TeleporterStates.Keys.Where((TeleporterType t) => (new Teleporter(t)).Has()).Select((TeleporterType t) => t.GetDescription()).ToHashSet();
    }
  }

    public static class TrackFileController {
    public static String trackFilePath = @"C:\moon\trackfile.json";
    public static void Write() {
      if (File.Exists(trackFilePath))
        File.Delete(trackFilePath);
      using (var sw = new StreamWriter(trackFilePath))
        sw.Write(JsonConvert.SerializeObject(new TrackData()));
    }
  }
}
