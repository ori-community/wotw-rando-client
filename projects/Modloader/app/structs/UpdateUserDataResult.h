#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateUserDataResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateUserDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateUserDataResult_DEFINED)
#include <Modloader/app/structs/UpdateUserDataResult__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateUserDataResult__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateUserDataResult_DEFINED
struct UpdateUserDataResult__Class;
struct UpdateUserDataResult {
    struct UpdateUserDataResult__Class* klass;
    MonitorData* monitor;
    struct UpdateUserDataResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateUserDataResult_FWDDECL)
#define IL2CPP_STRUCT_UpdateUserDataResult_FWDDECL
#include <Modloader/app/structs/UpdateUserDataResult__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateUserDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateUserDataResult_DEFINED) && !defined(IL2CPP_STRUCT_UpdateUserDataResult_FWDDECL)
#include <Modloader/app/structs/UpdateUserDataResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateUserDataResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
