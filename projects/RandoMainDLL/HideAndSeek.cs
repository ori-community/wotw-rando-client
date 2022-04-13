using System;
using System.Text.RegularExpressions;
using System.Collections.Generic;
using System.IO;
using AutoHotkey.Interop;
using RandoMainDLL.Memory;
using System.Linq;
using RandoMainDLL.Wheel;
using System.Collections.Concurrent;
using Network;
using System.Runtime.InteropServices;

namespace RandoMainDLL {
  public static class HideAndSeek {
    public static BlockingCollection<Packet> Queue = new BlockingCollection<Packet>();

    private static readonly string COOLDOWN_TIMELINE = "assets/timeline/cooldown.json";
    private static readonly string CATCHING_TIMELINE = "assets/timeline/catching.json";
    private static readonly string CAUGHT_TIMELINE = "assets/timeline/caught.json";
    private static readonly Dictionary<string, SeekerWorldInfo> seekers = new Dictionary<string, SeekerWorldInfo>();
    private static readonly HashSet<long> seekerIds = new HashSet<long>();

    private static InterOp.Ability.ability_override AbilityDelegate = null;
    private static GCHandle AbilityDelegateHandle;

    public static bool IsPlaying { get { return Multiplayer.GameType == MultiverseInfoMessage.Types.GameHandlerType.HideAndSeek; } }

    private static bool isSeeker = false;
    public static bool IsSeeker {
      get { return isSeeker; }
      private set {
        if (value == isSeeker)
          return;

        isSeeker = value;
        if (isSeeker) {
          if (AbilityDelegate == null) {
            AbilityDelegate = new InterOp.Ability.ability_override(UseSeekerAbility);
            AbilityDelegateHandle = GCHandle.Alloc(AbilityDelegate, GCHandleType.Normal);
          }
          InterOp.Ability.register_ability_override(AbilityType.Blaze, Marshal.GetFunctionPointerForDelegate(AbilityDelegate));
        }
        else {
          if (AbilityDelegate != null) {
            AbilityDelegateHandle.Free();
            AbilityDelegate = null;
          }
          InterOp.Ability.clear_ability_override(AbilityType.Blaze);
        }
      }
    }

    private static void preloadAnimations() {
      InterOp.Animation.timeline_preload(COOLDOWN_TIMELINE);
      InterOp.Animation.timeline_preload(CATCHING_TIMELINE);
      InterOp.Animation.timeline_preload(CAUGHT_TIMELINE);
    }

    private static Memory.Vector2 freezePosition;
    private static float freezeTimer = 0f;
    public static void Update(float delta) {
      if (!IsPlaying)
        return;

      HandlePackets();
      if (freezeTimer > 0f) {
        freezeTimer -= delta;
        InterOp.Player.set_position(freezePosition);
        InterOp.Player.set_velocity(new Memory.Vector2());
      }

      cooldown -= delta;
    }

    private static void playerCaught(string id) {
      if (id == Multiplayer.Id || id == null) {
        freezeTimer = 2f;
        freezePosition = InterOp.Player.get_position();
      }

      // TODO: Create caught timeline (Player = id)
      bool isLocal = id == Multiplayer.Id || id == null;
      string attach_obj = isLocal ? sein_head : id + "_world";
      var timeline = InterOp.Animation.timeline_create(CAUGHT_TIMELINE);
      InterOp.Animation.timeline_attach(timeline, attach_obj);
      InterOp.Animation.timeline_start(timeline);
    }

    private static float cooldown = 0f;
    private static void UseSeekerAbility(AbilityType type) {
      if (cooldown > 0f)
        return;

      // Should never use the default unless we are debugging.
      SeekerWorldInfo world = null;
      var hasWorld = Multiplayer.Id != null && seekers.TryGetValue(Multiplayer.Id, out world);
      var cooldownTime = hasWorld ? world.Cooldown : 2f;
      var radius = hasWorld ? world.Radius : 16f;

      startCooldownAnimation(Multiplayer.Id);
      showSeekerAbilityAnimation(InterOp.Player.get_position(), radius);
      WebSocketClient.SendPlayerUseCatch();
      cooldown = cooldownTime;
    }

    private static void showSeekerAbilityAnimation(Memory.Vector2 position, float radius) {
      // Width of circle from the middle of the rim divided by the width of the texture.
      var spriteFraction = 420f / 512f;
      radius /= spriteFraction;

      var timeline = InterOp.Animation.timeline_create(CATCHING_TIMELINE);
      InterOp.Animation.timeline_position(timeline, new Vector3(position, 0));
      InterOp.Animation.timeline_scale(timeline, new Vector3(radius, radius, 1));
      InterOp.Animation.timeline_start(timeline);
    }

    static string sein_head = "SeinCharacter/ori3D/mirrorHolder/rigHolder/oriRig/Skeleton_GRP/root_JNT/pelvis_JNT/" +
      "spine_joint01_JNT/spine_joint02_JNT/spine_joint03_JNT/spine_joint04_JNT/headC_joint01_JNT";
    private static void startCooldownAnimation(string player) {
      bool isLocal = player == Multiplayer.Id || player == null;
      string attach_obj = isLocal ? sein_head : player + "_world";
      var timeline = InterOp.Animation.timeline_create(COOLDOWN_TIMELINE);
      InterOp.Animation.timeline_attach(timeline, attach_obj);
      InterOp.Animation.timeline_start(timeline);
    }

    private static void HandlePackets() {
      while (Queue.TryTake(out var packet)) {
        switch (packet.Id) {
          case Packet.Types.PacketID.PlayerUsedCatchingAbility:
            var usedCatch = PlayerUsedCatchingAbilityMessage.Parser.ParseFrom(packet.Packet_);
            var position = InterOp.Multiplayer.get_player_position(usedCatch.Id);
            showSeekerAbilityAnimation(position, seekers[usedCatch.Id].Radius);
            startCooldownAnimation(usedCatch.Id);
            break;
          case Packet.Types.PacketID.PlayerCaught:
            var caught = PlayerCaughtMessage.Parser.ParseFrom(packet.Packet_);
            playerCaught(caught.Id);
            break;
          default:
            break;
        }
      }
    }

    public static void ClearInfo() {
      IsSeeker = false;
      seekers.Clear();
      seekerIds.Clear();
    }

    public static void ParseHandlerInfo(HideAndSeekGameHandlerClientInfo info) {
      preloadAnimations();
      foreach (var world in info.SeekerWorlds) {
        if (world.Id == Multiplayer.WorldId)
          IsSeeker = true;

        var players = Multiplayer.GetPlayersFromWorld(world.Id);
        foreach (var player in players) {
          seekers.Add(player.User.Id, world);
          InterOp.Multiplayer.set_player_icon(player.User.Id, InterOp.Multiplayer.PlayerIcon.Kii);
        }
      }
    }
  }
}
