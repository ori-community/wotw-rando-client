#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DatatypeImplementation__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DatatypeImplementation__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatatypeImplementation__VTable_DEFINED)
#define IL2CPP_STRUCT_DatatypeImplementation__VTable_DEFINED
struct DatatypeImplementation__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData get_ValueType;
    VirtualInvokeData get_TokenizedType;
    VirtualInvokeData ParseValue;
    VirtualInvokeData get_Variety;
    VirtualInvokeData get_TypeCode;
    VirtualInvokeData IsDerivedFrom;
    VirtualInvokeData get_HasLexicalFacets;
    VirtualInvokeData get_HasValueFacets;
    VirtualInvokeData get_ValueConverter;
    VirtualInvokeData get_Restriction;
    VirtualInvokeData __unknown;
    VirtualInvokeData ParseValue_1;
    VirtualInvokeData __unknown_1;
    VirtualInvokeData TryParseValue;
    VirtualInvokeData get_FacetsChecker;
    VirtualInvokeData get_BuiltInWhitespaceFacet;
    VirtualInvokeData DeriveByRestriction;
    VirtualInvokeData DeriveByList;
    VirtualInvokeData VerifySchemaValid;
    VirtualInvokeData IsEqual;
    VirtualInvokeData IsComparable;
    VirtualInvokeData CreateValueConverter;
    VirtualInvokeData __unknown_2;
    VirtualInvokeData __unknown_3;
};
#endif
#if !defined(IL2CPP_STRUCT_DatatypeImplementation__VTable_FWDDECL)
#define IL2CPP_STRUCT_DatatypeImplementation__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_DatatypeImplementation__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_DatatypeImplementation__VTable_DEFINED) && !defined(IL2CPP_STRUCT_DatatypeImplementation__VTable_FWDDECL)
#include <Modloader/app/structs/DatatypeImplementation__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DatatypeImplementation__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
