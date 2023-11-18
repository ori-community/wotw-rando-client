#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RIPEMD160__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RIPEMD160__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_RIPEMD160__VTable_DEFINED)
#define IL2CPP_STRUCT_RIPEMD160__VTable_DEFINED
struct RIPEMD160__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData get_InputBlockSize;
    VirtualInvokeData get_OutputBlockSize;
    VirtualInvokeData get_CanTransformMultipleBlocks;
    VirtualInvokeData get_CanReuseTransform;
    VirtualInvokeData TransformBlock;
    VirtualInvokeData TransformFinalBlock;
    VirtualInvokeData get_HashSize;
    VirtualInvokeData get_Hash;
    VirtualInvokeData get_InputBlockSize_1;
    VirtualInvokeData get_OutputBlockSize_1;
    VirtualInvokeData get_CanTransformMultipleBlocks_1;
    VirtualInvokeData get_CanReuseTransform_1;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
};
#endif
#if !defined(IL2CPP_STRUCT_RIPEMD160__VTable_FWDDECL)
#define IL2CPP_STRUCT_RIPEMD160__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_RIPEMD160__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_RIPEMD160__VTable_DEFINED) && !defined(IL2CPP_STRUCT_RIPEMD160__VTable_FWDDECL)
#include <Modloader/app/structs/RIPEMD160__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RIPEMD160__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
