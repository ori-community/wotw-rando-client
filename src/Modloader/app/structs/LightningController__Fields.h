#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightningController__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightningController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightningController__Fields_DEFINED)
#include <Modloader/app/structs/FloatRange_1.h>
#include <Modloader/app/structs/LightningController_LightningEvent.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_FloatRange_1_DEFINED) && defined(IL2CPP_STRUCT_LightningController_LightningEvent_DEFINED)
#define IL2CPP_STRUCT_LightningController__Fields_DEFINED
struct MoonTimeline__Array;
struct CameraShakeModifierContext;
struct IntensityMultiplierContext;
struct LightningController__Fields {
    struct MonoBehaviour__Fields _;
    float MinTimeBetweenLightnings;
    float MaxTimeBetweenLightnings;
    struct MoonTimeline__Array* LightningTimelines;
    struct MoonTimeline__Array* CameraShakeTimelines;
    struct MoonTimeline__Array* BrightnessTimelines;
    struct FloatRange_1 CameraShakeStrenghMultiplier;
    struct FloatRange_1 CameraShakeSpeedMultiplier;
    struct FloatRange_1 BrightnessMultiplier;
    struct CameraShakeModifierContext* m_cameraShakeContext;
    struct IntensityMultiplierContext* m_brightnessIntensityContext;
    struct LightningController_LightningEvent m_nextLightning;
    bool _InvalidateParentTimelineCache_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightningController__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightningController__Fields_FWDDECL
#include <Modloader/app/structs/CameraShakeModifierContext.h>
#include <Modloader/app/structs/IntensityMultiplierContext.h>
#include <Modloader/app/structs/MoonTimeline__Array.h>
#endif
#undef IL2CPP_STRUCT_LightningController__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightningController__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightningController__Fields_FWDDECL)
#include <Modloader/app/structs/LightningController__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightningController__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
