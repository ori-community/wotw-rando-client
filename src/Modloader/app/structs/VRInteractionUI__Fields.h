#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VRInteractionUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VRInteractionUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRInteractionUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_VRInteractionUI__Fields_DEFINED
struct Slider;
struct AnimationCurve;
struct Transform;
struct VRInteractionController;
struct Image__Array;
struct VRInteractionUI__Fields {
    struct MonoBehaviour__Fields _;
    struct Slider* slider;
    struct AnimationCurve* alphaToProgress;
    struct Transform* cursor;
    struct VRInteractionController* interactionController;
    struct Image__Array* sliderImages;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VRInteractionUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_VRInteractionUI__Fields_FWDDECL
#include <Modloader/app/structs/AnimationCurve.h>
#include <Modloader/app/structs/Image__Array.h>
#include <Modloader/app/structs/Slider.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/VRInteractionController.h>
#endif
#undef IL2CPP_STRUCT_VRInteractionUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_VRInteractionUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_VRInteractionUI__Fields_FWDDECL)
#include <Modloader/app/structs/VRInteractionUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VRInteractionUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
