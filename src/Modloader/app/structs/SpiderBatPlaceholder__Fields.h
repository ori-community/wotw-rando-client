#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiderBatPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiderBatPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/EntityPlaceholder__Fields.h>
#include <Modloader/app/structs/SpiderBatEntity_AttackSet__Enum.h>
#include <Modloader/app/structs/SpiderBatEntity_ClimbBehaviourType__Enum.h>
#if defined(IL2CPP_STRUCT_EntityPlaceholder__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpiderBatEntity_ClimbBehaviourType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SpiderBatEntity_AttackSet__Enum_DEFINED)
#define IL2CPP_STRUCT_SpiderBatPlaceholder__Fields_DEFINED
struct Rope;
struct GameObject;
struct SpiderBatEntity;
struct SpiderBatPlaceholder__Fields {
    struct EntityPlaceholder__Fields _;
    struct Rope* WebRopePrefab;
    float WebRopeLength;
    struct Rope* m_attachedRope;
    struct GameObject* m_parentTransform;
    struct SpiderBatEntity* m_spiderBatEntity;
    bool m_firstTime;
    SpiderBatEntity_ClimbBehaviourType__Enum ClimbType;

    bool SpawnReadyToAttack;
    SpiderBatEntity_AttackSet__Enum Attacks;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiderBatPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiderBatPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Rope.h>
#include <Modloader/app/structs/SpiderBatEntity.h>
#endif
#undef IL2CPP_STRUCT_SpiderBatPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiderBatPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiderBatPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/SpiderBatPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiderBatPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
