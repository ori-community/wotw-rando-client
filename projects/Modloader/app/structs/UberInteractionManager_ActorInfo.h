#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberInteractionManager_ActorInfo_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberInteractionManager_ActorInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManager_ActorInfo_DEFINED)
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Vector3_DEFINED)
#define IL2CPP_STRUCT_UberInteractionManager_ActorInfo_DEFINED
struct UberInteractionActor;
struct UberInteractionManager_ActorInfo {
    struct UberInteractionActor* Actor;
    struct Vector3 Velocity;
    struct Vector3 PrevPos;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberInteractionManager_ActorInfo_FWDDECL)
#define IL2CPP_STRUCT_UberInteractionManager_ActorInfo_FWDDECL
#include <Modloader/app/structs/UberInteractionActor.h>
#endif
#undef IL2CPP_STRUCT_UberInteractionManager_ActorInfo_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberInteractionManager_ActorInfo_DEFINED) && !defined(IL2CPP_STRUCT_UberInteractionManager_ActorInfo_FWDDECL)
#include <Modloader/app/structs/UberInteractionManager_ActorInfo.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberInteractionManager_ActorInfo.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
