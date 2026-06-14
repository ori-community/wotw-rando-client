#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShardTraderPlaceholder__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShardTraderPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardTraderPlaceholder__Fields_DEFINED)
#include <Modloader/app/structs/NPCEntityPlaceholder__Fields.h>
#if defined(IL2CPP_STRUCT_NPCEntityPlaceholder__Fields_DEFINED)
#define IL2CPP_STRUCT_ShardTraderPlaceholder__Fields_DEFINED
struct List_1_SpiritShardType_;
struct List_1_ShardTraderPlaceholder_ConditionalStockList_;
struct ShardTraderPlaceholder__Fields {
    struct NPCEntityPlaceholder__Fields _;
    struct List_1_SpiritShardType_* Stocklist;
    struct List_1_ShardTraderPlaceholder_ConditionalStockList_* conditionalStockLists;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShardTraderPlaceholder__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShardTraderPlaceholder__Fields_FWDDECL
#include <Modloader/app/structs/List_1_ShardTraderPlaceholder_ConditionalStockList_.h>
#include <Modloader/app/structs/List_1_SpiritShardType_.h>
#endif
#undef IL2CPP_STRUCT_ShardTraderPlaceholder__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardTraderPlaceholder__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShardTraderPlaceholder__Fields_FWDDECL)
#include <Modloader/app/structs/ShardTraderPlaceholder__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShardTraderPlaceholder__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
