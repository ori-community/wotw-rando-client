#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AcidSlugCrawlingState__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AcidSlugCrawlingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcidSlugCrawlingState__Fields_DEFINED)
#include <Modloader/app/structs/AcidSlugState__Fields.h>
#if defined(IL2CPP_STRUCT_AcidSlugState__Fields_DEFINED)
#define IL2CPP_STRUCT_AcidSlugCrawlingState__Fields_DEFINED
struct SoundSource;
struct AcidSlugCrawlingState__Fields {
    struct AcidSlugState__Fields _;
    float m_acidDripRemainingTime;
    float m_acidTrailMarkRemainingTime;
    struct SoundSource* Sound;
    struct SoundSource* moveSound;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AcidSlugCrawlingState__Fields_FWDDECL)
#define IL2CPP_STRUCT_AcidSlugCrawlingState__Fields_FWDDECL
#include <Modloader/app/structs/SoundSource.h>
#endif
#undef IL2CPP_STRUCT_AcidSlugCrawlingState__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_AcidSlugCrawlingState__Fields_DEFINED) && !defined(IL2CPP_STRUCT_AcidSlugCrawlingState__Fields_FWDDECL)
#include <Modloader/app/structs/AcidSlugCrawlingState__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AcidSlugCrawlingState__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
