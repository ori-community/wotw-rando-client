#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntitySpawnTask__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntitySpawnTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntitySpawnTask__Fields_DEFINED)
#include <Modloader/app/structs/AnimatorCullingMode__Enum.h>
#include <Modloader/app/structs/EntityTask__Fields.h>
#if defined(IL2CPP_STRUCT_EntityTask__Fields_DEFINED) && defined(IL2CPP_STRUCT_AnimatorCullingMode__Enum_DEFINED)
#define IL2CPP_STRUCT_EntitySpawnTask__Fields_DEFINED
struct List_1_Moon_Timeline_EventTriggerAnimator_;
struct EntitySpawnSetup;
struct EntitySpawnTask__Fields {
    struct EntityTask__Fields _;
    struct List_1_Moon_Timeline_EventTriggerAnimator_* ReactivateDamageDealersTriggers;
    bool m_areDamageDealersActive;
    AnimatorCullingMode__Enum m_originalAnimatorCullingMode;

    struct EntitySpawnSetup* _SpawnSetup_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntitySpawnTask__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntitySpawnTask__Fields_FWDDECL
#include <Modloader/app/structs/EntitySpawnSetup.h>
#include <Modloader/app/structs/List_1_Moon_Timeline_EventTriggerAnimator_.h>
#endif
#undef IL2CPP_STRUCT_EntitySpawnTask__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntitySpawnTask__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntitySpawnTask__Fields_FWDDECL)
#include <Modloader/app/structs/EntitySpawnTask__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntitySpawnTask__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
