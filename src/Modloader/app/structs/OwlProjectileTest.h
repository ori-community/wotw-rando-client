#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OwlProjectileTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OwlProjectileTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_OwlProjectileTest_DEFINED)
#include <Modloader/app/structs/OwlProjectileTest__Fields.h>
#if defined(IL2CPP_STRUCT_OwlProjectileTest__Fields_DEFINED)
#define IL2CPP_STRUCT_OwlProjectileTest_DEFINED
struct OwlProjectileTest__Class;
struct OwlProjectileTest {
    struct OwlProjectileTest__Class* klass;
    MonitorData* monitor;
    struct OwlProjectileTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OwlProjectileTest_FWDDECL)
#define IL2CPP_STRUCT_OwlProjectileTest_FWDDECL
#include <Modloader/app/structs/OwlProjectileTest__Class.h>
#endif
#undef IL2CPP_STRUCT_OwlProjectileTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_OwlProjectileTest_DEFINED) && !defined(IL2CPP_STRUCT_OwlProjectileTest_FWDDECL)
#include <Modloader/app/structs/OwlProjectileTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OwlProjectileTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
