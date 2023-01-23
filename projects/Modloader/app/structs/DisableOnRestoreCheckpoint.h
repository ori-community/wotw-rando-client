#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DisableOnRestoreCheckpoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DisableOnRestoreCheckpoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisableOnRestoreCheckpoint_DEFINED)
#include <Modloader/app/structs/DisableOnRestoreCheckpoint__Fields.h>
#if defined(IL2CPP_STRUCT_DisableOnRestoreCheckpoint__Fields_DEFINED)
#define IL2CPP_STRUCT_DisableOnRestoreCheckpoint_DEFINED
struct DisableOnRestoreCheckpoint__Class;
struct DisableOnRestoreCheckpoint {
    struct DisableOnRestoreCheckpoint__Class* klass;
    MonitorData* monitor;
    struct DisableOnRestoreCheckpoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DisableOnRestoreCheckpoint_FWDDECL)
#define IL2CPP_STRUCT_DisableOnRestoreCheckpoint_FWDDECL
#include <Modloader/app/structs/DisableOnRestoreCheckpoint__Class.h>
#endif
#undef IL2CPP_STRUCT_DisableOnRestoreCheckpoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_DisableOnRestoreCheckpoint_DEFINED) && !defined(IL2CPP_STRUCT_DisableOnRestoreCheckpoint_FWDDECL)
#include <Modloader/app/structs/DisableOnRestoreCheckpoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DisableOnRestoreCheckpoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
