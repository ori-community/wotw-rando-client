using System;
using System.Runtime.InteropServices;
namespace RandoMainDLL.Memory {
    public enum ShardType : byte {
        Overcharge = 1,
        TripleJump,
        Wingclip,
        Bounty,
        Swap,
        Magnet = 8,
        Splinter,
        Reckless = 13,
        Quickshot,
        Resilience = 18,
        LightHarvest,
        Vitality = 22,
        LifeHarvest,
        EnergyHarvest = 25,
        Energy,
        LifePact,
        LastStand,
        Secret = 30,
        UltraBash = 32,
        UltraGrapple,
        Overflow,
        Thorn,
        Catalyst,
        Turmoil = 38,
        Sticky,
        Finesse,
        SpiritSurge,
        Lifeforce = 43,
        Deflector,
        Fracture = 46,
        Arcing
    }
    [StructLayout(LayoutKind.Explicit, Size = 16, Pack = 1)]
    public struct Shard {
        [FieldOffset(0)]
        public ShardType Type;
        [FieldOffset(4)]
        public int Level;
        [FieldOffset(8)]
        public byte IsNew;
        [FieldOffset(9)]
        public byte Gained;
        [FieldOffset(10)]
        public byte EquipOnStart;
        [FieldOffset(12)]
        public int Index;
        public byte[] ToBytes()
        {
            byte[] retval = new byte[16];
            retval[0] = (byte)Type;
            retval[8] = IsNew;
            retval[9] = Gained;
            retval[10] = EquipOnStart;

            byte[] levelBytes = BitConverter.GetBytes(Level);
            byte[] indexBytes = BitConverter.GetBytes(Index);
            for (var i = 0; i < 4; i++)
            {
                retval[4 + i] = levelBytes[i];
                retval[12 + i] = indexBytes[i];
            }
            return retval;
        }
        public override string ToString() {
            return $"{Type} = {Gained != 0}+{Level}";
        }
    }
}