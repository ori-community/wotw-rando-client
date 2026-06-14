#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Wwise__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Wwise__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Wwise__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Wwise__StaticFields_DEFINED
struct Event_1;
struct Switch_1;
struct Trigger;
struct WwiseIntegration;
struct WwiseSyncProcessor;
struct WwiseEventSystem;
struct WwiseGameObjectSystem;
struct WwiseSoundBankSystem;
struct SoundHost;
struct SoundListener;
struct Wwise__StaticFields {
    struct Event_1* EmptyEvent;
    struct Switch_1* EmptySwitch;
    struct Trigger* EmptyTrigger;
    bool DebugDraw;
    bool DebugLog;
    bool LogGlobalSoundHostCalls;
    bool UseDelayedCallbacks;
    struct WwiseIntegration* m_integration;
    struct WwiseSyncProcessor* m_syncProcessor;
    struct WwiseEventSystem* m_eventsSystem;
    struct WwiseGameObjectSystem* m_gameObjectSystem;
    struct WwiseSoundBankSystem* m_soundBankSystem;
    struct SoundHost* _DefaultDevSoundHost_k__BackingField;
    struct SoundListener* _DefaultSoundListener_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_Wwise__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Wwise__StaticFields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundListener.h>
#include <Modloader/app/structs/Switch_1.h>
#include <Modloader/app/structs/Trigger.h>
#include <Modloader/app/structs/WwiseEventSystem.h>
#include <Modloader/app/structs/WwiseGameObjectSystem.h>
#include <Modloader/app/structs/WwiseIntegration.h>
#include <Modloader/app/structs/WwiseSoundBankSystem.h>
#include <Modloader/app/structs/WwiseSyncProcessor.h>
#endif
#undef IL2CPP_STRUCT_Wwise__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Wwise__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Wwise__StaticFields_FWDDECL)
#include <Modloader/app/structs/Wwise__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Wwise__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
