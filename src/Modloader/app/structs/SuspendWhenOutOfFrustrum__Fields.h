#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/Rect.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Rect_DEFINED)
#define IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__Fields_DEFINED
struct HashSet_1_Moon_ISuspendable_;
struct Action;
struct InterfaceCache;
struct List_1_ICameraFrustumSuspendable_;
struct Renderer__Array;
struct SuspendWhenOutOfFrustrum__Fields {
    struct MonoBehaviour__Fields _;
    struct HashSet_1_Moon_ISuspendable_* m_suspendables;
    struct Rect BoundingBox;
    struct Action* OnSuspended;
    struct Action* OnResumed;
    bool m_insideFrustum;
    bool m_targetsSuspended;
    struct InterfaceCache* m_frustumSuspendablesCache;
    struct List_1_ICameraFrustumSuspendable_* m_frustumSuspendables;
    struct Renderer__Array* m_cachedRenderers;
    bool m_isPrewarmed;
    bool _CanSuspendResume_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__Fields_FWDDECL)
#define IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/InterfaceCache.h>
#include <Modloader/app/structs/List_1_ICameraFrustumSuspendable_.h>
#include <Modloader/app/structs/Renderer__Array.h>
#endif
#undef IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SuspendWhenOutOfFrustrum__Fields_FWDDECL)
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SuspendWhenOutOfFrustrum__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
