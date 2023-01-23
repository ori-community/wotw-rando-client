#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GroundMoveInDirectionBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GroundMoveInDirectionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundMoveInDirectionBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_GroundMoveInDirectionBehaviour__Fields_DEFINED
struct Locomotion;
struct GroundMoveInDirectionBehaviour__Fields {
    struct EntityBehaviour__Fields _;
    bool _MoveLeft_k__BackingField;
    int32_t _TraversalSpeed_k__BackingField;
    float _MinDuration_k__BackingField;
    float _MaxDuration_k__BackingField;
    struct Locomotion* m_locomotion;
    float m_timer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GroundMoveInDirectionBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_GroundMoveInDirectionBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Locomotion.h>
#endif
#undef IL2CPP_STRUCT_GroundMoveInDirectionBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GroundMoveInDirectionBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GroundMoveInDirectionBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/GroundMoveInDirectionBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GroundMoveInDirectionBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
