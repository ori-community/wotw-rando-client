using System;
using System.ComponentModel;
using System.Linq;
using System.Collections.Generic;
using RandoMainDLL.Memory;
using System.Collections.Concurrent;
using System.Globalization;

namespace RandoMainDLL {
  public static class Extensions {
    public static LocData Loc(this UberStateCondition uid) => LocDataStatic.All.GetOrElse(uid, LocData.Void);

    public static Network.UberStateUpdateMessage MakeUpdateMsg(this UberId id, double value) => new Network.UberStateUpdateMessage {
      State = new Network.UberId {
        Group = id.GroupID,
        State = id.ID
      },
      Value = value
    };
    public static UberId IdFromMsg(this Network.UberId n) => new UberId(n.Group, n.State);
    public static (UberId, double) FromNet(this Network.UberStateUpdateMessage n) => (n.State.IdFromMsg(), n.Value);

    public static void Clear<T>(this BlockingCollection<T> bc) { while (bc.TryTake(out var _)) { } }

    public static int MaxOrElse<TSource>(this IEnumerable<TSource> l, Func<TSource, int> selector, int def) => l.Count() > 0 ? l.Max(selector) : def;
    public static T FirstOrElse<T>(this IEnumerable<T> l, T def) => l.Count() > 0 ? l.First() : def;
    public static T FirstOrElse<T>(this IEnumerable<T> l, Func<T, bool> selector, T def) => l.Where(selector).FirstOrElse(def);

    public static string FmtVal(this UberValue Value, UberStateType t) {
      return Value.FmtVal(t);
    }

    public static int AsInt(this UberValue v, UberStateType t) {
      return t.simplify() switch {
        SimplifiedUberStateType.Boolean => Convert.ToInt32(v.Bool),
        SimplifiedUberStateType.Byte => Convert.ToInt32(v.Byte),
        SimplifiedUberStateType.Int => v.Int,
        SimplifiedUberStateType.Float => Convert.ToInt32(v.Float),
        _ => v.Int,
      };
    }

    public static double AsDouble(this UberValue v, UberStateType t) {
      return t.simplify() switch {
        SimplifiedUberStateType.Boolean => v.Bool ? 1.0f : 0.0f,
        SimplifiedUberStateType.Byte => Convert.ToDouble(v.Byte),
        SimplifiedUberStateType.Int => Convert.ToDouble(v.Int),
        SimplifiedUberStateType.Float => Convert.ToDouble(v.Float),
        _ => Convert.ToDouble(v.Int),
      };
    }

    public static bool AsBool(this UberValue v, UberStateType t) {
      return t.simplify() switch {
        SimplifiedUberStateType.Boolean => v.Bool,
        SimplifiedUberStateType.Byte => Convert.ToBoolean(v.Byte),
        SimplifiedUberStateType.Int => Convert.ToBoolean(v.Int),
        SimplifiedUberStateType.Float => Convert.ToBoolean(v.Float),
        _ => Convert.ToBoolean(v.Int),
      };
    }
    public static void Refresh(this UberId id) => InterOp.UberState.refresh_uber_state(id.GroupID, id.ID);
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
    public static float ParseToFloat(this string val, string caller = "ParseToFloat") => float.TryParse(val, NumberStyles.Number, CultureInfo.GetCultureInfo("en-US"), out float ret) ? ret : Warn<float>(val, caller);
    public static double ParseToDouble(this string val, string caller = "ParseToFloat") => double.TryParse(val, NumberStyles.Number, CultureInfo.GetCultureInfo("en-US"), out double ret) ? ret : Warn<float>(val, caller);
    public static bool ParseToBool(this string val, string caller = "ParseToBool") => bool.TryParse(val, out bool ret) ? ret : Warn<bool>(val, caller);


