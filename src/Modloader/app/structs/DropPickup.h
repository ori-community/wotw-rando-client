#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DropPickup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DropPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropPickup_DEFINED)
#include <Modloader/app/structs/DropPickup__Fields.h>
#if defined(IL2CPP_STRUCT_DropPickup__Fields_DEFINED)
#define IL2CPP_STRUCT_DropPickup_DEFINED
struct DropPickup__Class;
struct DropPickup {
    struct DropPickup__Class* klass;
    MonitorData* monitor;
    struct DropPickup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DropPickup_FWDDECL)
#define IL2CPP_STRUCT_DropPickup_FWDDECL
#include <Modloader/app/structs/DropPickup__Class.h>
#endif
#undef IL2CPP_STRUCT_DropPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_DropPickup_DEFINED) && !defined(IL2CPP_STRUCT_DropPickup_FWDDECL)
#include <Modloader/app/structs/DropPickup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DropPickup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
