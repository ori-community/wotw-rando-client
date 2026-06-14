#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IPlayFabLogger__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IPlayFabLogger__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlayFabLogger__VTable_DEFINED)
#define IL2CPP_STRUCT_IPlayFabLogger__VTable_DEFINED
struct IPlayFabLogger__VTable {
    VirtualInvokeData get_ip;
    VirtualInvokeData set_ip;
    VirtualInvokeData get_port;
    VirtualInvokeData set_port;
    VirtualInvokeData get_url;
    VirtualInvokeData set_url;
    VirtualInvokeData OnEnable;
    VirtualInvokeData OnDisable;
    VirtualInvokeData OnDestroy;
};
#endif
#if !defined(IL2CPP_STRUCT_IPlayFabLogger__VTable_FWDDECL)
#define IL2CPP_STRUCT_IPlayFabLogger__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IPlayFabLogger__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IPlayFabLogger__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IPlayFabLogger__VTable_FWDDECL)
#include <Modloader/app/structs/IPlayFabLogger__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IPlayFabLogger__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
