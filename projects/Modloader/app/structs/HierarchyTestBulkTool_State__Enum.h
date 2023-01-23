#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HierarchyTestBulkTool_State__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HierarchyTestBulkTool_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestBulkTool_State__Enum_DEFINED)
#define IL2CPP_STRUCT_HierarchyTestBulkTool_State__Enum_DEFINED
enum class HierarchyTestBulkTool_State__Enum : int32_t {
    Idle = 0x00000000,
    Starting = 0x00000001,
    StartLoadScene = 0x00000002,
    SceneLoading = 0x00000003,
    EndLoadScene = 0x00000004,
    StartScan = 0x00000005,
    Scan = 0x00000006,
    EndScan = 0x00000007,
    StartUnloadScene = 0x00000008,
    UnloadingScene = 0x00000009,
    EndUnloadScene = 0x0000000a,
    WriteOutput = 0x0000000b,
    NextScene = 0x0000000c,
    Done = 0x0000000d,
};
#endif
#if !defined(IL2CPP_STRUCT_HierarchyTestBulkTool_State__Enum_FWDDECL)
#define IL2CPP_STRUCT_HierarchyTestBulkTool_State__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_HierarchyTestBulkTool_State__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_HierarchyTestBulkTool_State__Enum_DEFINED) && !defined(IL2CPP_STRUCT_HierarchyTestBulkTool_State__Enum_FWDDECL)
#include <Modloader/app/structs/HierarchyTestBulkTool_State__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HierarchyTestBulkTool_State__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
