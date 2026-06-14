#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsUtils_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsUtils_DEFINED)
#define IL2CPP_STRUCT_PhysicsUtils_DEFINED
struct PhysicsUtils__Class;
struct PhysicsUtils {
    struct PhysicsUtils__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_PhysicsUtils_FWDDECL)
#define IL2CPP_STRUCT_PhysicsUtils_FWDDECL
#include <Modloader/app/structs/PhysicsUtils__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsUtils_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsUtils_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsUtils_FWDDECL)
#include <Modloader/app/structs/PhysicsUtils.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsUtils.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
