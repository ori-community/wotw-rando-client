#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameObjectReferenceComponent_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameObjectReferenceComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectReferenceComponent_DEFINED)
#include <Modloader/app/structs/GameObjectReferenceComponent__Fields.h>
#if defined(IL2CPP_STRUCT_GameObjectReferenceComponent__Fields_DEFINED)
#define IL2CPP_STRUCT_GameObjectReferenceComponent_DEFINED
struct GameObjectReferenceComponent__Class;
struct GameObjectReferenceComponent {
    struct GameObjectReferenceComponent__Class* klass;
    MonitorData* monitor;
    struct GameObjectReferenceComponent__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameObjectReferenceComponent_FWDDECL)
#define IL2CPP_STRUCT_GameObjectReferenceComponent_FWDDECL
#include <Modloader/app/structs/GameObjectReferenceComponent__Class.h>
#endif
#undef IL2CPP_STRUCT_GameObjectReferenceComponent_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectReferenceComponent_DEFINED) && !defined(IL2CPP_STRUCT_GameObjectReferenceComponent_FWDDECL)
#include <Modloader/app/structs/GameObjectReferenceComponent.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameObjectReferenceComponent.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
