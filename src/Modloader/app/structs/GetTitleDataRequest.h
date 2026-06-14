#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetTitleDataRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetTitleDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTitleDataRequest_DEFINED)
#include <Modloader/app/structs/GetTitleDataRequest__Fields.h>
#if defined(IL2CPP_STRUCT_GetTitleDataRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_GetTitleDataRequest_DEFINED
struct GetTitleDataRequest__Class;
struct GetTitleDataRequest {
    struct GetTitleDataRequest__Class* klass;
    MonitorData* monitor;
    struct GetTitleDataRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetTitleDataRequest_FWDDECL)
#define IL2CPP_STRUCT_GetTitleDataRequest_FWDDECL
#include <Modloader/app/structs/GetTitleDataRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_GetTitleDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTitleDataRequest_DEFINED) && !defined(IL2CPP_STRUCT_GetTitleDataRequest_FWDDECL)
#include <Modloader/app/structs/GetTitleDataRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetTitleDataRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
