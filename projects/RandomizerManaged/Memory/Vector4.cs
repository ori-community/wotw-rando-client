using System.Runtime.InteropServices;

namespace RandomizerManaged.Memory {
  [StructLayout(LayoutKind.Explicit, Size = 16, Pack = 1)]
  public struct Vector4 {
    public Vector4(string cordinates) {
      string[] cords = cordinates.Split(new char[] { ',' }, System.StringSplitOptions.RemoveEmptyEntries);
      if (cords.Length == 4) {
        float.TryParse(cords[0], out var temp);
        X = temp;
        float.TryParse(cords[1], out temp);
        Y = temp;
        float.TryParse(cords[2], out temp);
        W = temp;
        float.TryParse(cords[3], out temp);
        H = temp;
      }
      else {
        X = 0;
        Y = 0;
        W = 0;
        H = 0;
      }
    }

    public Vector4(Vector2 pos, float w, float h, bool center) {
      if (center) {
        X = pos.X - (w / 2);
        Y = pos.Y + (h / 2);
      }
      else {
        X = pos.X;
        Y = pos.Y;
      }

      W = w;
      H = h;
    }

    [FieldOffset(0)]
    public float X;
    [FieldOffset(4)]
    public float Y;
    [FieldOffset(8)]
    public float W;
    [FieldOffset(12)]
    public float H;

    public Vector2 GetCenter() => new Vector2() { X = X + (W / 2), Y = Y - (H / 2) };
    public bool Intersects(Vector4 other) => X + W >= other.X && other.X + other.W >= X && Y - H <= other.Y && other.Y - other.H <= Y;
    public override string ToString() => $"{X:0.00}, {Y:0.00}, {W:0.00}, {H:0.00}";
  }
}
