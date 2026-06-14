#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Uri_UriInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Uri_UriInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri_UriInfo_DEFINED)
#include <Modloader/app/structs/Uri_UriInfo__Fields.h>
#if defined(IL2CPP_STRUCT_Uri_UriInfo__Fields_DEFINED)
#define IL2CPP_STRUCT_Uri_UriInfo_DEFINED
struct Uri_UriInfo__Class;
struct Uri_UriInfo {
    struct Uri_UriInfo__Class* klass;
    MonitorData* monitor;
    struct Uri_UriInfo__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Uri_UriInfo_FWDDECL)
#define IL2CPP_STRUCT_Uri_UriInfo_FWDDECL
#include <Modloader/app/structs/Uri_UriInfo__Class.h>
#endif
#undef IL2CPP_STRUCT_Uri_UriInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_Uri_UriInfo_DEFINED) && !defined(IL2CPP_STRUCT_Uri_UriInfo_FWDDECL)
#include <Modloader/app/structs/Uri_UriInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Uri_UriInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
