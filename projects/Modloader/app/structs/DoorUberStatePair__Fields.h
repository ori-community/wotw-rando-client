#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DoorUberStatePair__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DoorUberStatePair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorUberStatePair__Fields_DEFINED)
#include <Modloader/app/structs/BooleanUberStatePairBase__Fields.h>
#include <Modloader/app/structs/DesiredUberStateDoor_DoorState__Enum.h>
#if defined(IL2CPP_STRUCT_BooleanUberStatePairBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_DesiredUberStateDoor_DoorState__Enum_DEFINED)
#define IL2CPP_STRUCT_DoorUberStatePair__Fields_DEFINED
struct DoorUberStatePair__Fields {
    struct BooleanUberStatePairBase__Fields _;
    DesiredUberStateDoor_DoorState__Enum Value;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DoorUberStatePair__Fields_FWDDECL)
#define IL2CPP_STRUCT_DoorUberStatePair__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_DoorUberStatePair__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DoorUberStatePair__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DoorUberStatePair__Fields_FWDDECL)
#include <Modloader/app/structs/DoorUberStatePair__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DoorUberStatePair__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
