#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TypeAnalysis_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TypeAnalysis_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeAnalysis_DEFINED)
#include <Modloader/app/structs/TypeAnalysis__Fields.h>
#if defined(IL2CPP_STRUCT_TypeAnalysis__Fields_DEFINED)
#define IL2CPP_STRUCT_TypeAnalysis_DEFINED
struct TypeAnalysis__Class;
struct TypeAnalysis {
    struct TypeAnalysis__Class* klass;
    MonitorData* monitor;
    struct TypeAnalysis__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TypeAnalysis_FWDDECL)
#define IL2CPP_STRUCT_TypeAnalysis_FWDDECL
#include <Modloader/app/structs/TypeAnalysis__Class.h>
#endif
#undef IL2CPP_STRUCT_TypeAnalysis_INITIALIZING
#if !defined(IL2CPP_STRUCT_TypeAnalysis_DEFINED) && !defined(IL2CPP_STRUCT_TypeAnalysis_FWDDECL)
#include <Modloader/app/structs/TypeAnalysis.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TypeAnalysis.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
