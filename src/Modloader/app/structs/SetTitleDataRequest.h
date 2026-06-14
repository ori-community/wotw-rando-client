#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetTitleDataRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetTitleDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetTitleDataRequest_DEFINED)
#include <Modloader/app/structs/SetTitleDataRequest__Fields.h>
#if defined(IL2CPP_STRUCT_SetTitleDataRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_SetTitleDataRequest_DEFINED
struct SetTitleDataRequest__Class;
struct SetTitleDataRequest {
    struct SetTitleDataRequest__Class* klass;
    MonitorData* monitor;
    struct SetTitleDataRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetTitleDataRequest_FWDDECL)
#define IL2CPP_STRUCT_SetTitleDataRequest_FWDDECL
#include <Modloader/app/structs/SetTitleDataRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_SetTitleDataRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetTitleDataRequest_DEFINED) && !defined(IL2CPP_STRUCT_SetTitleDataRequest_FWDDECL)
#include <Modloader/app/structs/SetTitleDataRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetTitleDataRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
