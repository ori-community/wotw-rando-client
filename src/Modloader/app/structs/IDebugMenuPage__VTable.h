#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDebugMenuPage__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDebugMenuPage__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDebugMenuPage__VTable_DEFINED)
#define IL2CPP_STRUCT_IDebugMenuPage__VTable_DEFINED
struct IDebugMenuPage__VTable {
    VirtualInvokeData get_Active;
    VirtualInvokeData set_Active;
    VirtualInvokeData get_Items;
    VirtualInvokeData set_Items;
    VirtualInvokeData AddMenuItem;
    VirtualInvokeData Clear;
    VirtualInvokeData GoBackMenu;
    VirtualInvokeData Reset;
};
#endif
#if !defined(IL2CPP_STRUCT_IDebugMenuPage__VTable_FWDDECL)
#define IL2CPP_STRUCT_IDebugMenuPage__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IDebugMenuPage__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDebugMenuPage__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IDebugMenuPage__VTable_FWDDECL)
#include <Modloader/app/structs/IDebugMenuPage__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDebugMenuPage__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
