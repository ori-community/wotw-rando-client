#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BlendAnimation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BlendAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendAnimation__Fields_DEFINED)
#include <Modloader/app/structs/BlendAnimationEventMode__Enum.h>
#include <Modloader/app/structs/BlendAnimationMode__Enum.h>
#include <Modloader/app/structs/MoonAnimation__Fields.h>
#if defined(IL2CPP_STRUCT_MoonAnimation__Fields_DEFINED) && defined(IL2CPP_STRUCT_BlendAnimationMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_BlendAnimationEventMode__Enum_DEFINED)
#define IL2CPP_STRUCT_BlendAnimation__Fields_DEFINED
struct FloatAnimationParameter;
struct BlendAnimation_Input__Array;
struct BlendAnimation__Fields {
    struct MoonAnimation__Fields _;
    struct FloatAnimationParameter* Parameter;
    struct BlendAnimation_Input__Array* Inputs;
    bool UseThreshold;
    float Threshold;
    BlendAnimationMode__Enum Mode;

    BlendAnimationEventMode__Enum AnimationEventMode;

    struct BlendAnimation_Input__Array* m_validInputs;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BlendAnimation__Fields_FWDDECL)
#define IL2CPP_STRUCT_BlendAnimation__Fields_FWDDECL
#include <Modloader/app/structs/BlendAnimation_Input__Array.h>
#include <Modloader/app/structs/FloatAnimationParameter.h>
#endif
#undef IL2CPP_STRUCT_BlendAnimation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BlendAnimation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BlendAnimation__Fields_FWDDECL)
#include <Modloader/app/structs/BlendAnimation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BlendAnimation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
