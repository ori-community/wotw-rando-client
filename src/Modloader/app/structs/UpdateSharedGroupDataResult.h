#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UpdateSharedGroupDataResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UpdateSharedGroupDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateSharedGroupDataResult_DEFINED)
#include <Modloader/app/structs/UpdateSharedGroupDataResult__Fields.h>
#if defined(IL2CPP_STRUCT_UpdateSharedGroupDataResult__Fields_DEFINED)
#define IL2CPP_STRUCT_UpdateSharedGroupDataResult_DEFINED
struct UpdateSharedGroupDataResult__Class;
struct UpdateSharedGroupDataResult {
    struct UpdateSharedGroupDataResult__Class* klass;
    MonitorData* monitor;
    struct UpdateSharedGroupDataResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UpdateSharedGroupDataResult_FWDDECL)
#define IL2CPP_STRUCT_UpdateSharedGroupDataResult_FWDDECL
#include <Modloader/app/structs/UpdateSharedGroupDataResult__Class.h>
#endif
#undef IL2CPP_STRUCT_UpdateSharedGroupDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_UpdateSharedGroupDataResult_DEFINED) && !defined(IL2CPP_STRUCT_UpdateSharedGroupDataResult_FWDDECL)
#include <Modloader/app/structs/UpdateSharedGroupDataResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UpdateSharedGroupDataResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
