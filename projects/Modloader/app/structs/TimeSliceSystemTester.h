#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TimeSliceSystemTester_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TimeSliceSystemTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSliceSystemTester_DEFINED)
#include <Modloader/app/structs/TimeSliceSystemTester__Fields.h>
#if defined(IL2CPP_STRUCT_TimeSliceSystemTester__Fields_DEFINED)
#define IL2CPP_STRUCT_TimeSliceSystemTester_DEFINED
struct TimeSliceSystemTester__Class;
struct TimeSliceSystemTester {
    struct TimeSliceSystemTester__Class* klass;
    MonitorData* monitor;
    struct TimeSliceSystemTester__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TimeSliceSystemTester_FWDDECL)
#define IL2CPP_STRUCT_TimeSliceSystemTester_FWDDECL
#include <Modloader/app/structs/TimeSliceSystemTester__Class.h>
#endif
#undef IL2CPP_STRUCT_TimeSliceSystemTester_INITIALIZING
#if !defined(IL2CPP_STRUCT_TimeSliceSystemTester_DEFINED) && !defined(IL2CPP_STRUCT_TimeSliceSystemTester_FWDDECL)
#include <Modloader/app/structs/TimeSliceSystemTester.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TimeSliceSystemTester.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
