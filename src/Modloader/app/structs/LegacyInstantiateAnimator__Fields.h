#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyInstantiateAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyInstantiateAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyInstantiateAnimator__Fields_DEFINED)
#include <Modloader/app/structs/BaseAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_BaseAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyInstantiateAnimator__Fields_DEFINED
struct GameObject;
struct Transform;
struct LegacyInstantiateAnimator__Fields {
    struct BaseAnimator__Fields _;
    struct GameObject* Prefab;
    struct Transform* Target;
    bool DontDestroyOnEnd;
    struct GameObject* m_gameObject;
    float m_duration;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyInstantiateAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyInstantiateAnimator__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_LegacyInstantiateAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyInstantiateAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyInstantiateAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyInstantiateAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyInstantiateAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