    private static UberId ParsePointer(this string val, string caller = "ParsePointer") {
      var parts = val.Substring(2, val.Length - 3).Split('|');
      if (parts.Length != 2) {
        Randomizer.Warn(caller, $"{val} is not a valid pointer.");
        return null;
      }

      var group = ParseToInt(parts[0], caller + ".Group");
      var state = ParseToInt(parts[1], caller + ".State");
      return new UberId(group, state);
    }
    public static IValue<int> ParseToIntValue(this string val, string caller = "ParseToIntValue") {
      if (val.StartsWith("[") && val.EndsWith("]")) {
        var parts = val.Substring(1, val.Length - 2).Split(',');
        if (parts.Length != 2) {
          Randomizer.Warn(caller, $"{val} is not a valid random range.");
          return new ConstantValue<int>(0);
        }

        return new IntRandomValue(ParseToIntValue(parts[0], caller), ParseToIntValue(parts[1], caller));
      } else if (val.StartsWith("$(") && val.EndsWith(")")) {
        var id = ParsePointer(val);
        if (id == null)
          return new ConstantValue<int>(0);

        return new IntPointerValue(id);
      } else
        return new ConstantValue<int>(ParseToInt(val, caller));
    }
    public static IValue<byte> ParseToByteValue(this string val, string caller = "ParseToByteValue") {
      if (val.StartsWith("[") && val.EndsWith("]")) {
        var parts = val.Substring(1, val.Length - 2).Split(',');
        if (parts.Length != 2) {
          Randomizer.Warn(caller, $"{val} is not a valid random range.");
          return new ConstantValue<byte>(0);
        }

        return new ByteRandomValue(ParseToByteValue(parts[0], caller), ParseToByteValue(parts[1], caller));
      }
      else if (val.StartsWith("$(") && val.EndsWith(")")) {
        var id = ParsePointer(val);
        if (id == null)
          return new ConstantValue<byte>(0);

        return new BytePointerValue(id);
      }
      else
        return new ConstantValue<byte>(ParseToByte(val, caller));
    }
    public static IValue<float> ParseToFloatValue(this string val, string caller = "ParseToFloatValue") {
      if (val.StartsWith("[") && val.EndsWith("]")) {
        var parts = val.Substring(1, val.Length - 2).Split(',');
        if (parts.Length != 2) {
          Randomizer.Warn(caller, $"{val} is not a valid random range.");
          return new ConstantValue<float>(0);
        }

        return new FloatRandomValue(ParseToFloatValue(parts[0], caller), ParseToFloatValue(parts[1], caller));
      }
      else if (val.StartsWith("$(") && val.EndsWith(")")) {
        var id = ParsePointer(val);
        if (id == null)
          return new ConstantValue<float>(0);

        return new FloatPointerValue(id);
      }
      else
        return new ConstantValue<float>(ParseToFloat(val, caller));
    }
    public static IValue<bool> ParseToBoolValue(this string val, string caller = "ParseToBoolValue") {
      if (val.StartsWith("$(") && val.EndsWith(")")) {
        var id = ParsePointer(val);
        if (id == null)
          return new ConstantValue<bool>(false);

        return new BoolPointerValue(id);
      }
      else
        return new ConstantValue<bool>(ParseToBool(val, caller));
    }

    public static R CallOrElse<T, R>(this T self, Func<T, R> func, R d) => self == null ? d : func(self);
    public static TVal? Get<TKey, TVal>(this IDictionary<TKey, TVal> self, TKey key) where TVal : struct => self.TryGetValue(key, out TVal ret) ? ret : (TVal?)null;

    public static TVal GetOrElse<TKey, TVal>(this IDictionary<TKey, TVal> self, TKey key, TVal alt) => self != null && key != null && self.TryGetValue(key, out TVal ret) ? ret : alt;
    public static TVal GetOrElse<TKey, TVal>(this IDictionary<TKey, TVal> self, TKey key, TVal alt, String caller) {
      if (self != null && key != null && self.TryGetValue(key, out TVal ret))
        return ret;
      Randomizer.Warn(caller, $"didn't contain {key}: using {alt}");
      return alt;
    }
    // pickup shorthands for fun and profit

    public static Teleporter p(this TeleporterType tp) => new Teleporter(tp);
    public static Ability p(this AbilityType s) => new Ability(s);
    public static Shard p(this ShardType s) => new Shard(s);
    public static QuestEvent p(this QuestEventType q) => new QuestEvent(q);
    public static Resource p(this ResourceType r) => new Resource(r);

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

    public static bool In<T>(this T obj, params T[] args) {
      return args.Contains(obj);
    }

    public static string Symbol(this UberStateCondition.Handler handler) {
      switch (handler) {
        case UberStateCondition.Handler.Less:
          return "<";
        case UberStateCondition.Handler.LessOrEquals:
          return "<=";
        case UberStateCondition.Handler.Greater:
          return ">";
        case UberStateCondition.Handler.GreaterOrEquals:
          return ">=";
        case UberStateCondition.Handler.Equals:
          return "=";
        default:
          return "";
      }
    }
  }
}
