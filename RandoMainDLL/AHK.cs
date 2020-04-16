using System;
using System.Collections.Generic;
using AutoHotkey.Interop;

namespace RandoMainDLL {
  public static class AHK {
    private static readonly string Program = @"
      PickupGUIHWD := """"
      signal := ""none""
      oldText := """"
      BuildPickupGUI()
      {
	      global PickupGUIHWD, PickupText
	      Gui, Pickup:New, -SysMenu +LastFound +ToolWindow 
	      Gui, Pickup:Color, 010101
	      WinSet, Exstyle, 0x20
          WinSet, Exstyle, 0x80
	      WinSet, Style,  -0xC40000
	      WinSet, TransColor, 010101
	      Gui, Pickup:Font,s30, Comic Sans MS
	      Text :=  ""<3""
	      Gui, Pickup:Add, Text,CFFFFFF Center VPickupText,%Text% 
	      Gui, Pickup:Show, XCenter NoActivate Hide
	      Gui, Pickup:+HwndPickupGUIHWD
	      Return
      }
      ShowPickup()
      {
        global pickupGUIHWD
        DetectHiddenWindows, On
        Gui Pickup:Show, AutoSize NoActivate Hide
        WinGetPos, , , GuiWidth, GuiHeight, ahk_id %PickupGUIHWD%
        DetectHiddenWindows, Off
        WinGetPos, OriX, OriY, OriW, OriH, OriAndTheWilloftheWisps
        ; X position; X + Width/2 - W/2
        GuiX := OriX + OriW/2 - GuiWidth/2
        GuiY := OriY + OriH/20 
        Gui Pickup:Show, NoActivate Y%GuiY% X%GuiX%
      }
      PickupMessage(message, ms) 
      {
        SetTimer, FadePickup,-%ms%
        global oldText, PickupGUIHWD
        GuiControlGet, maybeOldText, Pickup:, PickupText
        if(message != maybeOldText) {
          oldText := maybeOldText
        }
        GuiControl, Pickup:Text, PickupText, %message%
        width := strlen(message) * 30
        GuiControl, Pickup:Move, PickupText, w%width%
        ShowPickup()
      }
      IniRead(Section, Key, iniPath := ""C:/moon/settings.ini"")
      {
        IniRead, out, %iniPath%, %Section%, %Key%
        return out
      }
      Tick() 
      {
        global signal
        IfWinNotActive, OriAndTheWilloftheWisps 
        {
          Gui, Pickup:-AlwaysOnTop
        } else {
          Gui, Pickup:+AlwaysOnTop
        }
        return signal
      }
      FadePickup:
      Gui Pickup:Hide
      return	

      !/::signal := ""exitapp""
      #IfWinActive, OriAndTheWilloftheWisps
      !j::signal := ""dev""
      !l::signal := ""reload""
      !t::
      ShowPickup()
      KeyWait, T, T2 ; change the hold functionality to something cooler later?
      if(ErrorLevel) {
        GuiControl, Pickup:Text, PickupText, %oldText%
        width := strlen(oldText) * 30
        GuiControl, Pickup:Move, PickupText, w%width%
        ShowPickup()
        SetTimer, FadePickup,-4000
      } else {
        SetTimer, FadePickup,-3000
      }
      return
      ";
    public static AutoHotkeyEngine Engine = AutoHotkeyEngine.Instance;
    public static bool Ready = false;

    public static void Init() {
      Engine.ExecRaw(Program);
      Engine.ExecFunction("BuildPickupGUI");
      if (System.IO.File.Exists("C:\\moon\\rando_binds.ahk")) {
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

      return !Falsey.Contains(Engine.ExecFunction("IniRead", "Flags", Flag));
    }

    public static void Tick() {
      var signal = Engine.ExecFunction("Tick");
      if (signal != null && signal != "none") {
        Engine.SetVar("signal", "none");
        switch (signal) {
          case "reload":
            if (FramesTillUnlockReload == 0) {
              SeedController.ReadSeed();
              FramesTillUnlockReload = 60;
            }
            break;
          case "dev":
            Randomizer.Dev = !Randomizer.Dev;
            Randomizer.Log($"Dev: {Randomizer.Dev}");
            break;
          case "exitapp":
            Environment.Exit(Environment.ExitCode);
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
        if (MessageQueue.Count > 0) {
          Current = MessageQueue.Dequeue();
          FramesTillNextSend = Current.Frames;
          Engine.ExecFunction("PickupMessage", Current.Text, (Current.Frames* 50 / 3).ToString());
          if (IniFlag("LogOnPrint")) {
            Randomizer.Log($"Sending {Current.Text} for {Current.Frames} ({MessageQueue.Count} remaining in queue)", false);
          }
        }
        else {
          Current = null;
        }
      }
    }

    // public static bool SendMessage
    public static IMessage Current = null;
    public static Queue<IMessage> MessageQueue = new Queue<IMessage>();
    public static int FramesTillUnlockReload = 0;
    public static int FramesTillNextSend = 0;

    public static void Print(string message, int frames = 180) => SendPlainText(new PlainText(message, frames));
    public static void SendPlainText(PlainText p) => MessageQueue.Enqueue(p);

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
}
