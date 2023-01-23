#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShardTraderNPC_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShardTraderNPC_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardTraderNPC_DEFINED)
#include <Modloader/app/structs/ShardTraderNPC__Fields.h>
#if defined(IL2CPP_STRUCT_ShardTraderNPC__Fields_DEFINED)
#define IL2CPP_STRUCT_ShardTraderNPC_DEFINED
struct ShardTraderNPC__Class;
struct ShardTraderNPC {
    struct ShardTraderNPC__Class* klass;
    MonitorData* monitor;
    struct ShardTraderNPC__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShardTraderNPC_FWDDECL)
#define IL2CPP_STRUCT_ShardTraderNPC_FWDDECL
#include <Modloader/app/structs/ShardTraderNPC__Class.h>
#endif
#undef IL2CPP_STRUCT_ShardTraderNPC_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardTraderNPC_DEFINED) && !defined(IL2CPP_STRUCT_ShardTraderNPC_FWDDECL)
#include <Modloader/app/structs/ShardTraderNPC.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShardTraderNPC.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
