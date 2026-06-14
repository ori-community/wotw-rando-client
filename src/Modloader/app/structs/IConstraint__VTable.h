#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IConstraint__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IConstraint__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstraint__VTable_DEFINED)
#define IL2CPP_STRUCT_IConstraint__VTable_DEFINED
struct IConstraint__VTable {
    VirtualInvokeData get_Dirty;
    VirtualInvokeData set_Dirty;
    VirtualInvokeData get_CachedValue;
    VirtualInvokeData set_CachedValue;
    VirtualInvokeData get_EventId;
    VirtualInvokeData get_ConstrainedTo;
    VirtualInvokeData get_TimeOffset;
    VirtualInvokeData get_Flags;
};
#endif
#if !defined(IL2CPP_STRUCT_IConstraint__VTable_FWDDECL)
#define IL2CPP_STRUCT_IConstraint__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IConstraint__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IConstraint__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IConstraint__VTable_FWDDECL)
#include <Modloader/app/structs/IConstraint__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IConstraint__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
