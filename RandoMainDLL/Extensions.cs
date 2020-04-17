using System;
using System.ComponentModel;
using System.Linq;

namespace RandoMainDLL {
  public static class Extensions {
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
