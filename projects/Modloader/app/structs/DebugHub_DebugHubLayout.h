#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugHub_DebugHubLayout_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugHub_DebugHubLayout_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHub_DebugHubLayout_DEFINED)
#define IL2CPP_STRUCT_DebugHub_DebugHubLayout_DEFINED
struct DebugHubItem_DebugHubItemLayout__Array;
struct DebugHub_DebugHubLayout {
    struct DebugHubItem_DebugHubItemLayout__Array* ItemsLayout;
};
#endif
#if !defined(IL2CPP_STRUCT_DebugHub_DebugHubLayout_FWDDECL)
#define IL2CPP_STRUCT_DebugHub_DebugHubLayout_FWDDECL
#include <Modloader/app/structs/DebugHubItem_DebugHubItemLayout__Array.h>
#endif
#undef IL2CPP_STRUCT_DebugHub_DebugHubLayout_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHub_DebugHubLayout_DEFINED) && !defined(IL2CPP_STRUCT_DebugHub_DebugHubLayout_FWDDECL)
#include <Modloader/app/structs/DebugHub_DebugHubLayout.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugHub_DebugHubLayout.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
