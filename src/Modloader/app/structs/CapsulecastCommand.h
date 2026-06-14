#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CapsulecastCommand_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CapsulecastCommand_INITIALIZING
#if !defined(IL2CPP_STRUCT_CapsulecastCommand_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_CapsulecastCommand_DEFINED
struct CapsulecastCommand {
    struct Vector3 _point1_k__BackingField;
    struct Vector3 _point2_k__BackingField;
    float _radius_k__BackingField;
    struct Vector3 _direction_k__BackingField;
    float _distance_k__BackingField;
    int32_t _layerMask_k__BackingField;
    int32_t _maxHits_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_CapsulecastCommand_FWDDECL)
#define IL2CPP_STRUCT_CapsulecastCommand_FWDDECL
#endif
#undef IL2CPP_STRUCT_CapsulecastCommand_INITIALIZING
#if !defined(IL2CPP_STRUCT_CapsulecastCommand_DEFINED) && !defined(IL2CPP_STRUCT_CapsulecastCommand_FWDDECL)
#include <Modloader/app/structs/CapsulecastCommand.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CapsulecastCommand.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
