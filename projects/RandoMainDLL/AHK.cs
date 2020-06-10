using System;
using System.Collections.Generic;
using System.IO;
using AutoHotkey.Interop;

namespace RandoMainDLL {
  public static class AHK {
    private static readonly string Program = @"
      signal := ""none""
      DoIniRead(Section, Key, iniPath := ""C:/moon/settings.ini"")
      {
        IniRead, out, %iniPath%, %Section%, %Key%
        return out
      }
      Tick() 
      {
        global signal
        return signal
      }
      return	

      !/::signal := ""exitapp""
      #IfWinActive, OriAndTheWilloftheWisps
      !j::signal := ""dev""
      !l::signal := ""reload""
      !t::signal := ""lastPickup""
      !p::signal := ""hintMessage""
      !^d::signal := ""toggleDebug""
      !^1::signal := ""test1""
      !^2::signal := ""test2""
      !^3::signal := ""test3""
      !^4::signal := ""test4""
      !^5::signal := ""test5""
      ";
    public static AutoHotkeyEngine Engine = AutoHotkeyEngine.Instance;
    public static bool Ready = false;

    public static void Init() {
      Engine.ExecRaw(Program);
      if (File.Exists("C:\\moon\\rando_binds.ahk")) {
        Engine.LoadFile("C:\\moon\\rando_binds.ahk");
      }

      Ready = true;
      if (IniFlag("dev")) {
        Randomizer.Dev = true;
      }
    }

    private static readonly HashSet<string> Falsey = new HashSet<string>() { "false", "False", "no", "", "0", "ERROR", null };

    public static bool IniFlag(string Flag) {
      if (!Ready) {
        return false;
      }

      return !Falsey.Contains(Engine.ExecFunction("DoIniRead", "Flags", Flag));
    }

    public static void Tick() {
      var signal = Engine.ExecFunction("Tick");
      if (signal != null && signal != "none") {
        Engine.SetVar("signal", "none");
        switch (signal) {
          case "reload":
            if (FramesTillUnlockReload == 0) {
              FramesTillNextSend = 0;
              SeedController.ReadSeed();
              Randomizer.Memory.OnInit();
              FramesTillUnlockReload = 60;
            }
            break;
          case "lastPickup":
            FramesTillNextSend = 1; // the only reason this isn't = 0 is that spamming this could cause major issues
            MessageQueue.Enqueue(Last);
            break;
          case "hintMessage":
            HintsController.ShowHintMessage();
            break;
          case "dev":
            Randomizer.Dev = !Randomizer.Dev;
            Randomizer.Log($"Dev: {Randomizer.Dev}");
            break;
          case "exitapp":
            Environment.Exit(Environment.ExitCode);
            break;
          case "toggleDebug":
            Randomizer.Memory.Debug = !Randomizer.Memory.Debug;
            Print($"Debug {(Randomizer.Memory.Debug ? "enabled" : "disabled")}");
            break;
          case "test1":
            Print("Test1 (magic)", 180, false);
            InterOp.magic_function();
            break;
          case "test2":
            break;
          case "test3":
            break;
          case "test4":
            break;
          case "test5":
            break;

          default:
            Randomizer.Log($"Recieved unknown signal {signal}");
            break;
        }
      }
      FramesTillUnlockReload = Math.Max(0, FramesTillUnlockReload - 1);
      if (FramesTillNextSend > 0) {
        FramesTillNextSend--;
      }
      else {
        if (CanPrint) {
          Current = MessageQueue.Peek();
          FramesTillNextSend = Current.Frames;
          try {
            InterOp.clear_visible_hints();
            InterOp.display_hint(InterOp.Util.getIl2cppStringPointer(Current.Text), Current.Frames / 60f);
            if (IniFlag("LogOnPrint")) {
              Randomizer.Log($"Sending {Current.Text} for {Current.Frames} ({MessageQueue.Count} remaining in queue)", false);
            }
            MessageQueue.Dequeue();
          } catch (Exception e) { Randomizer.Error("AHK.sendMsg", e, false); }

        }
        else {
          Current = null;
        }
      }
    }

    public static bool CanPrint { get => MessageQueue.Count > 0 && Memory.MemoryReader.stringHeader != null && InterOp.hints_ready(); }
    // public static bool SendMessage
    public static IMessage Current = null;
    public static IMessage Last = new PlainText("*Good Luck! <3*");
    public static Queue<IMessage> MessageQueue = new Queue<IMessage>();
    public static int FramesTillUnlockReload = 0;
    public static int FramesTillNextSend = 0;

    public static void OnNewGame() {
      Last = new PlainText("*Good Luck! <3*");
    }
    public static void Pickup(string message, int frames = 180) {
      FramesTillNextSend /= 3;
      var msg = new PlainText(message, frames);
      SendPlainText(msg);
      Last = msg;
    }
    public static void Print(string message, int frames = 180, bool toMessageLog = true) => SendPlainText(new PlainText(message, frames), toMessageLog);
    public static void SendPlainText(PlainText p, bool logMessage = true) {
      FramesTillNextSend /= 2;
      if (logMessage)
        File.AppendAllText(Randomizer.MessageLog, $"{p.Text}\n");
      MessageQueue.Enqueue(p);
    }

  }
  public interface IMessage {
    string Text { get; }
    int Frames { get; }
  };

  public class PlainText : IMessage {
    public PlainText(string text, int frames = 180) {
      Text = text;
      Frames = frames;
    }

    public string Text { get; }
    public int Frames { get; }
  }

}
