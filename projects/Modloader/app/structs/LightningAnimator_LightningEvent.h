#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightningAnimator_LightningEvent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightningAnimator_LightningEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightningAnimator_LightningEvent_DEFINED)
#define IL2CPP_STRUCT_LightningAnimator_LightningEvent_DEFINED
struct BaseAnimator;
struct LightningAnimator_LightningEvent {
    float LightningTime;
    struct BaseAnimator* LightningAnimator;
};
#endif
#if !defined(IL2CPP_STRUCT_LightningAnimator_LightningEvent_FWDDECL)
#define IL2CPP_STRUCT_LightningAnimator_LightningEvent_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#endif
#undef IL2CPP_STRUCT_LightningAnimator_LightningEvent_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightningAnimator_LightningEvent_DEFINED) && !defined(IL2CPP_STRUCT_LightningAnimator_LightningEvent_FWDDECL)
#include <Modloader/app/structs/LightningAnimator_LightningEvent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightningAnimator_LightningEvent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
