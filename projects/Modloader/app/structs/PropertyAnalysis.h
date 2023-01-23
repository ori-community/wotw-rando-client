#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PropertyAnalysis_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PropertyAnalysis_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyAnalysis_DEFINED)
#include <Modloader/app/structs/PropertyAnalysis__Fields.h>
#if defined(IL2CPP_STRUCT_PropertyAnalysis__Fields_DEFINED)
#define IL2CPP_STRUCT_PropertyAnalysis_DEFINED
struct PropertyAnalysis__Class;
struct PropertyAnalysis {
    struct PropertyAnalysis__Class* klass;
    MonitorData* monitor;
    struct PropertyAnalysis__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PropertyAnalysis_FWDDECL)
#define IL2CPP_STRUCT_PropertyAnalysis_FWDDECL
#include <Modloader/app/structs/PropertyAnalysis__Class.h>
#endif
#undef IL2CPP_STRUCT_PropertyAnalysis_INITIALIZING
#if !defined(IL2CPP_STRUCT_PropertyAnalysis_DEFINED) && !defined(IL2CPP_STRUCT_PropertyAnalysis_FWDDECL)
#include <Modloader/app/structs/PropertyAnalysis.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PropertyAnalysis.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
