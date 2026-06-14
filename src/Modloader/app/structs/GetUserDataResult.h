#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetUserDataResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetUserDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserDataResult_DEFINED)
#include <Modloader/app/structs/GetUserDataResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetUserDataResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetUserDataResult_DEFINED
struct GetUserDataResult__Class;
struct GetUserDataResult {
    struct GetUserDataResult__Class* klass;
    MonitorData* monitor;
    struct GetUserDataResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetUserDataResult_FWDDECL)
#define IL2CPP_STRUCT_GetUserDataResult_FWDDECL
#include <Modloader/app/structs/GetUserDataResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetUserDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetUserDataResult_DEFINED) && !defined(IL2CPP_STRUCT_GetUserDataResult_FWDDECL)
#include <Modloader/app/structs/GetUserDataResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetUserDataResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
