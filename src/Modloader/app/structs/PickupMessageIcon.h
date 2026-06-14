#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PickupMessageIcon_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PickupMessageIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupMessageIcon_DEFINED)
#include <Modloader/app/structs/PickupMessageIcon__Fields.h>
#if defined(IL2CPP_STRUCT_PickupMessageIcon__Fields_DEFINED)
#define IL2CPP_STRUCT_PickupMessageIcon_DEFINED
struct PickupMessageIcon__Class;
struct PickupMessageIcon {
    struct PickupMessageIcon__Class* klass;
    MonitorData* monitor;
    struct PickupMessageIcon__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PickupMessageIcon_FWDDECL)
#define IL2CPP_STRUCT_PickupMessageIcon_FWDDECL
#include <Modloader/app/structs/PickupMessageIcon__Class.h>
#endif
#undef IL2CPP_STRUCT_PickupMessageIcon_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupMessageIcon_DEFINED) && !defined(IL2CPP_STRUCT_PickupMessageIcon_FWDDECL)
#include <Modloader/app/structs/PickupMessageIcon.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PickupMessageIcon.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
