#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ListMultiplayerServersRequest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ListMultiplayerServersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListMultiplayerServersRequest_DEFINED)
#include <Modloader/app/structs/ListMultiplayerServersRequest__Fields.h>
#if defined(IL2CPP_STRUCT_ListMultiplayerServersRequest__Fields_DEFINED)
#define IL2CPP_STRUCT_ListMultiplayerServersRequest_DEFINED
struct ListMultiplayerServersRequest__Class;
struct ListMultiplayerServersRequest {
    struct ListMultiplayerServersRequest__Class* klass;
    MonitorData* monitor;
    struct ListMultiplayerServersRequest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ListMultiplayerServersRequest_FWDDECL)
#define IL2CPP_STRUCT_ListMultiplayerServersRequest_FWDDECL
#include <Modloader/app/structs/ListMultiplayerServersRequest__Class.h>
#endif
#undef IL2CPP_STRUCT_ListMultiplayerServersRequest_INITIALIZING
#if !defined(IL2CPP_STRUCT_ListMultiplayerServersRequest_DEFINED) && !defined(IL2CPP_STRUCT_ListMultiplayerServersRequest_FWDDECL)
#include <Modloader/app/structs/ListMultiplayerServersRequest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ListMultiplayerServersRequest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
