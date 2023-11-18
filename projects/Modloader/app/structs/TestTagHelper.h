#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TestTagHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TestTagHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestTagHelper_DEFINED)
#define IL2CPP_STRUCT_TestTagHelper_DEFINED
struct TestTagHelper__Class;
struct TestTagHelper {
    struct TestTagHelper__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_TestTagHelper_FWDDECL)
#define IL2CPP_STRUCT_TestTagHelper_FWDDECL
#include <Modloader/app/structs/TestTagHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_TestTagHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_TestTagHelper_DEFINED) && !defined(IL2CPP_STRUCT_TestTagHelper_FWDDECL)
#include <Modloader/app/structs/TestTagHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TestTagHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
