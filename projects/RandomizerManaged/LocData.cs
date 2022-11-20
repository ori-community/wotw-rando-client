using System;
using System.Collections.Generic;
using System.Globalization;
using System.IO;
using System.Linq;
using RandomizerManaged.Memory;

namespace RandomizerManaged {
  public enum LocType {
    SpiritLight = 0,
    Shard = 1,
    Health = 2,
    Energy = 3,
    Ore = 4,
    ShardSlot = 5,
    Keystone = 6,
    Eyestone = 7,
    Quest = 8,
    Tree = 9,
    Shop = 10,
    Control = 11,
    Unknown = 15
  }

  public class LocData {
    public string Area;
    public string Name;
    public ZoneType Zone;
    public LocType Type;
    public UberStateCondition Condition;
    public Vector2? Position;

    public string FullName { get => $"{Area}.{Name}"; }

    public LocData(ZoneType zone, LocType type) {
      Zone = zone;
      Type = type;
    }

    public static Dictionary<string, ZoneType> NameToZone = new Dictionary<string, ZoneType>() {
      {"Inkwater Marsh", ZoneType.Marsh},
      {"Midnight Burrows", ZoneType.Burrows},
      {"Kwoloks Hollow", ZoneType.Hollow},
      {"Wellspring Glades", ZoneType.Glades},
      {"The Wellspring", ZoneType.Wellspring},
      {"Luma Pools", ZoneType.Pools},
      {"Silent Woods", ZoneType.Woods},
      {"Baurs Reach", ZoneType.Reach},
      {"Mouldwood Depths", ZoneType.Depths},
      {"Windswept Wastes", ZoneType.Wastes},
      {"Windtorn Ruins", ZoneType.Ruins},
      {"Willows End", ZoneType.Willow},
      {"Shop", ZoneType.Shop},
    };

    public LocData(string rawLine) {
      // MarshSpawn.RockHC, Inkwater Marsh, Resource, Life, swampStateGroup, 21786, healthContainerA, 60210, -958, -4313

      var lineParts = rawLine.Split(',').Select(part => part.Trim()).ToArray();
      var nameParts = lineParts[0].Split('.');

      var PositionX = lineParts[9];
      var PositionY = lineParts[10];

      if (PositionX != "0" && PositionY != "0") {
        Position = new Vector2(float.Parse(PositionX, NumberStyles.Float, CultureInfo.InvariantCulture), float.Parse(PositionY, NumberStyles.Float, CultureInfo.InvariantCulture));
      }

      Area = nameParts[0];
      Name = nameParts[1];
      Zone = NameToZone.GetOrElse(lineParts[1], ZoneType.Void, "LocData: NameToZone");
      switch (lineParts[2]) {
        case "SpiritLight":
          Type = LocType.SpiritLight;
          break;
        case "Ability":
          Type = LocType.Tree;
          break;
        case "Shard":
          Type = LocType.Shard;
          break;
        case "Shop":
          Type = LocType.Shop;
          break;
        case "Wisp":
        case "Quest":
          Type = LocType.Quest;
          break;
        case "Resource":
          switch (lineParts[3]) {
            case "Energy":
              Type = LocType.Energy;
              break;
            case "Life":
              Type = LocType.Health;
              break;
            case "ShardSlot":
              Type = LocType.ShardSlot;
              break;
            case "Ore":
              Type = LocType.Ore;
              break;
            case "Keystone":
              Type = LocType.Keystone;
              break;
            case "Eyestone":
              Type = LocType.Eyestone;
              break;
            default:
              Randomizer.Warn("LocData init", $"Unknown resource type {lineParts[3]}");
              Type = LocType.Unknown;
              break;
          }

          break;
        default:
          Randomizer.Warn("LocData init", $"Unknown loc type {lineParts[2]}, {lineParts[3]}");
          Type = LocType.Unknown;
          break;
      }

      var uberStateId = lineParts[7];
      var uberStateValue = lineParts[8];

      var conditionString = uberStateId;
      if (uberStateValue != "") {
        conditionString += ">=" + uberStateValue;
      }

      Condition = new UberStateCondition(lineParts[5].ParseToInt("LocData Uber State Group"), conditionString);
    }

    public static LocData Void = new LocData(ZoneType.Void, LocType.Unknown);

    public string TypeString() {
      switch (Type) {
        case LocType.SpiritLight:
          return "SpiritLight";
        case LocType.Tree:
          return "Tree";
        case LocType.Shard:
          return "Shard";
        case LocType.Shop:
          return "Shop";
        case LocType.Quest:
          return "Quest";
        case LocType.Energy:
          return "Energy";
        case LocType.Health:
          return "Health";
        case LocType.ShardSlot:
          return "Shard Slot";
        case LocType.Ore:
          return "Ore";
        case LocType.Keystone:
          return "Keystone";
        case LocType.Eyestone:
          return "Eyestone";
      }

      return "Unknown";
    }
  }

  public static class LocDataStatic {
    public static void PopulateLocData() {
      foreach (var line in File.ReadAllLines(Randomizer.BasePath + "loc_data.csv").Skip(1)) {
        var data = new LocData(line);
        _byCondition[data.Condition] = data;
        _byName[data.FullName] = data;
      }
    }

    private static Dictionary<UberStateCondition, LocData> _byCondition = new();
    private static Dictionary<string, LocData> _byName = new();

    public static Dictionary<UberStateCondition, LocData> ByCondition {
      get {
        if (_byCondition.Count == 0)
          PopulateLocData();
        return _byCondition;
      }
    }

    public static Dictionary<string, LocData> ByName {
      get {
        if (_byName.Count == 0)
          PopulateLocData();
        return _byName;
      }
    }
  }
}
