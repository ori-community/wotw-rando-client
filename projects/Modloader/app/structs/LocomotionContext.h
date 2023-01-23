#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LocomotionContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LocomotionContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionContext_DEFINED)
#include <Modloader/app/structs/LocomotionContext__Fields.h>
#if defined(IL2CPP_STRUCT_LocomotionContext__Fields_DEFINED)
#define IL2CPP_STRUCT_LocomotionContext_DEFINED
struct LocomotionContext__Class;
struct LocomotionContext {
    struct LocomotionContext__Class* klass;
    MonitorData* monitor;
    struct LocomotionContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LocomotionContext_FWDDECL)
#define IL2CPP_STRUCT_LocomotionContext_FWDDECL
#include <Modloader/app/structs/LocomotionContext__Class.h>
#endif
#undef IL2CPP_STRUCT_LocomotionContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_LocomotionContext_DEFINED) && !defined(IL2CPP_STRUCT_LocomotionContext_FWDDECL)
#include <Modloader/app/structs/LocomotionContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LocomotionContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
