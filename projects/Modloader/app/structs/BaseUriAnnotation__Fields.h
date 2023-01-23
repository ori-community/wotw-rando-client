#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseUriAnnotation__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseUriAnnotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseUriAnnotation__Fields_DEFINED)
#define IL2CPP_STRUCT_BaseUriAnnotation__Fields_DEFINED
struct String;
struct __declspec(align(8)) BaseUriAnnotation__Fields {
    struct String* baseUri;
};
#endif
#if !defined(IL2CPP_STRUCT_BaseUriAnnotation__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseUriAnnotation__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_BaseUriAnnotation__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseUriAnnotation__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseUriAnnotation__Fields_FWDDECL)
#include <Modloader/app/structs/BaseUriAnnotation__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseUriAnnotation__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
