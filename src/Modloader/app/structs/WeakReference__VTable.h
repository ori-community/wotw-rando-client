#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeakReference__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeakReference__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeakReference__VTable_DEFINED)
#define IL2CPP_STRUCT_WeakReference__VTable_DEFINED
struct WeakReference__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetObjectData;
    VirtualInvokeData get_IsAlive;
    VirtualInvokeData get_Target;
    VirtualInvokeData set_Target;
    VirtualInvokeData get_TrackResurrection;
    VirtualInvokeData GetObjectData_1;
};
#endif
#if !defined(IL2CPP_STRUCT_WeakReference__VTable_FWDDECL)
#define IL2CPP_STRUCT_WeakReference__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_WeakReference__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeakReference__VTable_DEFINED) && !defined(IL2CPP_STRUCT_WeakReference__VTable_FWDDECL)
#include <Modloader/app/structs/WeakReference__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeakReference__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
