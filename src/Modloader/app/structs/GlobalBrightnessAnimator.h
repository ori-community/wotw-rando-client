#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GlobalBrightnessAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GlobalBrightnessAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalBrightnessAnimator_DEFINED)
#include <Modloader/app/structs/GlobalBrightnessAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_GlobalBrightnessAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_GlobalBrightnessAnimator_DEFINED
struct GlobalBrightnessAnimator__Class;
struct GlobalBrightnessAnimator {
    struct GlobalBrightnessAnimator__Class* klass;
    MonitorData* monitor;
    struct GlobalBrightnessAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GlobalBrightnessAnimator_FWDDECL)
#define IL2CPP_STRUCT_GlobalBrightnessAnimator_FWDDECL
#include <Modloader/app/structs/GlobalBrightnessAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_GlobalBrightnessAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GlobalBrightnessAnimator_DEFINED) && !defined(IL2CPP_STRUCT_GlobalBrightnessAnimator_FWDDECL)
#include <Modloader/app/structs/GlobalBrightnessAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GlobalBrightnessAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
