using System;
using System.Collections.Generic;
using System.Linq;
using RandoMainDLL.Memory;

namespace RandoMainDLL {
  public enum EnemyType {
    Mantis,
    ShockMantis,
    Slime,
    SpikeSlime,
    DropSlime,
    BombSlime,
    ShellSlime,
    SneezeSlug,
    SpiderBat,
    Hornbug,
    Lizard,
    Sandworm,
    Waterworm,
    SmallSkeeto,
    Skeeto,
    MortarSlug,
    Fish,
    Bee,
    Crab,
    SpinningCrab,
    Tentacle,
    Spider,
    Balloon,
    Miner,
    ShieldMiner,
    Elemental,
    Baneling,
    Scourge,
    Misc,
    Unknown
  }

  public static class StatsTracking {
    public static ZoneType CurrentZone {
      get {
        try {
          return InterOp.Map.get_player_area().toZone();
        }
        catch (Exception e) {
          Randomizer.Error("Hints.CurrentZone", e, false);
          return ZoneType.Void;
        }
      }
    }

    public static bool ShouldLog(UberId id) {
      return id.GroupID != 14;
    }

    public static UberId TimeState(this ZoneType zone) => new UberId(14, (int)zone);
    public static UberId DeathState(this ZoneType zone) => new UberId(14, 20 + (int)zone);
    public static UberId PickupState(this ZoneType zone) => new UberId(14, 40 + (int)zone);
    public static UberId TotalPickupsState(this ZoneType zone) => new UberId(14, 60 + (int)zone);

    public static UberId Time = new UberId(14, 100);
    public static UberId Deaths = new UberId(14, 101);
    public static UberId Drought = new UberId(14, 102);
    public static UberId MaxDrought = new UberId(14, 103);
    public static UberId TimeSinceLastSave = new UberId(14, 104);
    public static UberId TimeLostToDeaths = new UberId(14, 105);
    public static UberId WarpsUsed = new UberId(14, 106);
    public static UberId BestPPMTime = new UberId(14, 107);
    public static UberId BestPPMCount = new UberId(14, 108);
    public static UberId TotalPickupCount = new UberId(14, 109);
    public static UberId GameFinished = new UberId(34543, 11226);

    public static void OnNewGame() {
      if(SavedUberStates.Count > 0) {
        Randomizer.Log($"stats.OnNewGame: Clearing {SavedUberStates.Count} stats", false, "DEBUG");
        SavedUberStates.Clear();
      }
      foreach (var uid in SaveThroughDeath) {
        var val = UberGet.AsDouble(uid);
        if (val > 0) {
          Randomizer.Debug($"stats.OnNewGame: {uid} needed reset: was {val}", false);
          UberSet.Raw(uid, 0);
        }
      }

      UberSet.Int(TotalPickupCount, SeedController.Total);
      foreach (ZoneType z in Enum.GetValues(typeof(ZoneType))) {
        UberSet.Int(z.TotalPickupsState(), SeedController.CountByZone[z]);
      }
    }
    public static void FixedUpdate(GameState gs, float delta) {
      if (gs == GameState.Game && !UberGet.Bool(GameFinished)) {
        UberInc.Float(CurrentZone.TimeState(), delta);
        UberInc.Float(Time, delta);
        UberInc.Float(TimeSinceLastSave, delta);
        UberInc.Float(Drought, delta);
      } 
    }
    public static Dictionary<UberId, double> SavedUberStates = new Dictionary<UberId, double>();
    public static void OnLoad(bool deathLoad) {
      if(deathLoad) {
        foreach (var kp in SavedUberStates) UberSet.Raw(kp.Key, kp.Value);
      }
      SavedUberStates.Clear();
    }
    public static void OnSave(bool deathSave) {
      if(deathSave) {
        UberInc.Float(TimeLostToDeaths, UberGet.Float(TimeSinceLastSave));
        SavedUberStates[TimeLostToDeaths] = UberGet.AsDouble(TimeLostToDeaths);
      } else {
        SavedUberStates.Clear();
      }
      UberSet.Float(TimeSinceLastSave, 0);
    }
    public static void OnPickup(LocData loc) {
      var fc = ++SaveController.FoundCount;
      UberInc.Byte(loc.Zone.PickupState());
      var thisDrought = UberGet.Float(Drought);
      if (thisDrought > UberGet.Float(MaxDrought))
        UberSet.Float(MaxDrought, thisDrought);
      UberSet.Float(Drought, 0f);

      if(fc >= 20) { // only start updating peak PPM once the game has been going for a bit
        var time = UberGet.Float(Time);
        var currentPPM = fc / (double)time; // march, march!
        if(currentPPM > UberGet.Int(BestPPMCount) / (UberGet.AsDouble(BestPPMTime) + 1)) {
          UberSet.Int(BestPPMCount, fc);
          UberSet.Float(BestPPMTime, time);
        }
      }
    }
    public static void OnDeath(string perpetrator, DamageType dt) {
      UberInc.Byte(CurrentZone.DeathState());
      UberInc.Int(Deaths);
      SavedUberStates = SaveThroughDeath.ToDictionary(a => a, a => UberGet.AsDouble(a));
    }

