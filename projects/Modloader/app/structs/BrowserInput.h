#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserInput_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserInput_DEFINED)
#include <Modloader/app/structs/BrowserInput__Fields.h>
#if defined(IL2CPP_STRUCT_BrowserInput__Fields_DEFINED)
#define IL2CPP_STRUCT_BrowserInput_DEFINED
struct BrowserInput__Class;
struct BrowserInput {
    struct BrowserInput__Class* klass;
    MonitorData* monitor;
    struct BrowserInput__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrowserInput_FWDDECL)
#define IL2CPP_STRUCT_BrowserInput_FWDDECL
#include <Modloader/app/structs/BrowserInput__Class.h>
#endif
#undef IL2CPP_STRUCT_BrowserInput_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserInput_DEFINED) && !defined(IL2CPP_STRUCT_BrowserInput_FWDDECL)
#include <Modloader/app/structs/BrowserInput.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserInput.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
