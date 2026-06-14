#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AuthenticationHeaderValue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AuthenticationHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationHeaderValue_DEFINED)
#include <Modloader/app/structs/AuthenticationHeaderValue__Fields.h>
#if defined(IL2CPP_STRUCT_AuthenticationHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_AuthenticationHeaderValue_DEFINED
struct AuthenticationHeaderValue__Class;
struct AuthenticationHeaderValue {
    struct AuthenticationHeaderValue__Class* klass;
    MonitorData* monitor;
    struct AuthenticationHeaderValue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AuthenticationHeaderValue_FWDDECL)
#define IL2CPP_STRUCT_AuthenticationHeaderValue_FWDDECL
#include <Modloader/app/structs/AuthenticationHeaderValue__Class.h>
#endif
#undef IL2CPP_STRUCT_AuthenticationHeaderValue_INITIALIZING
#if !defined(IL2CPP_STRUCT_AuthenticationHeaderValue_DEFINED) && !defined(IL2CPP_STRUCT_AuthenticationHeaderValue_FWDDECL)
#include <Modloader/app/structs/AuthenticationHeaderValue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AuthenticationHeaderValue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
