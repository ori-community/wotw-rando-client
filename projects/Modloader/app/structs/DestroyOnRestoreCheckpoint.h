#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DestroyOnRestoreCheckpoint_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DestroyOnRestoreCheckpoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyOnRestoreCheckpoint_DEFINED)
#include <Modloader/app/structs/DestroyOnRestoreCheckpoint__Fields.h>
#if defined(IL2CPP_STRUCT_DestroyOnRestoreCheckpoint__Fields_DEFINED)
#define IL2CPP_STRUCT_DestroyOnRestoreCheckpoint_DEFINED
struct DestroyOnRestoreCheckpoint__Class;
struct DestroyOnRestoreCheckpoint {
    struct DestroyOnRestoreCheckpoint__Class* klass;
    MonitorData* monitor;
    struct DestroyOnRestoreCheckpoint__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DestroyOnRestoreCheckpoint_FWDDECL)
#define IL2CPP_STRUCT_DestroyOnRestoreCheckpoint_FWDDECL
#include <Modloader/app/structs/DestroyOnRestoreCheckpoint__Class.h>
#endif
#undef IL2CPP_STRUCT_DestroyOnRestoreCheckpoint_INITIALIZING
#if !defined(IL2CPP_STRUCT_DestroyOnRestoreCheckpoint_DEFINED) && !defined(IL2CPP_STRUCT_DestroyOnRestoreCheckpoint_FWDDECL)
#include <Modloader/app/structs/DestroyOnRestoreCheckpoint.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DestroyOnRestoreCheckpoint.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
