#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BrowserFocusState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BrowserFocusState_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserFocusState_DEFINED)
#include <Modloader/app/structs/BrowserFocusState__Fields.h>
#if defined(IL2CPP_STRUCT_BrowserFocusState__Fields_DEFINED)
#define IL2CPP_STRUCT_BrowserFocusState_DEFINED
struct BrowserFocusState__Class;
struct BrowserFocusState {
    struct BrowserFocusState__Class* klass;
    MonitorData* monitor;
    struct BrowserFocusState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BrowserFocusState_FWDDECL)
#define IL2CPP_STRUCT_BrowserFocusState_FWDDECL
#include <Modloader/app/structs/BrowserFocusState__Class.h>
#endif
#undef IL2CPP_STRUCT_BrowserFocusState_INITIALIZING
#if !defined(IL2CPP_STRUCT_BrowserFocusState_DEFINED) && !defined(IL2CPP_STRUCT_BrowserFocusState_FWDDECL)
#include <Modloader/app/structs/BrowserFocusState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BrowserFocusState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
