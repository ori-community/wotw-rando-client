#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LoadSceneParameters__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LoadSceneParameters__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadSceneParameters__Boxed_DEFINED)
#include <Modloader/app/structs/LoadSceneParameters.h>
#if defined(IL2CPP_STRUCT_LoadSceneParameters_DEFINED)
#define IL2CPP_STRUCT_LoadSceneParameters__Boxed_DEFINED
struct LoadSceneParameters__Class;
struct LoadSceneParameters__Boxed {
    struct LoadSceneParameters__Class* klass;
    MonitorData* monitor;
    struct LoadSceneParameters fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LoadSceneParameters__Boxed_FWDDECL)
#define IL2CPP_STRUCT_LoadSceneParameters__Boxed_FWDDECL
#include <Modloader/app/structs/LoadSceneParameters__Class.h>
#endif
#undef IL2CPP_STRUCT_LoadSceneParameters__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_LoadSceneParameters__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_LoadSceneParameters__Boxed_FWDDECL)
#include <Modloader/app/structs/LoadSceneParameters__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LoadSceneParameters__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
