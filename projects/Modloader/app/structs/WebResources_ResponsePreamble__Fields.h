#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebResources_ResponsePreamble__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebResources_ResponsePreamble__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebResources_ResponsePreamble__Fields_DEFINED)
#define IL2CPP_STRUCT_WebResources_ResponsePreamble__Fields_DEFINED
struct String;
struct Dictionary_2_System_String_System_String_;
struct __declspec(align(8)) WebResources_ResponsePreamble__Fields {
    int32_t statusCode;
    struct String* statusText;
    struct String* mimeType;
    int32_t length;
    struct Dictionary_2_System_String_System_String_* headers;
};
#endif
#if !defined(IL2CPP_STRUCT_WebResources_ResponsePreamble__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebResources_ResponsePreamble__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_System_String_System_String_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_WebResources_ResponsePreamble__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebResources_ResponsePreamble__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebResources_ResponsePreamble__Fields_FWDDECL)
#include <Modloader/app/structs/WebResources_ResponsePreamble__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebResources_ResponsePreamble__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
