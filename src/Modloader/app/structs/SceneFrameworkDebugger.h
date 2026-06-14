#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneFrameworkDebugger_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneFrameworkDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFrameworkDebugger_DEFINED)
#include <Modloader/app/structs/SceneFrameworkDebugger__Fields.h>
#if defined(IL2CPP_STRUCT_SceneFrameworkDebugger__Fields_DEFINED)
#define IL2CPP_STRUCT_SceneFrameworkDebugger_DEFINED
struct SceneFrameworkDebugger__Class;
struct SceneFrameworkDebugger {
    struct SceneFrameworkDebugger__Class* klass;
    MonitorData* monitor;
    struct SceneFrameworkDebugger__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneFrameworkDebugger_FWDDECL)
#define IL2CPP_STRUCT_SceneFrameworkDebugger_FWDDECL
#include <Modloader/app/structs/SceneFrameworkDebugger__Class.h>
#endif
#undef IL2CPP_STRUCT_SceneFrameworkDebugger_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneFrameworkDebugger_DEFINED) && !defined(IL2CPP_STRUCT_SceneFrameworkDebugger_FWDDECL)
#include <Modloader/app/structs/SceneFrameworkDebugger.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneFrameworkDebugger.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
