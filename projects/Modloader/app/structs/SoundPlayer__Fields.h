#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SoundPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SoundPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundPlayer__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_SoundPlayer__Fields_DEFINED
struct SoundSize;
struct Event_1;
struct Switch_1;
struct Trigger;
struct SoundHost;
struct SoundPlayer__Fields {
    struct MonoBehaviour__Fields _;
    struct SoundSize* SoundSize;
    struct Event_1* WWiseEvent;
    struct Switch_1* Switch;
    struct Trigger* Trigger;
    bool DestroyOnFinished;
    bool DestroyOnRestart;
    bool PauseOnSuspend;
    bool m_isSuspended;
    SuspendableMask__Enum m_suspensionMask;

    struct WwiseEventSystem_SoundHandle m_soundHandle;
    struct SoundHost* m_soundHost;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SoundPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_SoundPlayer__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/SoundSize.h>
#include <Modloader/app/structs/Switch_1.h>
#include <Modloader/app/structs/Trigger.h>
#endif
#undef IL2CPP_STRUCT_SoundPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SoundPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SoundPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/SoundPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SoundPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
