#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinHealthController_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinHealthController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHealthController_DEFINED)
#include <Modloader/app/structs/SeinHealthController__Fields.h>
#if defined(IL2CPP_STRUCT_SeinHealthController__Fields_DEFINED)
#define IL2CPP_STRUCT_SeinHealthController_DEFINED
struct SeinHealthController__Class;
struct SeinHealthController {
    struct SeinHealthController__Class* klass;
    MonitorData* monitor;
    struct SeinHealthController__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinHealthController_FWDDECL)
#define IL2CPP_STRUCT_SeinHealthController_FWDDECL
#include <Modloader/app/structs/SeinHealthController__Class.h>
#endif
#undef IL2CPP_STRUCT_SeinHealthController_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinHealthController_DEFINED) && !defined(IL2CPP_STRUCT_SeinHealthController_FWDDECL)
#include <Modloader/app/structs/SeinHealthController.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinHealthController.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
