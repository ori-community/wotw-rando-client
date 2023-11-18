#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HeaderInfoTable__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HeaderInfoTable__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderInfoTable__StaticFields_DEFINED)
#define IL2CPP_STRUCT_HeaderInfoTable__StaticFields_DEFINED
struct Hashtable;
struct HeaderInfo;
struct HeaderParser;
struct HeaderInfoTable__StaticFields {
    struct Hashtable* HeaderHashTable;
    struct HeaderInfo* UnknownHeaderInfo;
    struct HeaderParser* SingleParser;
    struct HeaderParser* MultiParser;
};
#endif
#if !defined(IL2CPP_STRUCT_HeaderInfoTable__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_HeaderInfoTable__StaticFields_FWDDECL
#include <Modloader/app/structs/Hashtable.h>
#include <Modloader/app/structs/HeaderInfo.h>
#include <Modloader/app/structs/HeaderParser.h>
#endif
#undef IL2CPP_STRUCT_HeaderInfoTable__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeaderInfoTable__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_HeaderInfoTable__StaticFields_FWDDECL)
#include <Modloader/app/structs/HeaderInfoTable__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HeaderInfoTable__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
