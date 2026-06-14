#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Browser_JSResultFunc_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Browser_JSResultFunc_INITIALIZING
#if !defined(IL2CPP_STRUCT_Browser_JSResultFunc_DEFINED)
#include <Modloader/app/structs/Browser_JSResultFunc__Fields.h>
#if defined(IL2CPP_STRUCT_Browser_JSResultFunc__Fields_DEFINED)
#define IL2CPP_STRUCT_Browser_JSResultFunc_DEFINED
struct Browser_JSResultFunc__Class;
struct Browser_JSResultFunc {
    struct Browser_JSResultFunc__Class* klass;
    MonitorData* monitor;
    struct Browser_JSResultFunc__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Browser_JSResultFunc_FWDDECL)
#define IL2CPP_STRUCT_Browser_JSResultFunc_FWDDECL
#include <Modloader/app/structs/Browser_JSResultFunc__Class.h>
#endif
#undef IL2CPP_STRUCT_Browser_JSResultFunc_INITIALIZING
#if !defined(IL2CPP_STRUCT_Browser_JSResultFunc_DEFINED) && !defined(IL2CPP_STRUCT_Browser_JSResultFunc_FWDDECL)
#include <Modloader/app/structs/Browser_JSResultFunc.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Browser_JSResultFunc.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
