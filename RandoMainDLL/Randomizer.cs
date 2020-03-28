using System;
using System.IO;
using RandoMainDLL.Memory;
namespace RandoMainDLL
{
    public static class Randomizer
    {
        public static string PickupLog = "C:\\moon\\rando.PICKUPS";
        public static string SeedFile = "C:\\moon\\.currentseed";
        public static string SeedNameFile = "C:\\moon\\.currentseedname";
        public static string LogFile = "C:\\moon\\cs_log.txt";
        public static MemoryManager Memory;
        [DllExport]
        public static bool Initialize()
        {
            try {
                foreach(var fileName in new String[] { LogFile, PickupLog, SeedFile, SeedNameFile }) {
                    if(!File.Exists(fileName)) {
                        File.WriteAllText(fileName, "");
                        Log($"Wrote blank {fileName} (normal for first-time init)");
                    }
                }
                AHK.Init();
                SeedManager.ReadSeed();
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
                    return -3;
                }
                AHK.Tick();
                if (Memory.GameState() == GameState.Game) {
                    StateListener.Update();
                    if (!DoneInitial) {
                        UberStateInits();
                        return -1;
                    }
                    return -2;
                } 
                if(Memory.GameState() == GameState.Prologue) {
                    if(DoneInitial)
                        Log("new file detected");
                    DoneInitial = false;
                    return 0;
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
        public static void Log(string message, bool printIfDev = true) {
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
            if(!Memory.IsLoadingGame())
            {
                Memory.SetAbility(AbilityType.SpiritEdge);
                UberStateDefaults.savePedestalInkwaterMarsh.Value.Byte = 1;
                UberStateDefaults.builderProjectSpiritWell.Value.Byte = 3;
                UberStateDefaults.eyesPlacedIntoStatue.Value.Byte = 3;
                UberStateDefaults.entranceStatueOpened.Value.Bool = true;
                UberStateDefaults.risingPedestals.Value.Bool = true;
                UberStateDefaults.mokiTorchPlayed.Value.Bool = true;
                UberStateDefaults.mapSecretsRevealed.Value.Bool = true;
                Memory.WriteUberState(UberStateDefaults.savePedestalInkwaterMarsh);
                Memory.WriteUberState(UberStateDefaults.builderProjectSpiritWell);
                Memory.WriteUberState(UberStateDefaults.eyesPlacedIntoStatue);
                Memory.WriteUberState(UberStateDefaults.entranceStatueOpened);
                Memory.WriteUberState(UberStateDefaults.risingPedestals);
                Memory.WriteUberState(UberStateDefaults.mokiTorchPlayed);
                Memory.WriteUberState(UberStateDefaults.mapSecretsRevealed);
                BlackSheepWall = true;
                DoneInitial = true;
            }
        }
        public static bool DoneInitial = false;

        // interop flag system (reserve the right at any time to change this to a dict)
        public static bool OreFound = false;
        public static bool PleaseSave = false;
        public static bool BlackSheepWall = false;
        public enum FlagCode: int {
            Save = 0,
            Ore = 1,
            UnlockMap = 2,
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
                default:
                    Randomizer.Log($"Unknown Flag code {flag}");
                    return false;
            }
        }
        public static bool TreeCollected(AbilityType ability)
        {
            return true;
        }

        [DllExport]
        public static UInt64 GetShardSlotPtr() {
            return Memory.ShardSlotPtr();
        }

        [DllExport]
        public static bool DoInvertTree(AbilityType ability) {
            return TreeCollected(ability) ^ Memory.HasAbility(ability);
        }
    }
}
