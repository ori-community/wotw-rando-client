#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Uri_UriInfo__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Uri_UriInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri_UriInfo__Fields_DEFINED)
#include <Modloader/app/structs/Uri_Offset.h>
#if defined(IL2CPP_STRUCT_Uri_Offset_DEFINED)
#define IL2CPP_STRUCT_Uri_UriInfo__Fields_DEFINED
struct String;
struct Uri_MoreInfo;
struct __declspec(align(8)) Uri_UriInfo__Fields {
    struct String* Host;
    struct String* ScopeId;
    struct String* String;
    struct Uri_Offset Offset;
    struct String* DnsSafeHost;
    struct Uri_MoreInfo* MoreInfo;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Uri_UriInfo__Fields_FWDDECL)
#define IL2CPP_STRUCT_Uri_UriInfo__Fields_FWDDECL
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Uri_MoreInfo.h>
#endif
#undef IL2CPP_STRUCT_Uri_UriInfo__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri_UriInfo__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Uri_UriInfo__Fields_FWDDECL)
#include <Modloader/app/structs/Uri_UriInfo__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Uri_UriInfo__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
