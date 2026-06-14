#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiateAnimatorB__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiateAnimatorB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateAnimatorB__Fields_DEFINED)
#include <Modloader/app/structs/GhostReplayAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_GhostReplayAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_InstantiateAnimatorB__Fields_DEFINED
struct GameObject;
struct Transform;
struct InstantiateAnimatorB__Fields {
    struct GhostReplayAnimator__Fields _;
    struct GameObject* Prefab;
    struct Transform* Target;
    bool Simulate;
    bool InheritRotationY;
    int32_t m_serverObjID;
    float m_durationOverride;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiateAnimatorB__Fields_FWDDECL)
#define IL2CPP_STRUCT_InstantiateAnimatorB__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_InstantiateAnimatorB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiateAnimatorB__Fields_DEFINED) && !defined(IL2CPP_STRUCT_InstantiateAnimatorB__Fields_FWDDECL)
#include <Modloader/app/structs/InstantiateAnimatorB__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiateAnimatorB__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
