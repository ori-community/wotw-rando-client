#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LizardCamouflageEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LizardCamouflageEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardCamouflageEntity__Fields_DEFINED)
#include <Modloader/app/structs/LizardEntity__Fields.h>
#if defined(IL2CPP_STRUCT_LizardEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_LizardCamouflageEntity__Fields_DEFINED
struct MoonTimeline;
struct LizardCamouflageEntity__Fields {
    struct LizardEntity__Fields _;
    struct MoonTimeline* BecomeVisibleTimeline;
    struct MoonTimeline* BecomeInvisibleTimeline;
    struct MoonTimeline* StayInvisibleTimeline;
    float m_invisibilityTimer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LizardCamouflageEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_LizardCamouflageEntity__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_LizardCamouflageEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LizardCamouflageEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LizardCamouflageEntity__Fields_FWDDECL)
#include <Modloader/app/structs/LizardCamouflageEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LizardCamouflageEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
