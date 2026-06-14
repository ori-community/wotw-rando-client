#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ClaimsIdentity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ClaimsIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClaimsIdentity_DEFINED)
#include <Modloader/app/structs/ClaimsIdentity__Fields.h>
#if defined(IL2CPP_STRUCT_ClaimsIdentity__Fields_DEFINED)
#define IL2CPP_STRUCT_ClaimsIdentity_DEFINED
struct ClaimsIdentity__Class;
struct ClaimsIdentity {
    struct ClaimsIdentity__Class* klass;
    MonitorData* monitor;
    struct ClaimsIdentity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ClaimsIdentity_FWDDECL)
#define IL2CPP_STRUCT_ClaimsIdentity_FWDDECL
#include <Modloader/app/structs/ClaimsIdentity__Class.h>
#endif
#undef IL2CPP_STRUCT_ClaimsIdentity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ClaimsIdentity_DEFINED) && !defined(IL2CPP_STRUCT_ClaimsIdentity_FWDDECL)
#include <Modloader/app/structs/ClaimsIdentity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ClaimsIdentity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
