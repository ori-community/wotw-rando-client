#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AutomationRunType__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AutomationRunType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutomationRunType__Enum_DEFINED)
#define IL2CPP_STRUCT_AutomationRunType__Enum_DEFINED
enum class AutomationRunType__Enum : int32_t {
    Performance = 0x00000000,
    Stress = 0x00000001,
    Exception = 0x00000002,
    PoolPerformance = 0x00000003,
    SceneLoad = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_AutomationRunType__Enum_FWDDECL)
#define IL2CPP_STRUCT_AutomationRunType__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_AutomationRunType__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_AutomationRunType__Enum_DEFINED) && !defined(IL2CPP_STRUCT_AutomationRunType__Enum_FWDDECL)
#include <Modloader/app/structs/AutomationRunType__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AutomationRunType__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
