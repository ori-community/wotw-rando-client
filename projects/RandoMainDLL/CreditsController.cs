using System;
using System.Collections.Generic;
using System.IO;

namespace RandoMainDLL {
  static class CreditsController {

    public static readonly string CreditsFile = "credits";
    public static readonly int CreditsBaseID = 10000;

    // TODO: Load this from a file and provide wheel item to reload it in debug mode.
    private static List<Entry> creditsEntries = new List<Entry>();
    private static List<Entry> activeEntries = new List<Entry>();
    private static int currentIndex = 0;

    private static bool startedDebug = false;

    private static void Reset() {
      foreach (var entry in activeEntries)
        entry.Reset();

      activeEntries.Clear();
      currentIndex = 0;
      if (startedDebug)
        InterOp.Messaging.text_box_destroy(CreditsBaseID);

      startedDebug = false;
    }

    private static void Update(float time) {
      while (creditsEntries.Count > currentIndex && creditsEntries[currentIndex].ShouldResolve(time)) {
        activeEntries.Add(creditsEntries[currentIndex]);
        ++currentIndex;
      }

      for (var i = 0; i < activeEntries.Count; ++i)
        if (activeEntries[i].Resolve(time))
          activeEntries.RemoveAt(i--);

      if (Randomizer.Dev) {
        if (!startedDebug) {
          InterOp.Messaging.text_box_create(CreditsBaseID, 0.5f, 0.5f, false, false);
          InterOp.Messaging.text_box_text(CreditsBaseID, $"Credits progress: {time}");
          InterOp.Messaging.text_box_position(CreditsBaseID, 0.0f, 3.5f);
          startedDebug = true;
        }
        else {
          InterOp.Messaging.text_box_text(CreditsBaseID, $"Credits progress: {time}");
        }
      }
    }

    public static void CreditsProgress(float time) {
      if (time < 0.0f)
        Reset();
      else
        Update(time);
    }

    public static void ReloadFile() {
      if (currentIndex != 0) {
        Randomizer.Warn("CreditsController", "Can't reload while running");
        return;
      }

      creditsEntries.Clear();
      if (File.Exists(Randomizer.BasePath + CreditsFile)) {
        foreach (string line in File.ReadLines(Randomizer.BasePath + CreditsFile)) {
          var comment = line.IndexOf("//");
          var uncommented_line = comment < 0 ? line.Trim() : line.Substring(0, comment).Trim();
          if (uncommented_line.Length != 0) {
            var parts = uncommented_line.Split('|');
            var type = parts[0].ParseToInt("CreditsController.Type");
            switch (type) {
              case 1: {
                  if (parts.Length < 7 || parts.Length > 9) {
                    Randomizer.Warn("CreditsController", $"malformed text entry: {uncommented_line}");
                    break;
                  }

                  var startTime = parts[1].ParseToFloat("CreditsController.StartTime");
                  var length = parts[2].ParseToFloat("CreditsController.Length");
                  var id = parts[3].ParseToInt("CreditsController.ID");
                  var x = parts[4].ParseToFloat("CreditsController.X");
                  var y = parts[5].ParseToFloat("CreditsController.Y");
                  var fadeIn = 0.5f;
                  if (parts.Length > 7)
                    fadeIn = parts[7].ParseToFloat("CreditsController.FadeIn");
                  var fadeOut = 0.5f;
                  if (parts.Length > 8)
                    fadeOut = parts[8].ParseToFloat("CreditsController.FadeOut");

                  creditsEntries.Add(
                    new TextEntry(
                      startTime,
                      length,
                      id,
                      x,
                      y,
                      parts[6],
                      fadeIn,
                      fadeOut
                    )
                  );
                  break;
                }
              case 2: {
                  if (parts.Length != 8) {
                    Randomizer.Warn("CreditsController", $"malformed text entry: {uncommented_line}");
                    break;
                  }

                  var startTime = parts[1].ParseToFloat("CreditsController.StartTime");
                  var length = parts[2].ParseToFloat("CreditsController.Length");
                  var id = parts[3].ParseToInt("CreditsController.ID");
                  var startX = parts[4].ParseToFloat("CreditsController.StartX");
                  var startY = parts[5].ParseToFloat("CreditsController.StartY");
                  var endX = parts[6].ParseToFloat("CreditsController.EndX");
                  var endY = parts[7].ParseToFloat("CreditsController.EndY");
                  creditsEntries.Add(
                    new MoveEntry(
                      startTime,
                      length,
                      id,
                      startX,
                      startY,
                      endX,
                      endY
                    )
                  );
                  break;
                }
              default:
                Randomizer.Warn("CreditsController", "Ignoring invalid type");
                break;
            }
          }
        }
      }

      creditsEntries.Sort((a, b) => (int)(a.Time - b.Time));
    }

    private abstract class Entry {
      public readonly float Time;
      public readonly float Timeout;
      protected Entry(float time, float timeout) {
        Time = time;
        Timeout = timeout;
      }

      public bool ShouldResolve(float t) {
        return t >= Time;
      }

      public virtual bool Resolve(float time) {
        var finished = time >= Time + Timeout;
        if (finished)
          Reset();

        return finished;
      }

      public abstract void Reset();
    }

    private class TextEntry : Entry {
      public TextEntry(float time, float timeout, int id, float x, float y, string text, float fadeIn = 0.5f, float fadeOut = 0.5f)
        : base(time, timeout)
      {
        this.id = CreditsBaseID + id;
        this.x = x;
        this.y = y;
        this.text = text;
        this.fadeIn = fadeIn;
        this.fadeOut = fadeOut;
      }

      private readonly int id;
      private readonly float x;
      private readonly float y;
      private readonly string text;
      private readonly float fadeIn;
      private readonly float fadeOut;

      private bool started = false;
      public override bool Resolve(float time) {
        if (!started) {
          InterOp.Messaging.text_box_create(id, fadeIn, fadeOut, false, false);
          InterOp.Messaging.text_box_text(id, text);
          InterOp.Messaging.text_box_position(id, x, y);
          started = true;
        }

        return base.Resolve(time);
      }

      public override void Reset() {
        InterOp.Messaging.text_box_destroy(id);
        started = false;
      }
    }

    private class MoveEntry : Entry {
      public MoveEntry(float time, float timeout, int id, float x1, float y1, float x2, float y2) : base(time, timeout) {
        this.id = CreditsBaseID + id;
        this.x1 = x1;
        this.y1 = y1;
        this.x2 = x2;
        this.y2 = y2;
      }

      public readonly int id;
      public readonly float x1;
      public readonly float y1;
      public readonly float x2;
      public readonly float y2;

      private float Lerp(float a, float b, float weight) {
        return a * (1 - weight) + b * weight;
      }

      public override bool Resolve(float time) {
        var finished = base.Resolve(time);
        var weight = finished ? 1.0f : Math.Min((time - Time) / Timeout, 1.0f);
        var x = Lerp(x1, x2, weight);
        var y = Lerp(y1, y2, weight);
        InterOp.Messaging.text_box_position(id, x, y);
        return finished;
      }

      public override void Reset() {}
    }
  }
}
