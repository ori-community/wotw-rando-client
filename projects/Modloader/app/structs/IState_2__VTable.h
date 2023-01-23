#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IState_2__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IState_2__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IState_2__VTable_DEFINED)
#define IL2CPP_STRUCT_IState_2__VTable_DEFINED
struct IState_2__VTable {
    VirtualInvokeData UpdateState;
    VirtualInvokeData OnEnter;
    VirtualInvokeData OnExit;
    VirtualInvokeData GetStateId;
};
#endif
#if !defined(IL2CPP_STRUCT_IState_2__VTable_FWDDECL)
#define IL2CPP_STRUCT_IState_2__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IState_2__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IState_2__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IState_2__VTable_FWDDECL)
#include <Modloader/app/structs/IState_2__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IState_2__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
