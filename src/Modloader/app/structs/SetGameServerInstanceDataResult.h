#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetGameServerInstanceDataResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetGameServerInstanceDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceDataResult_DEFINED)
#include <Modloader/app/structs/SetGameServerInstanceDataResult__Fields.h>
#if defined(IL2CPP_STRUCT_SetGameServerInstanceDataResult__Fields_DEFINED)
#define IL2CPP_STRUCT_SetGameServerInstanceDataResult_DEFINED
struct SetGameServerInstanceDataResult__Class;
struct SetGameServerInstanceDataResult {
    struct SetGameServerInstanceDataResult__Class* klass;
    MonitorData* monitor;
    struct SetGameServerInstanceDataResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceDataResult_FWDDECL)
#define IL2CPP_STRUCT_SetGameServerInstanceDataResult_FWDDECL
#include <Modloader/app/structs/SetGameServerInstanceDataResult__Class.h>
#endif
#undef IL2CPP_STRUCT_SetGameServerInstanceDataResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetGameServerInstanceDataResult_DEFINED) && !defined(IL2CPP_STRUCT_SetGameServerInstanceDataResult_FWDDECL)
#include <Modloader/app/structs/SetGameServerInstanceDataResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetGameServerInstanceDataResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
