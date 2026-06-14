#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MD4Managed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MD4Managed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD4Managed_DEFINED)
#include <Modloader/app/structs/MD4Managed__Fields.h>
#if defined(IL2CPP_STRUCT_MD4Managed__Fields_DEFINED)
#define IL2CPP_STRUCT_MD4Managed_DEFINED
struct MD4Managed__Class;
struct MD4Managed {
    struct MD4Managed__Class* klass;
    MonitorData* monitor;
    struct MD4Managed__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MD4Managed_FWDDECL)
#define IL2CPP_STRUCT_MD4Managed_FWDDECL
#include <Modloader/app/structs/MD4Managed__Class.h>
#endif
#undef IL2CPP_STRUCT_MD4Managed_INITIALIZING
#if !defined(IL2CPP_STRUCT_MD4Managed_DEFINED) && !defined(IL2CPP_STRUCT_MD4Managed_FWDDECL)
#include <Modloader/app/structs/MD4Managed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MD4Managed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
