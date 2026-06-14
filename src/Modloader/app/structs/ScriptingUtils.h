#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ScriptingUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ScriptingUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScriptingUtils_DEFINED)
#define IL2CPP_STRUCT_ScriptingUtils_DEFINED
struct ScriptingUtils__Class;
struct ScriptingUtils {
    struct ScriptingUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ScriptingUtils_FWDDECL)
#define IL2CPP_STRUCT_ScriptingUtils_FWDDECL
#include <Modloader/app/structs/ScriptingUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_ScriptingUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_ScriptingUtils_DEFINED) && !defined(IL2CPP_STRUCT_ScriptingUtils_FWDDECL)
#include <Modloader/app/structs/ScriptingUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ScriptingUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
