#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPublisherDataResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPublisherDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPublisherDataResult_DEFINED)
#include <Modloader/app/structs/GetPublisherDataResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetPublisherDataResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPublisherDataResult_DEFINED
struct GetPublisherDataResult__Class;
struct GetPublisherDataResult {
    struct GetPublisherDataResult__Class* klass;
    MonitorData* monitor;
    struct GetPublisherDataResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPublisherDataResult_FWDDECL)
#define IL2CPP_STRUCT_GetPublisherDataResult_FWDDECL
#include <Modloader/app/structs/GetPublisherDataResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPublisherDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPublisherDataResult_DEFINED) && !defined(IL2CPP_STRUCT_GetPublisherDataResult_FWDDECL)
#include <Modloader/app/structs/GetPublisherDataResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPublisherDataResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
