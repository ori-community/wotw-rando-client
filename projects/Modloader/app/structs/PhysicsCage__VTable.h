#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsCage__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsCage__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsCage__VTable_DEFINED)
#define IL2CPP_STRUCT_PhysicsCage__VTable_DEFINED
struct PhysicsCage__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData IsPointInside;
    VirtualInvokeData OnBeforeStrip;
    VirtualInvokeData DoStrip;
    VirtualInvokeData SplitAtEdge;
    VirtualInvokeData GetRigidbody;
    VirtualInvokeData Attach;
    VirtualInvokeData WasAttached;
    VirtualInvokeData AttachedBodyEnabled;
};
#endif
#if !defined(IL2CPP_STRUCT_PhysicsCage__VTable_FWDDECL)
#define IL2CPP_STRUCT_PhysicsCage__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_PhysicsCage__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsCage__VTable_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsCage__VTable_FWDDECL)
#include <Modloader/app/structs/PhysicsCage__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsCage__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
