#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HttpResponseObject__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HttpResponseObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpResponseObject__Fields_DEFINED)
#define IL2CPP_STRUCT_HttpResponseObject__Fields_DEFINED
struct String;
struct Object;
struct __declspec(align(8)) HttpResponseObject__Fields {
    int32_t code;
    int32_t errorCode;
    struct String* status;
    struct Object* data;
};
#endif
#if !defined(IL2CPP_STRUCT_HttpResponseObject__Fields_FWDDECL)
#define IL2CPP_STRUCT_HttpResponseObject__Fields_FWDDECL
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_HttpResponseObject__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HttpResponseObject__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HttpResponseObject__Fields_FWDDECL)
#include <Modloader/app/structs/HttpResponseObject__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HttpResponseObject__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
