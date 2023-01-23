#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FPSBrowserUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FPSBrowserUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSBrowserUI_DEFINED)
#include <Modloader/app/structs/FPSBrowserUI__Fields.h>
#if defined(IL2CPP_STRUCT_FPSBrowserUI__Fields_DEFINED)
#define IL2CPP_STRUCT_FPSBrowserUI_DEFINED
struct FPSBrowserUI__Class;
struct FPSBrowserUI {
    struct FPSBrowserUI__Class* klass;
    MonitorData* monitor;
    struct FPSBrowserUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FPSBrowserUI_FWDDECL)
#define IL2CPP_STRUCT_FPSBrowserUI_FWDDECL
#include <Modloader/app/structs/FPSBrowserUI__Class.h>
#endif
#undef IL2CPP_STRUCT_FPSBrowserUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_FPSBrowserUI_DEFINED) && !defined(IL2CPP_STRUCT_FPSBrowserUI_FWDDECL)
#include <Modloader/app/structs/FPSBrowserUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FPSBrowserUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
