#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShardTraderEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShardTraderEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardTraderEntity_DEFINED)
#include <Modloader/app/structs/ShardTraderEntity__Fields.h>
#if defined(IL2CPP_STRUCT_ShardTraderEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_ShardTraderEntity_DEFINED
struct ShardTraderEntity__Class;
struct ShardTraderEntity {
    struct ShardTraderEntity__Class* klass;
    MonitorData* monitor;
    struct ShardTraderEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShardTraderEntity_FWDDECL)
#define IL2CPP_STRUCT_ShardTraderEntity_FWDDECL
#include <Modloader/app/structs/ShardTraderEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_ShardTraderEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardTraderEntity_DEFINED) && !defined(IL2CPP_STRUCT_ShardTraderEntity_FWDDECL)
#include <Modloader/app/structs/ShardTraderEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShardTraderEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
