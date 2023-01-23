#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetLanguageListResponse_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetLanguageListResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetLanguageListResponse_DEFINED)
#include <Modloader/app/structs/GetLanguageListResponse__Fields.h>
#if defined(IL2CPP_STRUCT_GetLanguageListResponse__Fields_DEFINED)
#define IL2CPP_STRUCT_GetLanguageListResponse_DEFINED
struct GetLanguageListResponse__Class;
struct GetLanguageListResponse {
    struct GetLanguageListResponse__Class* klass;
    MonitorData* monitor;
    struct GetLanguageListResponse__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetLanguageListResponse_FWDDECL)
#define IL2CPP_STRUCT_GetLanguageListResponse_FWDDECL
#include <Modloader/app/structs/GetLanguageListResponse__Class.h>
#endif
#undef IL2CPP_STRUCT_GetLanguageListResponse_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetLanguageListResponse_DEFINED) && !defined(IL2CPP_STRUCT_GetLanguageListResponse_FWDDECL)
#include <Modloader/app/structs/GetLanguageListResponse.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetLanguageListResponse.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
