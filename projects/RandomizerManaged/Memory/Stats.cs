using System.Runtime.InteropServices;

namespace RandomizerManaged.Memory {
  [StructLayout(LayoutKind.Explicit, Size = 35, Pack = 1)]
  public struct Stats {
    [FieldOffset(0)]
    public float Health;
    [FieldOffset(4)]
    public int MaxHealth;
    [FieldOffset(8)]
    public float Energy;
    [FieldOffset(12)]
    public float MaxEnergy;
    [FieldOffset(16)]
    public int Completion;
    [FieldOffset(20)]
    public int Hours;
    [FieldOffset(24)]
    public int Minutes;
    [FieldOffset(28)]
    public int Seconds;
    [FieldOffset(32)]
    public bool Completed;
    [FieldOffset(33)]
    public bool WasKilled;
    [FieldOffset(34)]
    public bool CompletedWithEverything;

    public override string ToString() => $"{Hours:00}:{Minutes:00}:{Seconds} Completion: {Completed} {Completion}%";
  }
}
