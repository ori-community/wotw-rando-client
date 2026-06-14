#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardDescription_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardDescription_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardDescription_DEFINED)
#include <Modloader/app/structs/SpiritShardDescription__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritShardDescription__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritShardDescription_DEFINED
struct SpiritShardDescription__Class;
struct SpiritShardDescription {
    struct SpiritShardDescription__Class* klass;
    MonitorData* monitor;
    struct SpiritShardDescription__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardDescription_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardDescription_FWDDECL
#include <Modloader/app/structs/SpiritShardDescription__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardDescription_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardDescription_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardDescription_FWDDECL)
#include <Modloader/app/structs/SpiritShardDescription.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardDescription.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
