#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetPlayerProfileResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetPlayerProfileResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerProfileResult_DEFINED)
#include <Modloader/app/structs/GetPlayerProfileResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetPlayerProfileResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetPlayerProfileResult_DEFINED
struct GetPlayerProfileResult__Class;
struct GetPlayerProfileResult {
    struct GetPlayerProfileResult__Class* klass;
    MonitorData* monitor;
    struct GetPlayerProfileResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetPlayerProfileResult_FWDDECL)
#define IL2CPP_STRUCT_GetPlayerProfileResult_FWDDECL
#include <Modloader/app/structs/GetPlayerProfileResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetPlayerProfileResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetPlayerProfileResult_DEFINED) && !defined(IL2CPP_STRUCT_GetPlayerProfileResult_FWDDECL)
#include <Modloader/app/structs/GetPlayerProfileResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetPlayerProfileResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
