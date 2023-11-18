#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PetrifiedOwlSideStepBehaviour__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PetrifiedOwlSideStepBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlSideStepBehaviour__Fields_DEFINED)
#include <Modloader/app/structs/BrainBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_BrainBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_PetrifiedOwlSideStepBehaviour__Fields_DEFINED
struct GameObject;
struct Transform;
struct BaseAnimator;
struct MoonAnimator;
struct PetrifiedOwlSideStepBehaviour__Fields {
    struct BrainBehaviour__Fields _;
    float Score;
    float SteppingDirectionPredictability;
    struct GameObject* OwlEntity;
    struct GameObject* OwlAnimator;
    struct Transform* RightStilt;
    struct Transform* LeftStilt;
    struct BaseAnimator* SideStepLeftAnimator;
    struct BaseAnimator* SideStepRightAnimator;
    struct BaseAnimator* m_currentAnimator;
    struct MoonAnimator* m_owlAnimator;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PetrifiedOwlSideStepBehaviour__Fields_FWDDECL)
#define IL2CPP_STRUCT_PetrifiedOwlSideStepBehaviour__Fields_FWDDECL
#include <Modloader/app/structs/BaseAnimator.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_PetrifiedOwlSideStepBehaviour__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PetrifiedOwlSideStepBehaviour__Fields_DEFINED) && !defined(IL2CPP_STRUCT_PetrifiedOwlSideStepBehaviour__Fields_FWDDECL)
#include <Modloader/app/structs/PetrifiedOwlSideStepBehaviour__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PetrifiedOwlSideStepBehaviour__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
