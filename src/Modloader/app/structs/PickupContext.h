#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PickupContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PickupContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupContext_DEFINED)
#include <Modloader/app/structs/PickupContext__Fields.h>
#if defined(IL2CPP_STRUCT_PickupContext__Fields_DEFINED)
#define IL2CPP_STRUCT_PickupContext_DEFINED
struct PickupContext__Class;
struct PickupContext {
    struct PickupContext__Class* klass;
    MonitorData* monitor;
    struct PickupContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PickupContext_FWDDECL)
#define IL2CPP_STRUCT_PickupContext_FWDDECL
#include <Modloader/app/structs/PickupContext__Class.h>
#endif
#undef IL2CPP_STRUCT_PickupContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_PickupContext_DEFINED) && !defined(IL2CPP_STRUCT_PickupContext_FWDDECL)
#include <Modloader/app/structs/PickupContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PickupContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
