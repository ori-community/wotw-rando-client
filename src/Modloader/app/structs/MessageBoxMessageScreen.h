#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MessageBoxMessageScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MessageBoxMessageScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBoxMessageScreen_DEFINED)
#include <Modloader/app/structs/MessageBoxMessageScreen__Fields.h>
#if defined(IL2CPP_STRUCT_MessageBoxMessageScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_MessageBoxMessageScreen_DEFINED
struct MessageBoxMessageScreen__Class;
struct MessageBoxMessageScreen {
    struct MessageBoxMessageScreen__Class* klass;
    MonitorData* monitor;
    struct MessageBoxMessageScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MessageBoxMessageScreen_FWDDECL)
#define IL2CPP_STRUCT_MessageBoxMessageScreen_FWDDECL
#include <Modloader/app/structs/MessageBoxMessageScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_MessageBoxMessageScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_MessageBoxMessageScreen_DEFINED) && !defined(IL2CPP_STRUCT_MessageBoxMessageScreen_FWDDECL)
#include <Modloader/app/structs/MessageBoxMessageScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MessageBoxMessageScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
