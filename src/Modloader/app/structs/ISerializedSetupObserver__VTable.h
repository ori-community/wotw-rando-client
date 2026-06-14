#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ISerializedSetupObserver__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ISerializedSetupObserver__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializedSetupObserver__VTable_DEFINED)
#define IL2CPP_STRUCT_ISerializedSetupObserver__VTable_DEFINED
struct ISerializedSetupObserver__VTable {
    VirtualInvokeData get_ObservedTarget;
    VirtualInvokeData get_ObservedModifierType;
    VirtualInvokeData get_FromStateGuid;
    VirtualInvokeData set_FromStateGuid;
    VirtualInvokeData get_ToStateGuid;
    VirtualInvokeData set_ToStateGuid;
    VirtualInvokeData OnStartObserving;
    VirtualInvokeData OnStopObserving;
    VirtualInvokeData OnSetupChanged;
};
#endif
#if !defined(IL2CPP_STRUCT_ISerializedSetupObserver__VTable_FWDDECL)
#define IL2CPP_STRUCT_ISerializedSetupObserver__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ISerializedSetupObserver__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ISerializedSetupObserver__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ISerializedSetupObserver__VTable_FWDDECL)
#include <Modloader/app/structs/ISerializedSetupObserver__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ISerializedSetupObserver__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
