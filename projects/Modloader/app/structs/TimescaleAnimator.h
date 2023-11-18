#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimescaleAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimescaleAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimescaleAnimator_DEFINED)
#include <Modloader/app/structs/TimescaleAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_TimescaleAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_TimescaleAnimator_DEFINED
struct TimescaleAnimator__Class;
struct TimescaleAnimator {
    struct TimescaleAnimator__Class* klass;
    MonitorData* monitor;
    struct TimescaleAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimescaleAnimator_FWDDECL)
#define IL2CPP_STRUCT_TimescaleAnimator_FWDDECL
#include <Modloader/app/structs/TimescaleAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_TimescaleAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimescaleAnimator_DEFINED) && !defined(IL2CPP_STRUCT_TimescaleAnimator_FWDDECL)
#include <Modloader/app/structs/TimescaleAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimescaleAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
