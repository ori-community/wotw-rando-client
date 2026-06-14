#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsHelper_DEFINED)
#define IL2CPP_STRUCT_PhysicsHelper_DEFINED
struct PhysicsHelper__Class;
struct PhysicsHelper {
    struct PhysicsHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PhysicsHelper_FWDDECL)
#define IL2CPP_STRUCT_PhysicsHelper_FWDDECL
#include <Modloader/app/structs/PhysicsHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsHelper_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsHelper_FWDDECL)
#include <Modloader/app/structs/PhysicsHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
