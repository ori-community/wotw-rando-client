#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneIdentityUI_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneIdentityUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneIdentityUI_DEFINED)
#include <Modloader/app/structs/XboxOneIdentityUI__Fields.h>
#if defined(IL2CPP_STRUCT_XboxOneIdentityUI__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxOneIdentityUI_DEFINED
struct XboxOneIdentityUI__Class;
struct XboxOneIdentityUI {
    struct XboxOneIdentityUI__Class* klass;
    MonitorData* monitor;
    struct XboxOneIdentityUI__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxOneIdentityUI_FWDDECL)
#define IL2CPP_STRUCT_XboxOneIdentityUI_FWDDECL
#include <Modloader/app/structs/XboxOneIdentityUI__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxOneIdentityUI_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneIdentityUI_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneIdentityUI_FWDDECL)
#include <Modloader/app/structs/XboxOneIdentityUI.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneIdentityUI.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
