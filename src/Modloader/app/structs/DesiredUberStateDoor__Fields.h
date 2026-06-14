#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DesiredUberStateDoor__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DesiredUberStateDoor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateDoor__Fields_DEFINED)
#include <Modloader/app/structs/DesiredUberStateBoolBase__Fields.h>
#include <Modloader/app/structs/DesiredUberStateDoor_DoorState__Enum.h>
#if defined(IL2CPP_STRUCT_DesiredUberStateBoolBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_DesiredUberStateDoor_DoorState__Enum_DEFINED)
#define IL2CPP_STRUCT_DesiredUberStateDoor__Fields_DEFINED
struct DesiredUberStateDoor__Fields {
    struct DesiredUberStateBoolBase__Fields _;
    DesiredUberStateDoor_DoorState__Enum DesiredDoorState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DesiredUberStateDoor__Fields_FWDDECL)
#define IL2CPP_STRUCT_DesiredUberStateDoor__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_DesiredUberStateDoor__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DesiredUberStateDoor__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DesiredUberStateDoor__Fields_FWDDECL)
#include <Modloader/app/structs/DesiredUberStateDoor__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DesiredUberStateDoor__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
