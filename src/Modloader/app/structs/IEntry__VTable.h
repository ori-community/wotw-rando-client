#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IEntry__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IEntry__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntry__VTable_DEFINED)
#define IL2CPP_STRUCT_IEntry__VTable_DEFINED
struct IEntry__VTable {
    VirtualInvokeData get_StartTime;
    VirtualInvokeData set_StartTime;
    VirtualInvokeData get_EndTime;
    VirtualInvokeData get_Speed;
    VirtualInvokeData set_Speed;
    VirtualInvokeData get_Duration;
    VirtualInvokeData get_Animator;
};
#endif
#if !defined(IL2CPP_STRUCT_IEntry__VTable_FWDDECL)
#define IL2CPP_STRUCT_IEntry__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IEntry__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IEntry__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IEntry__VTable_FWDDECL)
#include <Modloader/app/structs/IEntry__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IEntry__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
