#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardPickupContext_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardPickupContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardPickupContext_DEFINED)
#include <Modloader/app/structs/SpiritShardPickupContext__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritShardPickupContext__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritShardPickupContext_DEFINED
struct SpiritShardPickupContext__Class;
struct SpiritShardPickupContext {
    struct SpiritShardPickupContext__Class* klass;
    MonitorData* monitor;
    struct SpiritShardPickupContext__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardPickupContext_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardPickupContext_FWDDECL
#include <Modloader/app/structs/SpiritShardPickupContext__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardPickupContext_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardPickupContext_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardPickupContext_FWDDECL)
#include <Modloader/app/structs/SpiritShardPickupContext.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardPickupContext.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
