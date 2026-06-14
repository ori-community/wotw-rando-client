#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DummyGizmoTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DummyGizmoTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DummyGizmoTest_DEFINED)
#include <Modloader/app/structs/DummyGizmoTest__Fields.h>
#if defined(IL2CPP_STRUCT_DummyGizmoTest__Fields_DEFINED)
#define IL2CPP_STRUCT_DummyGizmoTest_DEFINED
struct DummyGizmoTest__Class;
struct DummyGizmoTest {
    struct DummyGizmoTest__Class* klass;
    MonitorData* monitor;
    struct DummyGizmoTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DummyGizmoTest_FWDDECL)
#define IL2CPP_STRUCT_DummyGizmoTest_FWDDECL
#include <Modloader/app/structs/DummyGizmoTest__Class.h>
#endif
#undef IL2CPP_STRUCT_DummyGizmoTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_DummyGizmoTest_DEFINED) && !defined(IL2CPP_STRUCT_DummyGizmoTest_FWDDECL)
#include <Modloader/app/structs/DummyGizmoTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DummyGizmoTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
