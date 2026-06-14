#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JavaScriptUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JavaScriptUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_JavaScriptUtils_DEFINED)
#define IL2CPP_STRUCT_JavaScriptUtils_DEFINED
struct JavaScriptUtils__Class;
struct JavaScriptUtils {
    struct JavaScriptUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_JavaScriptUtils_FWDDECL)
#define IL2CPP_STRUCT_JavaScriptUtils_FWDDECL
#include <Modloader/app/structs/JavaScriptUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_JavaScriptUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_JavaScriptUtils_DEFINED) && !defined(IL2CPP_STRUCT_JavaScriptUtils_FWDDECL)
#include <Modloader/app/structs/JavaScriptUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JavaScriptUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
