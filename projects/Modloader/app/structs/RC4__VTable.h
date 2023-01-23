#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RC4__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RC4__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC4__VTable_DEFINED)
#define IL2CPP_STRUCT_RC4__VTable_DEFINED
struct RC4__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData Dispose;
    VirtualInvokeData Dispose_1;
    VirtualInvokeData get_BlockSize;
    VirtualInvokeData set_BlockSize;
    VirtualInvokeData get_FeedbackSize;
    VirtualInvokeData set_FeedbackSize;
    VirtualInvokeData get_IV;
    VirtualInvokeData set_IV;
    VirtualInvokeData get_Key;
    VirtualInvokeData set_Key;
    VirtualInvokeData get_LegalBlockSizes;
    VirtualInvokeData get_LegalKeySizes;
    VirtualInvokeData get_KeySize;
    VirtualInvokeData set_KeySize;
    VirtualInvokeData get_Mode;
    VirtualInvokeData set_Mode;
    VirtualInvokeData get_Padding;
    VirtualInvokeData set_Padding;
    VirtualInvokeData CreateEncryptor;
    VirtualInvokeData __unknown;
    VirtualInvokeData CreateDecryptor;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
};
#endif
#if !defined(IL2CPP_STRUCT_RC4__VTable_FWDDECL)
#define IL2CPP_STRUCT_RC4__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_RC4__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_RC4__VTable_DEFINED) && !defined(IL2CPP_STRUCT_RC4__VTable_FWDDECL)
#include <Modloader/app/structs/RC4__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RC4__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
