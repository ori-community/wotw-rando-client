#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XRegistrationToken_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XRegistrationToken_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRegistrationToken_DEFINED)
#include <Modloader/app/structs/XRegistrationToken__Fields.h>
#if defined(IL2CPP_STRUCT_XRegistrationToken__Fields_DEFINED)
#define IL2CPP_STRUCT_XRegistrationToken_DEFINED
struct XRegistrationToken__Class;
struct XRegistrationToken {
    struct XRegistrationToken__Class* klass;
    MonitorData* monitor;
    struct XRegistrationToken__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_XRegistrationToken_FWDDECL)
#define IL2CPP_STRUCT_XRegistrationToken_FWDDECL
#include <Modloader/app/structs/XRegistrationToken__Class.h>
#endif
#undef IL2CPP_STRUCT_XRegistrationToken_INITIALIZING
#if !defined(IL2CPP_STRUCT_XRegistrationToken_DEFINED) && !defined(IL2CPP_STRUCT_XRegistrationToken_FWDDECL)
#include <Modloader/app/structs/XRegistrationToken.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XRegistrationToken.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
