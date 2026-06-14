#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetTitleNewsResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetTitleNewsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTitleNewsResult_DEFINED)
#include <Modloader/app/structs/GetTitleNewsResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetTitleNewsResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetTitleNewsResult_DEFINED
struct GetTitleNewsResult__Class;
struct GetTitleNewsResult {
    struct GetTitleNewsResult__Class* klass;
    MonitorData* monitor;
    struct GetTitleNewsResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetTitleNewsResult_FWDDECL)
#define IL2CPP_STRUCT_GetTitleNewsResult_FWDDECL
#include <Modloader/app/structs/GetTitleNewsResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetTitleNewsResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTitleNewsResult_DEFINED) && !defined(IL2CPP_STRUCT_GetTitleNewsResult_FWDDECL)
#include <Modloader/app/structs/GetTitleNewsResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetTitleNewsResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
