#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyScaleAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyScaleAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyScaleAnimator__Fields_DEFINED)
#include <Modloader/app/structs/LegacyAnimator__Fields.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_LegacyAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_LegacyScaleAnimator__Fields_DEFINED
struct GameObject;
struct Transform;
struct Renderer;
struct LegacyScaleAnimator__Fields {
    struct LegacyAnimator__Fields _;
    struct GameObject* Target;
    struct Vector3 ScaleAxisFilter;
    struct Transform* m_transform;
    struct Vector3 m_originalScale;
    struct Renderer* m_renderer;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyScaleAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyScaleAnimator__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LegacyScaleAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyScaleAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyScaleAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyScaleAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyScaleAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
