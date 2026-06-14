#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightningController_LightningEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightningController_LightningEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightningController_LightningEvent_DEFINED)
#define IL2CPP_STRUCT_LightningController_LightningEvent_DEFINED
struct MoonTimeline;
struct LightningController_LightningEvent {
    float LightningTime;
    struct MoonTimeline* LightningTimeline;
    struct MoonTimeline* CameraShakeTimeline;
    struct MoonTimeline* BrightnessTimeline;
};
#endif
#if !defined(IL2CPP_STRUCT_LightningController_LightningEvent_FWDDECL)
#define IL2CPP_STRUCT_LightningController_LightningEvent_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LightningController_LightningEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightningController_LightningEvent_DEFINED) && !defined(IL2CPP_STRUCT_LightningController_LightningEvent_FWDDECL)
#include <Modloader/app/structs/LightningController_LightningEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightningController_LightningEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
