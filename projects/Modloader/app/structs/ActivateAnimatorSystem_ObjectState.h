#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ActivateAnimatorSystem_ObjectState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ActivateAnimatorSystem_ObjectState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateAnimatorSystem_ObjectState_DEFINED)
#define IL2CPP_STRUCT_ActivateAnimatorSystem_ObjectState_DEFINED
struct GameObject;
struct ActivateAnimatorSystem_ObjectState {
    struct GameObject* GameObject;
    int32_t EnabledRequestsCount;
    int32_t DisabledRequestsCount;
    bool OriginalObjectState;
};
#endif
#if !defined(IL2CPP_STRUCT_ActivateAnimatorSystem_ObjectState_FWDDECL)
#define IL2CPP_STRUCT_ActivateAnimatorSystem_ObjectState_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_ActivateAnimatorSystem_ObjectState_INITIALIZING
#if !defined(IL2CPP_STRUCT_ActivateAnimatorSystem_ObjectState_DEFINED) && !defined(IL2CPP_STRUCT_ActivateAnimatorSystem_ObjectState_FWDDECL)
#include <Modloader/app/structs/ActivateAnimatorSystem_ObjectState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ActivateAnimatorSystem_ObjectState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
