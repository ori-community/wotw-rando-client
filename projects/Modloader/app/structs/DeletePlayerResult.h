#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DeletePlayerResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DeletePlayerResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeletePlayerResult_DEFINED)
#include <Modloader/app/structs/DeletePlayerResult__Fields.h>
#if defined(IL2CPP_STRUCT_DeletePlayerResult__Fields_DEFINED)
#define IL2CPP_STRUCT_DeletePlayerResult_DEFINED
struct DeletePlayerResult__Class;
struct DeletePlayerResult {
    struct DeletePlayerResult__Class* klass;
    MonitorData* monitor;
    struct DeletePlayerResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DeletePlayerResult_FWDDECL)
#define IL2CPP_STRUCT_DeletePlayerResult_FWDDECL
#include <Modloader/app/structs/DeletePlayerResult__Class.h>
#endif
#undef IL2CPP_STRUCT_DeletePlayerResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_DeletePlayerResult_DEFINED) && !defined(IL2CPP_STRUCT_DeletePlayerResult_FWDDECL)
#include <Modloader/app/structs/DeletePlayerResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DeletePlayerResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
