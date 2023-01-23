#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameObjectVirtualAnimator_Context_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameObjectVirtualAnimator_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectVirtualAnimator_Context_DEFINED)
#define IL2CPP_STRUCT_GameObjectVirtualAnimator_Context_DEFINED
struct GameObject;
struct GameObjectVirtualAnimator_Context {
    struct GameObject* GameObject;
};
#endif
#if !defined(IL2CPP_STRUCT_GameObjectVirtualAnimator_Context_FWDDECL)
#define IL2CPP_STRUCT_GameObjectVirtualAnimator_Context_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#endif
#undef IL2CPP_STRUCT_GameObjectVirtualAnimator_Context_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectVirtualAnimator_Context_DEFINED) && !defined(IL2CPP_STRUCT_GameObjectVirtualAnimator_Context_FWDDECL)
#include <Modloader/app/structs/GameObjectVirtualAnimator_Context.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameObjectVirtualAnimator_Context.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
