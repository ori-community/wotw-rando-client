using System;
using System.Runtime.InteropServices;

namespace RandoMainDLL.Memory {
  [StructLayout(LayoutKind.Explicit, Size = 8, Pack = 1)]
  public struct Vector2 {
    [FieldOffset(0)]
    public float X;
    [FieldOffset(4)]
    public float Y;

    public Vector2(float x, float y) {
      X = x;
      Y = y;
    }

    public Vector2(Vector2 copyFrom) {
      X = copyFrom.X;
      Y = copyFrom.Y;
    }

    public static Vector2 operator -(Vector2 one, Vector2 two) => new Vector2() { X = one.X - two.X, Y = one.Y - two.Y };
    public static Vector2 operator +(Vector2 one, Vector2 two) => new Vector2() { X = one.X + two.X, Y = one.Y + two.Y };
    public static Vector2 operator *(Vector2 one, Vector2 two) => new Vector2() { X = one.X * two.X, Y = one.Y * two.Y };
    public static Vector2 operator *(Vector2 one, int two) => new Vector2() { X = one.X * two, Y = one.Y * two };
    public static Vector2 operator *(int two, Vector2 one) => new Vector2() { X = one.X * two, Y = one.Y * two };
    public static float operator !(Vector2 one) => (float)Math.Sqrt(one.X * one.X + one.Y * one.Y);

    public float DistanceTo(Vector2 t) {
      return Math.Abs((this - t).Length);
    }

    public Vector2 Lerp(Vector2 to, float t) {
      return new Vector2(X + (t * (to.X - X)), Y + (t * (to.Y - Y)));
    }

    public float Length {
      get {
        return (float) Math.Sqrt(Math.Pow(X, 2) + Math.Pow(Y, 2));
      }
    }

    public override string ToString() => $"{X:0.00}, {Y:0.00}";
  }
}
