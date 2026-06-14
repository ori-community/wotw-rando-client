#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SuspendRenderingAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SuspendRenderingAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspendRenderingAnimator__Fields_DEFINED)
#include <Modloader/app/structs/TimelineEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TimelineEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_SuspendRenderingAnimator__Fields_DEFINED
struct MoonReference_1_UnityEngine_GameObject_;
struct GameObject;
struct List_1_UnityEngine_Renderer_;
struct SuspendRenderingAnimator__Fields {
    struct TimelineEntity__Fields _;
    struct MoonReference_1_UnityEngine_GameObject_* Target;
    bool IncludeChildren;
    struct GameObject* m_target;
    struct List_1_UnityEngine_Renderer_* m_renderers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SuspendRenderingAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_SuspendRenderingAnimator__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_Renderer_.h>
#include <Modloader/app/structs/MoonReference_1_UnityEngine_GameObject_.h>
#endif
#undef IL2CPP_STRUCT_SuspendRenderingAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspendRenderingAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SuspendRenderingAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/SuspendRenderingAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SuspendRenderingAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
