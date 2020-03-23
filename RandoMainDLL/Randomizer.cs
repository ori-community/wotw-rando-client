using System;
using System.IO;
using RandoMainDLL.Memory;

namespace RandoMainDLL
{
    public static class Randomizer
    {
        public static MemoryManager Memory;
        [DllExport]
        public static bool Initialize()
        {
            Memory = new MemoryManager();
            if (!Memory.HookProcess())
                return false;

            Memory.PatchNoPause(true);
            return true;
        }
        [DllExport]
        public static int Update() {
            try {
                if (!Memory.IsHooked) {
                    Memory.HookProcess();
                    return 1;
                }
                if (Memory.GameState() == GameState.Game) {
                    StateListener.Update(Memory);
                    if (!DoneInitial) {
                        UberStateInits();
                        return 2;
                    }
                    return -1;
                } 
                if(Memory.GameState() == GameState.Prologue) {
                    if(DoneInitial)
                        Log("new file detected");
                    DoneInitial = false;
                    return 0;
                }
                return 3;

            }
            catch (Exception e)
            {
                Log("Error: " + e.Message + "\n" + e.StackTrace);
            }

            return 4;
        }
        public static void Log(string message)
        {
            System.IO.File.AppendAllText("C:\\moon\\cs_log.txt", message+"\n");
        }
        public static void UberStateInits()
        {
            if(!Memory.IsLoadingGame())
            {
                Memory.SetAbility(AbilityType.SpiritEdge);
                // probably disable this soon but it's good for testing;
                UberStateDefaults.savePedestalInkwaterMarsh.Value.Byte = 1;
                UberStateDefaults.builderProjectSpiritWell.Value.Byte = 3;
                Memory.WriteUberState(UberStateDefaults.savePedestalInkwaterMarsh);
                Memory.WriteUberState(UberStateDefaults.builderProjectSpiritWell);
                DoneInitial = true;
            }
        }
        public static bool DoneInitial = false;
        [DllExport]
        public static void FoundPickup(int kind, int code)
        {

        }
    }
}
