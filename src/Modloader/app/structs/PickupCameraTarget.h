#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PickupCameraTarget_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PickupCameraTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupCameraTarget_DEFINED)
#include <Modloader/app/structs/PickupCameraTarget__Fields.h>
#if defined(IL2CPP_STRUCT_PickupCameraTarget__Fields_DEFINED)
#define IL2CPP_STRUCT_PickupCameraTarget_DEFINED
struct PickupCameraTarget__Class;
struct PickupCameraTarget {
    struct PickupCameraTarget__Class* klass;
    MonitorData* monitor;
    struct PickupCameraTarget__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PickupCameraTarget_FWDDECL)
#define IL2CPP_STRUCT_PickupCameraTarget_FWDDECL
#include <Modloader/app/structs/PickupCameraTarget__Class.h>
#endif
#undef IL2CPP_STRUCT_PickupCameraTarget_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupCameraTarget_DEFINED) && !defined(IL2CPP_STRUCT_PickupCameraTarget_FWDDECL)
#include <Modloader/app/structs/PickupCameraTarget.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PickupCameraTarget.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
