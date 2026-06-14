#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CheckpointData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CheckpointData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckpointData_DEFINED)
#define IL2CPP_STRUCT_CheckpointData_DEFINED
struct CheckpointData__Class;
struct CheckpointData {
    struct CheckpointData__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_CheckpointData_FWDDECL)
#define IL2CPP_STRUCT_CheckpointData_FWDDECL
#include <Modloader/app/structs/CheckpointData__Class.h>
#endif
#undef IL2CPP_STRUCT_CheckpointData_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckpointData_DEFINED) && !defined(IL2CPP_STRUCT_CheckpointData_FWDDECL)
#include <Modloader/app/structs/CheckpointData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CheckpointData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
