#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PushPullBlockTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PushPullBlockTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushPullBlockTest_DEFINED)
#include <Modloader/app/structs/PushPullBlockTest__Fields.h>
#if defined(IL2CPP_STRUCT_PushPullBlockTest__Fields_DEFINED)
#define IL2CPP_STRUCT_PushPullBlockTest_DEFINED
struct PushPullBlockTest__Class;
struct PushPullBlockTest {
    struct PushPullBlockTest__Class* klass;
    MonitorData* monitor;
    struct PushPullBlockTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PushPullBlockTest_FWDDECL)
#define IL2CPP_STRUCT_PushPullBlockTest_FWDDECL
#include <Modloader/app/structs/PushPullBlockTest__Class.h>
#endif
#undef IL2CPP_STRUCT_PushPullBlockTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_PushPullBlockTest_DEFINED) && !defined(IL2CPP_STRUCT_PushPullBlockTest_FWDDECL)
#include <Modloader/app/structs/PushPullBlockTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PushPullBlockTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
