#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundZoneTrigger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundZoneTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundZoneTrigger__Fields_DEFINED)
#include <Modloader/app/structs/AudioListenerZone__Fields.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/SoundZoneTrigger_SoundZoneTriggerMode__Enum.h>
#include <Modloader/app/structs/SoundZoneTrigger_SoundZoneTriggerType__Enum.h>
#if defined(IL2CPP_STRUCT_AudioListenerZone__Fields_DEFINED) && defined(IL2CPP_STRUCT_SoundZoneTrigger_SoundZoneTriggerType__Enum_DEFINED) && defined(IL2CPP_STRUCT_SoundZoneTrigger_SoundZoneTriggerMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_SoundZoneTrigger__Fields_DEFINED
struct Condition_1;
struct SerializedBooleanUberState;
struct SoundHost;
struct Event_1;
struct Switch_1;
struct State;
struct Trigger;
struct SoundZoneTrigger__Fields {
    struct AudioListenerZone__Fields _;
    SoundZoneTrigger_SoundZoneTriggerType__Enum TriggerType;

    SoundZoneTrigger_SoundZoneTriggerMode__Enum TriggerMode;

    struct Condition_1* ConditionToTrigger;
    bool TriggerOnce;
    struct SerializedBooleanUberState* TriggerOnceUberState;
    struct SoundHost* TargetSoundHost;
    struct Event_1* Event;
    struct Switch_1* Switch;
    struct State* State;
    struct Trigger* Trigger;
    bool m_hasTriggered;
    bool m_mainCharacterInside;
    struct Rect m_bounds;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundZoneTrigger__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundZoneTrigger__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/State.h>
#include <Modloader/app/structs/Switch_1.h>
#include <Modloader/app/structs/Trigger.h>
#endif
#undef IL2CPP_STRUCT_SoundZoneTrigger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundZoneTrigger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundZoneTrigger__Fields_FWDDECL)
#include <Modloader/app/structs/SoundZoneTrigger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundZoneTrigger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
