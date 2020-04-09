using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.InteropServices;
using System.Text;
using System.Threading.Tasks;

namespace RandoMainDLL.Memory
{

    [StructLayout(LayoutKind.Explicit, Size = 32, Pack = 1)]
    struct MessageDescriptor
    {
        [FieldOffset(0)] private string Message;
        [FieldOffset(8)] private UInt64 Emotion;
        [FieldOffset(16)] private UInt64 Sound;
        [FieldOffset(24)] private UInt64 WWiseEvent;
    }
}
