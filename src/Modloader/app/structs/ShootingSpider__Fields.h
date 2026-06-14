#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShootingSpider__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShootingSpider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootingSpider__Fields_DEFINED)
#include <Modloader/app/structs/Enemy2D__Fields.h>
#if defined(IL2CPP_STRUCT_Enemy2D__Fields_DEFINED)
#define IL2CPP_STRUCT_ShootingSpider__Fields_DEFINED
struct ShootingSpiderAnimations;
struct ShootingSpiderSounds;
struct PrefabSpawner;
struct GameObject;
struct Transform;
struct ShootingSpiderSettings;
struct ShootingSpider_States;
struct ShootingSpider__Fields {
    struct Enemy2D__Fields _;
    struct ShootingSpiderAnimations* Animations;
    struct ShootingSpiderSounds* Sounds;
    struct PrefabSpawner* ChargingEffect;
    struct GameObject* IceBlock;
    struct Transform* ProjectileSpawner;
    struct ShootingSpiderSettings* Settings;
    struct PrefabSpawner* ShootingEffect;
    bool ShootThree;
    struct ShootingSpider_States* State;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShootingSpider__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShootingSpider__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/PrefabSpawner.h>
#include <Modloader/app/structs/ShootingSpiderAnimations.h>
#include <Modloader/app/structs/ShootingSpiderSettings.h>
#include <Modloader/app/structs/ShootingSpiderSounds.h>
#include <Modloader/app/structs/ShootingSpider_States.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_ShootingSpider__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShootingSpider__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShootingSpider__Fields_FWDDECL)
#include <Modloader/app/structs/ShootingSpider__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShootingSpider__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
