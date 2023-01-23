#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InternalTaskOptions__Enum_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InternalTaskOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalTaskOptions__Enum_DEFINED)
#define IL2CPP_STRUCT_InternalTaskOptions__Enum_DEFINED
enum class InternalTaskOptions__Enum : int32_t {
    None = 0x00000000,
    InternalOptionsMask = 0x0000ff00,
    ChildReplica = 0x00000100,
    ContinuationTask = 0x00000200,
    PromiseTask = 0x00000400,
    SelfReplicating = 0x00000800,
    LazyCancellation = 0x00001000,
    QueuedByRuntime = 0x00002000,
    DoNotDispose = 0x00004000,
};
#endif
#if !defined(IL2CPP_STRUCT_InternalTaskOptions__Enum_FWDDECL)
#define IL2CPP_STRUCT_InternalTaskOptions__Enum_FWDDECL
#endif
#undef IL2CPP_STRUCT_InternalTaskOptions__Enum_INITIALIZING
#if !defined(IL2CPP_STRUCT_InternalTaskOptions__Enum_DEFINED) && !defined(IL2CPP_STRUCT_InternalTaskOptions__Enum_FWDDECL)
#include <Modloader/app/structs/InternalTaskOptions__Enum.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InternalTaskOptions__Enum.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
