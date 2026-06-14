#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MovingPlatformSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MovingPlatformSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingPlatformSettings_DEFINED)
#include <Modloader/app/structs/MovingPlatformSettings__Fields.h>
#if defined(IL2CPP_STRUCT_MovingPlatformSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_MovingPlatformSettings_DEFINED
struct MovingPlatformSettings__Class;
struct MovingPlatformSettings {
    struct MovingPlatformSettings__Class* klass;
    MonitorData* monitor;
    struct MovingPlatformSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MovingPlatformSettings_FWDDECL)
#define IL2CPP_STRUCT_MovingPlatformSettings_FWDDECL
#include <Modloader/app/structs/MovingPlatformSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_MovingPlatformSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MovingPlatformSettings_DEFINED) && !defined(IL2CPP_STRUCT_MovingPlatformSettings_FWDDECL)
#include <Modloader/app/structs/MovingPlatformSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MovingPlatformSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
