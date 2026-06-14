#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneBasedUberState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneBasedUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneBasedUberState_DEFINED)
#include <Modloader/app/structs/SceneBasedUberState__Fields.h>
#if defined(IL2CPP_STRUCT_SceneBasedUberState__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneBasedUberState_DEFINED
struct SceneBasedUberState__Class;
struct SceneBasedUberState {
    struct SceneBasedUberState__Class* klass;
    MonitorData* monitor;
    struct SceneBasedUberState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneBasedUberState_FWDDECL)
#define IL2CPP_STRUCT_SceneBasedUberState_FWDDECL
#include <Modloader/app/structs/SceneBasedUberState__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneBasedUberState_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneBasedUberState_DEFINED) && !defined(IL2CPP_STRUCT_SceneBasedUberState_FWDDECL)
#include <Modloader/app/structs/SceneBasedUberState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneBasedUberState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
