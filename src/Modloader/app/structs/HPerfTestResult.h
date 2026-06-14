#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HPerfTestResult_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HPerfTestResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_HPerfTestResult_DEFINED)
#include <Modloader/app/structs/HPerfTestResult__Fields.h>
#if defined(IL2CPP_STRUCT_HPerfTestResult__Fields_DEFINED)
#define IL2CPP_STRUCT_HPerfTestResult_DEFINED
struct HPerfTestResult__Class;
struct HPerfTestResult {
    struct HPerfTestResult__Class* klass;
    MonitorData* monitor;
    struct HPerfTestResult__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HPerfTestResult_FWDDECL)
#define IL2CPP_STRUCT_HPerfTestResult_FWDDECL
#include <Modloader/app/structs/HPerfTestResult__Class.h>
#endif
#undef IL2CPP_STRUCT_HPerfTestResult_INITIALIZING
#if !defined(IL2CPP_STRUCT_HPerfTestResult_DEFINED) && !defined(IL2CPP_STRUCT_HPerfTestResult_FWDDECL)
#include <Modloader/app/structs/HPerfTestResult.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HPerfTestResult.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
