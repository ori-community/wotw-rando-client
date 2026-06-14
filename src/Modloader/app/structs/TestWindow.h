#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestWindow_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestWindow_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestWindow_DEFINED)
#include <Modloader/app/structs/TestWindow__Fields.h>
#if defined(IL2CPP_STRUCT_TestWindow__Fields_DEFINED)
#define IL2CPP_STRUCT_TestWindow_DEFINED
struct TestWindow__Class;
struct TestWindow {
    struct TestWindow__Class* klass;
    MonitorData* monitor;
    struct TestWindow__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TestWindow_FWDDECL)
#define IL2CPP_STRUCT_TestWindow_FWDDECL
#include <Modloader/app/structs/TestWindow__Class.h>
#endif
#undef IL2CPP_STRUCT_TestWindow_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestWindow_DEFINED) && !defined(IL2CPP_STRUCT_TestWindow_FWDDECL)
#include <Modloader/app/structs/TestWindow.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestWindow.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
