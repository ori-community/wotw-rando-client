#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BehaviourTreeVirtualAnimator__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BehaviourTreeVirtualAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourTreeVirtualAnimator__Fields_DEFINED)
#include <Modloader/app/structs/Nullable_1_Single_.h>
#if defined(IL2CPP_STRUCT_Nullable_1_Single__DEFINED)
#define IL2CPP_STRUCT_BehaviourTreeVirtualAnimator__Fields_DEFINED
struct BehaviourTree;
struct PlaybackStatus;
struct __declspec(align(8)) BehaviourTreeVirtualAnimator__Fields {
    struct Nullable_1_Single_ _CustomStart_k__BackingField;
    struct Nullable_1_Single_ _CustomEnd_k__BackingField;
    struct BehaviourTree* _BehaviourTree_k__BackingField;
    struct PlaybackStatus* _PlaybackStatus_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BehaviourTreeVirtualAnimator__Fields_FWDDECL)
#define IL2CPP_STRUCT_BehaviourTreeVirtualAnimator__Fields_FWDDECL
#include <Modloader/app/structs/BehaviourTree.h>
#include <Modloader/app/structs/PlaybackStatus.h>
#endif
#undef IL2CPP_STRUCT_BehaviourTreeVirtualAnimator__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BehaviourTreeVirtualAnimator__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BehaviourTreeVirtualAnimator__Fields_FWDDECL)
#include <Modloader/app/structs/BehaviourTreeVirtualAnimator__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BehaviourTreeVirtualAnimator__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
