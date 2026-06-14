#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberSwarmer__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberSwarmer__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarmer__VTable_DEFINED)
#define IL2CPP_STRUCT_UberSwarmer__VTable_DEFINED
struct UberSwarmer__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_Mask;
    VirtualInvokeData set_Mask;
    VirtualInvokeData get_IsSuspended;
    VirtualInvokeData set_IsSuspended;
    VirtualInvokeData get_Position;
    VirtualInvokeData set_Position;
    VirtualInvokeData get_Velocity;
    VirtualInvokeData set_Velocity;
    VirtualInvokeData ISwarmer_get_IsActive;
    VirtualInvokeData ISwarmer_set_IsActive;
    VirtualInvokeData __unknown;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
    VirtualInvokeData __unknown_4;
    VirtualInvokeData CalculateExtraVelocities;
};
#endif
#if !defined(IL2CPP_STRUCT_UberSwarmer__VTable_FWDDECL)
#define IL2CPP_STRUCT_UberSwarmer__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_UberSwarmer__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberSwarmer__VTable_DEFINED) && !defined(IL2CPP_STRUCT_UberSwarmer__VTable_FWDDECL)
#include <Modloader/app/structs/UberSwarmer__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberSwarmer__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
