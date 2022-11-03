using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Newtonsoft.Json;
using RandomizerManaged.Memory;

namespace RandomizerManaged {
  public class TrackData {
    public int spiritLight;
    public int keystones;
    public int ore;
    public HashSet<String> skills;
    public HashSet<String> upgraded;
    public HashSet<String> events;
    public HashSet<String> teleporters;
    public HashSet<String> quests;
    public HashSet<String> flags;

    String trackName(AbilityType type) => ((byte)type > 119 && (byte)type < 122) ? "DamageUp" : type.GetDescription()?.Replace(" ", "") ?? $"{type}";
    public TrackData() {
      if(TrackFileController.DontTrackYet) {
        keystones = 0;
        spiritLight = 0;
        ore = 0;
        skills = new HashSet<String>();
        upgraded = new HashSet<String>();
        events = new HashSet<String>();
        teleporters = new HashSet<String>();
      }
      try {
        keystones = InterOp.Player.get_keystones();
        spiritLight = InterOp.Player.get_experience();
        ore = InterOp.Player.get_ore();
        skills = SaveController.SkillsFound.Select((AbilityType type) => trackName(type)).ToHashSet();
        upgraded = ShopController.UpgradedWeapons.Select((AbilityType type) => $"{type.GetDescription().Replace(" ", "")}").ToHashSet();
        if (SaveController.HasAbility(AbilityType.DamageUpgrade1) && SaveController.HasAbility(AbilityType.DamageUpgrade2))
          upgraded.Add(trackName(AbilityType.DamageUpgrade1));
        events = SaveController.WorldEvents.Select((QuestEventType type) => type.GetDescription()).ToHashSet();
        quests = UberStateController.Quests.Where((UberState s) => s.GetValue().Int == s.Value.Int).Select(s => s.Name).ToHashSet();
        teleporters = Teleporter.TeleporterStates.Keys.Where((TeleporterType t) => (new Teleporter(t)).Has()).Select((TeleporterType t) => t.GetDescription()).ToHashSet();
        flags = SeedController.Flags;
      }
      catch (Exception e) {
        Randomizer.Error("TrackData()", e);
      }
    }
  }

    public static class TrackFileController {
    public static bool DontTrackYet = true;
    public static TrackData Last;
    public static int IgnoreUpdateFrames = 0;
    public static string trackFilePath { get { return Randomizer.BasePath + "trackfile.json"; } }
    public static void FixedUpdate() {
      if (InterOp.Utils.get_game_state() == GameState.Game)
        DontTrackYet = false;
      if (IgnoreUpdateFrames > 0) {
        IgnoreUpdateFrames--;
        return;
      }
      try {
        if (Last == null
          || Last.ore != InterOp.Player.get_ore()
          || Last.spiritLight != InterOp.Player.get_experience()
          || Last.keystones != InterOp.Player.get_keystones())
          Write();
      } catch (Exception e) {
        Randomizer.Error("Track.Update", e);
        Randomizer.Log($"Last: {Last}", false);
      }
    }
    public static void Write() {
      try {
        Last = new TrackData();
        if (File.Exists(trackFilePath))
          File.Delete(trackFilePath);
        using (var sw = new StreamWriter(trackFilePath))
          sw.Write(JsonConvert.SerializeObject(Last));
        IgnoreUpdateFrames = 5;
      } catch (IOException) {
        // that's fine
      } catch (Exception e) {
        Randomizer.Error("TrackFile.Write: ", e); // less fine!
      }
    }
  }
}
