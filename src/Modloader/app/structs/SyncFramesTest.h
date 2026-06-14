#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SyncFramesTest_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SyncFramesTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SyncFramesTest_DEFINED)
#include <Modloader/app/structs/SyncFramesTest__Fields.h>
#if defined(IL2CPP_STRUCT_SyncFramesTest__Fields_DEFINED)
#define IL2CPP_STRUCT_SyncFramesTest_DEFINED
struct SyncFramesTest__Class;
struct SyncFramesTest {
    struct SyncFramesTest__Class* klass;
    MonitorData* monitor;
    struct SyncFramesTest__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SyncFramesTest_FWDDECL)
#define IL2CPP_STRUCT_SyncFramesTest_FWDDECL
#include <Modloader/app/structs/SyncFramesTest__Class.h>
#endif
#undef IL2CPP_STRUCT_SyncFramesTest_INITIALIZING
#if !defined(IL2CPP_STRUCT_SyncFramesTest_DEFINED) && !defined(IL2CPP_STRUCT_SyncFramesTest_FWDDECL)
#include <Modloader/app/structs/SyncFramesTest.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SyncFramesTest.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
