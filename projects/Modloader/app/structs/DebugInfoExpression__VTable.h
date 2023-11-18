#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugInfoExpression__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugInfoExpression__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugInfoExpression__VTable_DEFINED)
#define IL2CPP_STRUCT_DebugInfoExpression__VTable_DEFINED
struct DebugInfoExpression__VTable {
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
    VirtualInvokeData get_StartLine;
    VirtualInvokeData get_StartColumn;
    VirtualInvokeData get_EndLine;
    VirtualInvokeData get_EndColumn;
    VirtualInvokeData get_IsClear;
};
#endif
#if !defined(IL2CPP_STRUCT_DebugInfoExpression__VTable_FWDDECL)
#define IL2CPP_STRUCT_DebugInfoExpression__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_DebugInfoExpression__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugInfoExpression__VTable_DEFINED) && !defined(IL2CPP_STRUCT_DebugInfoExpression__VTable_FWDDECL)
#include <Modloader/app/structs/DebugInfoExpression__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugInfoExpression__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
