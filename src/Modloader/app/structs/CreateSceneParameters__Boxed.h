#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CreateSceneParameters__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CreateSceneParameters__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateSceneParameters__Boxed_DEFINED)
#include <Modloader/app/structs/CreateSceneParameters.h>
#if defined(IL2CPP_STRUCT_CreateSceneParameters_DEFINED)
#define IL2CPP_STRUCT_CreateSceneParameters__Boxed_DEFINED
struct CreateSceneParameters__Class;
struct CreateSceneParameters__Boxed {
    struct CreateSceneParameters__Class* klass;
    MonitorData* monitor;
    struct CreateSceneParameters fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CreateSceneParameters__Boxed_FWDDECL)
#define IL2CPP_STRUCT_CreateSceneParameters__Boxed_FWDDECL
#include <Modloader/app/structs/CreateSceneParameters__Class.h>
#endif
#undef IL2CPP_STRUCT_CreateSceneParameters__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_CreateSceneParameters__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_CreateSceneParameters__Boxed_FWDDECL)
#include <Modloader/app/structs/CreateSceneParameters__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CreateSceneParameters__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
