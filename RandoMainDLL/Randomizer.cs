using System;
using System.IO;
using RandoMainDLL.Memory;
namespace RandoMainDLL
{
    public static class Randomizer
    {
        public static string PickupLog = "C:\\moon\\rando.PICKUPS";
        public static string SeedFile = "C:\\moon\\wotw.rando";
        public static string LogFile = "C:\\moon\\cs_log.txt";
        public static MemoryManager Memory;
        [DllExport]
        public static bool Initialize()
        {
            try {
                foreach(var fileName in new String[] { LogFile, PickupLog, SeedFile }) {
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
                    bool grantedItem = StateListener.Update();
                    if (!DoneInitial) {
                        UberStateInits();
                        return -1;
                    }
                    return grantedItem  ? 1 : -2;
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
            File.AppendAllText(LogFile, message+"\n");
            if(Dev && printIfDev) 
                AHK.Print(message);
        }
        public static void UberStateInits()
        {
            if(!Memory.IsLoadingGame())
            {
                Memory.SetAbility(AbilityType.SpiritEdge);
                UberStateDefaults.savePedestalInkwaterMarsh.Value.Byte = 1;
                UberStateDefaults.builderProjectSpiritWell.Value.Byte = 3;
                Memory.WriteUberState(UberStateDefaults.savePedestalInkwaterMarsh);
                Memory.WriteUberState(UberStateDefaults.builderProjectSpiritWell);
                DoneInitial = true;
            }
        }
        public static bool DoneInitial = false;
        [DllExport]
        public static void OnTree(int code)
        {

        }
    }
}
