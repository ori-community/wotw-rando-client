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

    private static readonly string COOLDOWN_ANIMATION = "assets/animations/cooldown.json";
    private static readonly string CATCHING_ANIMATION = "assets/animations/catching.json";
    private static readonly string FIREWORK_ANIMATION = "assets/animations/firework.json";
    private static readonly float COOLDOWN_FADE = 0.2f;
    private static float COOLDOWN_SCALE = 0.3f;
    private static float COOLDOWN_HEIGHT = 0.8f;
    private static float COOLDOWN_LOCAL_HEIGHT = 0.6f;
    private static readonly float FIREWORK_HEIGHT = 1.5f;

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
      InterOp.Sprite.sprite_preload(COOLDOWN_ANIMATION);
      InterOp.Sprite.sprite_preload(CATCHING_ANIMATION);
      InterOp.Sprite.sprite_preload(FIREWORK_ANIMATION);
    }

    private class CooldownAnimation {
      public int ID;
      public string Player;
      public float Time;
      public float ElapsedTime;
    }

    private static List<CooldownAnimation> cooldownAnimations = new List<CooldownAnimation>();

    private static bool updateCooldownAnimation(CooldownAnimation animation, float dt) {
      animation.ElapsedTime += dt;
      var isLocal = animation.Player == Multiplayer.Id || animation.Player == null;
      Memory.Vector2 position = isLocal
        ? new Memory.Vector2(InterOp.Player.get_head_position())
        : InterOp.Multiplayer.get_player_position(animation.Player);

      position.Y += isLocal ? COOLDOWN_LOCAL_HEIGHT : COOLDOWN_HEIGHT;
      InterOp.Sprite.sprite_set_position(animation.ID, position.X, position.Y, 0f);
      if (animation.ElapsedTime < COOLDOWN_FADE)
        InterOp.Sprite.sprite_set_color_modulate(animation.ID, 1f, 1f, 1f, animation.ElapsedTime / COOLDOWN_FADE); // Fade In
      else if ((animation.Time - animation.ElapsedTime) < COOLDOWN_FADE)
        InterOp.Sprite.sprite_set_color_modulate(animation.ID, 1f, 1f, 1f, (animation.Time - animation.ElapsedTime) / COOLDOWN_FADE); // Fade out
      else
        InterOp.Sprite.sprite_set_color_modulate(animation.ID, 1f, 1f, 1f, 1f);

      var finished = animation.ElapsedTime > animation.Time;
      if (finished)
        InterOp.Sprite.sprite_destroy(animation.ID);

      return finished;
    }

    private class Firework {
      public int ID;
      public Memory.Vector2 Position;
      public float Scale;
      public float Angle;
      public float Time;
      public RGBA Color;

      public Firework Create() {
        ID = InterOp.Sprite.sprite_load(FIREWORK_ANIMATION, Position.X, Position.Y, 0f, Scale, Scale, 1f, Angle);
        InterOp.Sprite.sprite_set_color_modulate(ID, Color.R, Color.G, Color.B, Color.A);
        return this;
      }
    }

    private class CaughtAnimation {
      public string Player;
      public int Textbox;
      public float Time;
      public float HideTextTime;
      public float ElapsedTime;
      public List<Firework> Fireworks;
    }

    private static List<CaughtAnimation> caughtAnimations = new List<CaughtAnimation>();

    private static bool updateCaughtAnimation(CaughtAnimation animation, float dt) {
      animation.ElapsedTime += dt;
      Memory.Vector2 position = animation.Player == Multiplayer.Id || animation.Player == null
        ? InterOp.Player.get_position()
        : InterOp.Multiplayer.get_player_position(animation.Player);

      InterOp.Messaging.text_box_position(animation.Textbox, position.X, position.Y + FIREWORK_HEIGHT, 0f, true);
      foreach (var firework in animation.Fireworks) {
        if (!InterOp.Sprite.sprite_is_destroyed(firework.ID) && animation.ElapsedTime > firework.Time) {
          InterOp.Sprite.sprite_set_active(firework.ID, true);
          InterOp.Sprite.sprite_set_position(firework.ID, position.X + firework.Position.X, position.Y + firework.Position.Y, 0f);
        }
      }

      if (animation.ElapsedTime > animation.HideTextTime)
        InterOp.Messaging.text_box_visibility(animation.Textbox, false);

      if (animation.ElapsedTime > animation.Time) {
        InterOp.Messaging.text_box_destroy(animation.Textbox);
        return true;
      }

      return false;
    }

    private static Memory.Vector2 freezePosition;
    private static float freezeTimer = 0f;
    public static void Update(float delta) {
      if (!IsPlaying) {
        if (caughtAnimations.Count > 0 || cooldownAnimations.Count > 0)
          ClearAnimations();
      
        return;
      }

      HandlePackets();
      if (freezeTimer > 0f) {
        freezeTimer -= delta;
        InterOp.Player.set_position(freezePosition);
        InterOp.Player.set_velocity(new Memory.Vector2());
      }

      cooldown -= delta;
      for (var i = caughtAnimations.Count() - 1; i >= 0 && i < caughtAnimations.Count(); --i) {
        if (updateCaughtAnimation(caughtAnimations[i], delta))
          caughtAnimations.RemoveAt(i);
      }

      for (var i = cooldownAnimations.Count() - 1; i >= 0 && i < cooldownAnimations.Count(); --i) {
        if (updateCooldownAnimation(cooldownAnimations[i], delta))
          cooldownAnimations.RemoveAt(i);
      }
    }

    public static void ClearAnimations() {
      foreach (var animation in caughtAnimations) {
        InterOp.Messaging.text_box_destroy(animation.Textbox);
        foreach (var firework in animation.Fireworks)
          if (!InterOp.Sprite.sprite_is_destroyed(firework.ID))
            InterOp.Sprite.sprite_destroy(firework.ID);
      }

      caughtAnimations.Clear();

      foreach (var animation in cooldownAnimations)
        InterOp.Sprite.sprite_destroy(animation.ID);

      cooldownAnimations.Clear();
    }

    private static void playerCaught(string id) {
      if (id == Multiplayer.Id || id == null) {
        freezeTimer = 2f;
        freezePosition = InterOp.Player.get_position();
      }

      var animation = new CaughtAnimation {
        Player = id,
        Textbox = InterOp.Messaging.reserve_id(),
        Time = 1.6f,
        HideTextTime = 1.2f,
        ElapsedTime = 0f
      };

      InterOp.Messaging.text_box_create(animation.Textbox, 0.2f, 0.2f, false, false);
      InterOp.Messaging.text_box_text(animation.Textbox, "Caught");
      InterOp.Messaging.text_box_color(animation.Textbox, 240, 240, 30, 255);
      InterOp.Messaging.text_box_size(animation.Textbox, 5f);
      Memory.Vector2 position = Multiplayer.Id == animation.Player
        ? InterOp.Player.get_position()
        : InterOp.Multiplayer.get_player_position(animation.Player);
      InterOp.Messaging.text_box_position(animation.Textbox, position.X, position.Y + FIREWORK_HEIGHT, -0.1f, true);

      animation.Fireworks = new List<Firework>() {
        new Firework {
          Position = new Memory.Vector2(-1.3f, FIREWORK_HEIGHT - 0.5f),
          Scale = 0.4f,
          Angle = 30,
          Time = 0.0f,
          Color = new RGBA(1f, .1f, .1f)
        }.Create(),
        new Firework {
          Position = new Memory.Vector2(1.3f, FIREWORK_HEIGHT),
          Scale = 0.8f,
          Angle = -20,
          Time = 0.3f,
          Color = new RGBA(.1f, 1f, .7f)
        }.Create(),
        new Firework {
          Position = new Memory.Vector2(-1f, FIREWORK_HEIGHT + 0.5f),
          Scale = 0.6f,
          Angle = 10,
          Time = 0.6f,
          Color = new RGBA(1f, .7f, .1f)
        }.Create()
      };

      caughtAnimations.Add(animation);
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
      var spriteFraction = 920f / 1256f;
      radius /= spriteFraction;
      var bounds = InterOp.Sprite.sprite_bounds();
      var id = InterOp.Sprite.sprite_load(CATCHING_ANIMATION, position.X, position.Y, 0f, radius / bounds.X, radius / bounds.Y, 1f, 0f);
      InterOp.Sprite.sprite_set_color_modulate(id, 1f, .1f, .1f, 1f);
      InterOp.Sprite.sprite_set_active(id, true);
    }

    private static void startCooldownAnimation(string player) {
      bool isLocal = player == Multiplayer.Id || player == null;
      Memory.Vector2 position = isLocal
        ? new Memory.Vector2(InterOp.Player.get_head_position())
        : InterOp.Multiplayer.get_player_position(player);

      var t = InterOp.Player.get_position();
      position.Y += isLocal ? COOLDOWN_LOCAL_HEIGHT : COOLDOWN_HEIGHT;
      var animation = new CooldownAnimation {
        Player = player,
        ID = InterOp.Sprite.sprite_load(COOLDOWN_ANIMATION, position.X, position.Y, -0.01f, COOLDOWN_SCALE, COOLDOWN_SCALE, 1f, 0f),
        Time = player != null ? seekers[player].Cooldown : 2f,
        ElapsedTime = 0f
      };

      if (animation.ID == -1)
        return;

      InterOp.Sprite.sprite_set_color_modulate(animation.ID, 1f, 1f, 1f, 0f);
      InterOp.Sprite.sprite_set_active(animation.ID, true);
      cooldownAnimations.Add(animation);
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
