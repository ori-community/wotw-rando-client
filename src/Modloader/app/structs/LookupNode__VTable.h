#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LookupNode__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LookupNode__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookupNode__VTable_DEFINED)
#define IL2CPP_STRUCT_LookupNode__VTable_DEFINED
struct LookupNode__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_IsSqlColumn;
    VirtualInvokeData Bind;
    VirtualInvokeData Eval;
    VirtualInvokeData Eval_1;
    VirtualInvokeData Eval_2;
    VirtualInvokeData IsConstant;
    VirtualInvokeData IsTableConstant;
    VirtualInvokeData HasLocalAggregate;
    VirtualInvokeData HasRemoteAggregate;
    VirtualInvokeData Optimize;
    VirtualInvokeData DependsOn;
};
#endif
#if !defined(IL2CPP_STRUCT_LookupNode__VTable_FWDDECL)
#define IL2CPP_STRUCT_LookupNode__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_LookupNode__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookupNode__VTable_DEFINED) && !defined(IL2CPP_STRUCT_LookupNode__VTable_FWDDECL)
#include <Modloader/app/structs/LookupNode__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LookupNode__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
