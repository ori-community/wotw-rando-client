#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XalSignInProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XalSignInProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalSignInProvider_DEFINED)
#include <Modloader/app/structs/XalSignInProvider__Fields.h>
#if defined(IL2CPP_STRUCT_XalSignInProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_XalSignInProvider_DEFINED
struct XalSignInProvider__Class;
struct XalSignInProvider {
    struct XalSignInProvider__Class* klass;
    MonitorData* monitor;
    struct XalSignInProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XalSignInProvider_FWDDECL)
#define IL2CPP_STRUCT_XalSignInProvider_FWDDECL
#include <Modloader/app/structs/XalSignInProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_XalSignInProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_XalSignInProvider_DEFINED) && !defined(IL2CPP_STRUCT_XalSignInProvider_FWDDECL)
#include <Modloader/app/structs/XalSignInProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XalSignInProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
