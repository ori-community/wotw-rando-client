#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDrivableGroup__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDrivableGroup__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDrivableGroup__VTable_DEFINED)
#define IL2CPP_STRUCT_IDrivableGroup__VTable_DEFINED
struct IDrivableGroup__VTable {
    VirtualInvokeData Pause;
    VirtualInvokeData Resume;
    VirtualInvokeData get_IsActive;
    VirtualInvokeData RegisterDrivable;
    VirtualInvokeData UnregisterDrivable;
    VirtualInvokeData Contains;
    VirtualInvokeData get_GroupName;
    VirtualInvokeData set_GroupName;
    VirtualInvokeData get_GroupSize;
};
#endif
#if !defined(IL2CPP_STRUCT_IDrivableGroup__VTable_FWDDECL)
#define IL2CPP_STRUCT_IDrivableGroup__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IDrivableGroup__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDrivableGroup__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IDrivableGroup__VTable_FWDDECL)
#include <Modloader/app/structs/IDrivableGroup__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDrivableGroup__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
