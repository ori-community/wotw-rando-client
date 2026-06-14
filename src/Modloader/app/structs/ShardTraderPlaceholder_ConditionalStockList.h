#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShardTraderPlaceholder_ConditionalStockList_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShardTraderPlaceholder_ConditionalStockList_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardTraderPlaceholder_ConditionalStockList_DEFINED)
#define IL2CPP_STRUCT_ShardTraderPlaceholder_ConditionalStockList_DEFINED
struct ConditionUberState;
struct List_1_SpiritShardType_;
struct ShardTraderPlaceholder_ConditionalStockList {
    struct ConditionUberState* conditionUberState;
    struct List_1_SpiritShardType_* Stocklist;
};
#endif
#if !defined(IL2CPP_STRUCT_ShardTraderPlaceholder_ConditionalStockList_FWDDECL)
#define IL2CPP_STRUCT_ShardTraderPlaceholder_ConditionalStockList_FWDDECL
#include <Modloader/app/structs/ConditionUberState.h>
#include <Modloader/app/structs/List_1_SpiritShardType_.h>
#endif
#undef IL2CPP_STRUCT_ShardTraderPlaceholder_ConditionalStockList_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShardTraderPlaceholder_ConditionalStockList_DEFINED) && !defined(IL2CPP_STRUCT_ShardTraderPlaceholder_ConditionalStockList_FWDDECL)
#include <Modloader/app/structs/ShardTraderPlaceholder_ConditionalStockList.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShardTraderPlaceholder_ConditionalStockList.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
