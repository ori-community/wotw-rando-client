#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EncodingTable__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EncodingTable__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncodingTable__StaticFields_DEFINED)
#define IL2CPP_STRUCT_EncodingTable__StaticFields_DEFINED
struct InternalEncodingDataItem__Array;
struct InternalCodePageDataItem__Array;
struct Hashtable;
struct EncodingTable__StaticFields {
    struct InternalEncodingDataItem__Array* encodingDataPtr;
    struct InternalCodePageDataItem__Array* codePageDataPtr;
    int32_t lastEncodingItem;
    struct Hashtable* hashByName;
    struct Hashtable* hashByCodePage;
};
#endif
#if !defined(IL2CPP_STRUCT_EncodingTable__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_EncodingTable__StaticFields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/InternalCodePageDataItem__Array.h>
#include <Modloader/app/structs/InternalEncodingDataItem__Array.h>
#endif
#undef IL2CPP_STRUCT_EncodingTable__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EncodingTable__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_EncodingTable__StaticFields_FWDDECL)
#include <Modloader/app/structs/EncodingTable__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EncodingTable__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
