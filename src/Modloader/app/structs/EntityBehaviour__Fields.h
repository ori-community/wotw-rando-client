#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourStatus__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_EntityBehaviourStatus__Enum_DEFINED)
#define IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED
struct Object;
struct Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus_;
struct List_1_Moon_IEntityBehaviour_;
struct Entity;
struct EntityBehaviourDebugData;
struct EntityBehaviour__Fields {
    struct MonoBehaviour__Fields _;
    struct Object* _ExecutingObject_k__BackingField;
    struct Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus_* _OnEndBehaviourEvent_k__BackingField;
    float _BehaviourTime_k__BackingField;
    struct List_1_Moon_IEntityBehaviour_* m_children;
    struct Entity* m_entity;
    EntityBehaviourStatus__Enum m_status;

    struct EntityBehaviourDebugData* m_debugData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/Action_2_Moon_IEntityBehaviour_Moon_EntityBehaviourStatus_.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityBehaviourDebugData.h>
#include <Modloader/app/structs/List_1_Moon_IEntityBehaviour_.h>
#include <Modloader/app/structs/Object.h>
#endif
#undef IL2CPP_STRUCT_EntityBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
