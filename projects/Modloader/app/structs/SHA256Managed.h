#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SHA256Managed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SHA256Managed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA256Managed_DEFINED)
#include <Modloader/app/structs/SHA256Managed__Fields.h>
#if defined(IL2CPP_STRUCT_SHA256Managed__Fields_DEFINED)
#define IL2CPP_STRUCT_SHA256Managed_DEFINED
struct SHA256Managed__Class;
struct SHA256Managed {
    struct SHA256Managed__Class* klass;
    MonitorData* monitor;
    struct SHA256Managed__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SHA256Managed_FWDDECL)
#define IL2CPP_STRUCT_SHA256Managed_FWDDECL
#include <Modloader/app/structs/SHA256Managed__Class.h>
#endif
#undef IL2CPP_STRUCT_SHA256Managed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA256Managed_DEFINED) && !defined(IL2CPP_STRUCT_SHA256Managed_FWDDECL)
#include <Modloader/app/structs/SHA256Managed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SHA256Managed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
