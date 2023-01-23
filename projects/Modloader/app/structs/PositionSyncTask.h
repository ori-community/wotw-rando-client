#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionSyncTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionSyncTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionSyncTask_DEFINED)
#include <Modloader/app/structs/PositionSyncTask__Fields.h>
#if defined(IL2CPP_STRUCT_PositionSyncTask__Fields_DEFINED)
#define IL2CPP_STRUCT_PositionSyncTask_DEFINED
struct PositionSyncTask__Class;
struct PositionSyncTask {
    struct PositionSyncTask__Class* klass;
    MonitorData* monitor;
    struct PositionSyncTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionSyncTask_FWDDECL)
#define IL2CPP_STRUCT_PositionSyncTask_FWDDECL
#include <Modloader/app/structs/PositionSyncTask__Class.h>
#endif
#undef IL2CPP_STRUCT_PositionSyncTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionSyncTask_DEFINED) && !defined(IL2CPP_STRUCT_PositionSyncTask_FWDDECL)
#include <Modloader/app/structs/PositionSyncTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionSyncTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
