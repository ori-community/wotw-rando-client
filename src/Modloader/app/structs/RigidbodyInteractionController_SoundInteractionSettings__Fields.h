#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RigidbodyInteractionController_SoundInteractionSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RigidbodyInteractionController_SoundInteractionSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyInteractionController_SoundInteractionSettings__Fields_DEFINED)
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_LayerMask_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_RigidbodyInteractionController_SoundInteractionSettings__Fields_DEFINED
struct SoundProvider;
struct Event_1;
struct RTPC;
struct __declspec(align(8)) RigidbodyInteractionController_SoundInteractionSettings__Fields {
    float MinCollisionMagnitude;
    struct LayerMask InteractableLayers;
    struct SoundProvider* SoundProvider;
    struct Rect SoundVolumeRemapping;
    struct Event_1* WiseEvent;
    struct RTPC* ImpactRtpc;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RigidbodyInteractionController_SoundInteractionSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_RigidbodyInteractionController_SoundInteractionSettings__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#include <Modloader/app/structs/RTPC.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_RigidbodyInteractionController_SoundInteractionSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RigidbodyInteractionController_SoundInteractionSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RigidbodyInteractionController_SoundInteractionSettings__Fields_FWDDECL)
#include <Modloader/app/structs/RigidbodyInteractionController_SoundInteractionSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RigidbodyInteractionController_SoundInteractionSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
