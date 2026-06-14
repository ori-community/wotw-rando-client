#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneLoadingQueuePriorityMode__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneLoadingQueuePriorityMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingQueuePriorityMode__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneLoadingQueuePriorityMode__Enum_DEFINED
enum class SceneLoadingQueuePriorityMode__Enum : int32_t {
    DistanceToRoot = 0x00000000,
    DistanceToBounds = 0x00000001,
    Direction = 0x00000002,
    Combined = 0x00000003,
    Utility = 0x00000004,
};
#endif
#if !defined(IL2CPP_STRUCT_SceneLoadingQueuePriorityMode__Enum_FWDDECL)
#define IL2CPP_STRUCT_SceneLoadingQueuePriorityMode__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_SceneLoadingQueuePriorityMode__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneLoadingQueuePriorityMode__Enum_DEFINED) && !defined(IL2CPP_STRUCT_SceneLoadingQueuePriorityMode__Enum_FWDDECL)
#include <Modloader/app/structs/SceneLoadingQueuePriorityMode__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneLoadingQueuePriorityMode__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
