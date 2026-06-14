#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GCFinalizerTablePrewarm__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GCFinalizerTablePrewarm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GCFinalizerTablePrewarm__Fields_DEFINED)
#include <Modloader/app/structs/BasePrewarmOperation__Fields.h>
#if defined(IL2CPP_STRUCT_BasePrewarmOperation__Fields_DEFINED)
#define IL2CPP_STRUCT_GCFinalizerTablePrewarm__Fields_DEFINED
struct GCFinalizerTablePrewarm_ObjWithFinalizer__Array;
struct GCFinalizerTablePrewarm__Fields {
    struct BasePrewarmOperation__Fields _;
    bool m_startImmediately;
    int32_t m_itemCount;
    float m_lastGCAt;
    int32_t m_completedGCCount;
    int32_t m_completed;
    struct GCFinalizerTablePrewarm_ObjWithFinalizer__Array* m_objects;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GCFinalizerTablePrewarm__Fields_FWDDECL)
#define IL2CPP_STRUCT_GCFinalizerTablePrewarm__Fields_FWDDECL
#include <Modloader/app/structs/GCFinalizerTablePrewarm_ObjWithFinalizer__Array.h>
#endif
#undef IL2CPP_STRUCT_GCFinalizerTablePrewarm__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GCFinalizerTablePrewarm__Fields_DEFINED) && !defined(IL2CPP_STRUCT_GCFinalizerTablePrewarm__Fields_FWDDECL)
#include <Modloader/app/structs/GCFinalizerTablePrewarm__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GCFinalizerTablePrewarm__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
