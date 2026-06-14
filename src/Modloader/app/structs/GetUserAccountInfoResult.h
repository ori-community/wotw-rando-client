#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetUserAccountInfoResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetUserAccountInfoResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserAccountInfoResult_DEFINED)
#include <Modloader/app/structs/GetUserAccountInfoResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetUserAccountInfoResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetUserAccountInfoResult_DEFINED
struct GetUserAccountInfoResult__Class;
struct GetUserAccountInfoResult {
    struct GetUserAccountInfoResult__Class* klass;
    MonitorData* monitor;
    struct GetUserAccountInfoResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetUserAccountInfoResult_FWDDECL)
#define IL2CPP_STRUCT_GetUserAccountInfoResult_FWDDECL
#include <Modloader/app/structs/GetUserAccountInfoResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetUserAccountInfoResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserAccountInfoResult_DEFINED) && !defined(IL2CPP_STRUCT_GetUserAccountInfoResult_FWDDECL)
#include <Modloader/app/structs/GetUserAccountInfoResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetUserAccountInfoResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
