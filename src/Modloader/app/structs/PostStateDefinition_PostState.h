#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PostStateDefinition_PostState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PostStateDefinition_PostState_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostStateDefinition_PostState_DEFINED)
#include <Modloader/app/structs/PostStateDefinition_PostState__Fields.h>
#if defined(IL2CPP_STRUCT_PostStateDefinition_PostState__Fields_DEFINED)
#define IL2CPP_STRUCT_PostStateDefinition_PostState_DEFINED
struct PostStateDefinition_PostState__Class;
struct PostStateDefinition_PostState {
    struct PostStateDefinition_PostState__Class* klass;
    MonitorData* monitor;
    struct PostStateDefinition_PostState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PostStateDefinition_PostState_FWDDECL)
#define IL2CPP_STRUCT_PostStateDefinition_PostState_FWDDECL
#include <Modloader/app/structs/PostStateDefinition_PostState__Class.h>
#endif
#undef IL2CPP_STRUCT_PostStateDefinition_PostState_INITIALIZING
#if !defined(IL2CPP_STRUCT_PostStateDefinition_PostState_DEFINED) && !defined(IL2CPP_STRUCT_PostStateDefinition_PostState_FWDDECL)
#include <Modloader/app/structs/PostStateDefinition_PostState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PostStateDefinition_PostState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
