#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnableOnRestoreCheckpoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnableOnRestoreCheckpoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableOnRestoreCheckpoint_DEFINED)
#include <Modloader/app/structs/EnableOnRestoreCheckpoint__Fields.h>
#if defined(IL2CPP_STRUCT_EnableOnRestoreCheckpoint__Fields_DEFINED)
#define IL2CPP_STRUCT_EnableOnRestoreCheckpoint_DEFINED
struct EnableOnRestoreCheckpoint__Class;
struct EnableOnRestoreCheckpoint {
    struct EnableOnRestoreCheckpoint__Class* klass;
    MonitorData* monitor;
    struct EnableOnRestoreCheckpoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnableOnRestoreCheckpoint_FWDDECL)
#define IL2CPP_STRUCT_EnableOnRestoreCheckpoint_FWDDECL
#include <Modloader/app/structs/EnableOnRestoreCheckpoint__Class.h>
#endif
#undef IL2CPP_STRUCT_EnableOnRestoreCheckpoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnableOnRestoreCheckpoint_DEFINED) && !defined(IL2CPP_STRUCT_EnableOnRestoreCheckpoint_FWDDECL)
#include <Modloader/app/structs/EnableOnRestoreCheckpoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnableOnRestoreCheckpoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
