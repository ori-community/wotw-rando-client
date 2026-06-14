#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BreadCrumbPositionTracker__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BreadCrumbPositionTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreadCrumbPositionTracker__Fields_DEFINED)
#define IL2CPP_STRUCT_BreadCrumbPositionTracker__Fields_DEFINED
struct List_1_UnityEngine_Vector2_;
struct __declspec(align(8)) BreadCrumbPositionTracker__Fields {
    struct List_1_UnityEngine_Vector2_* m_breadCrumbs;
    float m_trackTimer;
    float m_trackInterval;
    float m_killTimer;
    float m_pointLifetime;
};
#endif
#if !defined(IL2CPP_STRUCT_BreadCrumbPositionTracker__Fields_FWDDECL)
#define IL2CPP_STRUCT_BreadCrumbPositionTracker__Fields_FWDDECL
#include <Modloader/app/structs/List_1_UnityEngine_Vector2_.h>
#endif
#undef IL2CPP_STRUCT_BreadCrumbPositionTracker__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BreadCrumbPositionTracker__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BreadCrumbPositionTracker__Fields_FWDDECL)
#include <Modloader/app/structs/BreadCrumbPositionTracker__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BreadCrumbPositionTracker__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
