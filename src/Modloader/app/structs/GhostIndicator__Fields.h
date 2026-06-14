#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GhostIndicator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GhostIndicator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostIndicator__Fields_DEFINED)
#include <Modloader/app/structs/TargetIndicator__Fields.h>
#if defined(IL2CPP_STRUCT_TargetIndicator__Fields_DEFINED)
#define IL2CPP_STRUCT_GhostIndicator__Fields_DEFINED
struct MoonTimeline;
struct GhostIndicator__Fields {
    struct TargetIndicator__Fields _;
    struct MoonTimeline* m_fadeOutTimeline;
    int32_t _Index_k__BackingField;
    bool m_fadeOutFinished;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GhostIndicator__Fields_FWDDECL)
#define IL2CPP_STRUCT_GhostIndicator__Fields_FWDDECL
#include <Modloader/app/structs/MoonTimeline.h>
#endif
#undef IL2CPP_STRUCT_GhostIndicator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GhostIndicator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GhostIndicator__Fields_FWDDECL)
#include <Modloader/app/structs/GhostIndicator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GhostIndicator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
