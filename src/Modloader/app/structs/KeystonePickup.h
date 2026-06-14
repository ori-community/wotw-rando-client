#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_KeystonePickup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_KeystonePickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeystonePickup_DEFINED)
#include <Modloader/app/structs/KeystonePickup__Fields.h>
#if defined(IL2CPP_STRUCT_KeystonePickup__Fields_DEFINED)
#define IL2CPP_STRUCT_KeystonePickup_DEFINED
struct KeystonePickup__Class;
struct KeystonePickup {
    struct KeystonePickup__Class* klass;
    MonitorData* monitor;
    struct KeystonePickup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_KeystonePickup_FWDDECL)
#define IL2CPP_STRUCT_KeystonePickup_FWDDECL
#include <Modloader/app/structs/KeystonePickup__Class.h>
#endif
#undef IL2CPP_STRUCT_KeystonePickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_KeystonePickup_DEFINED) && !defined(IL2CPP_STRUCT_KeystonePickup_FWDDECL)
#include <Modloader/app/structs/KeystonePickup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/KeystonePickup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
