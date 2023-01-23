#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MoonCustomDoorWithSlots__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MoonCustomDoorWithSlots__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonCustomDoorWithSlots__Fields_DEFINED)
#include <Modloader/app/structs/MoonDoorWithSlots__Fields.h>
#include <Modloader/app/structs/Nullable_1_UnityEngine_Vector3_.h>
#if defined(IL2CPP_STRUCT_MoonDoorWithSlots__Fields_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_UnityEngine_Vector3__DEFINED)
#define IL2CPP_STRUCT_MoonCustomDoorWithSlots__Fields_DEFINED
struct MoonTimeline__Array;
struct Condition_1;
struct SerializedByteUberState;
struct MoonTimeline;
struct DynamicDataResolver;
struct MoonCustomDoorWithSlots__Fields {
    struct MoonDoorWithSlots__Fields _;
    struct MoonTimeline__Array* SpendKeyStoneTimelines;
    struct Condition_1* CanSpendKey;
    struct SerializedByteUberState* KeystonesPlaced;
    bool TriggerAutomatically;
    struct MoonTimeline* m_currentTimeline;
    int32_t KeysUsedAtATime;
    struct Nullable_1_UnityEngine_Vector3_ m_scenePosition;
    struct DynamicDataResolver* m_dataResolver;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MoonCustomDoorWithSlots__Fields_FWDDECL)
#define IL2CPP_STRUCT_MoonCustomDoorWithSlots__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/DynamicDataResolver.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/MoonTimeline__Array.h>
#include <Modloader/app/structs/SerializedByteUberState.h>
#endif
#undef IL2CPP_STRUCT_MoonCustomDoorWithSlots__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MoonCustomDoorWithSlots__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MoonCustomDoorWithSlots__Fields_FWDDECL)
#include <Modloader/app/structs/MoonCustomDoorWithSlots__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MoonCustomDoorWithSlots__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
