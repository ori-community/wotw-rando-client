#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HitReactionController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HitReactionController_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReactionController_DEFINED)
#include <Modloader/app/structs/HitReactionController__Fields.h>
#if defined(IL2CPP_STRUCT_HitReactionController__Fields_DEFINED)
#define IL2CPP_STRUCT_HitReactionController_DEFINED
struct HitReactionController__Class;
struct HitReactionController {
    struct HitReactionController__Class* klass;
    MonitorData* monitor;
    struct HitReactionController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HitReactionController_FWDDECL)
#define IL2CPP_STRUCT_HitReactionController_FWDDECL
#include <Modloader/app/structs/HitReactionController__Class.h>
#endif
#undef IL2CPP_STRUCT_HitReactionController_INITIALIZING
#if !defined(IL2CPP_STRUCT_HitReactionController_DEFINED) && !defined(IL2CPP_STRUCT_HitReactionController_FWDDECL)
#include <Modloader/app/structs/HitReactionController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HitReactionController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
