#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISignInProvider_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISignInProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISignInProvider_DEFINED)
#define IL2CPP_STRUCT_ISignInProvider_DEFINED
struct ISignInProvider__Class;
struct ISignInProvider {
    struct ISignInProvider__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_ISignInProvider_FWDDECL)
#define IL2CPP_STRUCT_ISignInProvider_FWDDECL
#include <Modloader/app/structs/ISignInProvider__Class.h>
#endif
#undef IL2CPP_STRUCT_ISignInProvider_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISignInProvider_DEFINED) && !defined(IL2CPP_STRUCT_ISignInProvider_FWDDECL)
#include <Modloader/app/structs/ISignInProvider.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISignInProvider.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
