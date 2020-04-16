using System;
using System.Collections.Generic;
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

  public static class ShardN {
    private static Dictionary<ShardType, string> mapping = new Dictionary<ShardType, string>() {
      { ShardType.Overcharge, "Overcharge"},
      { ShardType.TripleJump, "Triple Jump"},
      { ShardType.Wingclip, "Wingclip"},
      { ShardType.Bounty, "Bounty"},
      { ShardType.Swap, "Swap"},
      { ShardType.Magnet, "Magnet"},
      { ShardType.Splinter, "Splinter"},
      { ShardType.Reckless, "Reckless"},
      { ShardType.Quickshot, "Quickshot"},
      { ShardType.Resilience, "Resilience"},
      { ShardType.LightHarvest, "Spirit Light Harvest"},
      { ShardType.Vitality, "Bonus Health"},
      { ShardType.LifeHarvest, "Life Harvest"},
      { ShardType.EnergyHarvest, "Energy Harvest"},
      { ShardType.Energy, "Bonus Energy"},
      { ShardType.LifePact, "Life Pact"},
      { ShardType.LastStand, "Last Stand"},
      { ShardType.Secret, "Sense"},
      { ShardType.UltraBash, "Ultra Bash"},
      { ShardType.UltraGrapple, "Ultra Grapple"},
      { ShardType.Overflow, "Overflow"},
      { ShardType.Thorn, "Thorn"},
      { ShardType.Catalyst, "Catalyst"},
      { ShardType.Turmoil, "Turmoil"},
      { ShardType.Sticky, "Sticky"},
      { ShardType.Finesse, "Finesse"},
      { ShardType.SpiritSurge, "Spirit Surge"},
      { ShardType.Lifeforce, "Lifeforce"},
      { ShardType.Deflector, "Deflector"},
      { ShardType.Fracture, "Fracture"},
      { ShardType.Arcing, "Arcing"},
    };

    public static string ame(ShardType st) => mapping.ContainsKey(st) ? mapping[st] : $"Unknown Shard {st}";
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

    public byte[] ToBytes() {
      byte[] retval = new byte[16];
      retval[0] = (byte)Type;
      retval[8] = IsNew;
      retval[9] = Gained;
      retval[10] = EquipOnStart;

      byte[] levelBytes = BitConverter.GetBytes(Level);
      byte[] indexBytes = BitConverter.GetBytes(Index);
      for (var i = 0; i < 4; i++) {
        retval[4 + i] = levelBytes[i];
        retval[12 + i] = indexBytes[i];
      }
      return retval;
    }
    public override string ToString() => $"{Type} = {Gained != 0}+{Level}";
  }
}
