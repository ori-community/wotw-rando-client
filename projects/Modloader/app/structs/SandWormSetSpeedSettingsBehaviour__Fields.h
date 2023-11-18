#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SandWormSetSpeedSettingsBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SandWormSetSpeedSettingsBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormSetSpeedSettingsBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/EntityBehaviourNode_1_SandWormEntity___Fields.h>
#include <Modloader/app/structs/SandWormLocomotion_SpeedSetting__Enum.h>
#if defined(IL2CPP_STRUCT_EntityBehaviourNode_1_SandWormEntity___Fields_DEFINED) && defined(IL2CPP_STRUCT_SandWormLocomotion_SpeedSetting__Enum_DEFINED)
#define IL2CPP_STRUCT_SandWormSetSpeedSettingsBehaviour__Fields_DEFINED
struct SandWormLocomotion;
struct SandWormSetSpeedSettingsBehaviour__Fields {
    struct EntityBehaviourNode_1_SandWormEntity___Fields _;
    SandWormLocomotion_SpeedSetting__Enum SpeedSetting;

    struct SandWormLocomotion* m_wormLocomotion;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SandWormSetSpeedSettingsBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_SandWormSetSpeedSettingsBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/SandWormLocomotion.h>
#endif
#undef IL2CPP_STRUCT_SandWormSetSpeedSettingsBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SandWormSetSpeedSettingsBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SandWormSetSpeedSettingsBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/SandWormSetSpeedSettingsBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SandWormSetSpeedSettingsBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
