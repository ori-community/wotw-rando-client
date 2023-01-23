#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IsOnCollisionState_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IsOnCollisionState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsOnCollisionState_DEFINED)
#include <Modloader/app/structs/IsOnCollisionState__Fields.h>
#if defined(IL2CPP_STRUCT_IsOnCollisionState__Fields_DEFINED)
#define IL2CPP_STRUCT_IsOnCollisionState_DEFINED
struct IsOnCollisionState__Class;
struct IsOnCollisionState {
    struct IsOnCollisionState__Class* klass;
    MonitorData* monitor;
    struct IsOnCollisionState__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IsOnCollisionState_FWDDECL)
#define IL2CPP_STRUCT_IsOnCollisionState_FWDDECL
#include <Modloader/app/structs/IsOnCollisionState__Class.h>
#endif
#undef IL2CPP_STRUCT_IsOnCollisionState_INITIALIZING
#if !defined(IL2CPP_STRUCT_IsOnCollisionState_DEFINED) && !defined(IL2CPP_STRUCT_IsOnCollisionState_FWDDECL)
#include <Modloader/app/structs/IsOnCollisionState.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IsOnCollisionState.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
