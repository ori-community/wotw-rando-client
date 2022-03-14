using System;
using System.Text.RegularExpressions;
using System.Collections.Generic;
using System.IO;
using AutoHotkey.Interop;
using RandoMainDLL.Memory;
using System.Linq;

namespace RandoMainDLL {
  public enum Alignment : int {
    Left = 0,
    Center = 1,
    Right = 2,
    Justify = 3
  }

  public enum HorizontalAnchor : int {
    Left = 0,
    Center = 1,
    Right = 2
  }

  public enum VerticalAnchor : int {
    Top = 0,
    Middle = 1,
    Bottom = 2
  }

  public enum ScreenPosition : int {
    TopLeft = 0,
    TopCenter = 1,
    TopRight = 2,
    MiddleLeft = 3,
    MiddleCenter = 4,
    MiddleRight = 5,
    BottomLeft = 6,
    BottomCenter = 7,
    BottomRight = 8
  }

  public enum ListType {
    None = 0,
    Wheel = 1,
    Hint = 2,
    Debug = 3
  }

  public struct Padding {
    public Padding(float top, float left, float right, float bottom) {
      Top = top;
      Left = left;
      Right = right;
      Bottom = bottom;
    }

    public float Top;
    public float Left;
    public float Right;
    public float Bottom;
  }

  public static class MessageController {
    private const int MAX_PICKUP_LINE_COUNT = 5;
    private static readonly TextMessage INFO = new TextMessage(ReserveID(), new TextMessageDescriptor() { ShowsBox = false });
    // private static readonly TextMessage PICKUP = new TextMessage(ReserveID(), new TextMessageDescriptor() { Muted = false, ShowsBox = true });
    private static readonly Dictionary<ListType, TextMessage> SINGLE_MESSAGES;

    private static List<TextMessage> activePickupTextMessages = new List<TextMessage>();
    private static PickupMessage lastPickup;
    private static Queue<PickupMessage> pickupQueue = new Queue<PickupMessage>();
    private static Queue<PickupMessage> priorityPickupQueue = new Queue<PickupMessage>();
    // private static List<PickupMessage> activePickups = new List<PickupMessage>();
    private static List<TextMessage> activeTimedMessages = new List<TextMessage>();
    private static Dictionary<int, TextMessage> activeIdTimedMessages = new Dictionary<int, TextMessage>();

    static MessageController() {
      INFO.ScreenPosition = ScreenPosition.BottomCenter;
      INFO.Position = new Vector3(0f, 0.5f, 0f);

      SINGLE_MESSAGES = new Dictionary<ListType, TextMessage>() {
        {
          ListType.Wheel,
          new TextMessage(ReserveID()){
            ScreenPosition = ScreenPosition.TopCenter,
            Position = new Vector3(0, -1, 0),
            Type = ListType.Wheel
          }
        },
        {
          ListType.Hint,
          new TextMessage(ReserveID()){
            ScreenPosition = ScreenPosition.TopCenter,
            Position = new Vector3(0, -1, 0),
            Type = ListType.Hint
          }
        },
        {
          ListType.Debug,
          new TextMessage(ReserveID()){
            ScreenPosition = ScreenPosition.TopCenter,
            Position = new Vector3(0, -1, 0),
            Type = ListType.Debug
          }
        },
      };
    }

    public static void SetInfoVisibility(bool open) {
      if (!open)
        INFO.Text = " ";

      INFO.Destroyed = !open;
    }

    public static void SetInfoText(string text) {
      INFO.Text = text == "" ? " " : text;
    }

    public static void Clear(ListType list = ListType.None) {
      switch (list) {
        default:
          activeTimedMessages.Clear();
          pickupQueue.Clear();
          priorityPickupQueue.Clear();
          foreach (var textMessage in activePickupTextMessages) {
            textMessage.Destroyed = true;
          }
          break;
      }
    }

    public static void ShowLastPickup() {
      pickupQueue.Enqueue(new PickupMessage(lastPickup));
    }

    // I hate this.
    private static string prependText = "";
    public static void PrependText(string text) {
      prependText = text;
    }

