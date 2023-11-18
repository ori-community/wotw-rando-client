#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FailedToLoadScriptObject_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FailedToLoadScriptObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_FailedToLoadScriptObject_DEFINED)
#include <Modloader/app/structs/FailedToLoadScriptObject__Fields.h>
#if defined(IL2CPP_STRUCT_FailedToLoadScriptObject__Fields_DEFINED)
#define IL2CPP_STRUCT_FailedToLoadScriptObject_DEFINED
struct FailedToLoadScriptObject__Class;
struct FailedToLoadScriptObject {
    struct FailedToLoadScriptObject__Class* klass;
    MonitorData* monitor;
    struct FailedToLoadScriptObject__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FailedToLoadScriptObject_FWDDECL)
#define IL2CPP_STRUCT_FailedToLoadScriptObject_FWDDECL
#include <Modloader/app/structs/FailedToLoadScriptObject__Class.h>
#endif
#undef IL2CPP_STRUCT_FailedToLoadScriptObject_INITIALIZING
#if !defined(IL2CPP_STRUCT_FailedToLoadScriptObject_DEFINED) && !defined(IL2CPP_STRUCT_FailedToLoadScriptObject_FWDDECL)
#include <Modloader/app/structs/FailedToLoadScriptObject.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FailedToLoadScriptObject.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
