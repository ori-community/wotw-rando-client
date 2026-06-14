#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ColorAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ColorAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorAnimator_DEFINED)
#include <Modloader/app/structs/ColorAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_ColorAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_ColorAnimator_DEFINED
struct ColorAnimator__Class;
struct ColorAnimator {
    struct ColorAnimator__Class* klass;
    MonitorData* monitor;
    struct ColorAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ColorAnimator_FWDDECL)
#define IL2CPP_STRUCT_ColorAnimator_FWDDECL
#include <Modloader/app/structs/ColorAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_ColorAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_ColorAnimator_DEFINED) && !defined(IL2CPP_STRUCT_ColorAnimator_FWDDECL)
#include <Modloader/app/structs/ColorAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ColorAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
