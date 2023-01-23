#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Lease__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Lease__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lease__VTable_DEFINED)
#define IL2CPP_STRUCT_Lease__VTable_DEFINED
struct Lease__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CreateObjRef;
    VirtualInvokeData InitializeLifetimeService;
    VirtualInvokeData get_CurrentLeaseTime;
    VirtualInvokeData get_CurrentState;
    VirtualInvokeData set_InitialLeaseTime;
    VirtualInvokeData get_RenewOnCallTime;
    VirtualInvokeData set_RenewOnCallTime;
    VirtualInvokeData set_SponsorshipTimeout;
    VirtualInvokeData Renew;
    VirtualInvokeData Unregister;
};
#endif
#if !defined(IL2CPP_STRUCT_Lease__VTable_FWDDECL)
#define IL2CPP_STRUCT_Lease__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_Lease__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Lease__VTable_DEFINED) && !defined(IL2CPP_STRUCT_Lease__VTable_FWDDECL)
#include <Modloader/app/structs/Lease__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Lease__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
