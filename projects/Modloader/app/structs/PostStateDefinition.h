#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PostStateDefinition_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PostStateDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostStateDefinition_DEFINED)
#include <Modloader/app/structs/PostStateDefinition__Fields.h>
#if defined(IL2CPP_STRUCT_PostStateDefinition__Fields_DEFINED)
#define IL2CPP_STRUCT_PostStateDefinition_DEFINED
struct PostStateDefinition__Class;
struct PostStateDefinition {
    struct PostStateDefinition__Class* klass;
    MonitorData* monitor;
    struct PostStateDefinition__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PostStateDefinition_FWDDECL)
#define IL2CPP_STRUCT_PostStateDefinition_FWDDECL
#include <Modloader/app/structs/PostStateDefinition__Class.h>
#endif
#undef IL2CPP_STRUCT_PostStateDefinition_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostStateDefinition_DEFINED) && !defined(IL2CPP_STRUCT_PostStateDefinition_FWDDECL)
#include <Modloader/app/structs/PostStateDefinition.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PostStateDefinition.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
