#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpHeaders__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpHeaders__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpHeaders__Fields_DEFINED)
#include <Modloader/app/structs/HttpHeaderKind__Enum.h>
#include <Modloader/app/structs/Nullable_1_Boolean_.h>
#if defined(IL2CPP_STRUCT_HttpHeaderKind__Enum_DEFINED) && defined(IL2CPP_STRUCT_Nullable_1_Boolean__DEFINED)
#define IL2CPP_STRUCT_HttpHeaders__Fields_DEFINED
struct Dictionary_2_System_String_System_Net_Http_Headers_HttpHeaders_HeaderBucket_;
struct __declspec(align(8)) HttpHeaders__Fields {
    struct Dictionary_2_System_String_System_Net_Http_Headers_HttpHeaders_HeaderBucket_* headers;
    HttpHeaderKind__Enum HeaderKind;

    struct Nullable_1_Boolean_ connectionclose;
    struct Nullable_1_Boolean_ transferEncodingChunked;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HttpHeaders__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpHeaders__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_Net_Http_Headers_HttpHeaders_HeaderBucket_.h>
#endif
#undef IL2CPP_STRUCT_HttpHeaders__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpHeaders__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpHeaders__Fields_FWDDECL)
#include <Modloader/app/structs/HttpHeaders__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpHeaders__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
