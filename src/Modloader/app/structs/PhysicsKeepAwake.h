#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsKeepAwake_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsKeepAwake_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsKeepAwake_DEFINED)
#include <Modloader/app/structs/PhysicsKeepAwake__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsKeepAwake__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsKeepAwake_DEFINED
struct PhysicsKeepAwake__Class;
struct PhysicsKeepAwake {
    struct PhysicsKeepAwake__Class* klass;
    MonitorData* monitor;
    struct PhysicsKeepAwake__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsKeepAwake_FWDDECL)
#define IL2CPP_STRUCT_PhysicsKeepAwake_FWDDECL
#include <Modloader/app/structs/PhysicsKeepAwake__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsKeepAwake_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsKeepAwake_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsKeepAwake_FWDDECL)
#include <Modloader/app/structs/PhysicsKeepAwake.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsKeepAwake.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
