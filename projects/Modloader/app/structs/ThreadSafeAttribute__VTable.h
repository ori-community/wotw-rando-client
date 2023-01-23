#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ThreadSafeAttribute__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ThreadSafeAttribute__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadSafeAttribute__VTable_DEFINED)
#define IL2CPP_STRUCT_ThreadSafeAttribute__VTable_DEFINED
struct ThreadSafeAttribute__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_TypeId;
    VirtualInvokeData Match;
    VirtualInvokeData IsDefaultAttribute;
    VirtualInvokeData set_Name;
    VirtualInvokeData set_IsThreadSafe;
    VirtualInvokeData set_IsFreeFunction;
    VirtualInvokeData set_ThrowsException;
    VirtualInvokeData set_HasExplicitThis;
};
#endif
#if !defined(IL2CPP_STRUCT_ThreadSafeAttribute__VTable_FWDDECL)
#define IL2CPP_STRUCT_ThreadSafeAttribute__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ThreadSafeAttribute__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ThreadSafeAttribute__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ThreadSafeAttribute__VTable_FWDDECL)
#include <Modloader/app/structs/ThreadSafeAttribute__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ThreadSafeAttribute__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
