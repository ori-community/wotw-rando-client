#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugHubItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugHubItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHubItem_DEFINED)
#include <Modloader/app/structs/DebugHubItem__Fields.h>
#if defined(IL2CPP_STRUCT_DebugHubItem__Fields_DEFINED)
#define IL2CPP_STRUCT_DebugHubItem_DEFINED
struct DebugHubItem__Class;
struct DebugHubItem {
    struct DebugHubItem__Class* klass;
    MonitorData* monitor;
    struct DebugHubItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugHubItem_FWDDECL)
#define IL2CPP_STRUCT_DebugHubItem_FWDDECL
#include <Modloader/app/structs/DebugHubItem__Class.h>
#endif
#undef IL2CPP_STRUCT_DebugHubItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHubItem_DEFINED) && !defined(IL2CPP_STRUCT_DebugHubItem_FWDDECL)
#include <Modloader/app/structs/DebugHubItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugHubItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
