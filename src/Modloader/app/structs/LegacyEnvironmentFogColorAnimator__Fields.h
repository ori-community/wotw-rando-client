#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyEnvironmentFogColorAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyEnvironmentFogColorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyEnvironmentFogColorAnimator__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_LegacyEnvironmentFogColorAnimator__Fields_DEFINED
struct LegacyEnvironmentFogColorAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct Color TargetFogColor;
    struct Color m_initialFogColor;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyEnvironmentFogColorAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyEnvironmentFogColorAnimator__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_LegacyEnvironmentFogColorAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyEnvironmentFogColorAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyEnvironmentFogColorAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyEnvironmentFogColorAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyEnvironmentFogColorAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
