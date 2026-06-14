#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VectorParameterAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VectorParameterAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_VectorParameterAnimator_DEFINED)
#include <Modloader/app/structs/VectorParameterAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_VectorParameterAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_VectorParameterAnimator_DEFINED
struct VectorParameterAnimator__Class;
struct VectorParameterAnimator {
    struct VectorParameterAnimator__Class* klass;
    MonitorData* monitor;
    struct VectorParameterAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VectorParameterAnimator_FWDDECL)
#define IL2CPP_STRUCT_VectorParameterAnimator_FWDDECL
#include <Modloader/app/structs/VectorParameterAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_VectorParameterAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_VectorParameterAnimator_DEFINED) && !defined(IL2CPP_STRUCT_VectorParameterAnimator_FWDDECL)
#include <Modloader/app/structs/VectorParameterAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VectorParameterAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
