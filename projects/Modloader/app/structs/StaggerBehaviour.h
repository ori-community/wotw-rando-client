#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaggerBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaggerBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaggerBehaviour_DEFINED)
#include <Modloader/app/structs/StaggerBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_StaggerBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_StaggerBehaviour_DEFINED
struct StaggerBehaviour__Class;
struct StaggerBehaviour {
    struct StaggerBehaviour__Class* klass;
    MonitorData* monitor;
    struct StaggerBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_StaggerBehaviour_FWDDECL)
#define IL2CPP_STRUCT_StaggerBehaviour_FWDDECL
#include <Modloader/app/structs/StaggerBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_StaggerBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaggerBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_StaggerBehaviour_FWDDECL)
#include <Modloader/app/structs/StaggerBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaggerBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
