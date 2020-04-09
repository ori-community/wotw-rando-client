using System;
using System.IO;
using RandoMainDLL.Memory;
using System.Collections.Generic;

namespace RandoMainDLL
{
    public static class Randomizer
    {
        public static string SeedFile = @"C:\moon\.currentseed";
        public static string SeedNameFile = @"C:\moon\.currentseedname";
        public static string LogFile = @"C:\moon\cs_log.txt";
        public static string SaveFolder = @"C:\moon\saves";
        public static string VersionFile = @"C:\moon\VERSION";
        public static string VERSION {
            get { return File.Exists(VersionFile) ? File.ReadAllText(VersionFile) : "0.0.0"; }
        }
        public static MemoryManager Memory;
        [DllExport]
        public static bool Initialize()
        {
            try {
                if(!Directory.Exists(SaveFolder)) Directory.CreateDirectory(SaveFolder);
                foreach(var fileName in new String[] { LogFile, SeedFile, SeedNameFile }) {
                    if(!File.Exists(fileName)) {
                        File.WriteAllText(fileName, "");
                        Log($"Wrote blank {fileName} (normal for first-time init)");
                    }
                }

                AHK.Init();
                SeedController.ReadSeed();
                Memory = new MemoryManager();
                if (!Memory.HookProcess())
                    return false;

                Memory.PatchNoPause(true);
                return true;
            } catch (Exception e) {
                Log($"init error: {e.Message}\n{e.StackTrace}");
                return true;
            }
        }

