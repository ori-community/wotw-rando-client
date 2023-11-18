#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetTitleNewsRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetTitleNewsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTitleNewsRequest_DEFINED)
#include <Modloader/app/structs/GetTitleNewsRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetTitleNewsRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetTitleNewsRequest_DEFINED
struct GetTitleNewsRequest__Class;
struct GetTitleNewsRequest {
    struct GetTitleNewsRequest__Class* klass;
    MonitorData* monitor;
    struct GetTitleNewsRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetTitleNewsRequest_FWDDECL)
#define IL2CPP_STRUCT_GetTitleNewsRequest_FWDDECL
#include <Modloader/app/structs/GetTitleNewsRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetTitleNewsRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTitleNewsRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetTitleNewsRequest_FWDDECL)
#include <Modloader/app/structs/GetTitleNewsRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetTitleNewsRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
