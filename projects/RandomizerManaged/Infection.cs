using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Network;
using RandomizerManaged.Memory;
using Vector2 = RandomizerManaged.Memory.Vector2;

namespace RandomizerManaged {
  public static class Infection {
    public static BlockingCollection<Packet> Queue = new BlockingCollection<Packet>();

    private static readonly string COOLDOWN_TIMELINE = "assets/timelines/cooldown.json";
    private static readonly string CATCHING_TIMELINE = "assets/timelines/catching.json";
    private static readonly string CAUGHT_TIMELINE = "assets/timelines/caught.json";
    private static readonly Dictionary<string, InfectedWorldInfo> infectedPlayers = new();
    private static readonly HashSet<long> infectedPlayerIds = new();

    private static InterOp.Ability.ability_override AbilityDelegate = null;
    private static GCHandle AbilityDelegateHandle;

    public static bool IsPlaying {
      get { return Multiplayer.GameType == MultiverseInfoMessage.Types.GameHandlerType.Infection; }
    }

    private static bool _isInfected = false;

    public static bool IsInfected {
      get { return _isInfected; }
      private set {
        if (value == _isInfected)
          return;

        _isInfected = value;
        if (_isInfected) {
          if (AbilityDelegate == null) {
            AbilityDelegate = UseInfectAbility;
            AbilityDelegateHandle = GCHandle.Alloc(AbilityDelegate, GCHandleType.Normal);
          }

          InterOp.Ability.register_ability_override(AbilityType.Blaze,
            Marshal.GetFunctionPointerForDelegate(AbilityDelegate));
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

    private static Vector2 freezePosition;
    private static float freezeTimer = 0f;

    public static void FixedUpdate(float delta) {
      if (!IsPlaying)
        return;

      HandlePackets();
      if (freezeTimer > 0f) {
        freezeTimer -= delta;
        InterOp.Player.set_position(freezePosition);
        InterOp.Player.set_velocity(new Vector2());
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
      string attach_obj = isLocal ? "seinCharacter" : id + "_world";
      var timeline = InterOp.Animation.timeline_create(CAUGHT_TIMELINE);
      InterOp.Animation.timeline_attach(timeline, attach_obj);
      InterOp.Animation.timeline_start(timeline);
    }

    private static float cooldown = 0f;

    private static void UseInfectAbility(AbilityType type) {
      if (cooldown > 0f)
        return;

      // Should never use the default unless we are debugging.
      InfectedWorldInfo world = null;
      var hasWorld = Multiplayer.Id != null && infectedPlayers.TryGetValue(Multiplayer.Id, out world);
      var cooldownTime = hasWorld ? world.Cooldown : 2f;
      var radius = hasWorld ? world.Radius : 16f;

      startCooldownAnimation(Multiplayer.Id, cooldownTime);
      showSeekerAbilityAnimation(InterOp.Player.get_position(), radius);
      WebSocketClient.SendPlayerUseCatch();
      cooldown = cooldownTime;
    }

    private static void showSeekerAbilityAnimation(Vector2 position, float radius) {
      // Width of circle from the middle of the rim divided by the width of the texture.
      var spriteFraction = 420f / 512f;
      radius /= spriteFraction;

      var timeline = InterOp.Animation.timeline_create(CATCHING_TIMELINE);
      InterOp.Animation.timeline_position(timeline, new Vector3(position, 0));
      InterOp.Animation.timeline_local_scale(timeline, new Vector3(radius * 2, radius * 2, 1));
      InterOp.Animation.timeline_start(timeline);
    }

    static string sein_head = "seinCharacter/ori3D/mirrorHolder/rigHolder/oriRig/Skeleton_GRP/root_JNT/pelvis_JNT/" +
                              "spine_joint01_JNT/spine_joint02_JNT/spine_joint03_JNT/spine_joint04_JNT/headC_joint01_JNT";

    private static void startCooldownAnimation(string player, float duration) {
      bool isLocal = player == Multiplayer.Id || player == null;
      string attach_obj = isLocal ? sein_head : player + "_world";
      var timeline = InterOp.Animation.timeline_create(COOLDOWN_TIMELINE);
      InterOp.Animation.timeline_attach(timeline, attach_obj);
      InterOp.Animation.timeline_local_position(timeline, new Vector3(0, isLocal ? 0.7f : 1, 0));
      InterOp.Animation.timeline_local_scale(timeline, new Vector3(1.5f, 1.5f, 1));
      InterOp.Animation.timeline_variable_float(timeline, "cooldown_duration", duration);
      InterOp.Animation.timeline_start(timeline);
    }

    private static void HandlePackets() {
      while (Queue.TryTake(out var packet)) {
        switch (packet.Id) {
          case Packet.Types.PacketID.PlayerUsedCatchingAbility:
            var usedCatch = PlayerUsedCatchingAbilityMessage.Parser.ParseFrom(packet.Packet_);
            var position = InterOp.Multiplayer.get_player_position(usedCatch.Id);
            showSeekerAbilityAnimation(position, infectedPlayers[usedCatch.Id].Radius);
            InfectedWorldInfo world = null;
            var hasWorld = infectedPlayers.TryGetValue(usedCatch.Id, out world);
            var cooldownTime = hasWorld ? world.Cooldown : 2f;
            startCooldownAnimation(usedCatch.Id, cooldownTime);
            break;
          case Packet.Types.PacketID.PlayerCaught:
            var caught = PlayerCaughtMessage.Parser.ParseFrom(packet.Packet_);
            playerCaught(caught.Id);
            break;
        }
      }
    }

    public static void ClearInfo() {
      IsInfected = false;
      infectedPlayers.Clear();
      infectedPlayerIds.Clear();
    }

    public static void ParseHandlerInfo(InfectionGameHandlerClientInfo info) {
      preloadAnimations();
      foreach (var world in info.InfectedWorlds) {
        if (world.Id == Multiplayer.WorldId)
          IsInfected = true;

        var players = Multiplayer.GetPlayersFromWorld(world.Id);
        foreach (var player in players) {
          infectedPlayers.Add(player.User.Id, world);
          InterOp.Multiplayer.set_player_icon(player.User.Id, InterOp.Multiplayer.PlayerIcon.Kii);
        }
      }
    }
  }
}
