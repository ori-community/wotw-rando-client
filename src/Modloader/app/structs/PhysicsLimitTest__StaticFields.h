#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsLimitTest__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsLimitTest__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsLimitTest__StaticFields_DEFINED)
#define IL2CPP_STRUCT_PhysicsLimitTest__StaticFields_DEFINED
struct PhysicsLimitTest;
struct PhysicsLimitTest__StaticFields {
    struct PhysicsLimitTest* Instance;
    bool m_shouldAllowPhysicsLimiter;
    bool ShouldAllowFPSTestPhysicsLimiter;
};
#endif
#if !defined(IL2CPP_STRUCT_PhysicsLimitTest__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_PhysicsLimitTest__StaticFields_FWDDECL
#include <Modloader/app/structs/PhysicsLimitTest.h>
#endif
#undef IL2CPP_STRUCT_PhysicsLimitTest__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsLimitTest__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsLimitTest__StaticFields_FWDDECL)
#include <Modloader/app/structs/PhysicsLimitTest__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsLimitTest__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
