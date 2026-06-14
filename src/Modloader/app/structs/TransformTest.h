#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TransformTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TransformTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformTest_DEFINED)
#include <Modloader/app/structs/TransformTest__Fields.h>
#if defined(IL2CPP_STRUCT_TransformTest__Fields_DEFINED)
#define IL2CPP_STRUCT_TransformTest_DEFINED
struct TransformTest__Class;
struct TransformTest {
    struct TransformTest__Class* klass;
    MonitorData* monitor;
    struct TransformTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TransformTest_FWDDECL)
#define IL2CPP_STRUCT_TransformTest_FWDDECL
#include <Modloader/app/structs/TransformTest__Class.h>
#endif
#undef IL2CPP_STRUCT_TransformTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_TransformTest_DEFINED) && !defined(IL2CPP_STRUCT_TransformTest_FWDDECL)
#include <Modloader/app/structs/TransformTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TransformTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
