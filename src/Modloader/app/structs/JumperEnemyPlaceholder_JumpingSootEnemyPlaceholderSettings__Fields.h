#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields_DEFINED
struct DropLootSettings;
struct __declspec(align(8)) JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields {
    float Health;
    float DamageOnTouch;
    int32_t NumberOfExpOrbsToDrop;
    struct DropLootSettings* LootSettings;
    float ChargeRange;
    float JumpHeight;
    float ShortJumpHeight;
    float JumpDistance;
    float Gravity;
    float ChargingDuration;
    float ExplosionDamage;
    int32_t GroundStompDamage;
    bool HasStompExplosion;
};
#endif
#if !defined(IL2CPP_STRUCT_JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields_FWDDECL
#include <Modloader/app/structs/DropLootSettings.h>
#endif
#undef IL2CPP_STRUCT_JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields_FWDDECL)
#include <Modloader/app/structs/JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JumperEnemyPlaceholder_JumpingSootEnemyPlaceholderSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
