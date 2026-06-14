#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritShardUIItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritShardUIItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardUIItem_DEFINED)
#include <Modloader/app/structs/SpiritShardUIItem__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritShardUIItem__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritShardUIItem_DEFINED
struct SpiritShardUIItem__Class;
struct SpiritShardUIItem {
    struct SpiritShardUIItem__Class* klass;
    MonitorData* monitor;
    struct SpiritShardUIItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritShardUIItem_FWDDECL)
#define IL2CPP_STRUCT_SpiritShardUIItem_FWDDECL
#include <Modloader/app/structs/SpiritShardUIItem__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritShardUIItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritShardUIItem_DEFINED) && !defined(IL2CPP_STRUCT_SpiritShardUIItem_FWDDECL)
#include <Modloader/app/structs/SpiritShardUIItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritShardUIItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
