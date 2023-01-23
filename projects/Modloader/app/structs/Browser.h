#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Browser_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Browser_INITIALIZING
#if !defined(IL2CPP_STRUCT_Browser_DEFINED)
#include <Modloader/app/structs/Browser__Fields.h>
#if defined(IL2CPP_STRUCT_Browser__Fields_DEFINED)
#define IL2CPP_STRUCT_Browser_DEFINED
struct Browser__Class;
struct Browser {
    struct Browser__Class* klass;
    MonitorData* monitor;
    struct Browser__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Browser_FWDDECL)
#define IL2CPP_STRUCT_Browser_FWDDECL
#include <Modloader/app/structs/Browser__Class.h>
#endif
#undef IL2CPP_STRUCT_Browser_INITIALIZING
#if !defined(IL2CPP_STRUCT_Browser_DEFINED) && !defined(IL2CPP_STRUCT_Browser_FWDDECL)
#include <Modloader/app/structs/Browser.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Browser.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
