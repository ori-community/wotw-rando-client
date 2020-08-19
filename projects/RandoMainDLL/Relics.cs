using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using Newtonsoft.Json;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public class Relic : BonusItem {
    private readonly UberId zoneId;
    public Relic(ZoneType zone) : base(BonusType.Relic) {
      zoneId = ZoneToId[zone];

    }
    public static Dictionary<ZoneType, UberId> ZoneToId = new Dictionary<ZoneType, UberId>() {
      { ZoneType.Marsh, new UberId(4, 101) },
      { ZoneType.Hollow, new UberId(4, 102) },
      { ZoneType.Glades, new UberId(4, 103) },
      { ZoneType.Wellspring, new UberId(4, 104) },
      { ZoneType.Burrows, new UberId(4, 105) },
      { ZoneType.Woods, new UberId(4, 106) },
      { ZoneType.Reach, new UberId(4, 107) },
      { ZoneType.Pools, new UberId(4, 108) },
      { ZoneType.Depths, new UberId(4, 109) },
      { ZoneType.Woods, new UberId(4, 110) },
      { ZoneType.Wastes, new UberId(4, 111) },
      { ZoneType.Willow, new UberId(4, 113) },
    };
    public static Dictionary<ZoneType, int> Counts = new Dictionary<ZoneType, int>();

    public static void Init() {

    }

  }

}
