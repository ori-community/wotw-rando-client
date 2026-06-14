#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CheckpointFunctionality_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CheckpointFunctionality_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED)
#include <Modloader/app/structs/CheckpointFunctionality_CheckpointPositionMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_CheckpointFunctionality_CheckpointPositionMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_CheckpointFunctionality_DEFINED
struct Transform;
struct CheckpointFunctionality {
    CheckpointFunctionality_CheckpointPositionMode__Enum Mode;

    struct Transform* RespawnTransform;
    struct Vector2 RespawnOffset;
    bool RefillHealthAndEnergy;
    bool ApplyRefillInstantly;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CheckpointFunctionality_FWDDECL)
#define IL2CPP_STRUCT_CheckpointFunctionality_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_CheckpointFunctionality_INITIALIZING
#if !defined(IL2CPP_STRUCT_CheckpointFunctionality_DEFINED) && !defined(IL2CPP_STRUCT_CheckpointFunctionality_FWDDECL)
#include <Modloader/app/structs/CheckpointFunctionality.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CheckpointFunctionality.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
