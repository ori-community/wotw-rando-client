#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinWorldState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinWorldState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWorldState__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinWorldState__Fields_DEFINED
struct SerializedBooleanUberState;
struct SerializedIntUberState;
struct IUberState__Array;
struct SeinWorldState__Fields {
    struct MonoBehaviour__Fields _;
    struct SerializedBooleanUberState* ForlornRuinsKey;
    struct SerializedBooleanUberState* GinsoTreeKey;
    struct SerializedBooleanUberState* MountHoruKey;
    struct SerializedBooleanUberState* WaterPurified;
    struct SerializedBooleanUberState* WarmthReturned;
    struct SerializedBooleanUberState* GinsoTreeEntered;
    struct SerializedBooleanUberState* MistLifted;
    struct SerializedBooleanUberState* WindRestored;
    struct SerializedBooleanUberState* GumoFree;
    struct SerializedBooleanUberState* GravityActivated;
    struct SerializedBooleanUberState* SpiritTreeReached;
    struct SerializedBooleanUberState* DarknessLifted;
    struct SerializedBooleanUberState* KwolokDead;
    struct SerializedIntUberState* FindKuQuest;
    struct SerializedIntUberState* WatermillQuest;
    struct SerializedIntUberState* KwolokNpc;
    struct SerializedBooleanUberState* SwampIntroVignetteFinished;
    struct SerializedIntUberState* TheElderQuest;
    struct SerializedIntUberState* MouldwoodWispQuest;
    struct SerializedIntUberState* LagoonWispQuest;
    struct SerializedIntUberState* DesertWispQuest;
    struct SerializedIntUberState* WinterForestWispQuest;
    struct SerializedIntUberState* BaurNpc;
    struct IUberState__Array* m_affectingUberStates;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinWorldState__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinWorldState__Fields_FWDDECL
#include <Modloader/app/structs/IUberState__Array.h>
#include <Modloader/app/structs/SerializedBooleanUberState.h>
#include <Modloader/app/structs/SerializedIntUberState.h>
#endif
#undef IL2CPP_STRUCT_SeinWorldState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinWorldState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinWorldState__Fields_FWDDECL)
#include <Modloader/app/structs/SeinWorldState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinWorldState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
