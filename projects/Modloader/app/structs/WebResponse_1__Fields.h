#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WebResponse_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WebResponse_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebResponse_1__Fields_DEFINED)
#define IL2CPP_STRUCT_WebResponse_1__Fields_DEFINED
struct Byte__Array;
struct String;
struct Exception;
struct __declspec(align(8)) WebResponse_1__Fields {
    struct Byte__Array* m_byteData;
    struct String* m_stringData;
    int32_t m_statusCode;
    struct Exception* m_error;
};
#endif
#if !defined(IL2CPP_STRUCT_WebResponse_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_WebResponse_1__Fields_FWDDECL
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_WebResponse_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WebResponse_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WebResponse_1__Fields_FWDDECL)
#include <Modloader/app/structs/WebResponse_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WebResponse_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
