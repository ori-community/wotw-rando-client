#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetupControllerStateHolder__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetupControllerStateHolder__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupControllerStateHolder__VTable_DEFINED)
#define IL2CPP_STRUCT_SetupControllerStateHolder__VTable_DEFINED
struct SetupControllerStateHolder__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData GetSetupStates;
    VirtualInvokeData get_UseMapping;
    VirtualInvokeData get_UseDesiredValues;
    VirtualInvokeData get_UseUberState;
    VirtualInvokeData CacheSetupStates;
};
#endif
#if !defined(IL2CPP_STRUCT_SetupControllerStateHolder__VTable_FWDDECL)
#define IL2CPP_STRUCT_SetupControllerStateHolder__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_SetupControllerStateHolder__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetupControllerStateHolder__VTable_DEFINED) && !defined(IL2CPP_STRUCT_SetupControllerStateHolder__VTable_FWDDECL)
#include <Modloader/app/structs/SetupControllerStateHolder__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetupControllerStateHolder__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