    public static void ShowPickup(string text, float time = 3f, bool priority = false, bool log = false, Vector2? pickupPosition = null) {
      if (log)
        File.AppendAllText(Randomizer.MessageLog, $"{Regex.Replace(text, "[$#@*]", "")}\n");

      var message = new PickupMessage(text, time, pickupPosition);
      (priority ? priorityPickupQueue : pickupQueue).Enqueue(message);
      lastPickup = message;
    }

    public static void ShowSingleMessage(string text, float time = 3f, ListType list = ListType.Hint, bool log = false) {
      if (!SINGLE_MESSAGES.ContainsKey(list)) {
        Randomizer.Log($"ListType unsupported in ShowSingleMessage: {list}", level: "WARNING");
        return;
      }

      if (log) {
        File.AppendAllText(Randomizer.MessageLog, $"{Regex.Replace(text, "[$#@*]", "")}\n");
      }

      var message = SINGLE_MESSAGES[list];
      message.Text = text;
      message.Time = time;
      message.Destroyed = false;
    }

    public static void ShowTimedMessage(
      string text,
      Vector2? position = null,
      float time = 3f,
      bool muted = true,
      bool showsBox = false,
      Alignment alignment = Alignment.Center,
      HorizontalAnchor horizontal = HorizontalAnchor.Center,
      VerticalAnchor vertical = VerticalAnchor.Middle,
      ScreenPosition screen = ScreenPosition.MiddleCenter,
      ListType list = ListType.None,
      int id = -1,
      bool log = false)
    {
      if (log) {
        File.AppendAllText(Randomizer.MessageLog, $"{Regex.Replace(text, "[$#@*]", "")}\n");
      }

      if (prependText.Length > 0) {
        text = prependText + text;
        prependText = "";
      }

      var desc = new TextMessageDescriptor();
      desc.Muted = muted;
      desc.ShowsBox = showsBox;
      desc.Time = time;
      desc.Text = text;
      if (position.HasValue) {
        desc.Position = new Vector3(position.Value, 0.0f);
        desc.AllowRepositioning = false;
      }

      desc.Alignment = alignment;
      desc.Horizontal = horizontal;
      desc.Vertical = vertical;
      desc.ScreenPosition = screen;
      desc.Type = list;

      switch (list) {
        case ListType.Wheel:
        case ListType.Hint:
        case ListType.Debug: {
            Randomizer.Log($"ListType unsupported in ShowTimedMessage: {list}", level: "WARNING");
            break;
          }
        default: {
            var message = new TextMessage(ReserveID(), desc);
            message.Destroyed = false;
            if (id >= 0)
              activeIdTimedMessages[id] = message;
            else
              activeTimedMessages.Add(message);
            break;
          }
      }
    }

    private static bool HandleMessageTimer(TextMessage message, float dt) {
      if (message.Destroyed)
        return false;

      message.Time -= dt;
      message.TimeActive += dt;
      
      if (message.Time < 0.0f) {
        message.Destroyed = true;
        return true;
      }

      return false;
    }

    private static float Lerp(float a, float b, float t) {
      return a * (1 - t) + b * t;
    }

    public static void Tick() {
      float dt = InterOp.get_fixed_delta_time();

      foreach (var message in SINGLE_MESSAGES)
        HandleMessageTimer(message.Value, dt);

      for (var i = activeTimedMessages.Count - 1; i >= 0; --i) {
        var message = activeTimedMessages[i];
        if (HandleMessageTimer(message, dt)) {
          activeTimedMessages.RemoveAt(i);
        }
      }

      List<int> toRemove = new List<int>();
      foreach (var message in activeIdTimedMessages) {
        if (HandleMessageTimer(message.Value, dt)) {
          toRemove.Add(message.Key);
        }
      }

      foreach (var key in toRemove)
        activeIdTimedMessages.Remove(key);

      var lines = 0;
      for (var i = 0; i < activePickupTextMessages.Count; i++) {
        var targetY = 0.2f + (lines * -0.6f);
        var message = activePickupTextMessages[i];
        
        HandleMessageTimer(message, dt);

        message.Position =
          new Vector3(new Vector2(message.Position.X, message.Position.Y).Lerp(new Vector2(0, targetY),
            dt * 15f * Math.Min(1f, message.TimeActive * 2.0f + 0.1f)), 0f);

        lines += message.Text.Split('\n').Length;

        message.FadeOut = activePickupTextMessages.Count == 1 ? 0.5f : 0.1f;
      }

      activePickupTextMessages.RemoveAll(m => m.Destroyed);

      while (activePickupTextMessages.Count < MAX_PICKUP_LINE_COUNT) {
        if (pickupQueue.Count == 0 && priorityPickupQueue.Count == 0)
          break;

        var pickupMessage = priorityPickupQueue.Count > 0
          ? priorityPickupQueue.First()
          : pickupQueue.First();
        var pickupMessageLines = pickupMessage.Text.Split('\n').Length;

        var displayMessageInGameWorld = false;
        
        if (pickupMessage.Position != null) {
          var distanceToPlayer = InterOp.get_position().DistanceTo(pickupMessage.Position.Value);

          if (distanceToPlayer < 20f) {
            displayMessageInGameWorld = true;
          }
        }
        
        if (lines != 0 && lines + pickupMessageLines > MAX_PICKUP_LINE_COUNT)
          break;

        if (priorityPickupQueue.Count > 0) {
          priorityPickupQueue.Dequeue();
        } else {
          pickupQueue.Dequeue();
        }

        var desc = new TextMessageDescriptor();
        desc.Alignment = Alignment.Center;
        desc.ShowsBox = true;
        desc.AllowRepositioning = true;

        if (displayMessageInGameWorld) {
          var pos = new Vector2(pickupMessage.Position.Value);
          var offset = new Vector3();
          InterOp.Messaging.world_to_ui_position(ref pos);
          InterOp.Messaging.get_screen_position(ScreenPosition.TopCenter, ref offset);
          desc.Position = new Vector3(pos, 0) - offset;
          desc.FadeIn = 0.2f;
        } else {
          desc.Position.Y = 0.2f * (lines + 1) * -0.6f;
        }

        desc.ScreenPosition = ScreenPosition.TopCenter;
        lines += pickupMessageLines;
        desc.Text = pickupMessage.Text;
        desc.Time = pickupMessage.Time;
        desc.Vertical = VerticalAnchor.Top;
        desc.Muted = false;
        desc.Padding = new Padding(0f, 1f, 1f, 0f);

        var textMessage = new TextMessage(ReserveID(), desc) { Destroyed = false };
        activePickupTextMessages.Add(textMessage);
      }
    }

    public static int ReserveID() {
      return InterOp.Messaging.reserve_id();
    }
  }

  public class TextMessageDescriptor {
    public TextMessageDescriptor() { }
    public TextMessageDescriptor(TextMessageDescriptor desc) {
      FadeIn = desc.FadeIn;
      FadeOut = desc.FadeOut;
      Muted = desc.Muted;
      ShowsBox = desc.ShowsBox;

      Type = desc.Type;
      AllowRepositioning = desc.AllowRepositioning;
      Time = desc.Time;
      Text = desc.Text;
      Position = desc.Position;
      Padding = desc.Padding;
      Size = desc.Size;
      Alignment = desc.Alignment;
      Horizontal = desc.Horizontal;
      Vertical = desc.Vertical;
      ScreenPosition = desc.ScreenPosition;
    }

    public float FadeIn = 0.5f;
    public float FadeOut = 0.5f;
    public bool Muted = true;
    public bool ShowsBox = false;

    public ListType Type = ListType.None;
    public bool AllowRepositioning = true;
    public float Time = 3f;
    public float TimeActive = 0f;
    public string Text = "TEST";
    public Vector3 Position = new Vector3();
    public bool UseInGameCoordinates = false;
    public Padding Padding = new Padding(0.25f, 1.0f, 1.0f, 0.25f);
    public float Size = 1f;
    public Alignment Alignment = Alignment.Center;
    public HorizontalAnchor Horizontal = HorizontalAnchor.Center;
    public VerticalAnchor Vertical = VerticalAnchor.Middle;
    public ScreenPosition ScreenPosition = ScreenPosition.MiddleCenter;
  }

  public class PickupMessage {
    public PickupMessage(string text, float time, Vector2? position = null) {
      Text = text;
      Time = time;
      Position = position;
      FadingOut = false;
    }
    public PickupMessage(PickupMessage message) {
      Text = message.Text;
      Time = message.Time;
      Position = message.Position;
      FadingOut = false;
    }

    public bool FadingOut;
    public string Text;
    public float Time;
    public Vector2? Position;
  }

  public class TextMessage {
    public TextMessage(int id, TextMessageDescriptor desc = null) {
      ID = id;
      descriptor = desc != null ? desc : new TextMessageDescriptor();
    }

    ~TextMessage() {
      Destroyed = true;
    }

    public readonly int ID;

    public bool IsDelayed {
      get { return InterOp.Messaging.text_box_is_delayed(ID); }
    }

    public bool Destroyed {
      get { return destroyed; }
      set {
        if (destroyed != value) {
          if (!value) {
            InterOp.Messaging.text_box_create(ID, descriptor.FadeIn, descriptor.FadeOut, descriptor.ShowsBox, !descriptor.Muted);
            InterOp.Messaging.text_box_text(ID, descriptor.Text);
            InterOp.Messaging.text_box_size(ID, descriptor.Size);
            InterOp.Messaging.text_box_alignment(ID, descriptor.Alignment);
            InterOp.Messaging.text_box_anchor(ID, descriptor.Horizontal, descriptor.Vertical);
            InterOp.Messaging.text_box_padding(ID, descriptor.Padding.Top, descriptor.Padding.Left, descriptor.Padding.Right, descriptor.Padding.Bottom);
            updatePosition();
          }
          else
            InterOp.Messaging.text_box_destroy(ID);
        }

        destroyed = value;
      }
    }

    private void updatePosition() {
      Vector3 actual = new Vector3();
      InterOp.Messaging.get_screen_position(descriptor.ScreenPosition, ref actual);
      actual.X += descriptor.Position.X;
      actual.Y += descriptor.Position.Y;
      actual.Z += descriptor.Position.Z;
      InterOp.Messaging.text_box_position(ID, actual.X, actual.Y, actual.Z, descriptor.UseInGameCoordinates);
    }

    public string Text {
      get { return descriptor.Text; }
      set {
        if (descriptor.Text == value)
          return;

        descriptor.Text = value;
        if (!destroyed)
          InterOp.Messaging.text_box_text(ID, descriptor.Text);
      }
    }

    public Vector3 Position {
      get { return descriptor.Position; }
      set {
        descriptor.Position = value;
        if (!destroyed)
          updatePosition();
      }
    }

    public bool UseInGameCoordinates {
      get { return descriptor.UseInGameCoordinates; }
      set {
        descriptor.UseInGameCoordinates = value;
        if (!destroyed)
          updatePosition();
      }
    }

    public Padding Padding {
      get { return descriptor.Padding; }
      set {
        descriptor.Padding = value;
        if (!destroyed)
          InterOp.Messaging.text_box_padding(ID, value.Top, value.Left, value.Right, value.Bottom);
      }
    }

    public float Size {
      get { return descriptor.Size; }
      set {
        descriptor.Size = value;
        if (!destroyed)
          InterOp.Messaging.text_box_size(ID, descriptor.Size);
      }
    }

    public Alignment Alignment {
      get { return descriptor.Alignment; }
      set {
        descriptor.Alignment = value;
        if (!destroyed)
          InterOp.Messaging.text_box_alignment(ID, descriptor.Alignment);
      }
    }

    public HorizontalAnchor Horizontal {
      get { return descriptor.Horizontal; }
      set {
        descriptor.Horizontal = value;
        if (!destroyed)
          InterOp.Messaging.text_box_anchor(ID, descriptor.Horizontal, descriptor.Vertical);
      }
    }

    public VerticalAnchor Vertical {
      get { return descriptor.Vertical; }
      set {
        descriptor.Vertical = value;
        if (!destroyed)
          InterOp.Messaging.text_box_anchor(ID, descriptor.Horizontal, descriptor.Vertical);
      }
    }

    public ScreenPosition ScreenPosition {
      get { return descriptor.ScreenPosition; }
      set {
        descriptor.ScreenPosition = value;
        if (!destroyed)
          updatePosition();
      }
    }

    public ListType Type {
      get { return descriptor.Type; }
      set { descriptor.Type = value; }
    }

    public bool AllowRepositioning {
      get { return descriptor.AllowRepositioning; }
      set { descriptor.AllowRepositioning = value; }
    }

    public float Time {
      get { return descriptor.Time; }
      set { descriptor.Time = value; }
    }
    
    public float TimeActive {
      get { return descriptor.TimeActive; }
      set { descriptor.TimeActive = value; }
    }

    public bool Muted {
      get { return descriptor.Muted; }
      set { descriptor.Muted = value; }
    }

    public bool ShowsBox {
      get { return descriptor.ShowsBox; }
      set { descriptor.ShowsBox = value; }
    }

    public float FadeIn {
      get { return descriptor.FadeIn; }
      set {
        descriptor.FadeIn = value;
        InterOp.Messaging.text_box_fade(ID, value, FadeOut);
      }
    }

    public float FadeOut {
      get { return descriptor.FadeOut; }
      set { 
        descriptor.FadeOut = value;
        InterOp.Messaging.text_box_fade(ID, FadeIn, value);
      }
    }

    public TextMessageDescriptor Descriptor { get { return new TextMessageDescriptor(descriptor); } }

    private TextMessageDescriptor descriptor;
    private bool destroyed = true;
  }
}
