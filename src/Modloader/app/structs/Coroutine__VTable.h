#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Coroutine__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Coroutine__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Coroutine__VTable_DEFINED)
#define IL2CPP_STRUCT_Coroutine__VTable_DEFINED
struct Coroutine__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
};
#endif
#if !defined(IL2CPP_STRUCT_Coroutine__VTable_FWDDECL)
#define IL2CPP_STRUCT_Coroutine__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_Coroutine__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Coroutine__VTable_DEFINED) && !defined(IL2CPP_STRUCT_Coroutine__VTable_FWDDECL)
#include <Modloader/app/structs/Coroutine__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Coroutine__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
