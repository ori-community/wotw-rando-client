#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterAnimator_DEFINED)
#include <Modloader/app/structs/UberWaterAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_UberWaterAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_UberWaterAnimator_DEFINED
struct UberWaterAnimator__Class;
struct UberWaterAnimator {
    struct UberWaterAnimator__Class* klass;
    MonitorData* monitor;
    struct UberWaterAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterAnimator_FWDDECL)
#define IL2CPP_STRUCT_UberWaterAnimator_FWDDECL
#include <Modloader/app/structs/UberWaterAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_UberWaterAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterAnimator_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterAnimator_FWDDECL)
#include <Modloader/app/structs/UberWaterAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
