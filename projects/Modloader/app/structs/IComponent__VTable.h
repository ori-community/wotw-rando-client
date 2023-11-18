#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IComponent__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IComponent__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComponent__VTable_DEFINED)
#define IL2CPP_STRUCT_IComponent__VTable_DEFINED
struct IComponent__VTable {
    VirtualInvokeData get_Site;
    VirtualInvokeData set_Site;
    VirtualInvokeData add_Disposed;
    VirtualInvokeData remove_Disposed;
};
#endif
#if !defined(IL2CPP_STRUCT_IComponent__VTable_FWDDECL)
#define IL2CPP_STRUCT_IComponent__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IComponent__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IComponent__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IComponent__VTable_FWDDECL)
#include <Modloader/app/structs/IComponent__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IComponent__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
