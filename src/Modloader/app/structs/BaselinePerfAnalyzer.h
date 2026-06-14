#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaselinePerfAnalyzer_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaselinePerfAnalyzer_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaselinePerfAnalyzer_DEFINED)
#define IL2CPP_STRUCT_BaselinePerfAnalyzer_DEFINED
struct BaselinePerfAnalyzer__Class;
struct BaselinePerfAnalyzer {
    struct BaselinePerfAnalyzer__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_BaselinePerfAnalyzer_FWDDECL)
#define IL2CPP_STRUCT_BaselinePerfAnalyzer_FWDDECL
#include <Modloader/app/structs/BaselinePerfAnalyzer__Class.h>
#endif
#undef IL2CPP_STRUCT_BaselinePerfAnalyzer_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaselinePerfAnalyzer_DEFINED) && !defined(IL2CPP_STRUCT_BaselinePerfAnalyzer_FWDDECL)
#include <Modloader/app/structs/BaselinePerfAnalyzer.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaselinePerfAnalyzer.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
