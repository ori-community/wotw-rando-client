#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDtdParserAdapter__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDtdParserAdapter__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdParserAdapter__VTable_DEFINED)
#define IL2CPP_STRUCT_IDtdParserAdapter__VTable_DEFINED
struct IDtdParserAdapter__VTable {
    VirtualInvokeData get_NameTable;
    VirtualInvokeData get_NamespaceResolver;
    VirtualInvokeData get_BaseUri;
    VirtualInvokeData get_ParsingBuffer;
    VirtualInvokeData get_ParsingBufferLength;
    VirtualInvokeData get_CurrentPosition;
    VirtualInvokeData set_CurrentPosition;
    VirtualInvokeData get_LineNo;
    VirtualInvokeData get_LineStartPosition;
    VirtualInvokeData get_IsEof;
    VirtualInvokeData get_EntityStackLength;
    VirtualInvokeData get_IsEntityEolNormalized;
    VirtualInvokeData ReadData;
    VirtualInvokeData OnNewLine;
    VirtualInvokeData ParseNumericCharRef;
    VirtualInvokeData ParseNamedCharRef;
    VirtualInvokeData ParsePI;
    VirtualInvokeData ParseComment;
    VirtualInvokeData PushEntity;
    VirtualInvokeData PopEntity;
    VirtualInvokeData PushExternalSubset;
    VirtualInvokeData PushInternalDtd;
    VirtualInvokeData OnSystemId;
    VirtualInvokeData OnPublicId;
    VirtualInvokeData Throw;
};
#endif
#if !defined(IL2CPP_STRUCT_IDtdParserAdapter__VTable_FWDDECL)
#define IL2CPP_STRUCT_IDtdParserAdapter__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IDtdParserAdapter__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDtdParserAdapter__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IDtdParserAdapter__VTable_FWDDECL)
#include <Modloader/app/structs/IDtdParserAdapter__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDtdParserAdapter__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
