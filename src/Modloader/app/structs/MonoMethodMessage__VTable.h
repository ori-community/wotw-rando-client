#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MonoMethodMessage__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MonoMethodMessage__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoMethodMessage__VTable_DEFINED)
#define IL2CPP_STRUCT_MonoMethodMessage__VTable_DEFINED
struct MonoMethodMessage__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ArgCount;
    VirtualInvokeData get_Args;
    VirtualInvokeData get_LogicalCallContext;
    VirtualInvokeData get_MethodBase;
    VirtualInvokeData get_MethodName;
    VirtualInvokeData get_MethodSignature;
    VirtualInvokeData get_TypeName;
    VirtualInvokeData get_Uri;
    VirtualInvokeData GetArg;
    VirtualInvokeData get_Properties;
    VirtualInvokeData get_Exception;
    VirtualInvokeData get_OutArgs;
    VirtualInvokeData get_ReturnValue;
    VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_get_TargetIdentity;
    VirtualInvokeData System_Runtime_Remoting_Messaging_IInternalMessage_set_TargetIdentity;
    VirtualInvokeData get_Uri_1;
    VirtualInvokeData set_Uri;
    VirtualInvokeData get_OutArgCount;
};
#endif
#if !defined(IL2CPP_STRUCT_MonoMethodMessage__VTable_FWDDECL)
#define IL2CPP_STRUCT_MonoMethodMessage__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_MonoMethodMessage__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_MonoMethodMessage__VTable_DEFINED) && !defined(IL2CPP_STRUCT_MonoMethodMessage__VTable_FWDDECL)
#include <Modloader/app/structs/MonoMethodMessage__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MonoMethodMessage__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
