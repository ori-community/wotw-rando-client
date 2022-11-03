using System;
using System.Runtime.InteropServices;
namespace RandomizerManaged.Memory {
  public enum EquipmentType : int {
    None = 0,
    Weapon_Hammer = 1000,
    Weapon_Bow = 1001,
    Weapon_Sword = 1002,
    Weapon_Torch = 1003,
    Weapon_Swordstaff = 1004,
    Weapon_Chainsword = 1005,
    Spell_Shot = 2000,
    Spell_HomingMissiles = 2001,
    Spell_Wave = 2002,
    Spell_Whirl = 2003,
    Spell_Glow = 2004,
    Spell_LockOn = 2005,
    Spell_Shield = 2006,
    Spell_Invisibility = 2007,
    Spell_LifeAbsorb = 2008,
    Spell_Shards = 2009,
    Spell_StickyMine = 2010,
    Spell_Sentry = 2011,
    Spell_Spear = 2012,
    Spell_Meditate = 2013,
    Spell_Teleport = 2014,
    Spell_Chakram = 2015,
    Spell_Blaze = 2016,
    Spell_Turret = 2017,
    Spell_GoldenSein = 2018,
    Spell_ChargeJump = 2019,
    Ability_Bash = 3000,
    Ability_Leash = 3001,
    Ability_Digging = 3002,
    Ability_Drill = 3003,
    Ability_DoubleJump = 3004,
    Ability_FeatherFlap = 3005,
    AutoAbility_Dash = 4000,
    AutoAbility_Bounce = 4001,
    AutoAbility_Glide = 4002,
    AutoAbility_ChargeJump = 4003,
    AutoAbility_WaterDash = 4004,
    AutoAbility_Climb = 4005,
    AutoAbility_WeaponCharge = 4006,
    AutoAbility_DamageUpgradeA = 4007,
    AutoAbility_DamageUpgradeB = 4008,
    AutoAbility_WaterBreath = 4009,
  }

  // PlayerUberStateInventory.InventoryItem
  [StructLayout(LayoutKind.Explicit, Size = 6, Pack = 1)]
  public struct InventoryItem {
    [FieldOffset(0)]
    public EquipmentType Type;
    [FieldOffset(4)]
    public byte IsNew;
    [FieldOffset(5)]
    public byte Unlocked;

    public byte[] ToBytes() {
      byte[] retval = new byte[6];
      retval[4] = IsNew;
      retval[5] = Unlocked;
      byte[] levelBytes = BitConverter.GetBytes((int)Type);
      for (var i = 0; i < 4; i++) {
        retval[i] = levelBytes[i];
      }

      return retval;
    }

    public override string ToString() => $"{Type} = {(IsNew != 0 ? "(New!)" : "")} {(Unlocked != 0 ? "Unlocked" : "Locked")}";
  }
}
