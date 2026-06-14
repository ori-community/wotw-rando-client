#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WindSpeedAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WindSpeedAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindSpeedAnimator_DEFINED)
#include <Modloader/app/structs/WindSpeedAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_WindSpeedAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_WindSpeedAnimator_DEFINED
struct WindSpeedAnimator__Class;
struct WindSpeedAnimator {
    struct WindSpeedAnimator__Class* klass;
    MonitorData* monitor;
    struct WindSpeedAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WindSpeedAnimator_FWDDECL)
#define IL2CPP_STRUCT_WindSpeedAnimator_FWDDECL
#include <Modloader/app/structs/WindSpeedAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_WindSpeedAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_WindSpeedAnimator_DEFINED) && !defined(IL2CPP_STRUCT_WindSpeedAnimator_FWDDECL)
#include <Modloader/app/structs/WindSpeedAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WindSpeedAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
