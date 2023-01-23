#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserNavState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserNavState_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNavState_DEFINED)
#include <Modloader/app/structs/BrowserNavState__Fields.h>
#if defined(IL2CPP_STRUCT_BrowserNavState__Fields_DEFINED)
#define IL2CPP_STRUCT_BrowserNavState_DEFINED
struct BrowserNavState__Class;
struct BrowserNavState {
    struct BrowserNavState__Class* klass;
    MonitorData* monitor;
    struct BrowserNavState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrowserNavState_FWDDECL)
#define IL2CPP_STRUCT_BrowserNavState_FWDDECL
#include <Modloader/app/structs/BrowserNavState__Class.h>
#endif
#undef IL2CPP_STRUCT_BrowserNavState_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserNavState_DEFINED) && !defined(IL2CPP_STRUCT_BrowserNavState_FWDDECL)
#include <Modloader/app/structs/BrowserNavState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserNavState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
