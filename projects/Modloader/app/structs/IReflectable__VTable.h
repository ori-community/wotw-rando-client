#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IReflectable__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IReflectable__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IReflectable__VTable_DEFINED)
#define IL2CPP_STRUCT_IReflectable__VTable_DEFINED
struct IReflectable__VTable {
    VirtualInvokeData get_Direction;
    VirtualInvokeData set_Direction;
    VirtualInvokeData get_Speed;
    VirtualInvokeData set_Speed;
    VirtualInvokeData get_LastReflector;
    VirtualInvokeData set_LastReflector;
    VirtualInvokeData CanBeReflected;
    VirtualInvokeData OnGrabbed;
    VirtualInvokeData OnReleased;
    VirtualInvokeData OnReflected;
};
#endif
#if !defined(IL2CPP_STRUCT_IReflectable__VTable_FWDDECL)
#define IL2CPP_STRUCT_IReflectable__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IReflectable__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IReflectable__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IReflectable__VTable_FWDDECL)
#include <Modloader/app/structs/IReflectable__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IReflectable__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
