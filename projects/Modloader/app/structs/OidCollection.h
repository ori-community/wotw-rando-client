#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OidCollection_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OidCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_OidCollection_DEFINED)
#include <Modloader/app/structs/OidCollection__Fields.h>
#if defined(IL2CPP_STRUCT_OidCollection__Fields_DEFINED)
#define IL2CPP_STRUCT_OidCollection_DEFINED
struct OidCollection__Class;
struct OidCollection {
    struct OidCollection__Class* klass;
    MonitorData* monitor;
    struct OidCollection__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OidCollection_FWDDECL)
#define IL2CPP_STRUCT_OidCollection_FWDDECL
#include <Modloader/app/structs/OidCollection__Class.h>
#endif
#undef IL2CPP_STRUCT_OidCollection_INITIALIZING
#if !defined(IL2CPP_STRUCT_OidCollection_DEFINED) && !defined(IL2CPP_STRUCT_OidCollection_FWDDECL)
#include <Modloader/app/structs/OidCollection.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OidCollection.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
