#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SchemaInfo__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SchemaInfo__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaInfo__VTable_DEFINED)
#define IL2CPP_STRUCT_SchemaInfo__VTable_DEFINED
struct SchemaInfo__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData System_Xml_IDtdInfo_get_Name;
    VirtualInvokeData System_Xml_IDtdInfo_get_InternalDtdSubset;
    VirtualInvokeData System_Xml_IDtdInfo_get_HasDefaultAttributes;
    VirtualInvokeData System_Xml_IDtdInfo_get_HasNonCDataAttributes;
    VirtualInvokeData System_Xml_IDtdInfo_LookupAttributeList;
    VirtualInvokeData System_Xml_IDtdInfo_LookupEntity;
};
#endif
#if !defined(IL2CPP_STRUCT_SchemaInfo__VTable_FWDDECL)
#define IL2CPP_STRUCT_SchemaInfo__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_SchemaInfo__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_SchemaInfo__VTable_DEFINED) && !defined(IL2CPP_STRUCT_SchemaInfo__VTable_FWDDECL)
#include <Modloader/app/structs/SchemaInfo__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SchemaInfo__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
