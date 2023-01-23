#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetAllSegmentsResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetAllSegmentsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAllSegmentsResult_DEFINED)
#include <Modloader/app/structs/GetAllSegmentsResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetAllSegmentsResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetAllSegmentsResult_DEFINED
struct GetAllSegmentsResult__Class;
struct GetAllSegmentsResult {
    struct GetAllSegmentsResult__Class* klass;
    MonitorData* monitor;
    struct GetAllSegmentsResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetAllSegmentsResult_FWDDECL)
#define IL2CPP_STRUCT_GetAllSegmentsResult_FWDDECL
#include <Modloader/app/structs/GetAllSegmentsResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetAllSegmentsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAllSegmentsResult_DEFINED) && !defined(IL2CPP_STRUCT_GetAllSegmentsResult_FWDDECL)
#include <Modloader/app/structs/GetAllSegmentsResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetAllSegmentsResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
