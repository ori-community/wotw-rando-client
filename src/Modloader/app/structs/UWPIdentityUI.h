#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UWPIdentityUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UWPIdentityUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_UWPIdentityUI_DEFINED)
#include <Modloader/app/structs/UWPIdentityUI__Fields.h>
#if defined(IL2CPP_STRUCT_UWPIdentityUI__Fields_DEFINED)
#define IL2CPP_STRUCT_UWPIdentityUI_DEFINED
struct UWPIdentityUI__Class;
struct UWPIdentityUI {
    struct UWPIdentityUI__Class* klass;
    MonitorData* monitor;
    struct UWPIdentityUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UWPIdentityUI_FWDDECL)
#define IL2CPP_STRUCT_UWPIdentityUI_FWDDECL
#include <Modloader/app/structs/UWPIdentityUI__Class.h>
#endif
#undef IL2CPP_STRUCT_UWPIdentityUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_UWPIdentityUI_DEFINED) && !defined(IL2CPP_STRUCT_UWPIdentityUI_FWDDECL)
#include <Modloader/app/structs/UWPIdentityUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UWPIdentityUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
