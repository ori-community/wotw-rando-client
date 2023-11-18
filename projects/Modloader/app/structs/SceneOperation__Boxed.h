#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneOperation__Boxed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneOperation__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneOperation__Boxed_DEFINED)
#include <Modloader/app/structs/SceneOperation.h>
#if defined(IL2CPP_STRUCT_SceneOperation_DEFINED)
#define IL2CPP_STRUCT_SceneOperation__Boxed_DEFINED
struct SceneOperation__Class;
struct SceneOperation__Boxed {
    struct SceneOperation__Class* klass;
    MonitorData* monitor;
    struct SceneOperation fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneOperation__Boxed_FWDDECL)
#define IL2CPP_STRUCT_SceneOperation__Boxed_FWDDECL
#include <Modloader/app/structs/SceneOperation__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneOperation__Boxed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneOperation__Boxed_DEFINED) && !defined(IL2CPP_STRUCT_SceneOperation__Boxed_FWDDECL)
#include <Modloader/app/structs/SceneOperation__Boxed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneOperation__Boxed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
