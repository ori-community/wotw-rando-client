#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XName__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XName__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_XName__VTable_DEFINED)
#define IL2CPP_STRUCT_XName__VTable_DEFINED
struct XName__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_IEquatable_System_Xml_Linq_XName__Equals;
    VirtualInvokeData System_Runtime_Serialization_ISerializable_GetObjectData;
};
#endif
#if !defined(IL2CPP_STRUCT_XName__VTable_FWDDECL)
#define IL2CPP_STRUCT_XName__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_XName__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_XName__VTable_DEFINED) && !defined(IL2CPP_STRUCT_XName__VTable_FWDDECL)
#include <Modloader/app/structs/XName__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XName__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
