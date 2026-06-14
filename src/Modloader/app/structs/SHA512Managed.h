#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SHA512Managed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SHA512Managed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA512Managed_DEFINED)
#include <Modloader/app/structs/SHA512Managed__Fields.h>
#if defined(IL2CPP_STRUCT_SHA512Managed__Fields_DEFINED)
#define IL2CPP_STRUCT_SHA512Managed_DEFINED
struct SHA512Managed__Class;
struct SHA512Managed {
    struct SHA512Managed__Class* klass;
    MonitorData* monitor;
    struct SHA512Managed__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SHA512Managed_FWDDECL)
#define IL2CPP_STRUCT_SHA512Managed_FWDDECL
#include <Modloader/app/structs/SHA512Managed__Class.h>
#endif
#undef IL2CPP_STRUCT_SHA512Managed_INITIALIZING
#if !defined(IL2CPP_STRUCT_SHA512Managed_DEFINED) && !defined(IL2CPP_STRUCT_SHA512Managed_FWDDECL)
#include <Modloader/app/structs/SHA512Managed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SHA512Managed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
