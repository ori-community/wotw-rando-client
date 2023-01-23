#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityLocomotionTask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityLocomotionTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityLocomotionTask_DEFINED)
#include <Modloader/app/structs/EntityLocomotionTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntityLocomotionTask__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityLocomotionTask_DEFINED
struct EntityLocomotionTask__Class;
struct EntityLocomotionTask {
    struct EntityLocomotionTask__Class* klass;
    MonitorData* monitor;
    struct EntityLocomotionTask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityLocomotionTask_FWDDECL)
#define IL2CPP_STRUCT_EntityLocomotionTask_FWDDECL
#include <Modloader/app/structs/EntityLocomotionTask__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityLocomotionTask_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityLocomotionTask_DEFINED) && !defined(IL2CPP_STRUCT_EntityLocomotionTask_FWDDECL)
#include <Modloader/app/structs/EntityLocomotionTask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityLocomotionTask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
