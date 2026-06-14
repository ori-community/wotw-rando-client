#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyBlendAnimationPlayer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyBlendAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyBlendAnimationPlayer__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimationPlayer__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimationPlayer__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyBlendAnimationPlayer__Fields_DEFINED
struct FloatAnimationParameter;
struct LegacyBlendAnimationPlayer__Fields {
    struct LegacyAnimationPlayer__Fields _;
    struct FloatAnimationParameter* floatAnimationParameter;
    float previewParameterValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyBlendAnimationPlayer__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyBlendAnimationPlayer__Fields_FWDDECL
#include <Modloader/app/structs/FloatAnimationParameter.h>
#endif
#undef IL2CPP_STRUCT_LegacyBlendAnimationPlayer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyBlendAnimationPlayer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyBlendAnimationPlayer__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyBlendAnimationPlayer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyBlendAnimationPlayer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
