﻿using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Security.Cryptography.X509Certificates;
using Newtonsoft.Json;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public class Relic : BonusItem {
    private readonly UberId zoneId;
    public readonly ZoneType Zone;
    public Relic(ZoneType zone) : base(BonusType.Relic) {
      zoneId = ZoneToId[zone];
      Zone = zone;
    }
    public static Relic Build(ZoneType zone) {
      var ret = new Relic(zone);
      Counts[zone] += 1;
      return ret;
    }
    public override void Grant(bool skipBase = false) {
      var state = zoneId.State();
      state.Value.Byte += 1;
      state.Write(state.Value);
      base.Grant(skipBase);
    }
    public static HashSet<ZoneType> RelicZones { get => Counts.Where(a => a.Value > 0).Select(a => a.Key).ToHashSet(); }

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
        return curz >= totz ? $"#{z}#" : z.ToString();
      }));
      var c = cur == tot ? "$" : "";
      return $"\n{c}Relics ({cur}/{tot}):{c} {s}";
    }

    public static bool Valid { get => SeedController.flags.Contains(Flag.RELIC_HUNT) && RelicZones.All(z => Counts[z] <= UberGet.value(ZoneToId[z]).Byte); }
    public override string ToString() => $"#{Zone} Relic#";    

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

}
