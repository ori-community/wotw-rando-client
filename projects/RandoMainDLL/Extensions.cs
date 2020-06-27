﻿using System;
using System.ComponentModel;
using System.Linq;
using System.Collections.Generic;
using RandoMainDLL.Memory;
namespace RandoMainDLL {
  public static class Extensions {
    public static UberStateCondition toCond(this Memory.UberId id, int? target = null) => new UberStateCondition(id, target);
    public static LocData Loc(this UberStateCondition uid) => LocDataStatic.All.GetOrElse(uid, LocData.Void);

    public static EquipmentType? Equip(this AbilityType t) => AbilityToEquip.Get(t);
    public static Dictionary<AbilityType, EquipmentType> AbilityToEquip = new Dictionary<AbilityType, EquipmentType>() {
      { AbilityType.Bash, EquipmentType.Ability_Bash },
      { AbilityType.DoubleJump, EquipmentType.Ability_DoubleJump },
      { AbilityType.Launch, EquipmentType.Spell_ChargeJump },
      { AbilityType.Feather, EquipmentType.AutoAbility_Glide },
      { AbilityType.WaterBreath, EquipmentType.AutoAbility_WaterBreath},
      { AbilityType.LightBurst, EquipmentType.Spell_StickyMine},
      { AbilityType.Grapple, EquipmentType.Ability_Leash },
      { AbilityType.Flash, EquipmentType.Spell_Glow },
      { AbilityType.Spike, EquipmentType.Spell_Spear },
      { AbilityType.Regenerate, EquipmentType.Spell_Meditate },
      { AbilityType.SpiritArc, EquipmentType.Weapon_Bow },
      { AbilityType.SpiritSmash, EquipmentType.Weapon_Hammer},
      { AbilityType.SpiritEdge, EquipmentType.Weapon_Sword },
      { AbilityType.Burrow, EquipmentType.Ability_Digging },
      { AbilityType.Dash, EquipmentType.AutoAbility_Dash },
      { AbilityType.WaterDash, EquipmentType.AutoAbility_WaterDash},
      { AbilityType.SpiritStar, EquipmentType.Spell_Chakram},
      { AbilityType.Seir, EquipmentType.Spell_GoldenSein},
      { AbilityType.Blaze, EquipmentType.Spell_Blaze},
      { AbilityType.Flap, EquipmentType.Ability_FeatherFlap},
      { AbilityType.Sentry, EquipmentType.Spell_Turret },
      { AbilityType.DamageUpgrade1, EquipmentType.AutoAbility_DamageUpgradeA},
      { AbilityType.DamageUpgrade2, EquipmentType.AutoAbility_DamageUpgradeB},
    };


    private static T Warn<T>(string badVal, string caller) where T : unmanaged {
      T def = new T();
      Randomizer.Warn(caller, $"{badVal} is not a valid {typeof(T).FullName}, using {def}");
      return def;
    }
    // some fun string parsers with warnings
    public static int ParseToInt(this string val, string caller = "ParseToInt") => int.TryParse(val, out int ret) ? ret : Warn<int>(val, caller);
    public static byte ParseToByte(this string val, string caller = "ParseToByte") => byte.TryParse(val, out byte ret) ? ret : Warn<byte>(val, caller);
    public static float ParseToFloat(this string val, string caller = "ParseToFloat") => float.TryParse(val, out float ret) ? ret : Warn<float>(val, caller);
    public static bool ParseToBool(this string val, string caller = "ParseToBool") => bool.TryParse(val, out bool ret) ? ret : Warn<bool>(val, caller);

    // dict functions
    public static TVal GetOrDefault<TKey, TVal>(this IDictionary<TKey, TVal> self, TKey key) {
      TVal ret;
      self.TryGetValue(key, out ret);
      return ret;
    }
    public static TVal? Get<TKey, TVal>(this IDictionary<TKey, TVal> self, TKey key) where TVal : struct => self.TryGetValue(key, out TVal ret) ? ret : (TVal?)null;

    public static TVal GetOrElse<TKey, TVal>(this IDictionary<TKey, TVal> self, TKey key, TVal alt) => self.TryGetValue(key, out TVal ret) ? ret : alt;
    public static TVal GetOrElse<TKey, TVal>(this IDictionary<TKey, TVal> self, TKey key, TVal alt, String caller) {
      if (self.TryGetValue(key, out TVal ret))
        return ret;
      Randomizer.Warn(caller, $"didn't contain {key}: using {alt}");
      return alt;
    }
    /// <summary>
    /// Gets the description of the given Enum from its Description attribute. If the attribute is missing, returns the Enum as a string. If the Enum is invalid, returns null.
    /// </summary>
    public static string GetDescription<T>(this T e) where T : Enum {
      Type type = e.GetType();

      foreach (var val in Enum.GetValues(type)) {
        if (e.Equals(val)) {
          var memInfo = type.GetMember(type.GetEnumName(val));

          if (memInfo[0]
              .GetCustomAttributes(typeof(DescriptionAttribute), false)
              .FirstOrDefault() is DescriptionAttribute descriptionAttribute) {
            return descriptionAttribute.Description;
          }
          else {
            return e.ToString();
          }
        }
      }

      return null;
    }
  }
}
