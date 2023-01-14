using System;
using System.Collections;
using System.Collections.Generic;
using System.Collections.Specialized;
using System.ComponentModel;
using System.Globalization;
using System.IO;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text.RegularExpressions;
using Newtonsoft.Json;
using RandomizerManaged.Memory;

namespace RandomizerManaged {
  public static class Flag {
    public const string ALL_WISPS = "All Wisps";
    public const string ALL_TREES = "All Trees";
    public const string ALL_QUESTS = "All Quests";
    public const string RELICS = "Relics";
  }

public static string GoalModeMessages(string met = "$", string unmet = "", bool progress = false,
  bool withRelics = true) {
  if (InterOp.Utils.get_game_state() != GameState.Game)
    return ""; // don't even try!
  var goalMsgs = new List<String>();
  if (Flags.Contains(Flag.ALL_WISPS)) {
    var max = UberStateController.Wisps.Count;
    var amount = UberStateController.Wisps.Count((UberState s) => s.GetValue().Bool);
    var w = amount == max ? met : unmet;
    goalMsgs.Add($"{w}Wisps: {amount}/{max}{w}");
  }

  if (Flags.Contains(Flag.ALL_TREES)) {
    var amount = SaveController.TreeCount;
    var w = amount == 14 ? met : unmet;
    goalMsgs.Add($"{w}Trees: {amount}/{14}{w}");
  }

  if (Flags.Contains(Flag.ALL_QUESTS)) {
    var max = UberStateController.Quests.Count;
    var amount = UberStateController.Quests.Count((UberState s) => s.GetValue().Int == s.Value.Int);
    var w = amount == max ? met : unmet;
    goalMsgs.Add($"{w}Quests: {amount}/{max}{w}");
  }

  var msg = String.Join(", ", goalMsgs);
  if (withRelics && Flags.Contains(Flag.RELICS))
    msg += "\n" + Relic.RelicMessage();
  return goalMsgs.Count > 0 ? (progress ? "\n" : "") + msg : msg;
}

public static void UpdateGoal() {
  bool finished = true;
  if (Flags.Contains(Flag.ALL_TREES)) {
    finished = finished && SaveController.TreeCount == 14;
  }

  if (finished && Flags.Contains(Flag.ALL_WISPS)) {
    foreach (var uber_state in UberStateController.Wisps) {
      finished = finished && uber_state.GetValue().Bool;
      if (!finished)
        break;
    }
  }

  if (finished && Flags.Contains(Flag.ALL_QUESTS)) {
    foreach (var uber_state in UberStateController.Quests) {
      finished = finished && uber_state.GetValue().Int == uber_state.Value.Int;
      if (!finished)
        break;
    }
  }

  finished = finished && Relic.Valid;
  if (finished != UberGet.value(3, 11).Bool) {
    UberSet.Bool(3, 11, finished);
  }
}
}
