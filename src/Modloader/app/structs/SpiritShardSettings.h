#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardSettings_DEFINED)
#include <Modloader/app/structs/SpiritShardSettings__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritShardSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritShardSettings_DEFINED
struct SpiritShardSettings__Class;
struct SpiritShardSettings {
    struct SpiritShardSettings__Class* klass;
    MonitorData* monitor;
    struct SpiritShardSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardSettings_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardSettings_FWDDECL
#include <Modloader/app/structs/SpiritShardSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardSettings_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardSettings_FWDDECL)
#include <Modloader/app/structs/SpiritShardSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
