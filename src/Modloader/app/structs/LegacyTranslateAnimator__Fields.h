#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyTranslateAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyTranslateAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTranslateAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LegacyTranslateAnimator__Fields_DEFINED
struct Transform;
struct LegacyTranslateAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct Transform* Target;
    struct Transform* m_transform;
    struct Vector3 m_originalPosition;
    struct Vector3 Translate;
    bool AnimateX;
    bool AnimateY;
    bool AnimateZ;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyTranslateAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyTranslateAnimator__Fields_FWDDECL
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LegacyTranslateAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyTranslateAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyTranslateAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyTranslateAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyTranslateAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
