#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneDebugMessage_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneDebugMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneDebugMessage_DEFINED)
#include <Modloader/app/structs/SceneDebugMessage__Fields.h>
#if defined(IL2CPP_STRUCT_SceneDebugMessage__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneDebugMessage_DEFINED
struct SceneDebugMessage__Class;
struct SceneDebugMessage {
    struct SceneDebugMessage__Class* klass;
    MonitorData* monitor;
    struct SceneDebugMessage__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneDebugMessage_FWDDECL)
#define IL2CPP_STRUCT_SceneDebugMessage_FWDDECL
#include <Modloader/app/structs/SceneDebugMessage__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneDebugMessage_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneDebugMessage_DEFINED) && !defined(IL2CPP_STRUCT_SceneDebugMessage_FWDDECL)
#include <Modloader/app/structs/SceneDebugMessage.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneDebugMessage.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
