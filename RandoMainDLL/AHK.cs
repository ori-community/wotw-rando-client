using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading;
using AutoHotkey.Interop;
namespace RandoMainDLL {
    public static class AHK {
        static string Program = @"
        PickupGUIHWD := """"
        signal := """"
        oldText := """"
	    pickupSpot := A_ScreenHeight / 20
        BuildPickupGUI()
        {
	        global PickupGUIHWD, PickupText, pickupSpot
	        Gui, Pickup:New, -SysMenu +LastFound +ToolWindow 
	        Gui, Pickup:Color, 010101
	        WinSet, Exstyle, 0x20
            WinSet, Exstyle, 0x80
	        WinSet, Style,  -0xC40000
	        WinSet, TransColor, 010101
	        Gui, Pickup:Font,s30, Comic Sans MS
	        Text :=  ""<3""
	        Gui, Pickup:Add, Text,CFFFFFF Center VPickupText,%Text% 
	        Gui, Pickup:Show, XCenter y%pickupSpot% NoActivate, hide
	        Gui, Pickup:+HwndPickupGUIHWD
            SetTimer, FadePickup,-3000
	        Return
        }
        BuildLogOverlay()
        {
            
        }
        PickupMessage(message, frames) 
        {
            global oldText, pickupSpot
            GuiControlGet, oldText, Pickup:, PickupText
            GuiControl, Pickup:Text, PickupText, %message%
            width := strlen(message) * 30
            GuiControl, Pickup:Move, PickupText, w%width%
            Gui Pickup:Show, AutoSize XCenter y%pickupSpot% NoActivate 
            SetTimer, FadePickup,-%frames%
        }
        Tick() 
        {
            global signal, pickupSpot
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
        !t::
        Gui Pickup:Show, AutoSize XCenter y%pickupSpot% NoActivate
        KeyWait, T, T2 ; change the hold functionality to something cooler later!
        if(ErrorLevel) {
            GuiControl, Pickup:Text, PickupText, %oldText%
            width := strlen(oldText) * 30
            GuiControl, Pickup:Move, PickupText, w%width%
            Gui Pickup:Show, AutoSize XCenter y%pickupSpot% NoActivate 
            SetTimer, FadePickup,-4000
        } else {
            SetTimer, FadePickup,-3000
        }
        return
        !l::signal := ""reload""
        ";
        public static AutoHotkeyEngine Engine = AutoHotkeyEngine.Instance;
        public static void Init() {
            Engine.ExecRaw(Program);
            Engine.ExecFunction("BuildPickupGUI");
        }

        public static void Tick() {
            var signal = Engine.ExecFunction("Tick");
            if(signal != null && signal.Length > 1) {
                switch (signal) {
                    case "reload":
                        SeedManager.ReadSeed();
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
                Engine.SetVar("signal", "");
            }
            if (FramesTillNextSend > 0) { 
                FramesTillNextSend--;
            } else {
                if (MessageQueue.Count > 0) {
                    Current = MessageQueue.Dequeue();
                    FramesTillNextSend = Current.Frames();
                    Engine.ExecFunction("PickupMessage", Current.Text(), (Current.Frames() * 50 / 3).ToString());
                    Randomizer.Log($"Sending {Current.Text()} for {Current.Frames()}", false);
                } else {
                    Current = null;
                }
            }
        }
        //        public static bool SendMessage
        public static Message Current = null;
        public static Queue<Message> MessageQueue = new Queue<Message>();
        public static int FramesTillNextSend = 0;
        public interface Message {
            String Text();
            int Frames();
        };
        public static void Print(String message, int frames = 180) { SendPlainText(new PlainText(message, frames)); }
        public static void SendPlainText(PlainText p) { MessageQueue.Enqueue(p); }
        public class PlainText : Message {
            string _text;
            int _frames;
            public PlainText(string text, int frames = 180) {
                _text = text;
                _frames = frames;
            }
            public String Text() { return _text; }
            public int Frames() { return _frames; }
        }

    }
}
