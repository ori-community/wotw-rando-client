#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugTeleportSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugTeleportSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugTeleportSettings_DEFINED)
#include <Modloader/app/structs/DebugTeleportSettings__Fields.h>
#if defined(IL2CPP_STRUCT_DebugTeleportSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugTeleportSettings_DEFINED
struct DebugTeleportSettings__Class;
struct DebugTeleportSettings {
    struct DebugTeleportSettings__Class* klass;
    MonitorData* monitor;
    struct DebugTeleportSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugTeleportSettings_FWDDECL)
#define IL2CPP_STRUCT_DebugTeleportSettings_FWDDECL
#include <Modloader/app/structs/DebugTeleportSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugTeleportSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugTeleportSettings_DEFINED) && !defined(IL2CPP_STRUCT_DebugTeleportSettings_FWDDECL)
#include <Modloader/app/structs/DebugTeleportSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugTeleportSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
