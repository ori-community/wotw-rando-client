using System;
using System.Text.RegularExpressions;
using System.Collections.Generic;
using System.IO;
using AutoHotkey.Interop;
using RandoMainDLL.Memory;
using System.Linq;
using RandoMainDLL.Wheel;

namespace RandoMainDLL {
  public static class HideAndSeek {

    private static readonly string FIREWORK_ANIMATION = "assets/animations/firework.json";
    private static readonly float FIREWORK_HEIGHT = 1.5f;

    public static bool IsPlaying { get; set; }

    private class Firework {
      public int ID;
      public Vector2 Position;
      public float Scale;
      public float Angle;
      public float Time;
      public RGB Color;

      public Firework Create() {
        ID = InterOp.Sprite.sprite_load(FIREWORK_ANIMATION, Position.X, Position.Y, 0f, Scale, Scale, 1f, Angle);
        InterOp.Sprite.sprite_set_color_modulate(ID, Color.R, Color.G, Color.B, 1.0f);
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

    private static List<CaughtAnimation> animations = new List<CaughtAnimation>();

    private static bool updateAnimation(CaughtAnimation animation, float dt) {
      animation.ElapsedTime += dt;
      Vector2 position = animation.Player == Multiplayer.Id || animation.Player == null
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

    private static Vector2 freezePosition;
    private static float freezeTimer = 0f;
    public static void Update(float delta) {
      IsPlaying = true;
      if (!IsPlaying) {
        if (animations.Count > 0)
          ClearAnimations();

        return;
      }

      if (freezeTimer > 0f) {
        freezeTimer -= delta;
        InterOp.Player.set_position(freezePosition);
        InterOp.Player.set_velocity(new Vector2());
      }

      cooldown -= delta;
      for (var i = animations.Count() - 1; i >= 0 && i < animations.Count(); --i) {
        if (updateAnimation(animations[i], delta))
          animations.RemoveAt(i);
      }
    }

    public static void ClearAnimations() {
      foreach (var animation in animations) {
        InterOp.Messaging.text_box_destroy(animation.Textbox);
        foreach (var firework in animation.Fireworks)
          if (!InterOp.Sprite.sprite_is_destroyed(firework.ID))
            InterOp.Sprite.sprite_destroy(firework.ID);
      }

      animations.Clear();
    }

    public static void PlayerCaught(string id) {
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
      Vector2 position = Multiplayer.Id == animation.Player
        ? InterOp.Player.get_position()
        : InterOp.Multiplayer.get_player_position(animation.Player);
      InterOp.Messaging.text_box_position(animation.Textbox, position.X, position.Y + FIREWORK_HEIGHT, -0.1f, true);

      animation.Fireworks = new List<Firework>() {
        new Firework {
          Position = new Vector2(-1.3f, FIREWORK_HEIGHT - 0.5f),
          Scale = 0.4f,
          Angle = 30,
          Time = 0.0f,
          Color = new RGB{ R = 1.0f, G = 0.1f, B = 0.1f }
        }.Create(),
        new Firework {
          Position = new Vector2(1.3f, FIREWORK_HEIGHT),
          Scale = 0.8f,
          Angle = -20,
          Time = 0.3f,
          Color = new RGB{ R = 0.1f, G = 1.0f, B = 0.7f }
        }.Create(),
        new Firework {
          Position = new Vector2(-1f, FIREWORK_HEIGHT + 0.5f),
          Scale = 0.6f,
          Angle = 10,
          Time = 0.6f,
          Color = new RGB{ R = 1.0f, G = 0.7f, B = 0.1f }
        }.Create()
      };

      animations.Add(animation);
    }

    public static void SetSeeker(bool value) {
      if (value) {
        InterOp.Ability.register_ability_override(AbilityType.Blaze, new InterOp.Ability.ability_override(UseSeekerAbility));
      }
      else
        InterOp.Ability.clear_ability_override(AbilityType.Blaze);
    }

    private static readonly float seekerCooldown = 2.0f;
    private static float cooldown = 0f;
    private static void UseSeekerAbility(AbilityType type) {
      if (cooldown > 0f)
        return;

      // TODO: Spawn animation.
      // TODO: Send server message.
      cooldown = seekerCooldown;
    }
  }
}
