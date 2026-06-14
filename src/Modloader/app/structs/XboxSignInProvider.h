#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxSignInProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxSignInProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxSignInProvider_DEFINED)
#include <Modloader/app/structs/XboxSignInProvider__Fields.h>
#if defined(IL2CPP_STRUCT_XboxSignInProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_XboxSignInProvider_DEFINED
struct XboxSignInProvider__Class;
struct XboxSignInProvider {
    struct XboxSignInProvider__Class* klass;
    MonitorData* monitor;
    struct XboxSignInProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XboxSignInProvider_FWDDECL)
#define IL2CPP_STRUCT_XboxSignInProvider_FWDDECL
#include <Modloader/app/structs/XboxSignInProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_XboxSignInProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxSignInProvider_DEFINED) && !defined(IL2CPP_STRUCT_XboxSignInProvider_FWDDECL)
#include <Modloader/app/structs/XboxSignInProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxSignInProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
