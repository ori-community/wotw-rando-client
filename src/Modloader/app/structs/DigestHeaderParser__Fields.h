#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DigestHeaderParser__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DigestHeaderParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigestHeaderParser__Fields_DEFINED)
#define IL2CPP_STRUCT_DigestHeaderParser__Fields_DEFINED
struct String;
struct String__Array;
struct __declspec(align(8)) DigestHeaderParser__Fields {
    struct String* header;
    int32_t length;
    int32_t pos;
    struct String__Array* values;
};
#endif
#if !defined(IL2CPP_STRUCT_DigestHeaderParser__Fields_FWDDECL)
#define IL2CPP_STRUCT_DigestHeaderParser__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/String__Array.h>
#endif
#undef IL2CPP_STRUCT_DigestHeaderParser__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DigestHeaderParser__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DigestHeaderParser__Fields_FWDDECL)
#include <Modloader/app/structs/DigestHeaderParser__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DigestHeaderParser__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
