#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GetReplaysCallback_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GetReplaysCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetReplaysCallback_DEFINED)
#include <Modloader/app/structs/GetReplaysCallback__Fields.h>
#if defined(IL2CPP_STRUCT_GetReplaysCallback__Fields_DEFINED)
#define IL2CPP_STRUCT_GetReplaysCallback_DEFINED
struct GetReplaysCallback__Class;
struct GetReplaysCallback {
    struct GetReplaysCallback__Class* klass;
    MonitorData* monitor;
    struct GetReplaysCallback__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GetReplaysCallback_FWDDECL)
#define IL2CPP_STRUCT_GetReplaysCallback_FWDDECL
#include <Modloader/app/structs/GetReplaysCallback__Class.h>
#endif
#undef IL2CPP_STRUCT_GetReplaysCallback_INITIALIZING
#if !defined(IL2CPP_STRUCT_GetReplaysCallback_DEFINED) && !defined(IL2CPP_STRUCT_GetReplaysCallback_FWDDECL)
#include <Modloader/app/structs/GetReplaysCallback.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GetReplaysCallback.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
