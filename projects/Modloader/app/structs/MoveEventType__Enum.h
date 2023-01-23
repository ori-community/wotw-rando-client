#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoveEventType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoveEventType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveEventType__Enum_DEFINED)
#define IL2CPP_STRUCT_MoveEventType__Enum_DEFINED
enum class MoveEventType__Enum : int32_t {
    EnableColliders = 0x00000000,
    AllowCancelByAttack = 0x00000001,
    AllowCancelByMovementAbility = 0x00000002,
    AllowCancelByAnalogMovement = 0x00000003,
    AllowCancelByOppositeAnalogMovement = 0x00000005,
    AllowInputQueueing = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_MoveEventType__Enum_FWDDECL)
#define IL2CPP_STRUCT_MoveEventType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_MoveEventType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoveEventType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_MoveEventType__Enum_FWDDECL)
#include <Modloader/app/structs/MoveEventType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoveEventType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
