#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderTester_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderTester_DEFINED)
#include <Modloader/app/structs/RecorderTester__Fields.h>
#if defined(IL2CPP_STRUCT_RecorderTester__Fields_DEFINED)
#define IL2CPP_STRUCT_RecorderTester_DEFINED
struct RecorderTester__Class;
struct RecorderTester {
    struct RecorderTester__Class* klass;
    MonitorData* monitor;
    struct RecorderTester__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderTester_FWDDECL)
#define IL2CPP_STRUCT_RecorderTester_FWDDECL
#include <Modloader/app/structs/RecorderTester__Class.h>
#endif
#undef IL2CPP_STRUCT_RecorderTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderTester_DEFINED) && !defined(IL2CPP_STRUCT_RecorderTester_FWDDECL)
#include <Modloader/app/structs/RecorderTester.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderTester.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
