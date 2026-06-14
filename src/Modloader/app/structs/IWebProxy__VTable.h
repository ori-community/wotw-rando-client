#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IWebProxy__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IWebProxy__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWebProxy__VTable_DEFINED)
#define IL2CPP_STRUCT_IWebProxy__VTable_DEFINED
struct IWebProxy__VTable {
    VirtualInvokeData GetProxy;
    VirtualInvokeData IsBypassed;
    VirtualInvokeData get_Credentials;
    VirtualInvokeData set_Credentials;
};
#endif
#if !defined(IL2CPP_STRUCT_IWebProxy__VTable_FWDDECL)
#define IL2CPP_STRUCT_IWebProxy__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IWebProxy__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IWebProxy__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IWebProxy__VTable_FWDDECL)
#include <Modloader/app/structs/IWebProxy__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IWebProxy__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
