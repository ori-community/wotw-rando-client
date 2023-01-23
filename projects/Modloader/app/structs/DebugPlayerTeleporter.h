#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugPlayerTeleporter_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugPlayerTeleporter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugPlayerTeleporter_DEFINED)
#include <Modloader/app/structs/DebugPlayerTeleporter__Fields.h>
#if defined(IL2CPP_STRUCT_DebugPlayerTeleporter__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugPlayerTeleporter_DEFINED
struct DebugPlayerTeleporter__Class;
struct DebugPlayerTeleporter {
    struct DebugPlayerTeleporter__Class* klass;
    MonitorData* monitor;
    struct DebugPlayerTeleporter__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugPlayerTeleporter_FWDDECL)
#define IL2CPP_STRUCT_DebugPlayerTeleporter_FWDDECL
#include <Modloader/app/structs/DebugPlayerTeleporter__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugPlayerTeleporter_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugPlayerTeleporter_DEFINED) && !defined(IL2CPP_STRUCT_DebugPlayerTeleporter_FWDDECL)
#include <Modloader/app/structs/DebugPlayerTeleporter.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugPlayerTeleporter.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
