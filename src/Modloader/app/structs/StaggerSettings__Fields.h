#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_StaggerSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_StaggerSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaggerSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_StaggerSettings__Fields_DEFINED
struct EntityReactionBehaviour;
struct GameObject;
struct PrefabProvider;
struct __declspec(align(8)) StaggerSettings__Fields {
    struct EntityReactionBehaviour* Stagger;
    struct EntityReactionBehaviour* StaggerBack;
    float DamageMultiplierForStagger;
    struct GameObject* DefaultEffectPrefab;
    struct PrefabProvider* EffectPrefabProvider;
    bool DontPlayDuringKickups;
};
#endif
#if !defined(IL2CPP_STRUCT_StaggerSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_StaggerSettings__Fields_FWDDECL
#include <Modloader/app/structs/EntityReactionBehaviour.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PrefabProvider.h>
#endif
#undef IL2CPP_STRUCT_StaggerSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_StaggerSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_StaggerSettings__Fields_FWDDECL)
#include <Modloader/app/structs/StaggerSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/StaggerSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
