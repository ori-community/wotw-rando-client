#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Browser_JSCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Browser_JSCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_Browser_JSCallback_DEFINED)
#include <Modloader/app/structs/Browser_JSCallback__Fields.h>
#if defined(IL2CPP_STRUCT_Browser_JSCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_Browser_JSCallback_DEFINED
struct Browser_JSCallback__Class;
struct Browser_JSCallback {
    struct Browser_JSCallback__Class* klass;
    MonitorData* monitor;
    struct Browser_JSCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Browser_JSCallback_FWDDECL)
#define IL2CPP_STRUCT_Browser_JSCallback_FWDDECL
#include <Modloader/app/structs/Browser_JSCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_Browser_JSCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_Browser_JSCallback_DEFINED) && !defined(IL2CPP_STRUCT_Browser_JSCallback_FWDDECL)
#include <Modloader/app/structs/Browser_JSCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Browser_JSCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
