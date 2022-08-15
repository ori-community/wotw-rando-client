using System;
using System.Runtime.InteropServices;

namespace RandoMainDLL.Memory {
  public enum UberStateType : byte {
    BooleanUberState,
    ByteUberState,
    IntUberState,
    SerializedBooleanUberState,
    SerializedFloatUberState,
    SerializedIntUberState,
    SerializedByteUberState,
    CountUberState,
    SavePedestalUberState,
    ConditionUberState,
    PlayerUberStateDescriptor
  }

  public enum UberStateBaseType : byte {
    Boolean,
    Byte,
    Int,
    Float,
    Other,
  }

  public static class Extensions {
    public static UberStateBaseType ToBaseType(this UberStateType type) {
      return type switch {
        UberStateType.BooleanUberState or UberStateType.SerializedBooleanUberState or UberStateType.SavePedestalUberState => UberStateBaseType.Boolean,
        UberStateType.ByteUberState or UberStateType.SerializedByteUberState => UberStateBaseType.Byte,
        UberStateType.IntUberState or UberStateType.SerializedIntUberState => UberStateBaseType.Int,
        UberStateType.SerializedFloatUberState => UberStateBaseType.Float,
        _ => UberStateBaseType.Other,
      };
    }
  }

  public static class UberStateDefaults {
    public static UberState cleanseWellspringQuestUberState = new UberState() { Name = "cleanseWellspringQuestUberState", ID = 34641, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SerializedIntUberState };
    public static UberState finishedWatermillEscape = new UberState() { Name = "finishedWatermillEscape", ID = 12379, GroupName = "waterMillStateGroupDescriptor", GroupID = 37858, Type = UberStateType.SerializedBooleanUberState };
    public static UberState watermillEscapeState = new UberState() { Name = "watermillEscapeState", ID = 10720, GroupName = "waterMillStateGroupDescriptor", GroupID = 37858, Type = UberStateType.SerializedIntUberState };
    public static UberState nightCrawlerChaseStarted = new UberState() { Name = "nightCrawlerChaseStarted", ID = 30656, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState };
    public static UberState nightCrawlerDefeated = new UberState() { Name = "nightCrawlerDefeated", ID = 40322, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SerializedBooleanUberState };
    public static UberState findToadQuestUberState = new UberState() { Name = "findToadQuestUberState", ID = 48794, GroupName = "questUberStateGroup", GroupID = 14019, Type = UberStateType.SerializedIntUberState };
    public static UberState wispRewardPickupKwolok = new UberState() { Name = "wispRewardPickup", ID = 59806, GroupName = "kwoloksCavernThroneRoomGroup", GroupID = 46462, Type = UberStateType.SerializedBooleanUberState };
    public static UberState petrifiedOwlBossState = new UberState() { Name = "petrifiedOwlBossState", ID = 47278, GroupName = "willowsEndGroup", GroupID = 16155, Type = UberStateType.SerializedByteUberState };
    public static UberState kwolokDropRace = new UberState() { Name = "kwolokDropRace", ID = 25545, GroupName = "raceGroup", GroupID = 44964, Type = UberStateType.SerializedIntUberState };
    public static UberState wellspringRace = new UberState() { Name = "wellspringRace", ID = 11512, GroupName = "raceGroup", GroupID = 44964, Type = UberStateType.SerializedIntUberState };
    public static UberState silentWoodlandRace = new UberState() { Name = "silentWoodlandRace", ID = 22703, GroupName = "raceGroup", GroupID = 44964, Type = UberStateType.SerializedIntUberState };
    public static UberState baursReachWindTunnelRace = new UberState() { Name = "baursReachWindTunnelRace", ID = 23661, GroupName = "raceGroup", GroupID = 44964, Type = UberStateType.SerializedIntUberState };
    public static UberState mouldwoodDepthsRace = new UberState() { Name = "mouldwoodDepthsRace", ID = 28552, GroupName = "raceGroup", GroupID = 44964, Type = UberStateType.SerializedIntUberState };
    public static UberState desertRace = new UberState() { Name = "desertRace", ID = 30767, GroupName = "raceGroup", GroupID = 44964, Type = UberStateType.SerializedIntUberState };
    public static UberState inkwaterMarshRace = new UberState() { Name = "inkwaterMarshRace", ID = 45951, GroupName = "raceGroup", GroupID = 44964, Type = UberStateType.SerializedIntUberState };
    public static UberState lumaPoolsRace = new UberState() { Name = "lumaPoolsRace", ID = 54686, GroupName = "raceGroup", GroupID = 44964, Type = UberStateType.SerializedIntUberState };
    public static UberState wispRewardPickupBaur = new UberState() { Name = "wispRewardPickup", ID = 25522, GroupName = "baursReachGroup", GroupID = 28895, Type = UberStateType.SerializedBooleanUberState };
    public static UberState wispRewardPickupMouldwood = new UberState() { Name = "bossReward", ID = 63291, GroupName = "mouldwoodDepthsGroup", GroupID = 18793, Type = UberStateType.SerializedBooleanUberState };
    public static UberState wispRewardPickupLagoon = new UberState() { Name = "bossReward", ID = 49747, GroupName = "lagoonStateGroup", GroupID = 945, Type = UberStateType.SerializedBooleanUberState };
    public static UberState wispRewardPickupWindtorn = new UberState() { Name = "wispRewardPickup", ID = 22102, GroupName = "windtornRuinsGroup", GroupID = 10289, Type = UberStateType.SerializedBooleanUberState };
    public static UberState elevatorCompleteState = new UberState() { Name = "elevatorCompleteState", ID = 23584, GroupName = "corruptedPeakGroup", GroupID = 36153, Type = UberStateType.SerializedBooleanUberState };
    public static UberState vineAClear = new UberState() { Name = "vineAClear", ID = 42976, GroupName = "willowsEndGroup", GroupID = 16155, Type = UberStateType.SerializedBooleanUberState };
    public static UberState vineBClear = new UberState() { Name = "vineBClear", ID = 54940, GroupName = "willowsEndGroup", GroupID = 16155, Type = UberStateType.SerializedBooleanUberState };
    public static UberState vineCClear = new UberState() { Name = "vineCClear", ID = 24290, GroupName = "willowsEndGroup", GroupID = 16155, Type = UberStateType.SerializedBooleanUberState };
    public static UberState vineDClear = new UberState() { Name = "vineDClear", ID = 28478, GroupName = "willowsEndGroup", GroupID = 16155, Type = UberStateType.SerializedBooleanUberState };
    public static UberState vineEClear = new UberState() { Name = "vineEClear", ID = 3588, GroupName = "willowsEndGroup", GroupID = 16155, Type = UberStateType.SerializedBooleanUberState };
    public static UberState vineFClear = new UberState() { Name = "vineFClear", ID = 65277, GroupName = "willowsEndGroup", GroupID = 16155, Type = UberStateType.SerializedBooleanUberState };
    public static UberState vineGClear = new UberState() { Name = "vineGClear", ID = 41488, GroupName = "willowsEndGroup", GroupID = 16155, Type = UberStateType.SerializedBooleanUberState };
    public static UberState vineHClear = new UberState() { Name = "vineHClear", ID = 60752, GroupName = "willowsEndGroup", GroupID = 16155, Type = UberStateType.SerializedBooleanUberState };
    public static UberState petrifiedForestNewTransitionOriVignettePlayed = new UberState() { Name = "petrifiedForestNewTransitionOriVignettePlayed", ID = 46980, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SerializedBooleanUberState };
    public static UberState hornBugBossState = new UberState() { Name = "hornBugBossState", ID = 48534, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SerializedIntUberState };
    public static UberState energyContainersCounter = new UberState() { Name = "energyContainersCounter", ID = 41928, GroupName = "achievementsGroup", GroupID = 33399, Type = UberStateType.SerializedIntUberState };
    public static UberState healthContainersCounter = new UberState() { Name = "healthContainersCounter", ID = 52378, GroupName = "achievementsGroup", GroupID = 33399, Type = UberStateType.SerializedIntUberState };
    public static UberState kwolokBossState = new UberState() { Name = "kwolokBossState", ID = 58403, GroupName = "lagoonStateGroup", GroupID = 945, Type = UberStateType.SerializedByteUberState };
    public static UberState spiderBossState = new UberState() { Name = "spiderBossState", ID = 26713, GroupName = "mouldwoodDepthsGroup", GroupID = 18793, Type = UberStateType.SerializedIntUberState };
    public static UberState laserShooterBossState = new UberState() { Name = "laserShooterBossState", ID = 12971, GroupName = "willowsEndGroup", GroupID = 16155, Type = UberStateType.SerializedIntUberState };
    public static UberState savePedestalMidnightBurrows = new UberState() { Name = "howlOriginEntranceSavePedestal", ID = 42531, GroupName = "howlsOriginGroup", GroupID = 24922, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalInkwaterMarsh = new UberState() { Name = "savePedestalSwampIntroTop", ID = 10185, GroupName = "swampStateGroup", GroupID = 21786, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalHowlsDen = new UberState() { Name = "savePedestal", ID = 61594, GroupName = "howlsDenGRoup", GroupID = 11666, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalLumaPoolsA = new UberState() { Name = "savePedestalUberState", ID = 58183, GroupName = "lagoonStateGroup", GroupID = 945, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalLumaPoolsB = new UberState() { Name = "savePedestalUberState", ID = 1370, GroupName = "lagoonStateGroup", GroupID = 945, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalWellspring = new UberState() { Name = "savePedestalUberState", ID = 18181, GroupName = "wellspringGroupDescriptor", GroupID = 53632, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalBaursReach = new UberState() { Name = "savePedestalUberState", ID = 54235, GroupName = "baursReachGroup", GroupID = 28895, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalKwoloksHollow = new UberState() { Name = "savePedestal", ID = 26601, GroupName = "kwolokGroupDescriptor", GroupID = 937, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalMouldwood = new UberState() { Name = "savePedestalUberState", ID = 38871, GroupName = "mouldwoodDepthsGroup", GroupID = 18793, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalWillowsEnd = new UberState() { Name = "savePedestalUberState", ID = 41465, GroupName = "willowsEndGroup", GroupID = 16155, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalWillowsEndShriek = new UberState() { Name = "savePedestalUberState", ID = 50867, GroupName = "willowsEndGroup", GroupID = 16155, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalSilentWoodsA = new UberState() { Name = "savePedestalUberState", ID = 7071, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalSilentWoodsB = new UberState() { Name = "savePedestalA", ID = 1965, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalWindsweptWastesA = new UberState() { Name = "savePedestalUberState", ID = 10029, GroupName = "_petrifiedForestGroup", GroupID = 58674, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalWindsweptWastesB = new UberState() { Name = "savePedestalUberState", ID = 49994, GroupName = "windsweptWastesGroupDescriptor", GroupID = 20120, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalWindtornRuinsA = new UberState() { Name = "savePedestalUberState", ID = 41398, GroupName = "windsweptWastesGroupDescriptor", GroupID = 20120, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedestalWindtornRuinsB = new UberState() { Name = "savePedestalUberState", ID = 4928, GroupName = "windtornRuinsGroup", GroupID = 10289, Type = UberStateType.SavePedestalUberState };
    public static UberState savePedistalGladesTown = new UberState() { Name = "savePedestal", ID = 42096, GroupName = "hubUberStateGroup", GroupID = 42178, Type = UberStateType.SavePedestalUberState };
  }

  public class UberId {
    public UberId(int groupID, int id) {
      GroupID = groupID;
      ID = id;
    }

    public int GroupID;
    public int ID;

    public static UberId FromLong(long num) => new UberId((int)((num >> 32) & 0xffffffff), (int)(num & 0xffffffff));
    public override int GetHashCode() => ID.GetHashCode() + GroupID.GetHashCode();
    public override bool Equals(object obj) => obj is UberId other ? (ID == other.ID && GroupID == other.GroupID) : false;
    public override string ToString() => $"{GroupID}|{ID}";
  }

  [StructLayout(LayoutKind.Sequential, Pack = 1)]
  public struct UberStateDef {
    public int ID;
    public int GroupID;
    public IntPtr Name;
    public IntPtr GroupName;
    public UberStateType Type;
  }

  public static class UberGet {
    public static UberValue value(int groupId, int id) => value(new UberId(groupId, id));
    public static UberValue value(UberId id) => id.GetValue();
    public static double AsDouble(int groupId, int id) => AsDouble(new UberId(groupId, id));
    public static byte Byte(int groupId, int id) => value(new UberId(groupId, id)).Byte;
    public static byte Byte(UberId id) => value(id).Byte;
    public static int Int(int groupId, int id) => value(new UberId(groupId, id)).Int;
    public static int Int(UberId id) => value(id).Int;
    public static float Float(int groupId, int id) => value(new UberId(groupId, id)).Float;
    public static float Float(UberId id) => value(id).Float;
    public static bool Bool(int groupId, int id) => value(new UberId(groupId, id)).Bool;
    public static bool Bool(UberId id) => value(id).Bool;
    public static double AsDouble(UberId id) {
      if(id.GroupID == 3 && id.ID >= 100) switch (id.ID-100) {
          case (int)ResourceType.Health:
            return InterOp.Player.get_max_health();
          case (int)ResourceType.Energy:
            return InterOp.Player.get_max_energy();
          case (int)ResourceType.Ore:
            return InterOp.Player.get_ore();
          case (int)ResourceType.Keystone:
            return InterOp.Player.get_keystones();
          case (int)ResourceType.ShardSlot:
            return InterOp.Shard.get_shard_slots();
          case 5: // health
            return InterOp.Player.get_health();
          case 6: // energy
            return InterOp.Player.get_energy();
          case 7: // exp
            return InterOp.Player.get_experience();
          default:
            break;
      }
      return InterOp.UberState.get_uber_state_value(id.GroupID, id.ID);
    }
  }
  public static class UberSet {
    public static void Bool(UberId id, bool val) => Raw(id, Convert.ToDouble(val));
    public static void Bool(int groupId, int id, bool val) => Raw(groupId, id, Convert.ToDouble(val));
    public static void Int(UberId id, int val) => Raw(id, Convert.ToDouble(val));
    public static void Int(int groupId, int id, int val) => Raw(groupId, id, Convert.ToDouble(val));
    public static void Float(UberId id, float val) => Raw(id, Convert.ToDouble(val));
    public static void Float(int groupId, int id, float val) => Raw(groupId, id, Convert.ToDouble(val));
    public static void Byte(UberId id, byte val) => Raw(id, Convert.ToDouble(val));
    public static void Byte(int groupId, int id, byte val) => Raw(groupId, id, Convert.ToDouble(val));
    public static void Raw(int groupId, int id, double val) => Raw(new UberId(groupId, id), val);
    public static void Raw(UberId id, double val) {
      if (id.GroupID == 3 && id.ID >= 100) switch (id.ID - 100) {
          case (int)ResourceType.Health:
            InterOp.Player.set_max_health(Convert.ToInt32(val));
            return;
          case (int)ResourceType.Energy:
            InterOp.Player.set_max_energy(Convert.ToInt32(val));
            return;
          case (int)ResourceType.Ore:
            InterOp.Player.set_ore(Convert.ToInt32(val));
            return;
          case (int)ResourceType.Keystone:
            InterOp.Player.set_keystones(Convert.ToInt32(val));
            return;
          case (int)ResourceType.ShardSlot:
            InterOp.Shard.set_shard_slots(Convert.ToInt32(val));
            return;
          case 5: // health
            InterOp.Player.set_health(Convert.ToInt32(val));
            return;
          case 6: // energy
            InterOp.Player.set_energy(Convert.ToInt32(val));
            return;
          case 7: // exp
            InterOp.Player.set_experience(Convert.ToInt32(val));
            return;
          default:
            break;
        }

      InterOp.UberState.set_uber_state_value(id.GroupID, id.ID, val);
    }
  }
  public static class UberInc {
    public static void Toggle(UberId id) => UberSet.Bool(id, UberGet.value(id).Bool);
    public static void Toggle(int groupId, int id) => Toggle(new UberId(groupId, id));
    public static void Int(UberId id, int val = 1) => UberSet.Int(id, UberGet.value(id).Int + val);
    public static void Int(int groupId, int id, int val = 1) => Int(new UberId(groupId, id), val);
    public static void Float(UberId id, float val = 1) => UberSet.Float(id, UberGet.value(id).Float + val);
    public static void Float(int groupId, int id, float val = 1) => Float(new UberId(groupId, id), val);
    public static void Byte(UberId id, byte val = 1) => UberSet.Byte(id, (byte)(UberGet.value(id).Byte + val));
    public static void Byte(int groupId, int id, byte val = 1) => Byte(new UberId(groupId, id), val);
  }

  public class UberState {
    public UberStateType Type;
    public int ID;
    public string Name;
    public int GroupID;
    public string GroupName;
    public UberValue Value;

    public double ValueAsDouble() => Value.AsDouble(Type);
    public int ValueAsInt() => Value.AsInt(Type);
    public UberId GetUberId() => new UberId(GroupID, ID);
    public UberState Clone() => new UberState() { Type = Type, ID = ID, Name = Name, GroupID = GroupID, GroupName = GroupName, Value = Value };

    public bool IsObjectType => Type == UberStateType.SavePedestalUberState || Type == UberStateType.PlayerUberStateDescriptor;
    public bool IsBoolType => Type.ToBaseType() == UberStateBaseType.Boolean;
    public bool IsIntType => Type.ToBaseType() == UberStateBaseType.Int;
    public bool IsFloatType => Type.ToBaseType() == UberStateBaseType.Float;
    public bool IsByteType => Type.ToBaseType() == UberStateBaseType.Byte;

    public string FmtVal() {
      return Value.FmtVal(Type);
    }
    public override string ToString() {
      return Type.ToBaseType() switch {
        UberStateBaseType.Boolean => $"{Name}[{ID}]({GroupName}[{GroupID}]) = {Value.Bool}",
        UberStateBaseType.Byte => $"{Name}[{ID}]({GroupName}[{GroupID}]) = {Value.Byte}",
        UberStateBaseType.Int => $"{Name}[{ID}]({GroupName}[{GroupID}]) = {Value.Int}",
        UberStateBaseType.Float => $"{Name}[{ID}]({GroupName}[{GroupID}]) = {Value.Float}",
        _ => $"{Name}[{ID}]({GroupName}[{GroupID}]) = {Value}",
      };
    }
  }

  [StructLayout(LayoutKind.Explicit, Size = 4, Pack = 1)]
  public struct UberValue {

    public UberValue(UberStateType t, double value) {
      Byte = 0;
      Bool = false;
      Int = 0;
      Float = 0f;

      switch (t.ToBaseType()) {
        case UberStateBaseType.Boolean:
          Bool = !(Math.Abs(value) < 0.001f);
          return;
        case UberStateBaseType.Byte:
          Byte = (byte)value;
          return;
        case UberStateBaseType.Int:
          Int = (int)value;
          return;
        default:
          Float = (float)value;
          return;
      }
    }
    public UberValue(float f) {
      Byte = 0;
      Bool = false;
      Int = 0;
      Float = f;
    }
    public UberValue(int i) {
      Byte = 0;
      Bool = false;
      Float = 0;
      Int = i;
    }
    public UberValue(byte b) {
      Float = 0;
      Bool = false;
      Int = 0;
      Byte = b;
    }
    public UberValue(bool b) {
      Float = 0;
      Int = 0;
      Byte = 0;
      Bool = b;
    }

    [FieldOffset(0)]
    public float Float;
    [FieldOffset(0)]
    public int Int;
    [FieldOffset(0)]
    public byte Byte;
    [FieldOffset(0)]
    public bool Bool;

    public string FmtVal(UberStateType Type) {
      return Type.ToBaseType() switch {
        UberStateBaseType.Boolean => $"{Bool}",
        UberStateBaseType.Byte => $"{Byte}",
        UberStateBaseType.Int => $"{Int}",
        UberStateBaseType.Float => $"{Float}",
        _ => $"{Type}-{ToString()}",
      };
    }

    public override string ToString() => $"{Int}|{Float}";
  }
}
