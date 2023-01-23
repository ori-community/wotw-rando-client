#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeflaterManaged__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeflaterManaged__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflaterManaged__VTable_DEFINED)
#define IL2CPP_STRUCT_DeflaterManaged__VTable_DEFINED
struct DeflaterManaged__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Unity_IO_Compression_IDeflater_NeedsInput;
    VirtualInvokeData Unity_IO_Compression_IDeflater_SetInput;
    VirtualInvokeData Unity_IO_Compression_IDeflater_GetDeflateOutput;
    VirtualInvokeData Unity_IO_Compression_IDeflater_Finish;
    VirtualInvokeData System_IDisposable_Dispose;
};
#endif
#if !defined(IL2CPP_STRUCT_DeflaterManaged__VTable_FWDDECL)
#define IL2CPP_STRUCT_DeflaterManaged__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_DeflaterManaged__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeflaterManaged__VTable_DEFINED) && !defined(IL2CPP_STRUCT_DeflaterManaged__VTable_FWDDECL)
#include <Modloader/app/structs/DeflaterManaged__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeflaterManaged__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
