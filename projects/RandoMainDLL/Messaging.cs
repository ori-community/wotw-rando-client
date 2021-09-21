using System;
using System.Text.RegularExpressions;
using System.Collections.Generic;
using System.IO;
using AutoHotkey.Interop;
using RandoMainDLL.Memory;
using System.Linq;

namespace RandoMainDLL {
  public static class Msg {
    public static readonly int BatchThreshold = 5;
    public static readonly int BatchSize = 5;

    public static PlainText Current = null;
    public static PlainText Last = new PlainText("*Good Luck! <3*");
    public static Queue<PlainText> MessageQueue = new Queue<PlainText>();
    public static int FramesTillNextSend = 0;
    public static string TextPrefix = String.Empty;

    public static void Init() {
      int maxLogLines = Randomizer.Dev ? 1000 : 500;
      var logLines = File.ReadAllLines(Randomizer.LogFile);
      if (logLines.Length > maxLogLines)
        File.WriteAllLines(Randomizer.LogFile, logLines.Skip(logLines.Length / 2));
    }

    public static void Clear() {
      MessageQueue.Clear();
    }

    public static void Reload() {
      FramesTillNextSend = 0;
    }

    public static void ShowLastPickup() {
      FramesTillNextSend = 1; // the only reason this isn't = 0 is that spamming this could get really annoying
      MessageQueue.Enqueue(Last);
    }

    public static void Tick() {
      if (FramesTillNextSend > 0)
        FramesTillNextSend--;
      else if (CanPrint) {
        try {
          if (MessageQueue.Count >= BatchThreshold) {
            var text = "";
            var mute = false;
            var frames = 0;
            var clear = false;
            for (var i = 0; i < BatchSize; ++i) {
              Current = MessageQueue.Peek();
              if (Current.CanBatch) {
                if (text != string.Empty)
                  text += "\n";

                text += Current.Text;
                mute |= Current.Mute;
                frames = Math.Max(frames, Current.Frames);
                clear |= Current.Clear;
                MessageQueue.Dequeue();
              }
              else
                break;
            }

            if (text != string.Empty)
              Current = new PlainText(text, frames, null, clear, false, mute);
            else
              MessageQueue.Dequeue();
          }
          else
            Current = MessageQueue.Dequeue();

          FramesTillNextSend = Current.Frames;
          if (Current.Clear)
            InterOp.clear_visible_hints();

          InterOp.display_hint(Current.Text, Current.Frames / 60f, Current.Pos, Current.Mute);
          if (AHK.IniFlag("LogOnPrint"))
            Randomizer.Log($"Sending {Current.Text} for {Current.Frames} ({MessageQueue.Count} remaining in queue)", false);
        }
        catch (Exception e) { Randomizer.Error("Msg.sendMsg", e, false); }
      }
      else
        Current = null;
    }

    public static bool CanPrint { get => MessageQueue.Count > 0 && InterOp.hints_ready(); }

    public static void OnNewGame() {
      Last = new PlainText("*Good Luck! <3*");
    }

    public static void Pickup(string message, int frames = 180, float? pos = null, bool clear = true, bool immediate = false, bool mute = false) {
      PlainText msg;
      if (SeedController.GrantingGoalModeLoc && pos == null) {
        msg = new PlainText(TextPrefix + message, frames, -2f, clear, immediate, mute);
        HintsController.ProgressWithHints();
      }
      else
        msg = new PlainText(TextPrefix + message, frames, pos, clear, immediate, mute);

      SendPlainText(msg);
      Last = msg;
      TextPrefix = String.Empty;
    }

    public static void Print(string message, int frames = 180, float pos = 3f, bool toMessageLog = true, bool clearPrior = true)
      => SendPlainText(new PlainText(message, frames, pos, clearPrior), toMessageLog);

    public static void SendPlainText(PlainText p, bool logMessage = true) {
      if (logMessage)
        File.AppendAllText(Randomizer.MessageLog, $"{Regex.Replace(p.Text, "[$#@*]", "")}\n");

      if (p.Immediate) {
        try {
          if (p.Clear)
            InterOp.clear_visible_hints();

          InterOp.display_hint(p.Text, p.Frames / 60f, p.Pos, p.Mute);
          if (AHK.IniFlag("LogOnPrint"))
            Randomizer.Log($"Sending {p.Text} for {p.Frames} (skipped queue)", false);
        }
        catch (Exception e) { Randomizer.Error("Msg.sendInstant", e, false); }
      }
      else {
        if (p.Pos == -2f) { // todo; maybe clean this up?
          InterOp.display_below(p.Text, p.Frames / 60f, p.Mute);
          return;
        }

        if (p.Clear)
          FramesTillNextSend /= 3;

        MessageQueue.Enqueue(p);
      }
    }

    public static void PrependToNextText(string text) {
      TextPrefix += text;
    }
  }

  public class PlainText {
    public static float DefaultPosition(string text) {
      var lines = text.Split(new string[] { "\n", Environment.NewLine }, StringSplitOptions.None).Length;
      return Math.Max((3.2f - .2f * lines), 0.2f);
    }

    public PlainText(string text, int frames = 180, float? pos = null, bool clear = true, bool immediate = false, bool mute = false) {
      Text = text;
      Frames = frames + (SeedController.GrantingGoalModeLoc ? 120 : 0);
      Pos = pos.HasValue ? pos.Value : DefaultPosition(text);
      Clear = clear;
      Immediate = immediate;
      Mute = mute;
    }

    public string Text { get; }
    public bool Clear { get; }
    public bool Immediate { get; }
    public bool Mute { get; }
    public int Frames { get; }
    public float Pos { get; }

    public bool CanBatch {
      get {
        return !Immediate;
      }
    }
  }

}
