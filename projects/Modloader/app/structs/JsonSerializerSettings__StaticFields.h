#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_JsonSerializerSettings__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_JsonSerializerSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerSettings__StaticFields_DEFINED)
#include <Modloader/app/structs/StreamingContext.h>
#if defined(IL2CPP_STRUCT_StreamingContext_DEFINED)
#define IL2CPP_STRUCT_JsonSerializerSettings__StaticFields_DEFINED
struct CultureInfo;
struct JsonSerializerSettings__StaticFields {
    struct StreamingContext DefaultContext;
    struct CultureInfo* DefaultCulture;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_JsonSerializerSettings__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_JsonSerializerSettings__StaticFields_FWDDECL
#include <Modloader/app/structs/CultureInfo.h>
#endif
#undef IL2CPP_STRUCT_JsonSerializerSettings__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_JsonSerializerSettings__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_JsonSerializerSettings__StaticFields_FWDDECL)
#include <Modloader/app/structs/JsonSerializerSettings__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/JsonSerializerSettings__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
