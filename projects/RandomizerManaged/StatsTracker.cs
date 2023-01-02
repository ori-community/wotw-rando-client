using System;
using System.Collections.Generic;
using System.Linq;
using RandomizerManaged.Memory;

namespace RandomizerManaged {
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
    public static void OnPickup(LocData loc) {
      ++SaveController.FoundCount;
      InterOp.notify_pickup_collected(loc.Zone, loc.FullName);
    }

    /**
     * Still used for bingo tracking........
     */
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
  }
}
