#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectLayerAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectLayerAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectLayerAnimator__Fields_DEFINED)
#include <Modloader/app/structs/EventTriggerAnimator__Fields.h>
#include <Modloader/app/structs/LayerMask.h>
#if defined(IL2CPP_STRUCT_EventTriggerAnimator__Fields_DEFINED) && defined(IL2CPP_STRUCT_LayerMask_DEFINED)
#define IL2CPP_STRUCT_ObjectLayerAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct GameObject;
struct ObjectLayerAnimator__Fields {
    struct EventTriggerAnimator__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* Target;
    struct LayerMask layer;
    int32_t m_originalLayer;
    struct GameObject* m_targetGameObject;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectLayerAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_ObjectLayerAnimator__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_ObjectLayerAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectLayerAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ObjectLayerAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/ObjectLayerAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectLayerAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
