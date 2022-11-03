using System.Runtime.InteropServices;

namespace RandomizerManaged.Memory {
  [StructLayout(LayoutKind.Explicit, Size = 32, Pack = 1)]
  struct MessageDescriptor {
    [FieldOffset(0)] private string Message;
    [FieldOffset(8)] private ulong Emotion;
    [FieldOffset(16)] private ulong Sound;
    [FieldOffset(24)] private ulong WWiseEvent;
  }
}
