#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetLanguageListRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetLanguageListRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetLanguageListRequest_DEFINED)
#include <Modloader/app/structs/GetLanguageListRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetLanguageListRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetLanguageListRequest_DEFINED
struct GetLanguageListRequest__Class;
struct GetLanguageListRequest {
    struct GetLanguageListRequest__Class* klass;
    MonitorData* monitor;
    struct GetLanguageListRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetLanguageListRequest_FWDDECL)
#define IL2CPP_STRUCT_GetLanguageListRequest_FWDDECL
#include <Modloader/app/structs/GetLanguageListRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetLanguageListRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetLanguageListRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetLanguageListRequest_FWDDECL)
#include <Modloader/app/structs/GetLanguageListRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetLanguageListRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
