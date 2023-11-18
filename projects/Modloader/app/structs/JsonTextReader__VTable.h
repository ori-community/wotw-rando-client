#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonTextReader__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonTextReader__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonTextReader__VTable_DEFINED)
#define IL2CPP_STRUCT_JsonTextReader__VTable_DEFINED
struct JsonTextReader__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData get_TokenType;
    VirtualInvokeData get_Value;
    VirtualInvokeData get_ValueType;
    VirtualInvokeData get_Depth;
    VirtualInvokeData get_Path;
    VirtualInvokeData Read;
    VirtualInvokeData ReadAsInt32;
    VirtualInvokeData ReadAsString;
    VirtualInvokeData ReadAsBytes;
    VirtualInvokeData ReadAsDouble;
    VirtualInvokeData ReadAsBoolean;
    VirtualInvokeData ReadAsDecimal;
    VirtualInvokeData ReadAsDateTime;
    VirtualInvokeData ReadAsDateTimeOffset;
    VirtualInvokeData Dispose;
    VirtualInvokeData Close;
    VirtualInvokeData HasLineInfo;
    VirtualInvokeData get_LineNumber;
    VirtualInvokeData get_LinePosition;
};
#endif
#if !defined(IL2CPP_STRUCT_JsonTextReader__VTable_FWDDECL)
#define IL2CPP_STRUCT_JsonTextReader__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_JsonTextReader__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonTextReader__VTable_DEFINED) && !defined(IL2CPP_STRUCT_JsonTextReader__VTable_FWDDECL)
#include <Modloader/app/structs/JsonTextReader__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonTextReader__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
