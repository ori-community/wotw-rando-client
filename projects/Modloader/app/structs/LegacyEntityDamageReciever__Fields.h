#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyEntityDamageReciever__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyEntityDamageReciever__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyEntityDamageReciever__Fields_DEFINED)
#include <Modloader/app/structs/LegacyDamageReciever__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyDamageReciever__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyEntityDamageReciever__Fields_DEFINED
struct LegacyEntity;
struct LegacyEntityDamageReciever_ModifyDamageDelegate;
struct Event_1;
struct SoundHost;
struct List_1_LimitedLifetime_;
struct LegacyEntityDamageReciever__Fields {
    struct LegacyDamageReciever__Fields _;
    struct LegacyEntity* Entity;
    struct LegacyEntityDamageReciever_ModifyDamageDelegate* OnModifyDamage;
    bool CanBeCrushed;
    struct Event_1* OnDamageSoundEvent;
    struct Event_1* OnDeathSoundEvent;
    bool IgnoreEnemyTouchDamage;
    struct SoundHost* m_soundHost;
    struct List_1_LimitedLifetime_* m_fireEffects;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyEntityDamageReciever__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyEntityDamageReciever__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/LegacyEntity.h>
#include <Modloader/app/structs/LegacyEntityDamageReciever_ModifyDamageDelegate.h>
#include <Modloader/app/structs/List_1_LimitedLifetime_.h>
#include <Modloader/app/structs/SoundHost.h>
#endif
#undef IL2CPP_STRUCT_LegacyEntityDamageReciever__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyEntityDamageReciever__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyEntityDamageReciever__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyEntityDamageReciever__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyEntityDamageReciever__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
