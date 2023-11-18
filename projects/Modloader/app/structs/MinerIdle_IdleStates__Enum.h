#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MinerIdle_IdleStates__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MinerIdle_IdleStates__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerIdle_IdleStates__Enum_DEFINED)
#define IL2CPP_STRUCT_MinerIdle_IdleStates__Enum_DEFINED
enum class MinerIdle_IdleStates__Enum : int32_t {
    TransitioningToSharpen = 0x00000000,
    SharpenAxe = 0x00000001,
    SharpenAxeLookAround = 0x00000002,
    Last = 0x00000003,
};
#endif
#if !defined(IL2CPP_STRUCT_MinerIdle_IdleStates__Enum_FWDDECL)
#define IL2CPP_STRUCT_MinerIdle_IdleStates__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MinerIdle_IdleStates__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MinerIdle_IdleStates__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MinerIdle_IdleStates__Enum_FWDDECL)
#include <Modloader/app/structs/MinerIdle_IdleStates__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MinerIdle_IdleStates__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
