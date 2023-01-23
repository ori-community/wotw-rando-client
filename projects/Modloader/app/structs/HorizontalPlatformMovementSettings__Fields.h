#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HorizontalPlatformMovementSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HorizontalPlatformMovementSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HorizontalPlatformMovementSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_HorizontalPlatformMovementSettings__Fields_DEFINED
struct HorizontalPlatformMovementSettings_SpeedSet;
struct __declspec(align(8)) HorizontalPlatformMovementSettings__Fields {
    struct HorizontalPlatformMovementSettings_SpeedSet* Ground;
    struct HorizontalPlatformMovementSettings_SpeedSet* Air;
    bool LockInput;
};
#endif
#if !defined(IL2CPP_STRUCT_HorizontalPlatformMovementSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_HorizontalPlatformMovementSettings__Fields_FWDDECL
#include <Modloader/app/structs/HorizontalPlatformMovementSettings_SpeedSet.h>
#endif
#undef IL2CPP_STRUCT_HorizontalPlatformMovementSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HorizontalPlatformMovementSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HorizontalPlatformMovementSettings__Fields_FWDDECL)
#include <Modloader/app/structs/HorizontalPlatformMovementSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HorizontalPlatformMovementSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
