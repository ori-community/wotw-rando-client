using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Security.Cryptography.X509Certificates;
using Newtonsoft.Json;
using RandomizerManaged.Memory;

namespace RandomizerManaged {
  public class Relic : Pickup {

    private readonly UberId zoneId;
    public readonly ZoneType Zone;
    private readonly string flavorName;
    public Relic(ZoneType zone, string fn)  {
      zoneId = ZoneToId[zone];
      flavorName = fn;
      Zone = zone;
    }
    public static Relic Build(ZoneType zone, string flavorRelicName = "") {
      var ret = new Relic(zone, flavorRelicName);
      Counts[zone] += 1;
      return ret;
    }
    public override void Grant(bool skipBase = false, Vector2? position = null) {
      UberInc.Byte(zoneId);
      base.Grant(skipBase);
    }
    public override string DisplayName { get => flavorName == "" ? $"@{Zone} Relic@" : flavorName; }

    public static HashSet<ZoneType> RelicZones { get => Counts.Where(a => a.Value > 0).Select(a => a.Key).ToHashSet(); }

    public static ZoneType CurrentZone { get => InterOp.Map.get_player_area().toZone(); }

    public static String MapMessage(ZoneType zone) {
      var rzs = RelicZones;
      if (rzs.Count == 0)
        return "";
      if (rzs.Contains(zone)) {
        if (UberGet.value(ZoneToId[zone]).Byte >= Counts[zone])
          return " $(Relic found)$";
        else
          return " (Relic not found)";
      }
      return " (Relicless)";
    }

    public static String RelicMessage() {
      var rzs = RelicZones;
      if (rzs.Count == 0)
        return "";
      int cur = 0;
      int tot = 0;
      var s = String.Join(", ", rzs.Select(z => {
        int totz = Counts[z];
        int curz = UberGet.value(ZoneToId[z]).Byte;
        cur += curz;
        tot += totz;
        var w = "";
        if (curz >= totz)
          w = "@";
        else if (CurrentZone == z)
          w = "#";
        return $"{w}{z}{w}";
      }));
      var c = cur == tot ? "$" : "";
      return $"{c}Relics ({cur}/{tot}):{c} {s}";
    }

    public static int RelicCount(bool total) {
      return RelicZones.Aggregate(0, (i, z) => {
        return i + (total ? Counts[z] : UberGet.value(ZoneToId[z]).Byte);
      });
    }

    public static bool Valid { get => !SeedController.Flags.Contains(Flag.RELICS) || RelicZones.All(z => Counts[z] <= UberGet.value(ZoneToId[z]).Byte); }

    public override PickupType Type => PickupType.Relic;

    public static Dictionary<ZoneType, UberId> ZoneToId = new Dictionary<ZoneType, UberId>() {
      { ZoneType.Marsh, new UberId(4, 100) },
      { ZoneType.Hollow, new UberId(4, 101) },
      { ZoneType.Glades, new UberId(4, 102) },
      { ZoneType.Wellspring, new UberId(4, 103) },
      { ZoneType.Burrows, new UberId(4, 104) },
      { ZoneType.Woods, new UberId(4, 105) },
      { ZoneType.Reach, new UberId(4, 106) },
      { ZoneType.Pools, new UberId(4, 107) },
      { ZoneType.Depths, new UberId(4, 108) },
      { ZoneType.Wastes, new UberId(4, 109) },
      { ZoneType.Willow, new UberId(4, 111) },
    };
    public static Dictionary<ZoneType, int> Counts = new Dictionary<ZoneType, int>();

    public static void Reset() {
      Counts = ZoneToId.Select(k => k.Key).ToDictionary(a => a, a => 0);
    }
  }
  public class LegacyRelic : BonusItem {
    private readonly UberId zoneId;
    public readonly ZoneType Zone;
    public LegacyRelic(ZoneType zone) : base(BonusType.Relic) {
      zoneId = Relic.ZoneToId[zone];
      Zone = zone;
    }
    public static LegacyRelic Build(ZoneType zone) {
      var ret = new LegacyRelic(zone);
      Relic.Counts[zone] += 1;
      return ret;
    }
    public override void Grant(bool skipBase = false, Vector2? position = null) {
      UberInc.Byte(zoneId);
      base.Grant(skipBase);
    }
    public override string DisplayName { get => $"@{Zone} Relic@"; }
  }
}
