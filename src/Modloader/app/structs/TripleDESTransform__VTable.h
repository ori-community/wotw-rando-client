#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TripleDESTransform__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TripleDESTransform__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_TripleDESTransform__VTable_DEFINED)
#define IL2CPP_STRUCT_TripleDESTransform__VTable_DEFINED
struct TripleDESTransform__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_InputBlockSize;
    VirtualInvokeData get_OutputBlockSize;
    VirtualInvokeData get_CanTransformMultipleBlocks;
    VirtualInvokeData get_CanReuseTransform;
    VirtualInvokeData TransformBlock;
    VirtualInvokeData TransformFinalBlock;
    VirtualInvokeData System_IDisposable_Dispose;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_CanTransformMultipleBlocks_1;
    VirtualInvokeData get_CanReuseTransform_1;
    VirtualInvokeData get_InputBlockSize_1;
    VirtualInvokeData get_OutputBlockSize_1;
    VirtualInvokeData Transform;
    VirtualInvokeData ECB;
    VirtualInvokeData CBC;
    VirtualInvokeData CFB;
    VirtualInvokeData OFB;
    VirtualInvokeData CTS;
    VirtualInvokeData TransformBlock_1;
    VirtualInvokeData FinalEncrypt;
    VirtualInvokeData FinalDecrypt;
    VirtualInvokeData TransformFinalBlock_1;
};
#endif
#if !defined(IL2CPP_STRUCT_TripleDESTransform__VTable_FWDDECL)
#define IL2CPP_STRUCT_TripleDESTransform__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_TripleDESTransform__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_TripleDESTransform__VTable_DEFINED) && !defined(IL2CPP_STRUCT_TripleDESTransform__VTable_FWDDECL)
#include <Modloader/app/structs/TripleDESTransform__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TripleDESTransform__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
