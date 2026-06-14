#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyAdditiveScaleAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyAdditiveScaleAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAdditiveScaleAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LegacyAdditiveScaleAnimator__Fields_DEFINED
struct LegacyAdditiveScaleAnimator__Fields {
    struct LegacyAnimator__Fields _;
    bool m_initialized;
    struct Vector3 m_originalScale;
    struct Vector3 AddScale;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyAdditiveScaleAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyAdditiveScaleAnimator__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_LegacyAdditiveScaleAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyAdditiveScaleAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyAdditiveScaleAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyAdditiveScaleAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyAdditiveScaleAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
