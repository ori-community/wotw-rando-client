#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WispPickupContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WispPickupContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_WispPickupContext_DEFINED)
#include <Modloader/app/structs/WispPickupContext__Fields.h>
#if defined(IL2CPP_STRUCT_WispPickupContext__Fields_DEFINED)
#define IL2CPP_STRUCT_WispPickupContext_DEFINED
struct WispPickupContext__Class;
struct WispPickupContext {
    struct WispPickupContext__Class* klass;
    MonitorData* monitor;
    struct WispPickupContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WispPickupContext_FWDDECL)
#define IL2CPP_STRUCT_WispPickupContext_FWDDECL
#include <Modloader/app/structs/WispPickupContext__Class.h>
#endif
#undef IL2CPP_STRUCT_WispPickupContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_WispPickupContext_DEFINED) && !defined(IL2CPP_STRUCT_WispPickupContext_FWDDECL)
#include <Modloader/app/structs/WispPickupContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WispPickupContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
