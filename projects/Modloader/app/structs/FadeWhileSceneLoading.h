#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FadeWhileSceneLoading_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FadeWhileSceneLoading_INITIALIZING
#if !defined(IL2CPP_STRUCT_FadeWhileSceneLoading_DEFINED)
#include <Modloader/app/structs/FadeWhileSceneLoading__Fields.h>
#if defined(IL2CPP_STRUCT_FadeWhileSceneLoading__Fields_DEFINED)
#define IL2CPP_STRUCT_FadeWhileSceneLoading_DEFINED
struct FadeWhileSceneLoading__Class;
struct FadeWhileSceneLoading {
    struct FadeWhileSceneLoading__Class* klass;
    MonitorData* monitor;
    struct FadeWhileSceneLoading__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FadeWhileSceneLoading_FWDDECL)
#define IL2CPP_STRUCT_FadeWhileSceneLoading_FWDDECL
#include <Modloader/app/structs/FadeWhileSceneLoading__Class.h>
#endif
#undef IL2CPP_STRUCT_FadeWhileSceneLoading_INITIALIZING
#if !defined(IL2CPP_STRUCT_FadeWhileSceneLoading_DEFINED) && !defined(IL2CPP_STRUCT_FadeWhileSceneLoading_FWDDECL)
#include <Modloader/app/structs/FadeWhileSceneLoading.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FadeWhileSceneLoading.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