        [DllExport]
        public static int Update() {
            try {
                if (!Memory.IsHooked) {
                    Memory.HookProcess();
                    return 2;
                }
                AHK.Tick();
                    if (Memory.GameState() == GameState.TitleScreen) {
                        StateListener.Ready = false;
                    } else if (Memory.GameState() == GameState.Game) {
                        StateListener.Update(PerformNewGameInit);
                    if (!Memory.IsLoadingGame() && PerformNewGameInit) {
                        UberStateInits();
                        return -1;
                    }
                    return -2;
                } 
                return -1;
            }
            catch (Exception e)
            {
                Log($"Update error: {e.Message}\n{e.StackTrace}");
            }
            return 4;
        }
        public static bool Dev = false;
        public static void Error(string caller, Exception e) {
            Log($"{caller}: {e.Message}\n{e.StackTrace}");
        }
        public static void Log(string message, bool printIfDev = true) {
            if (AHK.IniFlag("MuteCSLogs"))
                return;
            if (LastMessage == message && message.Length > 60) {
                repeats++;
                if (repeats > 180) {
                    repeats = 0;
                    File.AppendAllText(LogFile, "suppressed repeats x180\n");
                }
                return;
            }
            LastMessage = message;
            File.AppendAllText(LogFile, message+"\n");
            if(Dev && printIfDev) 
                AHK.Print(message);
        }
        public static string LastMessage = "";
        public static int repeats = 0;
        public static void UberStateInits()
        { 
            Log("New Game Init", false);
            SeedController.ReadSeed();
            Memory.SetAbility(AbilityType.SpiritEdge);
            UberStateDefaults.savePedestalInkwaterMarsh.Value.Byte = 1;
            Memory.WriteUberState(UberStateDefaults.savePedestalInkwaterMarsh);
            foreach (UberState s in DefaultUberStates) { Memory.WriteUberState(s); }
            foreach (UberState s in KeystoneDoors) { Memory.WriteUberState(s); }
            foreach (UberState s in Kuberstates) { Memory.WriteUberState(s); }
            if (SeedController.GameStartPickup.NonEmpty())
                InputUnlockCallback = () => { SeedController.GameStartPickup.Grant(); };
            BlackSheepWall = true;
            PleaseSave = true;
            PerformNewGameInit = false;
        }
        public static bool PerformNewGameInit = false;
        public static List<UberState> DefaultUberStates = new List<UberState>() {
            new UberState() { Name = "fastTravelEnabledUberState", ID = 16489, GroupName = "npcsStateGroup", GroupID = 48248, Type = UberStateType.SerializedByteUberState, Value = new UberValue((byte)1)},
            new UberState() { Name = "builderProjectSpiritWell", ID = 16825, GroupName = "hubUberStateGroup", GroupID = 42178, Type = UberStateType.SerializedByteUberState, Value = new UberValue((byte)3) },
            new UberState() { Name = "torchHolded", ID = 47458, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "eyesPlacedIntoStatue", ID = 1038, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SerializedByteUberState, Value = new UberValue((byte)3) },
            new UberState() { Name = "entranceStatueOpened", ID = 64003, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "risingPedestals", ID = 54318, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "mokiTorchPlayed", ID = 3621, GroupName = "inkwaterMarshStateGroup", GroupID = 9593, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "mapSecretsRevealed", ID = 35534, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "leverA", ID = 50432, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "doorA", ID = 59850, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) }
        };
        public static List<UberState> Kuberstates = new List<UberState>() {
            new UberState() { Name = "narratorLineShown", ID = 22056, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "powlVignettePlayed", ID = 32369, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "powlVignettePlayed", ID = 14539, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "skeletonState", ID = 61252, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "narratorLineShownHowl", ID = 10677, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "featherVignettePlayed", ID = 36965, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "petrifiedOwlStalkSequenceCompleted", ID = 7636, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "winterForestWispQuestUberState", ID = 8973, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(1) },
            new UberState() { Name = "lagoonWispQuestUberState", ID = 35087, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(1) },
            new UberState() { Name = "desertWispQuestUberState", ID = 35399, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(1) },
            new UberState() { Name = "mouldwoodDepthsWispQuestUberState", ID = 45931, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(1) },
            new UberState() { Name = "petrifiedForestNewTransitionOriVignettePlayed", ID = 46980, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "petrifiedForestNewTransitionKuVignettePlayed", ID = 44798, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2) },
            new UberState() { Name = "lastGlobalEvent", ID = 54675, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(2)  },
            new UberState() { Name = "findKuQuest", ID = 34504, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(4)  },
            new UberState() { Name = "lookForKuQuestUberState", ID = 44500, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState, Value = new UberValue(4) },
        };
        public static List<UberState> KeystoneDoors = new List<UberState>() {
            new UberState() {Name = "e3DesertG_clone0_KeystoneDoor", ID = 28786, GroupName = "windsweptWastesGroupDescriptor",  GroupID = 20120, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true)},
            new UberState() { Name = "swampTorchIntroductionADoorWithTwoSlotsBooleanDescriptor", ID = 42309, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "swampNightcrawlerCavernADoorWithTwoSlotsBooleanDescriptor", ID = 47445, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "doorWithTwoSlots", ID = 59990, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "mouldwoodDepthsGDoorWithTwoSlotsOpened", ID = 10758, GroupName = "mouldwoodDepthsGroup", GroupID = 18793, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "keystoneGate", ID = 47621, GroupName = "lumaPoolsStateGroup", GroupID = 5377, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "doorWithFourSlots", ID = 4290, GroupName = "baursReachGroup", GroupID = 28895, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "keystoneGate", ID = 49900, GroupName = "baursReachGroup", GroupID = 28895, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "doorWithFourSlots", ID = 3171, GroupName = "moulwoodDepthsGroup", GroupID = 18793, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "doorState", ID = 21500, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
            new UberState() { Name = "mouldwoodDepthsHDoorWithFourSlotsOpened", ID = 41544, GroupName = "mouldwoodDepthsGroup", GroupID = 18793, Type = UberStateType.SerializedBooleanUberState, Value = new UberValue(true) },
        };

        // interop flag system (reserve the right at any time to change this to a dict)
        public static bool OreFound = false;
        public static bool PleaseSave = false;
        public static bool BlackSheepWall = false;

        public delegate void Callback();
        public static Callback InputUnlockCallback;
        public enum FlagCode: int {
            Save = 0,
            Ore = 1,
            UnlockMap = 2,
            InputLockListener = 3,
        }
        [DllExport]
        public static int OreCount() { return Memory.Ore;  }

        [DllExport]
        public static bool CheckFlag(FlagCode flag) {
            switch(flag) {
                case FlagCode.Ore:
                    if (OreFound) {
                        OreFound = false;
                        return true;
                    }
                    return false;
                case FlagCode.Save:
                    if (PleaseSave) {
                        PleaseSave = false;
                        return true;
                    }
                    return false;
                case FlagCode.UnlockMap:
                    if (BlackSheepWall) {
                        BlackSheepWall = false;
                        return true;
                    }
                    return false;
                case FlagCode.InputLockListener:
                    return Memory.GameState() == GameState.Game && InputUnlockCallback != null;
                default:
                    Randomizer.Log($"Unknown Flag code {flag}");
                    return false;
            }
        }

        [DllExport]
        public static void OnInputUnlock() {
            InputUnlockCallback?.Invoke();
            InputUnlockCallback = null;
        }

        [DllExport]
        public static bool TreeFulfilled(AbilityType ability) { return SaveController.Data.TreesActivated.Contains(ability);  }

        [DllExport]
        public static void OnTree(AbilityType ability) {
            SaveController.Data.TreesActivated.Add(ability);
            SeedController.OnTree(ability);
        }

        [DllExport]
        public static UInt64 GetShardSlotPtr() {
            return Memory.ShardSlotPtr();
        }

        [DllExport]
        public static bool InjectLogEnabled() {
            return !AHK.IniFlag("MuteInjectLogs");
        }
        [DllExport]
        public static bool InjectDebugEnabled() {
            return AHK.IniFlag("DebugInjectLogs");
        }
        [DllExport]
        public static bool DoInvertTree(AbilityType ability) {
            return SaveController.Data.TreesActivated.Contains(ability) ^ Memory.HasAbility(ability);
        }

    }
}
