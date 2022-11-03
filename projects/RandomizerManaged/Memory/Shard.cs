using System;
using System.ComponentModel;
using System.Runtime.InteropServices;

namespace RandomizerManaged.Memory {
  public enum ShardType : byte {
    [Description("Overcharge")]
    Overcharge = 1,
    [Description("Triple Jump")]
    TripleJump,
    [Description("Wingclip")]
    Wingclip,
    [Description("Bounty")]
    Bounty,
    [Description("Swap")]
    Swap,
    [Description("Magnet")]
    Magnet = 8,
    [Description("Splinter")]
    Splinter,
    [Description("Reckless")]
    Reckless = 13,
    [Description("Quickshot")]
    Quickshot,
    [Description("Resilience")]
    Resilience = 18,
    [Description("Spirit Light Harvest")]
    LightHarvest,
    [Description("Vitality")]
    Vitality = 22,
    [Description("Life Harvest")]
    LifeHarvest,
    [Description("Energy Harvest")]
    EnergyHarvest = 25,
    [Description("Energy (Shard)")]
    Energy,
    [Description("Life Pact")]
    LifePact,
    [Description("Last Stand")]
    LastStand,
    [Description("Sense")]
    Secret = 30,
    [Description("Ultra Bash")]
    UltraBash = 32,
    [Description("Ultra Grapple")]
    UltraGrapple,
    [Description("Overflow")]
    Overflow,
    [Description("Thorn")]
    Thorn,
    [Description("Catalyst")]
    Catalyst,
    [Description("Turmoil")]
    Turmoil = 38,
    [Description("Sticky")]
    Sticky,
    [Description("Finesse")]
    Finesse,
    [Description("Spirit Surge")]
    SpiritSurge,
    [Description("Lifeforce")]
    Lifeforce = 43,
    [Description("Deflector")]
    Deflector,
    [Description("Fracture")]
    Fracture = 46,
    [Description("Arcing")]
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
