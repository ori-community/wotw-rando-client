#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClaimsPrincipal_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClaimsPrincipal_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClaimsPrincipal_DEFINED)
#include <Modloader/app/structs/ClaimsPrincipal__Fields.h>
#if defined(IL2CPP_STRUCT_ClaimsPrincipal__Fields_DEFINED)
#define IL2CPP_STRUCT_ClaimsPrincipal_DEFINED
struct ClaimsPrincipal__Class;
struct ClaimsPrincipal {
    struct ClaimsPrincipal__Class* klass;
    MonitorData* monitor;
    struct ClaimsPrincipal__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClaimsPrincipal_FWDDECL)
#define IL2CPP_STRUCT_ClaimsPrincipal_FWDDECL
#include <Modloader/app/structs/ClaimsPrincipal__Class.h>
#endif
#undef IL2CPP_STRUCT_ClaimsPrincipal_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClaimsPrincipal_DEFINED) && !defined(IL2CPP_STRUCT_ClaimsPrincipal_FWDDECL)
#include <Modloader/app/structs/ClaimsPrincipal.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClaimsPrincipal.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
