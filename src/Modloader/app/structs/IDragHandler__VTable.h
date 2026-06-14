#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IDragHandler__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IDragHandler__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDragHandler__VTable_DEFINED)
#define IL2CPP_STRUCT_IDragHandler__VTable_DEFINED
struct IDragHandler__VTable {
    VirtualInvokeData OnDrag;
};
#endif
#if !defined(IL2CPP_STRUCT_IDragHandler__VTable_FWDDECL)
#define IL2CPP_STRUCT_IDragHandler__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_IDragHandler__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_IDragHandler__VTable_DEFINED) && !defined(IL2CPP_STRUCT_IDragHandler__VTable_FWDDECL)
#include <Modloader/app/structs/IDragHandler__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IDragHandler__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
