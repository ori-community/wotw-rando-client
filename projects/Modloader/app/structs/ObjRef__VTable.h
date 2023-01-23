#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ObjRef__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ObjRef__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjRef__VTable_DEFINED)
#define IL2CPP_STRUCT_ObjRef__VTable_DEFINED
struct ObjRef__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetRealObject;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData get_ChannelInfo;
    VirtualInvokeData get_EnvoyInfo;
    VirtualInvokeData set_EnvoyInfo;
    VirtualInvokeData get_TypeInfo;
    VirtualInvokeData set_TypeInfo;
    VirtualInvokeData get_URI;
    VirtualInvokeData set_URI;
    VirtualInvokeData GetObjectData_1;
    VirtualInvokeData GetRealObject_1;
};
#endif
#if !defined(IL2CPP_STRUCT_ObjRef__VTable_FWDDECL)
#define IL2CPP_STRUCT_ObjRef__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ObjRef__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ObjRef__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ObjRef__VTable_FWDDECL)
#include <Modloader/app/structs/ObjRef__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ObjRef__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
