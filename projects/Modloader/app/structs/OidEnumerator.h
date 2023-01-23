#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OidEnumerator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OidEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_OidEnumerator_DEFINED)
#include <Modloader/app/structs/OidEnumerator__Fields.h>
#if defined(IL2CPP_STRUCT_OidEnumerator__Fields_DEFINED)
#define IL2CPP_STRUCT_OidEnumerator_DEFINED
struct OidEnumerator__Class;
struct OidEnumerator {
    struct OidEnumerator__Class* klass;
    MonitorData* monitor;
    struct OidEnumerator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OidEnumerator_FWDDECL)
#define IL2CPP_STRUCT_OidEnumerator_FWDDECL
#include <Modloader/app/structs/OidEnumerator__Class.h>
#endif
#undef IL2CPP_STRUCT_OidEnumerator_INITIALIZING
#if !defined(IL2CPP_STRUCT_OidEnumerator_DEFINED) && !defined(IL2CPP_STRUCT_OidEnumerator_FWDDECL)
#include <Modloader/app/structs/OidEnumerator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OidEnumerator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
