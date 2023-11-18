#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FloatingRockController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FloatingRockController_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatingRockController_DEFINED)
#include <Modloader/app/structs/FloatingRockController__Fields.h>
#if defined(IL2CPP_STRUCT_FloatingRockController__Fields_DEFINED)
#define IL2CPP_STRUCT_FloatingRockController_DEFINED
struct FloatingRockController__Class;
struct FloatingRockController {
    struct FloatingRockController__Class* klass;
    MonitorData* monitor;
    struct FloatingRockController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FloatingRockController_FWDDECL)
#define IL2CPP_STRUCT_FloatingRockController_FWDDECL
#include <Modloader/app/structs/FloatingRockController__Class.h>
#endif
#undef IL2CPP_STRUCT_FloatingRockController_INITIALIZING
#if !defined(IL2CPP_STRUCT_FloatingRockController_DEFINED) && !defined(IL2CPP_STRUCT_FloatingRockController_FWDDECL)
#include <Modloader/app/structs/FloatingRockController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FloatingRockController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
