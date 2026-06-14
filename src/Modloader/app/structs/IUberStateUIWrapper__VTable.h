#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IUberStateUIWrapper__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IUberStateUIWrapper__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberStateUIWrapper__VTable_DEFINED)
#define IL2CPP_STRUCT_IUberStateUIWrapper__VTable_DEFINED
struct IUberStateUIWrapper__VTable {
    VirtualInvokeData get_IsActive;
    VirtualInvokeData set_IsActive;
    VirtualInvokeData OnGui;
    VirtualInvokeData HandleInput;
};
#endif
#if !defined(IL2CPP_STRUCT_IUberStateUIWrapper__VTable_FWDDECL)
#define IL2CPP_STRUCT_IUberStateUIWrapper__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IUberStateUIWrapper__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IUberStateUIWrapper__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IUberStateUIWrapper__VTable_FWDDECL)
#include <Modloader/app/structs/IUberStateUIWrapper__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IUberStateUIWrapper__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
