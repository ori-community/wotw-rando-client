#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_CollectionConverter__VTable_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_CollectionConverter__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectionConverter__VTable_DEFINED)
#define IL2CPP_STRUCT_CollectionConverter__VTable_DEFINED
struct CollectionConverter__VTable {
    VirtualInvokeData Equals;
    VirtualInvokeData Finalize;
    VirtualInvokeData GetHashCode;
    VirtualInvokeData ToString;
    VirtualInvokeData CanConvertFrom;
    VirtualInvokeData CanConvertTo;
    VirtualInvokeData ConvertFrom;
    VirtualInvokeData ConvertTo;
    VirtualInvokeData CreateInstance;
    VirtualInvokeData GetCreateInstanceSupported;
    VirtualInvokeData GetProperties;
    VirtualInvokeData GetPropertiesSupported;
    VirtualInvokeData GetStandardValues;
    VirtualInvokeData GetStandardValuesExclusive;
    VirtualInvokeData GetStandardValuesSupported;
    VirtualInvokeData IsValid;
};
#endif
#if !defined(IL2CPP_STRUCT_CollectionConverter__VTable_FWDDECL)
#define IL2CPP_STRUCT_CollectionConverter__VTable_FWDDECL
#endif
#undef IL2CPP_STRUCT_CollectionConverter__VTable_INITIALIZING
#if !defined(IL2CPP_STRUCT_CollectionConverter__VTable_DEFINED) && !defined(IL2CPP_STRUCT_CollectionConverter__VTable_FWDDECL)
#include <Modloader/app/structs/CollectionConverter__VTable.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/CollectionConverter__VTable.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
