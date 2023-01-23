#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritLeashEffectKeyframe__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritLeashEffectKeyframe__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLeashEffectKeyframe__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritLeashEffectKeyframe__Fields_DEFINED
struct SpiritLeashEffectPose;
struct __declspec(align(8)) SpiritLeashEffectKeyframe__Fields {
    float Time;
    struct SpiritLeashEffectPose* Pose;
};
#endif
#if !defined(IL2CPP_STRUCT_SpiritLeashEffectKeyframe__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpiritLeashEffectKeyframe__Fields_FWDDECL
#include <Modloader/app/structs/SpiritLeashEffectPose.h>
#endif
#undef IL2CPP_STRUCT_SpiritLeashEffectKeyframe__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritLeashEffectKeyframe__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpiritLeashEffectKeyframe__Fields_FWDDECL)
#include <Modloader/app/structs/SpiritLeashEffectKeyframe__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritLeashEffectKeyframe__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
