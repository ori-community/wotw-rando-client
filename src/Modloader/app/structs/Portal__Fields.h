#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Portal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Portal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Portal__Fields_DEFINED)
#include <Modloader/app/structs/Bounds.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Bounds_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_Portal__Fields_DEFINED
struct String;
struct Portal;
struct Condition_1;
struct Renderer__Array;
struct Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_;
struct SoundHost;
struct Event_1;
struct GameObject;
struct BaseAnimator;
struct List_1_Portal_AssistConfig_;
struct Portal__Fields {
    struct MonoBehaviour__Fields _;
    bool IsLeftPortal;
    struct String* OtherPortalName;
    struct Portal* Other;
    float DelayToPortal;
    struct Condition_1* Condition;
    bool m_insideFrustum;
    bool m_isPrewarmed;
    struct Renderer__Array* m_cachedRenderes;
    struct Bounds BoundingBox;
    struct Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_* m_portalVisitors;
    struct SoundHost* m_soundHost;
    struct Event_1* PortalLoopSoundEvent;
    struct Event_1* TeleportSoundEvent;
    struct Event_1* AnticipationSoundEvent;
    struct Event_1* EnterAnticipationSoundEvent;
    struct Event_1* ExitAnticipationSoundEvent;
    struct GameObject* EnterEffect;
    struct GameObject* ExitEffect;
    struct GameObject* AnticipationEnterEffect;
    struct GameObject* AnticipationExitEffect;
    struct GameObject* m_anticipationEnterEffect;
    struct GameObject* m_anticipationExitEffect;
    struct BaseAnimator* m_anticipationEnterEffectAnimator;
    struct BaseAnimator* m_anticipationExitEffectAnimator;
    bool HasAnticipationEffects;
    bool CenterEffects;
    struct List_1_Portal_AssistConfig_* AssistSettings;
    struct WwiseEventSystem_SoundHandle m_lastLoopSoundHandle;
    struct WwiseEventSystem_SoundHandle m_anticipationSoundHandle;
    float AnticipationRadius;
    bool m_wasOriInsideAnticipationZone;
    bool EnableDebugLog;
    int32_t m_suspensionTicket;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Portal__Fields_FWDDECL)
#define IL2CPP_STRUCT_Portal__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/Dictionary_2_IPortalVisitor_Portal_PortalVisitorTracking_.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_Portal_AssistConfig_.h>
#include <Modloader/app/structs/Portal.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_Portal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Portal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Portal__Fields_FWDDECL)
#include <Modloader/app/structs/Portal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Portal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
