#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ParameterExpression__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ParameterExpression__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterExpression__VTable_DEFINED)
#define IL2CPP_STRUCT_ParameterExpression__VTable_DEFINED
struct ParameterExpression__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_NodeType;
    VirtualInvokeData get_Type;
    VirtualInvokeData get_CanReduce;
    VirtualInvokeData Reduce;
    VirtualInvokeData VisitChildren;
    VirtualInvokeData Accept;
    VirtualInvokeData GetIsByRef;
};
#endif
#if !defined(IL2CPP_STRUCT_ParameterExpression__VTable_FWDDECL)
#define IL2CPP_STRUCT_ParameterExpression__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ParameterExpression__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ParameterExpression__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ParameterExpression__VTable_FWDDECL)
#include <Modloader/app/structs/ParameterExpression__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ParameterExpression__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
