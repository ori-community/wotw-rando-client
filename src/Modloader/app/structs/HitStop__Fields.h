#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitStop__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitStop__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitStop__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_HitStop__Fields_DEFINED
struct IHitStopReceiver;
struct List_1_Moon_HitStop_Entry_;
struct Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry_;
struct HitStop__Fields {
    struct MonoBehaviour__Fields _;
    struct IHitStopReceiver* m_hitStopReceiver;
    float m_timeRemaining;
    float m_timeElapsed;
    float m_hitStopDelayTime;
    bool m_wasNotified;
    struct List_1_Moon_HitStop_Entry_* m_entries;
    struct Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry_* m_entryBySuspendable;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitStop__Fields_FWDDECL)
#define IL2CPP_STRUCT_HitStop__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_Moon_ISuspendable_Moon_HitStop_Entry_.h>
#include <Modloader/app/structs/IHitStopReceiver.h>
#include <Modloader/app/structs/List_1_Moon_HitStop_Entry_.h>
#endif
#undef IL2CPP_STRUCT_HitStop__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitStop__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HitStop__Fields_FWDDECL)
#include <Modloader/app/structs/HitStop__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitStop__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
