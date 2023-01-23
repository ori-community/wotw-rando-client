#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetTimeResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetTimeResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTimeResult_DEFINED)
#include <Modloader/app/structs/GetTimeResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetTimeResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetTimeResult_DEFINED
struct GetTimeResult__Class;
struct GetTimeResult {
    struct GetTimeResult__Class* klass;
    MonitorData* monitor;
    struct GetTimeResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetTimeResult_FWDDECL)
#define IL2CPP_STRUCT_GetTimeResult_FWDDECL
#include <Modloader/app/structs/GetTimeResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetTimeResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTimeResult_DEFINED) && !defined(IL2CPP_STRUCT_GetTimeResult_FWDDECL)
#include <Modloader/app/structs/GetTimeResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetTimeResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
