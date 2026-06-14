#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjectLayerAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjectLayerAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectLayerAnimator_DEFINED)
#include <Modloader/app/structs/ObjectLayerAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_ObjectLayerAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_ObjectLayerAnimator_DEFINED
struct ObjectLayerAnimator__Class;
struct ObjectLayerAnimator {
    struct ObjectLayerAnimator__Class* klass;
    MonitorData* monitor;
    struct ObjectLayerAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ObjectLayerAnimator_FWDDECL)
#define IL2CPP_STRUCT_ObjectLayerAnimator_FWDDECL
#include <Modloader/app/structs/ObjectLayerAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_ObjectLayerAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjectLayerAnimator_DEFINED) && !defined(IL2CPP_STRUCT_ObjectLayerAnimator_FWDDECL)
#include <Modloader/app/structs/ObjectLayerAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjectLayerAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
