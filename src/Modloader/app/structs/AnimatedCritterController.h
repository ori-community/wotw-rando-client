#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AnimatedCritterController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AnimatedCritterController_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatedCritterController_DEFINED)
#include <Modloader/app/structs/AnimatedCritterController__Fields.h>
#if defined(IL2CPP_STRUCT_AnimatedCritterController__Fields_DEFINED)
#define IL2CPP_STRUCT_AnimatedCritterController_DEFINED
struct AnimatedCritterController__Class;
struct AnimatedCritterController {
    struct AnimatedCritterController__Class* klass;
    MonitorData* monitor;
    struct AnimatedCritterController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AnimatedCritterController_FWDDECL)
#define IL2CPP_STRUCT_AnimatedCritterController_FWDDECL
#include <Modloader/app/structs/AnimatedCritterController__Class.h>
#endif
#undef IL2CPP_STRUCT_AnimatedCritterController_INITIALIZING
#if !defined(IL2CPP_STRUCT_AnimatedCritterController_DEFINED) && !defined(IL2CPP_STRUCT_AnimatedCritterController_FWDDECL)
#include <Modloader/app/structs/AnimatedCritterController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AnimatedCritterController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
