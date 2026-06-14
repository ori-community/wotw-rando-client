#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransferCodingHeaderValue__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransferCodingHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransferCodingHeaderValue__Fields_DEFINED)
#define IL2CPP_STRUCT_TransferCodingHeaderValue__Fields_DEFINED
struct String;
struct List_1_System_Net_Http_Headers_NameValueHeaderValue_;
struct __declspec(align(8)) TransferCodingHeaderValue__Fields {
    struct String* value;
    struct List_1_System_Net_Http_Headers_NameValueHeaderValue_* parameters;
};
#endif
#if !defined(IL2CPP_STRUCT_TransferCodingHeaderValue__Fields_FWDDECL)
#define IL2CPP_STRUCT_TransferCodingHeaderValue__Fields_FWDDECL
#include <Modloader/app/structs/List_1_System_Net_Http_Headers_NameValueHeaderValue_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_TransferCodingHeaderValue__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransferCodingHeaderValue__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TransferCodingHeaderValue__Fields_FWDDECL)
#include <Modloader/app/structs/TransferCodingHeaderValue__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransferCodingHeaderValue__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
