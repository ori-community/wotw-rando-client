#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityTask__Fields_DEFINED)
#include <Modloader/app/structs/BehaviourStatus__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Nullable_1_Moon_BehaviourSystem_BehaviourStatus_.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_BehaviourStatus__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Moon_BehaviourSystem_BehaviourStatus__DEFINED)
#define IL2CPP_STRUCT_EntityTask__Fields_DEFINED
struct Action_2_Moon_BehaviourSystem_EntityTask_Moon_BehaviourSystem_BehaviourStatus_;
struct Entity;
struct EntityBehaviourDebugData;
struct String;
struct List_1_Moon_BehaviourSystem_EntityTask_;
struct EntityTask__Fields {
    struct MonoBehaviour__Fields _;
    struct Action_2_Moon_BehaviourSystem_EntityTask_Moon_BehaviourSystem_BehaviourStatus_* OnEndBehaviourEvent;
    struct Entity* m_entity;
    BehaviourStatus__Enum m_status;

    struct EntityBehaviourDebugData* m_debugData;
    struct String* m_profilerString;
    struct List_1_Moon_BehaviourSystem_EntityTask_* m_children;
    bool m_debug_OnEntityInitializationWasCalled;
    struct Nullable_1_Moon_BehaviourSystem_BehaviourStatus_ _ForceReturnTaskStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityTask__Fields_FWDDECL
#include <Modloader/app/structs/Action_2_Moon_BehaviourSystem_EntityTask_Moon_BehaviourSystem_BehaviourStatus_.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/EntityBehaviourDebugData.h>
#include <Modloader/app/structs/List_1_Moon_BehaviourSystem_EntityTask_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_EntityTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityTask__Fields_FWDDECL)
#include <Modloader/app/structs/EntityTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
