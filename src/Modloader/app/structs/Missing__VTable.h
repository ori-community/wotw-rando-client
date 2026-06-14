#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Missing__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Missing__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Missing__VTable_DEFINED)
#define IL2CPP_STRUCT_Missing__VTable_DEFINED
struct Missing__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
};
#endif
#if !defined(IL2CPP_STRUCT_Missing__VTable_FWDDECL)
#define IL2CPP_STRUCT_Missing__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_Missing__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_Missing__VTable_DEFINED) && !defined(IL2CPP_STRUCT_Missing__VTable_FWDDECL)
#include <Modloader/app/structs/Missing__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Missing__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
