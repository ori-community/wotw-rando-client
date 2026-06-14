#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ETrackingResult__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ETrackingResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ETrackingResult__Enum_DEFINED)
#define IL2CPP_STRUCT_ETrackingResult__Enum_DEFINED
enum class ETrackingResult__Enum : int32_t {
    Uninitialized = 0x00000001,
    Calibrating_InProgress = 0x00000064,
    Calibrating_OutOfRange = 0x00000065,
    Running_OK = 0x000000c8,
    Running_OutOfRange = 0x000000c9,
};
#endif
#if !defined(IL2CPP_STRUCT_ETrackingResult__Enum_FWDDECL)
#define IL2CPP_STRUCT_ETrackingResult__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_ETrackingResult__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_ETrackingResult__Enum_DEFINED) && !defined(IL2CPP_STRUCT_ETrackingResult__Enum_FWDDECL)
#include <Modloader/app/structs/ETrackingResult__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ETrackingResult__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
