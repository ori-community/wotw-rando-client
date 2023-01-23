#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerSegmentsResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerSegmentsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerSegmentsResult_DEFINED)
#include <Modloader/app/structs/GetPlayerSegmentsResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetPlayerSegmentsResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerSegmentsResult_DEFINED
struct GetPlayerSegmentsResult__Class;
struct GetPlayerSegmentsResult {
    struct GetPlayerSegmentsResult__Class* klass;
    MonitorData* monitor;
    struct GetPlayerSegmentsResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerSegmentsResult_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerSegmentsResult_FWDDECL
#include <Modloader/app/structs/GetPlayerSegmentsResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerSegmentsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerSegmentsResult_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerSegmentsResult_FWDDECL)
#include <Modloader/app/structs/GetPlayerSegmentsResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerSegmentsResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
