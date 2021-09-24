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

  public static class MessageController {
    private static readonly int MAX_PICKUP_COUNT = 5;
    private static readonly TextMessage INFO = new TextMessage(ReserveID(), new TextMessageDescriptor() { ShowsBox = false });
    private static readonly TextMessage PICKUP = new TextMessage(ReserveID(), new TextMessageDescriptor() { Muted = false, ShowsBox = true });
    private static readonly Dictionary<ListType, TextMessage> SINGLE_MESSAGES;

    private static PickupMessage lastPickup;
    private static List<PickupMessage> pickupQueue = new List<PickupMessage>();
    private static List<PickupMessage> priorityPickupQueue = new List<PickupMessage>();
    private static List<PickupMessage> activePickups = new List<PickupMessage>();
    private static List<TextMessage> activeTimedMessages = new List<TextMessage>();
    private static Dictionary<int, TextMessage> activeIdTimedMessages = new Dictionary<int, TextMessage>();

    static MessageController() {
      // TODO: Put these in good positions.
      PICKUP.ScreenPosition = ScreenPosition.TopCenter;
      PICKUP.Position = new Vector3(0f, 0.2f, 0f);
      PICKUP.Vertical = VerticalAnchor.Top;

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
          activePickups.Clear();
          pickupQueue.Clear();
          break;
      }
    }

    public static void ShowLastPickup() {
      pickupQueue.Add(new PickupMessage(lastPickup));
    }

    // I hate this.
    private static string prependText = "";
    public static void PrependText(string text) {
      prependText = text;
    }

    public static void ShowPickup(string text, float time = 3f, bool priority = false, bool log = false) {
      if (log)
        File.AppendAllText(Randomizer.MessageLog, $"{Regex.Replace(text, "[$#@*]", "")}\n");

      var message = new PickupMessage(text, time);
      (priority ? priorityPickupQueue : pickupQueue).Add(message);
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

    private static bool HandleMessage(TextMessage message, float dt) {
      if (message.Destroyed)
        return false;

      message.Time -= dt;
      if (message.Time < 0.0f) {
        message.Destroyed = true;
        return true;
      }

      return false;
    }

    public static void Tick() {
      float dt = InterOp.get_fixed_delta_time();

      foreach (var message in SINGLE_MESSAGES)
        HandleMessage(message.Value, dt);

      for (var i = activeTimedMessages.Count - 1; i >= 0; --i) {
        var message = activeTimedMessages[i];
        if (HandleMessage(message, dt)) {
          activeTimedMessages.RemoveAt(i);
        }
      }

      List<int> toRemove = new List<int>();
      foreach (var message in activeIdTimedMessages) {
        if (HandleMessage(message.Value, dt)) {
          toRemove.Add(message.Key);
        }
      }

      foreach (var key in toRemove)
        activeIdTimedMessages.Remove(key);

      if (priorityPickupQueue.Count > 0) {
        var message =  priorityPickupQueue.First();
        if (!PICKUP.IsDelayed)
          message.Time -= dt;

        PICKUP.Destroyed = message.Time < 0.0;
        if (PICKUP.Destroyed)
          priorityPickupQueue.RemoveAt(0);

        if (priorityPickupQueue.Count > 0) {
          // Since we refresh the message add the fadeout time to the message timer.
          // TODO: Add an is_delayed interop instead on the Time -= dt.
          message = priorityPickupQueue.First();
          PICKUP.Text = message.Text;
          PICKUP.Destroyed = false;
        }
      }
      else if (activePickups.Count != 0 || pickupQueue.Count != 0) {
        // Add new messages.
        for (int i = activePickups.Count; i < MAX_PICKUP_COUNT && pickupQueue.Count() > 0; ++i) {
          activePickups.Add(pickupQueue.ElementAt(0));
          pickupQueue.RemoveAt(0);
        }

        // Reorder old messages.
        toRemove.Clear();
        activePickups.Sort((a, b) => {
          var sign = Math.Sign(a.Time - b.Time);
          if (sign != 0)
            return sign;

          return a.Text.CompareTo(b.Text);
        });

        // Display messges
        string text = "";
        var stop = -1;
        for (var i = 0; i < activePickups.Count; ++i) {
          var message = activePickups[i];
          if (!PICKUP.IsDelayed)
            message.Time -= dt;

          if (message.Time >= 0.0f)
            text += (text != "" ? $"\n{message.Text}" : message.Text);
          else
            stop = i;
        }

        // Remove messages
        if (stop > -1)
          activePickups.RemoveRange(0, stop + 1);

        PICKUP.Destroyed = text == "";
        PICKUP.Text = text;
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
    public string Text = "TEST";
    public Vector3 Position = new Vector3();
    public float Size = 1f;
    public Alignment Alignment = Alignment.Center;
    public HorizontalAnchor Horizontal = HorizontalAnchor.Center;
    public VerticalAnchor Vertical = VerticalAnchor.Middle;
    public ScreenPosition ScreenPosition = ScreenPosition.MiddleCenter;
  }

  public class PickupMessage {
    public PickupMessage(string text, float time) {
      Text = text;
      Time = time;
      FadingOut = false;
    }
    public PickupMessage(PickupMessage message) {
      Text = message.Text;
      Time = message.Time;
      FadingOut = false;
    }

    public bool FadingOut;
    public string Text;
    public float Time;
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
          if (destroyed) {
            InterOp.Messaging.text_box_create(ID, descriptor.FadeIn, descriptor.FadeOut, descriptor.ShowsBox, !descriptor.Muted);
            InterOp.Messaging.text_box_text(ID, descriptor.Text);
            InterOp.Messaging.text_box_size(ID, descriptor.Size);
            InterOp.Messaging.text_box_alignment(ID, descriptor.Alignment);
            InterOp.Messaging.text_box_anchor(ID, descriptor.Horizontal, descriptor.Vertical);
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
      InterOp.Messaging.text_box_position(ID, actual.X, actual.Y, actual.Z);
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
      set { descriptor.FadeIn = value; }
    }

    public float FadeOut {
      get { return descriptor.FadeOut; }
      set { descriptor.FadeOut = value; }
    }

    public TextMessageDescriptor Descriptor { get { return new TextMessageDescriptor(descriptor); } }

    private TextMessageDescriptor descriptor;
    private bool destroyed = true;
  }
}
