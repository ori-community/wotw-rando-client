#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GrdkSignInProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GrdkSignInProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrdkSignInProvider_DEFINED)
#include <Modloader/app/structs/GrdkSignInProvider__Fields.h>
#if defined(IL2CPP_STRUCT_GrdkSignInProvider__Fields_DEFINED)
#define IL2CPP_STRUCT_GrdkSignInProvider_DEFINED
struct GrdkSignInProvider__Class;
struct GrdkSignInProvider {
    struct GrdkSignInProvider__Class* klass;
    MonitorData* monitor;
    struct GrdkSignInProvider__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GrdkSignInProvider_FWDDECL)
#define IL2CPP_STRUCT_GrdkSignInProvider_FWDDECL
#include <Modloader/app/structs/GrdkSignInProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_GrdkSignInProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_GrdkSignInProvider_DEFINED) && !defined(IL2CPP_STRUCT_GrdkSignInProvider_FWDDECL)
#include <Modloader/app/structs/GrdkSignInProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GrdkSignInProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
