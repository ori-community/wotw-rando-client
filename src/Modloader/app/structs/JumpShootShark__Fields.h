#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumpShootShark__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumpShootShark__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpShootShark__Fields_DEFINED)
#include <Modloader/app/structs/Enemy2D__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Enemy2D__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_JumpShootShark__Fields_DEFINED
struct JumpShootSharkAnimations;
struct JumpShootSharkSettings;
struct Transform;
struct PrefabSpawner;
struct GameObject;
struct JumpShootShark_States;
struct SoundSource;
struct AnimationCurve;
struct JumpShootShark__Fields {
    struct Enemy2D__Fields _;
    struct JumpShootSharkAnimations* Animations;
    struct JumpShootSharkSettings* Settings;
    struct Transform* ProjectileSpawner;
    struct PrefabSpawner* EmergePrefab;
    struct PrefabSpawner* SubmergePrefab;
    struct Vector3 EmergePosition;
    struct GameObject* Projectile;
    float ProjectileSpeed;
    struct JumpShootShark_States* State;
    struct SoundSource* EmergeAnticipation;
    struct SoundSource* Emerge;
    struct SoundSource* Shoot;
    struct SoundSource* Submerge;
    struct GameObject* HideGroup;
    bool m_hasFired;
    struct AnimationCurve* JumpCurve;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JumpShootShark__Fields_FWDDECL)
#define IL2CPP_STRUCT_JumpShootShark__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/JumpShootSharkAnimations.h>
#include <Modloader/app/structs/JumpShootSharkSettings.h>
#include <Modloader/app/structs/JumpShootShark_States.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/SoundSource.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_JumpShootShark__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumpShootShark__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JumpShootShark__Fields_FWDDECL)
#include <Modloader/app/structs/JumpShootShark__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumpShootShark__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
