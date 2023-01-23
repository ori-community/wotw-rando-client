#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimationCurve_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimationCurve_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationCurve_DEFINED)
#include <Modloader/app/structs/AnimationCurve__Fields.h>
#if defined(IL2CPP_STRUCT_AnimationCurve__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimationCurve_DEFINED
struct AnimationCurve__Class;
struct AnimationCurve {
    struct AnimationCurve__Class* klass;
    MonitorData* monitor;
    struct AnimationCurve__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimationCurve_FWDDECL)
#define IL2CPP_STRUCT_AnimationCurve_FWDDECL
#include <Modloader/app/structs/AnimationCurve__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimationCurve_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimationCurve_DEFINED) && !defined(IL2CPP_STRUCT_AnimationCurve_FWDDECL)
#include <Modloader/app/structs/AnimationCurve.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimationCurve.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
