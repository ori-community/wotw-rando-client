#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TouchPhase__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TouchPhase__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TouchPhase__Enum_DEFINED)
#define IL2CPP_STRUCT_TouchPhase__Enum_DEFINED
enum class TouchPhase__Enum : int32_t {
    Began = 0x00000000,
    Moved = 0x00000001,
    Stationary = 0x00000002,
    Ended = 0x00000003,
    Canceled = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_TouchPhase__Enum_FWDDECL)
#define IL2CPP_STRUCT_TouchPhase__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_TouchPhase__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_TouchPhase__Enum_DEFINED) && !defined(IL2CPP_STRUCT_TouchPhase__Enum_FWDDECL)
#include <Modloader/app/structs/TouchPhase__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TouchPhase__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
