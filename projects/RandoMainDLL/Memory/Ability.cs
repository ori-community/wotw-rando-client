using System;
using System.Runtime.InteropServices;
using System.ComponentModel;

namespace RandoMainDLL.Memory {
  public enum AbilityType : byte {
    Bash = 0,
    [Description("Wall Jump")]
    WallJump = 3,
    [Description("Double Jump")]
    DoubleJump = 5,
    Launch = 8,
    [Description("Glide")]
    Feather = 14,
    [Description("Water Breath")]
    WaterBreath = 23,
    [Description("Grenade")]
    LightBurst = 51,
    Grapple = 57,
    Flash = 62,
    [Description("Spear")]
    Spike = 74,
    Regenerate = 77,
    [Description("Bow")]
    SpiritArc = 97,
    [Description("Hammer")]
    SpiritSmash = 98,
    Torch = 99,
    [Description("Sword")]
    SpiritEdge = 100,
    Burrow = 101,
    Dash = 102,
    [Description("Water Dash")]
    WaterDash = 104,
    [Description("Teleport")]
    TeleportSpell = 105,
    [Description("Shuriken")]
    SpiritStar = 106,
    Seir = 108,
    Blaze = 115,
    Sentry = 116,
    Flap = 118,
    [Description("Ancestral Light")]
    DamageUpgrade1 = 120,
    [Description("Ancestral Light")]
    DamageUpgrade2,
    NONE = 255
  }

  [StructLayout(LayoutKind.Explicit, Size = 8, Pack = 1)]
  public struct Ability {
    [FieldOffset(0)]
    public AbilityType Type;
    [FieldOffset(1)]
    public byte HasAbility;
    [FieldOffset(4)]
    public int AbilityLevel;

    public byte[] ToBytes() {
      byte[] retval = new byte[8];
      retval[0] = (byte)Type;
      retval[1] = HasAbility;
      byte[] levelBytes = BitConverter.GetBytes(AbilityLevel);
      for (var i = 0; i < 4; i++) {
        retval[4 + i] = levelBytes[i];
      }

      return retval;
    }

    public override string ToString() => $"{Type} = {HasAbility != 0}+{AbilityLevel}";
  }
}