    public static void OnKill(string name, DamageType dt) {
      name = name.Replace("(Clone)", "");
      var et = EnemyFromName(name);
      if (et == EnemyType.Unknown && Randomizer.Dev)
        Randomizer.Log($"Unknown Enemy {name}");
      UberInc.Int(10, 10); // enemies killed
      switch(et) {
        case EnemyType.Miner:
        case EnemyType.ShieldMiner:
          UberInc.Int(10, 40);
          break;
        case EnemyType.Skeeto:
        case EnemyType.SmallSkeeto:
        case EnemyType.Bee:
          UberInc.Int(10, 41);
          break;
        case EnemyType.Tentacle:
          UberInc.Int(10, 42);
          break;
        case EnemyType.DropSlime:
        case EnemyType.ShellSlime:
        case EnemyType.Slime:
        case EnemyType.SpikeSlime:
          UberInc.Int(10, 43);
          break;
        case EnemyType.Fish:
        case EnemyType.Waterworm:
          UberInc.Int(10, 44);
          break;
        case EnemyType.Balloon:
        case EnemyType.Baneling:
          UberInc.Int(10, 45);
          break;
        case EnemyType.Scourge: // is both a flier and explosive
          UberInc.Int(10, 41);
          UberInc.Int(10, 45);
          break;
        case EnemyType.BombSlime: // is both a slime and explosive
          UberInc.Int(10, 43);
          UberInc.Int(10, 45);
          break;

        default:
          break;
      }
      switch(dt) {
        case DamageType.Sword:
          UberInc.Int(10, 11);
          break;
        case DamageType.Hammer:
          UberInc.Int(10, 12);
          break;
        case DamageType.Bow:
          UberInc.Int(10, 13);
          break;
        case DamageType.SpiritSpear:
          UberInc.Int(10, 14);
          break;
        case DamageType.SpiritSentry:
          UberInc.Int(10, 15);
          break;
        case DamageType.Blaze:
          UberInc.Int(10, 16);
          break;
        case DamageType.Grenade:
          UberInc.Int(10, 17);
          break;
        case DamageType.Heat:
          UberInc.Int(10, 18);
          break;
        case DamageType.Chakram:
          UberInc.Int(10, 19);
          break;
        case DamageType.ChargeJump:
          UberInc.Int(10, 20);
          break;
        case DamageType.Glow:
          UberInc.Int(10, 21);
          break;
        case DamageType.Projectile:
          UberInc.Int(10, 22);
          break;
        case DamageType.Water:
          UberInc.Int(10, 23);
          break;
        default:
          break;

      }
    } 
    public static EnemyType EnemyFromName(string name) {
      switch(name) {
        case "mantisEntity":
        case "multiJumpMantis":
          return EnemyType.Mantis;
        case "slugEntity":
        case "acidSlugEntity":
          return EnemyType.Slime;
        case "spikeSlugEntity":
          return EnemyType.SpikeSlime;
        case "spiderBatEntity":
          return EnemyType.SpiderBat;
        case "hornBugEntity":
        case "hornBugBossEntity":
          return EnemyType.Hornbug;
        case "sandWormEntity":
          return EnemyType.Sandworm;
        case "skeetoEntity":
          return EnemyType.Skeeto;
        case "sneezeSlugEntity":
          return EnemyType.SneezeSlug;
        case "shellSlugEntity":
          return EnemyType.ShellSlime;
        case "bombSlugEntity":
          return EnemyType.DropSlime;
        case "dropSlugEntity":
          return EnemyType.BombSlime;
        case "mortarEntity":
        case "iceMortarEntity":
          return EnemyType.MortarSlug;
        case "piranhaEntity":
          return EnemyType.Fish;
        case "turtleLizardEntity":
          return EnemyType.Lizard;
        case "waterWormEntity":
          return EnemyType.Waterworm;
        case "smallSkeetoEntity":
          return EnemyType.SmallSkeeto;
        case "multiJumpShockwaveMantis":
        case "shockwaveMantis":
          return EnemyType.ShockMantis;
        case "scaredySkeetoEntity":
          return EnemyType.Bee;
        case "spinningCrabEntity":
          return EnemyType.SpinningCrab;
        case "tentacleVariationEntity":
        case "tentacleEntity":
          return EnemyType.Tentacle;
        case "crabEntity":
          return EnemyType.Crab;
        case "spiderlingEntity":
        case "spiderBossEntity":
          return EnemyType.Spider;
        case "gasballEntity":
          return EnemyType.Balloon;
        case "corruptPickaxeShieldMinerEntity":
        case "icyFeralPickaxeShieldMinerEntity":
          return EnemyType.ShieldMiner;
        case "corruptShockwaveMinerEntity":
        case "corruptPickaxeGrenadeMinerEntity":
        case "corruptGrenadeMinerEntity":
        case "feralPickaxeGrenadeMinerEntity":
        case "feralPickaxeMinerEntity":
        case "icyFeralPickaxeMinerEntity":
        case "feralUnarmedMinerEntity":
          return EnemyType.Miner;
        case "laserShooterEntity":
        case "projectileShooterEntity":
          return EnemyType.Elemental;
        case "rollingTurtleEntity":
          return EnemyType.Baneling;
        case "kamikazeSkeetoEntity":
          return EnemyType.Scourge;
        case "kwolok":
        case "petrifiedOwlBossEntity":
        case "laserShooterMinibossEntity":
          return EnemyType.Misc;
        default:
          return EnemyType.Unknown;
      }
    }
    public static HashSet<UberId> SaveThroughDeath = new HashSet<UberId>();
    static StatsTracking() {
      foreach(ZoneType z in Enum.GetValues(typeof(ZoneType))) {
        SaveThroughDeath.Add(z.TimeState());
        SaveThroughDeath.Add(z.DeathState());
      }
      SaveThroughDeath.Add(Time);
      SaveThroughDeath.Add(Deaths);
      SaveThroughDeath.Add(Drought);
      SaveThroughDeath.Add(TimeLostToDeaths);

    }
  }
}
