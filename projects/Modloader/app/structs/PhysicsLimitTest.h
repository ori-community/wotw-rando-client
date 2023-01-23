#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PhysicsLimitTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PhysicsLimitTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsLimitTest_DEFINED)
#include <Modloader/app/structs/PhysicsLimitTest__Fields.h>
#if defined(IL2CPP_STRUCT_PhysicsLimitTest__Fields_DEFINED)
#define IL2CPP_STRUCT_PhysicsLimitTest_DEFINED
struct PhysicsLimitTest__Class;
struct PhysicsLimitTest {
    struct PhysicsLimitTest__Class* klass;
    MonitorData* monitor;
    struct PhysicsLimitTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PhysicsLimitTest_FWDDECL)
#define IL2CPP_STRUCT_PhysicsLimitTest_FWDDECL
#include <Modloader/app/structs/PhysicsLimitTest__Class.h>
#endif
#undef IL2CPP_STRUCT_PhysicsLimitTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PhysicsLimitTest_DEFINED) && !defined(IL2CPP_STRUCT_PhysicsLimitTest_FWDDECL)
#include <Modloader/app/structs/PhysicsLimitTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PhysicsLimitTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
