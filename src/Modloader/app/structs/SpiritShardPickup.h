#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardPickup_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardPickup_DEFINED)
#include <Modloader/app/structs/SpiritShardPickup__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritShardPickup__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritShardPickup_DEFINED
struct SpiritShardPickup__Class;
struct SpiritShardPickup {
    struct SpiritShardPickup__Class* klass;
    MonitorData* monitor;
    struct SpiritShardPickup__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardPickup_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardPickup_FWDDECL
#include <Modloader/app/structs/SpiritShardPickup__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardPickup_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardPickup_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardPickup_FWDDECL)
#include <Modloader/app/structs/SpiritShardPickup.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardPickup.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
