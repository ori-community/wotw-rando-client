#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SavePedestal__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SavePedestal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SavePedestal__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SavePedestal_State__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SavePedestal_State__Enum_DEFINED)
#define IL2CPP_STRUCT_SavePedestal__Fields_DEFINED
struct Transform;
struct String;
struct MessageBox;
struct SoundProvider;
struct SavePedestalUberState;
struct MoonTimeline;
struct IUberState__Array;
struct SeinAbilityRestrictZone;
struct SavePedestal__Fields {
    struct MonoBehaviour__Fields _;
    struct Transform* OriTarget;
    float Radius;
    float OriDuration;
    struct String* Identifier;
    bool ShowTopHint;
    struct Transform* EnableOnTeleportActive;
    struct Transform* m_transform;
    bool m_isAnyOtherTeleporterActiveCached;
    struct MessageBox* m_hint;
    struct SoundProvider* OnOriEnter;
    struct SoundProvider* OnOriExit;
    struct SoundProvider* OnSaveSecondTime;
    struct SavePedestalUberState* SerializedState;
    struct MoonTimeline* TeleportEffect;
    struct IUberState__Array* m_affectingUberStates;
    struct MoonTimeline* OriEnterTimeline;
    struct MoonTimeline* OriExitTimeline;
    struct MoonTimeline* OnOpenedTimelineOri;
    struct MoonTimeline* OnOpenedTimelineTandem;
    struct SeinAbilityRestrictZone* AbilityRestrictZone;
    bool m_hintShowPending;
    SavePedestal_State__Enum CurrentState;

    bool _InvalidateParentTimelineCache_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SavePedestal__Fields_FWDDECL)
#define IL2CPP_STRUCT_SavePedestal__Fields_FWDDECL
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/SavePedestalUberState.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone.h>
#include <Modloader/app/structs/SoundProvider.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_SavePedestal__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SavePedestal__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SavePedestal__Fields_FWDDECL)
#include <Modloader/app/structs/SavePedestal__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SavePedestal__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
