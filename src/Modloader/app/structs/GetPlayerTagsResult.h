#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerTagsResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerTagsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerTagsResult_DEFINED)
#include <Modloader/app/structs/GetPlayerTagsResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetPlayerTagsResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerTagsResult_DEFINED
struct GetPlayerTagsResult__Class;
struct GetPlayerTagsResult {
    struct GetPlayerTagsResult__Class* klass;
    MonitorData* monitor;
    struct GetPlayerTagsResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerTagsResult_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerTagsResult_FWDDECL
#include <Modloader/app/structs/GetPlayerTagsResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerTagsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerTagsResult_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerTagsResult_FWDDECL)
#include <Modloader/app/structs/GetPlayerTagsResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerTagsResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
