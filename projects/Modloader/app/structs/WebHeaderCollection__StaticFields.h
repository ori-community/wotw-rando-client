#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebHeaderCollection__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebHeaderCollection__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebHeaderCollection__StaticFields_DEFINED)
#define IL2CPP_STRUCT_WebHeaderCollection__StaticFields_DEFINED
struct HeaderInfoTable;
struct String__Array;
struct SByte__Array;
struct Char__Array;
struct WebHeaderCollection_RfcChar__Enum__Array;
struct WebHeaderCollection__StaticFields {
    struct HeaderInfoTable* HInfo;
    struct String__Array* s_CommonHeaderNames;
    struct SByte__Array* s_CommonHeaderHints;
    struct Char__Array* HttpTrimCharacters;
    struct WebHeaderCollection_RfcChar__Enum__Array* RfcCharMap;
};
#endif
#if !defined(IL2CPP_STRUCT_WebHeaderCollection__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_WebHeaderCollection__StaticFields_FWDDECL
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/HeaderInfoTable.h>
#include <Modloader/app/structs/SByte__Array.h>
#include <Modloader/app/structs/String__Array.h>
#include <Modloader/app/structs/WebHeaderCollection_RfcChar__Enum__Array.h>
#endif
#undef IL2CPP_STRUCT_WebHeaderCollection__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebHeaderCollection__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_WebHeaderCollection__StaticFields_FWDDECL)
#include <Modloader/app/structs/WebHeaderCollection__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebHeaderCollection__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
