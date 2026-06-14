#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDeadlyDarknessController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDeadlyDarknessController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDeadlyDarknessController__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/WwiseEventSystem_SoundHandle.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED) && defined(IL2CPP_STRUCT_WwiseEventSystem_SoundHandle_DEFINED)
#define IL2CPP_STRUCT_SeinDeadlyDarknessController__Fields_DEFINED
struct AnimationCurve;
struct FloatValueProvider;
struct RTPC;
struct Event_1;
struct SeinDeadlyDarknessController__Fields {
    struct MonoBehaviour__Fields _;
    float ControllerShakeStrength;
    struct AnimationCurve* ControllerShakeCurve;
    struct FloatValueProvider* DurationProvider;
    struct RTPC* DarknessRTPC;
    struct Event_1* DarknessFearLoopEvent;
    float IncreaseProtectionSpeed;
    float m_originalIntensity;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;

    struct WwiseEventSystem_SoundHandle m_soundHandle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDeadlyDarknessController__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinDeadlyDarknessController__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/FloatValueProvider.h>
#include <Modloader/app/structs/RTPC.h>
#endif
#undef IL2CPP_STRUCT_SeinDeadlyDarknessController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDeadlyDarknessController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinDeadlyDarknessController__Fields_FWDDECL)
#include <Modloader/app/structs/SeinDeadlyDarknessController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDeadlyDarknessController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
