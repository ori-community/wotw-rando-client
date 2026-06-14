#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetSharedGroupDataResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetSharedGroupDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetSharedGroupDataResult_DEFINED)
#include <Modloader/app/structs/GetSharedGroupDataResult__Fields.h>
#if defined(IL2CPP_STRUCT_GetSharedGroupDataResult__Fields_DEFINED)
#define IL2CPP_STRUCT_GetSharedGroupDataResult_DEFINED
struct GetSharedGroupDataResult__Class;
struct GetSharedGroupDataResult {
    struct GetSharedGroupDataResult__Class* klass;
    MonitorData* monitor;
    struct GetSharedGroupDataResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetSharedGroupDataResult_FWDDECL)
#define IL2CPP_STRUCT_GetSharedGroupDataResult_FWDDECL
#include <Modloader/app/structs/GetSharedGroupDataResult__Class.h>
#endif
#undef IL2CPP_STRUCT_GetSharedGroupDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetSharedGroupDataResult_DEFINED) && !defined(IL2CPP_STRUCT_GetSharedGroupDataResult_FWDDECL)
#include <Modloader/app/structs/GetSharedGroupDataResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetSharedGroupDataResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
