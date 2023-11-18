#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChaseBehaviourNew_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChaseBehaviourNew_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChaseBehaviourNew_DEFINED)
#include <Modloader/app/structs/ChaseBehaviourNew__Fields.h>
#if defined(IL2CPP_STRUCT_ChaseBehaviourNew__Fields_DEFINED)
#define IL2CPP_STRUCT_ChaseBehaviourNew_DEFINED
struct ChaseBehaviourNew__Class;
struct ChaseBehaviourNew {
    struct ChaseBehaviourNew__Class* klass;
    MonitorData* monitor;
    struct ChaseBehaviourNew__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChaseBehaviourNew_FWDDECL)
#define IL2CPP_STRUCT_ChaseBehaviourNew_FWDDECL
#include <Modloader/app/structs/ChaseBehaviourNew__Class.h>
#endif
#undef IL2CPP_STRUCT_ChaseBehaviourNew_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChaseBehaviourNew_DEFINED) && !defined(IL2CPP_STRUCT_ChaseBehaviourNew_FWDDECL)
#include <Modloader/app/structs/ChaseBehaviourNew.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChaseBehaviourNew.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
