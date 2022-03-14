using System.Runtime.InteropServices;

namespace RandoMainDLL.Memory {
  [StructLayout(LayoutKind.Explicit, Size = 12, Pack = 1)]
  public struct Vector3 {
    public Vector3(float x, float y, float z) {
      X = x;
      Y = y;
      Z = z;
    }

    public Vector3(Vector2 pos, float z) {
      X = pos.X;
      Y = pos.Y;
      Z = z;
    }

    public Vector3(string cordinates) {
      string[] cords = cordinates.Split(new char[] { ',' }, System.StringSplitOptions.RemoveEmptyEntries);
      if (cords.Length == 4) {
        float.TryParse(cords[0], out var temp);
        X = temp;
        float.TryParse(cords[1], out temp);
        Y = temp;
        float.TryParse(cords[2], out temp);
        Z = temp;
      }
      else {
        X = 0;
        Y = 0;
        Z = 0;
      }
    }

    public static Vector3 operator +(Vector3 a, Vector3 b) {
      Vector3 c = new Vector3();
      c.X = a.X + b.X;
      c.Y = a.Y + b.Y;
      c.Z = a.Z + b.Z;
      return c;
    }
    
    public static Vector3 operator -(Vector3 a, Vector3 b) {
      Vector3 c = new Vector3();
      c.X = a.X - b.X;
      c.Y = a.Y - b.Y;
      c.Z = a.Z - b.Z;
      return c;
    }

    [FieldOffset(0)]
    public float X;
    [FieldOffset(4)]
    public float Y;
    [FieldOffset(8)]
    public float Z;

    public override string ToString() => $"{X:0.00}, {Y:0.00}, {Z:0.00}";
  }
}
