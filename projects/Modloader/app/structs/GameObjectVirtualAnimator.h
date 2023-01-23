#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameObjectVirtualAnimator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameObjectVirtualAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectVirtualAnimator_DEFINED)
#include <Modloader/app/structs/GameObjectVirtualAnimator__Fields.h>
#if defined(IL2CPP_STRUCT_GameObjectVirtualAnimator__Fields_DEFINED)
#define IL2CPP_STRUCT_GameObjectVirtualAnimator_DEFINED
struct GameObjectVirtualAnimator__Class;
struct GameObjectVirtualAnimator {
    struct GameObjectVirtualAnimator__Class* klass;
    MonitorData* monitor;
    struct GameObjectVirtualAnimator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameObjectVirtualAnimator_FWDDECL)
#define IL2CPP_STRUCT_GameObjectVirtualAnimator_FWDDECL
#include <Modloader/app/structs/GameObjectVirtualAnimator__Class.h>
#endif
#undef IL2CPP_STRUCT_GameObjectVirtualAnimator_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectVirtualAnimator_DEFINED) && !defined(IL2CPP_STRUCT_GameObjectVirtualAnimator_FWDDECL)
#include <Modloader/app/structs/GameObjectVirtualAnimator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameObjectVirtualAnimator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
