#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IScenesManagerBehaviour__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IScenesManagerBehaviour__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IScenesManagerBehaviour__VTable_DEFINED)
#define IL2CPP_STRUCT_IScenesManagerBehaviour__VTable_DEFINED
struct IScenesManagerBehaviour__VTable {
    VirtualInvokeData Initialize;
    VirtualInvokeData Update;
    VirtualInvokeData SetTargetPosition;
    VirtualInvokeData Reset;
    VirtualInvokeData FindScenesToUnload;
    VirtualInvokeData FindUneededScenesToUnload;
    VirtualInvokeData get_SceneOperationsEnable;
    VirtualInvokeData get_SceneOperationsLoad;
    VirtualInvokeData get_SceneOperationsUnload;
    VirtualInvokeData get_PredictedTargetPosition;
    VirtualInvokeData get_CurrentUpdateType;
};
#endif
#if !defined(IL2CPP_STRUCT_IScenesManagerBehaviour__VTable_FWDDECL)
#define IL2CPP_STRUCT_IScenesManagerBehaviour__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IScenesManagerBehaviour__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IScenesManagerBehaviour__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IScenesManagerBehaviour__VTable_FWDDECL)
#include <Modloader/app/structs/IScenesManagerBehaviour__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IScenesManagerBehaviour__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
