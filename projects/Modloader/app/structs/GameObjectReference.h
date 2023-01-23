#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameObjectReference_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameObjectReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectReference_DEFINED)
#include <Modloader/app/structs/GameObjectReference__Fields.h>
#if defined(IL2CPP_STRUCT_GameObjectReference__Fields_DEFINED)
#define IL2CPP_STRUCT_GameObjectReference_DEFINED
struct GameObjectReference__Class;
struct GameObjectReference {
    struct GameObjectReference__Class* klass;
    MonitorData* monitor;
    struct GameObjectReference__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameObjectReference_FWDDECL)
#define IL2CPP_STRUCT_GameObjectReference_FWDDECL
#include <Modloader/app/structs/GameObjectReference__Class.h>
#endif
#undef IL2CPP_STRUCT_GameObjectReference_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameObjectReference_DEFINED) && !defined(IL2CPP_STRUCT_GameObjectReference_FWDDECL)
#include <Modloader/app/structs/GameObjectReference.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameObjectReference.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
