#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AkMeteringFlags__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AkMeteringFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMeteringFlags__Enum_DEFINED)
#define IL2CPP_STRUCT_AkMeteringFlags__Enum_DEFINED
enum class AkMeteringFlags__Enum : int32_t {
    AK_NoMetering = 0x00000000,
    AK_EnableBusMeter_Peak = 0x00000001,
    AK_EnableBusMeter_TruePeak = 0x00000002,
    AK_EnableBusMeter_RMS = 0x00000004,
    AK_EnableBusMeter_KPower = 0x00000010,
    AK_EnableBusMeter_3DMeter = 0x00000020,
};
#endif
#if !defined(IL2CPP_STRUCT_AkMeteringFlags__Enum_FWDDECL)
#define IL2CPP_STRUCT_AkMeteringFlags__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AkMeteringFlags__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AkMeteringFlags__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AkMeteringFlags__Enum_FWDDECL)
#include <Modloader/app/structs/AkMeteringFlags__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AkMeteringFlags__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
