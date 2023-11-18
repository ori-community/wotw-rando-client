#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetSegmentResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetSegmentResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetSegmentResult_DEFINED)
#include <Modloader/app/structs/GetSegmentResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetSegmentResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetSegmentResult_DEFINED
struct GetSegmentResult__Class;
struct GetSegmentResult {
    struct GetSegmentResult__Class* klass;
    MonitorData* monitor;
    struct GetSegmentResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetSegmentResult_FWDDECL)
#define IL2CPP_STRUCT_GetSegmentResult_FWDDECL
#include <Modloader/app/structs/GetSegmentResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetSegmentResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetSegmentResult_DEFINED) && !defined(IL2CPP_STRUCT_GetSegmentResult_FWDDECL)
#include <Modloader/app/structs/GetSegmentResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetSegmentResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
