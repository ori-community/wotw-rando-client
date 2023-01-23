#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlendOp__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlendOp__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendOp__Enum_DEFINED)
#define IL2CPP_STRUCT_BlendOp__Enum_DEFINED
enum class BlendOp__Enum : int32_t {
    Add = 0x00000000,
    Subtract = 0x00000001,
    ReverseSubtract = 0x00000002,
    Min = 0x00000003,
    Max = 0x00000004,
    LogicalClear = 0x00000005,
    LogicalSet = 0x00000006,
    LogicalCopy = 0x00000007,
    LogicalCopyInverted = 0x00000008,
    LogicalNoop = 0x00000009,
    LogicalInvert = 0x0000000a,
    LogicalAnd = 0x0000000b,
    LogicalNand = 0x0000000c,
    LogicalOr = 0x0000000d,
    LogicalNor = 0x0000000e,
    LogicalXor = 0x0000000f,
    LogicalEquivalence = 0x00000010,
    LogicalAndReverse = 0x00000011,
    LogicalAndInverted = 0x00000012,
    LogicalOrReverse = 0x00000013,
    LogicalOrInverted = 0x00000014,
    Multiply = 0x00000015,
    Screen = 0x00000016,
    Overlay = 0x00000017,
    Darken = 0x00000018,
    Lighten = 0x00000019,
    ColorDodge = 0x0000001a,
    ColorBurn = 0x0000001b,
    HardLight = 0x0000001c,
    SoftLight = 0x0000001d,
    Difference = 0x0000001e,
    Exclusion = 0x0000001f,
    HSLHue = 0x00000020,
    HSLSaturation = 0x00000021,
    HSLColor = 0x00000022,
    HSLLuminosity = 0x00000023,
};
#endif
#if !defined(IL2CPP_STRUCT_BlendOp__Enum_FWDDECL)
#define IL2CPP_STRUCT_BlendOp__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_BlendOp__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendOp__Enum_DEFINED) && !defined(IL2CPP_STRUCT_BlendOp__Enum_FWDDECL)
#include <Modloader/app/structs/BlendOp__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlendOp__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
