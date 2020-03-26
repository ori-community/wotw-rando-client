using System;
using System.Runtime.InteropServices;
using System.Collections.Generic;
namespace RandoMainDLL.Memory {
    public enum AbilityType : byte {
        Bash = 0,
        WallJump = 3,
        DoubleJump = 5,
        Launch = 8,
        Feather = 14,
        WaterBreath = 23,
        LightBurst = 51,
        Grapple = 57,
        Flash = 62,
        Spike = 74,
        Regenerate = 77,
        SpiritArc = 97,
        SpiritSmash,
        Torch,
        SpiritEdge,
        Burrow,
        Dash,
        WaterDash = 104,
        SpiritStar = 106,
        Seir = 108,
        Blaze = 115,
        Sentry,
        Flap = 118,
        DamageUpgrade1 = 120,
        DamageUpgrade2
    }
    public static class AbilityN {
        private static Dictionary<AbilityType, String> mapping = new Dictionary<AbilityType, string>(){
            { AbilityType.Bash, "Bash"},
            { AbilityType.WallJump, "Wall Jump"},
            { AbilityType.DoubleJump, "Double Jump"},
            { AbilityType.Launch, "Launch"},
            { AbilityType.Feather, "Feather"},
            { AbilityType.WaterBreath, "Water Breath"},
            { AbilityType.LightBurst, "Light Burst"},
            { AbilityType.Grapple, "Grapple"},
            { AbilityType.Flash, "Flash"},
            { AbilityType.Spike, "Spike"},
            { AbilityType.Regenerate, "Regenerate"},
            { AbilityType.SpiritArc, "Bow"},
            { AbilityType.SpiritSmash, "Hammer"},
            { AbilityType.Torch, "Torch"},
            { AbilityType.SpiritEdge, "Sword"},
            { AbilityType.Burrow, "Burrow"},
            { AbilityType.Dash, "Dash"},
            { AbilityType.WaterDash, "Water Dash"},
            { AbilityType.SpiritStar, "Shuriken"},
            { AbilityType.Seir, "Seir"},
            { AbilityType.Blaze, "Blaze"},
            { AbilityType.Sentry, "Sentry"},
            { AbilityType.Flap, "Flap"},
            { AbilityType.DamageUpgrade1, "damage up"},
            { AbilityType.DamageUpgrade2, "DAMAGE UP"},
    };
        public static string ame(AbilityType at) {
            return mapping.ContainsKey(at) ? mapping[at] : $"Unknown Ability {at}";
        }
    }
    [StructLayout(LayoutKind.Explicit, Size = 8, Pack = 1)]
    public struct Ability {
        [FieldOffset(0)]
        public AbilityType Type;
        [FieldOffset(1)]
        public byte HasAbility;
        [FieldOffset(4)]
        public int AbilityLevel;
        public byte[] ToBytes()
        {
            byte[] retval = new byte[8];
            retval[0] = (byte)Type;
            retval[1] = HasAbility;
            byte[] levelBytes = BitConverter.GetBytes(AbilityLevel);
            for (var i = 0; i < 4; i++)
                retval[4 + i] = levelBytes[i];
            return retval;
        }
        public override string ToString() {
            return $"{Type} = {HasAbility != 0}+{AbilityLevel}";
        }
    }
}