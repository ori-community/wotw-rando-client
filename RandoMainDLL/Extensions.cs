using System;
using System.ComponentModel;
using System.Linq;
using System.Collections.Generic;

namespace RandoMainDLL {
  public static class Extensions {

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
    public static TVal GetOrElse<TKey, TVal>(this IDictionary<TKey, TVal> self, TKey key, TVal alt) => self.TryGetValue(key, out TVal ret) ? ret : alt;
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
