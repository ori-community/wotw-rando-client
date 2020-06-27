using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Newtonsoft.Json;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public class TrackData {
    public int spiritLight;
    public HashSet<String> skills;
    public HashSet<String> events;
    public TrackData() {
      spiritLight = Randomizer.Memory.Experience;
      skills = SaveController.Data.SkillsFound.Select((AbilityType type) => type.GetDescription()).ToHashSet();
      events = SaveController.Data.WorldEvents.Select((QuestEventType type) => type.GetDescription()).ToHashSet();
    }

  }


    public static class TrackFileController {
    public static String trackFilePath = @"C:\moon\trackfile.json";
    public static void Write() {
      if (File.Exists(trackFilePath))
        File.Delete(trackFilePath);
      Randomizer.Log($"{(new TrackData()).skills}");
      using (var sw = new StreamWriter(trackFilePath))
        sw.Write(JsonConvert.SerializeObject(new TrackData()));
    }
  }
}
