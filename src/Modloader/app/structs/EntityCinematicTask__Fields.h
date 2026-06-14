#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityCinematicTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityCinematicTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityCinematicTask__Fields_DEFINED)
#include <Modloader/app/structs/AnimatorCullingMode__Enum.h>
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/Nullable_1_Moon_BehaviourSystem_BehaviourStatus_.h>
#if defined(IL2CPP_STRUCT_BehaviourStatus__Enum_DEFINED) && defined(IL2CPP_STRUCT_AnimatorCullingMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Moon_BehaviourSystem_BehaviourStatus__DEFINED)
#define IL2CPP_STRUCT_EntityCinematicTask__Fields_DEFINED
struct Entity;
struct Locomotion;
struct RootMotionProcessorData;
struct EntityCinematicData;
struct __declspec(align(8)) EntityCinematicTask__Fields {
    BehaviourStatus__Enum m_status;

    struct Entity* m_entity;
    struct Locomotion* m_locomotion;
    AnimatorCullingMode__Enum m_originalAnimatorCullingMode;

    struct RootMotionProcessorData* m_rootMotion;
    struct EntityCinematicData* _Data_k__BackingField;
    struct Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ _ForceReturnTaskStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityCinematicTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityCinematicTask__Fields_FWDDECL
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityCinematicData.h>
#include <Modloader/app/structs/Locomotion.h>
#include <Modloader/app/structs/RootMotionProcessorData.h>
#endif
#undef IL2CPP_STRUCT_EntityCinematicTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityCinematicTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityCinematicTask__Fields_FWDDECL)
#include <Modloader/app/structs/EntityCinematicTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityCinematicTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
