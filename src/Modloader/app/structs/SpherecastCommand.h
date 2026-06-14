#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpherecastCommand_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpherecastCommand_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpherecastCommand_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_SpherecastCommand_DEFINED
struct SpherecastCommand {
    struct Vector3 _origin_k__BackingField;
    float _radius_k__BackingField;
    struct Vector3 _direction_k__BackingField;
    float _distance_k__BackingField;
    int32_t _layerMask_k__BackingField;
    int32_t _maxHits_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpherecastCommand_FWDDECL)
#define IL2CPP_STRUCT_SpherecastCommand_FWDDECL
#endif
#undef IL2CPP_STRUCT_SpherecastCommand_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpherecastCommand_DEFINED) && !defined(IL2CPP_STRUCT_SpherecastCommand_FWDDECL)
#include <Modloader/app/structs/SpherecastCommand.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpherecastCommand.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
