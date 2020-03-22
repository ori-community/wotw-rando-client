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
        public static int Update()
        {
            if(!Memory.IsHooked)
            {
                Memory.HookProcess();
                return -2;
            }
            if(Memory.GameState() == GameState.Game)
            {
                Memory.Keystones = 1 + Memory.Keystones;
                return Memory.Keystones;
            }
            return -1;
        }
        [DllExport]
        public static void FoundPickup(int x, int y, int z)
        {

        }
    }
}
