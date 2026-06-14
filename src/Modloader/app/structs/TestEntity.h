#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestEntity_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestEntity_DEFINED)
#include <Modloader/app/structs/TestEntity__Fields.h>
#if defined(IL2CPP_STRUCT_TestEntity__Fields_DEFINED)
#define IL2CPP_STRUCT_TestEntity_DEFINED
struct TestEntity__Class;
struct TestEntity {
    struct TestEntity__Class* klass;
    MonitorData* monitor;
    struct TestEntity__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestEntity_FWDDECL)
#define IL2CPP_STRUCT_TestEntity_FWDDECL
#include <Modloader/app/structs/TestEntity__Class.h>
#endif
#undef IL2CPP_STRUCT_TestEntity_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestEntity_DEFINED) && !defined(IL2CPP_STRUCT_TestEntity_FWDDECL)
#include <Modloader/app/structs/TestEntity.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestEntity.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
