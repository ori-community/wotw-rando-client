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
        public static int Update()
        {
                try
                {
                if (!Memory.IsHooked)
                {
                    Memory.HookProcess();
                    return -2;
                }
                if (Memory.GameState() == GameState.Game)
                    {
                        UberStateInits();
                        /*  some proof of concept stuff
                        Memory.Keystones += 1;
                        Memory.Ore += 1;
                        Memory.Experience += 1;
                        Memory.SetAbility(AbilityType.SpiritEdge);
                        // DOESN'T WORK!! Memory.SetBound(EquipmentType.Weapon_Sword);
                        Memory.SetAbility(AbilityType.Launch);
                        Memory.GetUberStates();
                        UberStateDefaults.builderProjectSpiritWell.Value.Byte = 3;
                        Memory.WriteUberState(UberStateDefaults.builderProjectSpiritWell);
                        Memory.FakeHalfEnergy();
                        Memory.FakeHalfHealth();

                        foreach (var abtype in (AbilityType[])Enum.GetValues(typeof(AbilityType)))
                                                Memory.SetAbility(abtype);
                                            //                    Memory.SetInvItem(EquipmentType.Spell_ChargeJump);
                        foreach(var shardtype in (ShardType[]) Enum.GetValues(typeof(ShardType)))
                            Memory.SetShard(shardtype);
                        Memory.SetShard(ShardType.Wingclip);
                        Memory.SetShard(ShardType.Resilience);
                        Memory.SetShard(ShardType.Quickshot);
                        Memory.SetShard(ShardType.Splinter);
                        Memory.SetShard(ShardType.Magnet);
                        Memory.SetShard(ShardType.Deflector);
                        */

                    return -1;
                }

            }
            catch (Exception e)
            {
                System.IO.File.AppendAllText("C:\\moon\\cs_log.txt", "Error: " + e.Message + "\n" + e.StackTrace);
            }

            return -1;
        }
        public static void UberStateInits()
        {
            Memory.GetUberStates();
            DoneInitial = (Memory.HasAbility(AbilityType.SpiritEdge) && UberStateDefaults.builderProjectSpiritWell.Value.Byte == 3);
            if(!DoneInitial)
            {
                Memory.SetAbility(AbilityType.SpiritEdge);
                // probably disable this soon but it's good for testing;
                Memory.SetAbility(AbilityType.Launch);
                UberStateDefaults.builderProjectSpiritWell.Value.Byte = 3;
                Memory.WriteUberState(UberStateDefaults.builderProjectSpiritWell);
            }
        }
        public static bool DoneInitial = false;
        [DllExport]
        public static void FoundPickup(int x, int y, int z)
        {

        }
    }
}
