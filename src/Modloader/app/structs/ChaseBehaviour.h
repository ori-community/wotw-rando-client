#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChaseBehaviour_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChaseBehaviour_DEFINED)
#include <Modloader/app/structs/ChaseBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_ChaseBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ChaseBehaviour_DEFINED
struct ChaseBehaviour__Class;
struct ChaseBehaviour {
    struct ChaseBehaviour__Class* klass;
    MonitorData* monitor;
    struct ChaseBehaviour__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChaseBehaviour_FWDDECL)
#define IL2CPP_STRUCT_ChaseBehaviour_FWDDECL
#include <Modloader/app/structs/ChaseBehaviour__Class.h>
#endif
#undef IL2CPP_STRUCT_ChaseBehaviour_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChaseBehaviour_DEFINED) && !defined(IL2CPP_STRUCT_ChaseBehaviour_FWDDECL)
#include <Modloader/app/structs/ChaseBehaviour.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChaseBehaviour.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
