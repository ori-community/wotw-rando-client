#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FastEncoderStatics__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FastEncoderStatics__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastEncoderStatics__StaticFields_DEFINED)
#define IL2CPP_STRUCT_FastEncoderStatics__StaticFields_DEFINED
struct Byte__Array;
struct UInt32__Array;
struct FastEncoderStatics__StaticFields {
    struct Byte__Array* FastEncoderTreeStructureData;
    struct Byte__Array* BFinalFastEncoderTreeStructureData;
    struct UInt32__Array* FastEncoderLiteralCodeInfo;
    struct UInt32__Array* FastEncoderDistanceCodeInfo;
    struct UInt32__Array* BitMask;
    struct Byte__Array* ExtraLengthBits;
    struct Byte__Array* ExtraDistanceBits;
    struct Byte__Array* distLookup;
};
#endif
#if !defined(IL2CPP_STRUCT_FastEncoderStatics__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_FastEncoderStatics__StaticFields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/UInt32__Array.h>
#endif
#undef IL2CPP_STRUCT_FastEncoderStatics__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FastEncoderStatics__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_FastEncoderStatics__StaticFields_FWDDECL)
#include <Modloader/app/structs/FastEncoderStatics__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FastEncoderStatics__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
