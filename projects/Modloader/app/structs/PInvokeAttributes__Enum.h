#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PInvokeAttributes__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PInvokeAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PInvokeAttributes__Enum_DEFINED)
#define IL2CPP_STRUCT_PInvokeAttributes__Enum_DEFINED
enum class PInvokeAttributes__Enum : int32_t {
    NoMangle = 0x00000001,
    CharSetMask = 0x00000006,
    CharSetNotSpec = 0x00000000,
    CharSetAnsi = 0x00000002,
    CharSetUnicode = 0x00000004,
    CharSetAuto = 0x00000006,
    BestFitUseAssem = 0x00000000,
    BestFitEnabled = 0x00000010,
    BestFitDisabled = 0x00000020,
    BestFitMask = 0x00000030,
    ThrowOnUnmappableCharUseAssem = 0x00000000,
    ThrowOnUnmappableCharEnabled = 0x00001000,
    ThrowOnUnmappableCharDisabled = 0x00002000,
    ThrowOnUnmappableCharMask = 0x00003000,
    SupportsLastError = 0x00000040,
    CallConvMask = 0x00000700,
    CallConvWinapi = 0x00000100,
    CallConvCdecl = 0x00000200,
    CallConvStdcall = 0x00000300,
    CallConvThiscall = 0x00000400,
    CallConvFastcall = 0x00000500,
    MaxValue = 0x0000ffff,
};
#endif
#if !defined(IL2CPP_STRUCT_PInvokeAttributes__Enum_FWDDECL)
#define IL2CPP_STRUCT_PInvokeAttributes__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_PInvokeAttributes__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_PInvokeAttributes__Enum_DEFINED) && !defined(IL2CPP_STRUCT_PInvokeAttributes__Enum_FWDDECL)
#include <Modloader/app/structs/PInvokeAttributes__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PInvokeAttributes__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
