#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ValleyOfTheWindKuroGameplayController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ValleyOfTheWindKuroGameplayController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValleyOfTheWindKuroGameplayController__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_ValleyOfTheWindKuroGameplayController__Fields_DEFINED
struct GameObject;
struct SoundProvider;
struct ValleyOfTheWindKuroGameplayController__Fields {
    struct SaveSerialize__Fields _;
    float DeathDelay;
    struct GameObject* FlyingKuro;
    struct SoundProvider* AttackSound;
    float m_time;
    bool m_hasKilledPlayer;
    bool m_hasBeenSeen;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ValleyOfTheWindKuroGameplayController__Fields_FWDDECL)
#define IL2CPP_STRUCT_ValleyOfTheWindKuroGameplayController__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_ValleyOfTheWindKuroGameplayController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ValleyOfTheWindKuroGameplayController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ValleyOfTheWindKuroGameplayController__Fields_FWDDECL)
#include <Modloader/app/structs/ValleyOfTheWindKuroGameplayController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ValleyOfTheWindKuroGameplayController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
