#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ArmouredRammingEnemy__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ArmouredRammingEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArmouredRammingEnemy__Fields_DEFINED)
#include <Modloader/app/structs/RammingEnemy__Fields.h>
#if defined(IL2CPP_STRUCT_RammingEnemy__Fields_DEFINED)
#define IL2CPP_STRUCT_ArmouredRammingEnemy__Fields_DEFINED
struct GameObject;
struct Action_1_LegacyEntity_;
struct PrefabSpawner;
struct ArmouredRammingEnemy__Fields {
    struct RammingEnemy__Fields _;
    struct GameObject* RammingEnemy;
    struct Action_1_LegacyEntity_* OnReplacedAction;
    struct PrefabSpawner* ShatterEffect;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ArmouredRammingEnemy__Fields_FWDDECL)
#define IL2CPP_STRUCT_ArmouredRammingEnemy__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_LegacyEntity_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#endif
#undef IL2CPP_STRUCT_ArmouredRammingEnemy__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ArmouredRammingEnemy__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ArmouredRammingEnemy__Fields_FWDDECL)
#include <Modloader/app/structs/ArmouredRammingEnemy__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ArmouredRammingEnemy__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
