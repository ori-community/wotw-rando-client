#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetAccountInfoResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetAccountInfoResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAccountInfoResult_DEFINED)
#include <Modloader/app/structs/GetAccountInfoResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetAccountInfoResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetAccountInfoResult_DEFINED
struct GetAccountInfoResult__Class;
struct GetAccountInfoResult {
    struct GetAccountInfoResult__Class* klass;
    MonitorData* monitor;
    struct GetAccountInfoResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetAccountInfoResult_FWDDECL)
#define IL2CPP_STRUCT_GetAccountInfoResult_FWDDECL
#include <Modloader/app/structs/GetAccountInfoResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetAccountInfoResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetAccountInfoResult_DEFINED) && !defined(IL2CPP_STRUCT_GetAccountInfoResult_FWDDECL)
#include <Modloader/app/structs/GetAccountInfoResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetAccountInfoResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
