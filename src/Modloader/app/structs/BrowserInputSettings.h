#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserInputSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserInputSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserInputSettings_DEFINED)
#include <Modloader/app/structs/BrowserInputSettings__Fields.h>
#if defined(IL2CPP_STRUCT_BrowserInputSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_BrowserInputSettings_DEFINED
struct BrowserInputSettings__Class;
struct BrowserInputSettings {
    struct BrowserInputSettings__Class* klass;
    MonitorData* monitor;
    struct BrowserInputSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrowserInputSettings_FWDDECL)
#define IL2CPP_STRUCT_BrowserInputSettings_FWDDECL
#include <Modloader/app/structs/BrowserInputSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_BrowserInputSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserInputSettings_DEFINED) && !defined(IL2CPP_STRUCT_BrowserInputSettings_FWDDECL)
#include <Modloader/app/structs/BrowserInputSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserInputSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
