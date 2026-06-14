#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetTitleDataResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetTitleDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetTitleDataResult_DEFINED)
#include <Modloader/app/structs/SetTitleDataResult__Fields.h>
#if defined(IL2CPP_STRUCT_SetTitleDataResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SetTitleDataResult_DEFINED
struct SetTitleDataResult__Class;
struct SetTitleDataResult {
    struct SetTitleDataResult__Class* klass;
    MonitorData* monitor;
    struct SetTitleDataResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetTitleDataResult_FWDDECL)
#define IL2CPP_STRUCT_SetTitleDataResult_FWDDECL
#include <Modloader/app/structs/SetTitleDataResult__Class.h>
#endif
#undef IL2CPP_STRUCT_SetTitleDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetTitleDataResult_DEFINED) && !defined(IL2CPP_STRUCT_SetTitleDataResult_FWDDECL)
#include <Modloader/app/structs/SetTitleDataResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetTitleDataResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
