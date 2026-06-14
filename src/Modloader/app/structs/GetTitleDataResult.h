#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetTitleDataResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetTitleDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTitleDataResult_DEFINED)
#include <Modloader/app/structs/GetTitleDataResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetTitleDataResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetTitleDataResult_DEFINED
struct GetTitleDataResult__Class;
struct GetTitleDataResult {
    struct GetTitleDataResult__Class* klass;
    MonitorData* monitor;
    struct GetTitleDataResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetTitleDataResult_FWDDECL)
#define IL2CPP_STRUCT_GetTitleDataResult_FWDDECL
#include <Modloader/app/structs/GetTitleDataResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetTitleDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetTitleDataResult_DEFINED) && !defined(IL2CPP_STRUCT_GetTitleDataResult_FWDDECL)
#include <Modloader/app/structs/GetTitleDataResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetTitleDataResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
