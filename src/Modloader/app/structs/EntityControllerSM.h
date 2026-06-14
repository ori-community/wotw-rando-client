#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityControllerSM_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityControllerSM_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityControllerSM_DEFINED)
#include <Modloader/app/structs/EntityControllerSM__Fields.h>
#if defined(IL2CPP_STRUCT_EntityControllerSM__Fields_DEFINED)
#define IL2CPP_STRUCT_EntityControllerSM_DEFINED
struct EntityControllerSM__Class;
struct EntityControllerSM {
    struct EntityControllerSM__Class* klass;
    MonitorData* monitor;
    struct EntityControllerSM__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityControllerSM_FWDDECL)
#define IL2CPP_STRUCT_EntityControllerSM_FWDDECL
#include <Modloader/app/structs/EntityControllerSM__Class.h>
#endif
#undef IL2CPP_STRUCT_EntityControllerSM_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityControllerSM_DEFINED) && !defined(IL2CPP_STRUCT_EntityControllerSM_FWDDECL)
#include <Modloader/app/structs/EntityControllerSM.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityControllerSM.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
