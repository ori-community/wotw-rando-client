#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateLaserAction_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateLaserAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateLaserAction_DEFINED)
#include <Modloader/app/structs/ActivateLaserAction__Fields.h>
#if defined(IL2CPP_STRUCT_ActivateLaserAction__Fields_DEFINED)
#define IL2CPP_STRUCT_ActivateLaserAction_DEFINED
struct ActivateLaserAction__Class;
struct ActivateLaserAction {
    struct ActivateLaserAction__Class* klass;
    MonitorData* monitor;
    struct ActivateLaserAction__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ActivateLaserAction_FWDDECL)
#define IL2CPP_STRUCT_ActivateLaserAction_FWDDECL
#include <Modloader/app/structs/ActivateLaserAction__Class.h>
#endif
#undef IL2CPP_STRUCT_ActivateLaserAction_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateLaserAction_DEFINED) && !defined(IL2CPP_STRUCT_ActivateLaserAction_FWDDECL)
#include <Modloader/app/structs/ActivateLaserAction.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateLaserAction.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
