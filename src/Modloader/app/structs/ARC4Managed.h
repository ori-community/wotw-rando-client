#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ARC4Managed_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ARC4Managed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ARC4Managed_DEFINED)
#include <Modloader/app/structs/ARC4Managed__Fields.h>
#if defined(IL2CPP_STRUCT_ARC4Managed__Fields_DEFINED)
#define IL2CPP_STRUCT_ARC4Managed_DEFINED
struct ARC4Managed__Class;
struct ARC4Managed {
    struct ARC4Managed__Class* klass;
    MonitorData* monitor;
    struct ARC4Managed__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ARC4Managed_FWDDECL)
#define IL2CPP_STRUCT_ARC4Managed_FWDDECL
#include <Modloader/app/structs/ARC4Managed__Class.h>
#endif
#undef IL2CPP_STRUCT_ARC4Managed_INITIALIZING
#if !defined(IL2CPP_STRUCT_ARC4Managed_DEFINED) && !defined(IL2CPP_STRUCT_ARC4Managed_FWDDECL)
#include <Modloader/app/structs/ARC4Managed.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ARC4Managed.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
