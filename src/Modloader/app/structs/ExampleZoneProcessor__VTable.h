#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExampleZoneProcessor__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExampleZoneProcessor__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExampleZoneProcessor__VTable_DEFINED)
#define IL2CPP_STRUCT_ExampleZoneProcessor__VTable_DEFINED
struct ExampleZoneProcessor__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData RegisterListenerZoneTask;
    VirtualInvokeData RegisterEmitterZoneTask;
    VirtualInvokeData Initialize;
    VirtualInvokeData Update;
    VirtualInvokeData ResetListener;
    VirtualInvokeData DefragmentStructures;
    VirtualInvokeData get_ActiveListenerZones;
    VirtualInvokeData get_MaxListenerZones;
    VirtualInvokeData get_ActiveEmitterZones;
    VirtualInvokeData get_MaxEmitterZones;
    VirtualInvokeData ProcessZoneTasks;
    VirtualInvokeData ResetListenerTracking;
    VirtualInvokeData InitializeEmitterZoneTask;
    VirtualInvokeData InitializeListenerZoneTask;
    VirtualInvokeData TearDownListenerZoneTask;
    VirtualInvokeData TearDownEmitterZoneTask;
};
#endif
#if !defined(IL2CPP_STRUCT_ExampleZoneProcessor__VTable_FWDDECL)
#define IL2CPP_STRUCT_ExampleZoneProcessor__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_ExampleZoneProcessor__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExampleZoneProcessor__VTable_DEFINED) && !defined(IL2CPP_STRUCT_ExampleZoneProcessor__VTable_FWDDECL)
#include <Modloader/app/structs/ExampleZoneProcessor__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExampleZoneProcessor__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
