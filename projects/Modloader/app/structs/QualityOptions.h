#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QualityOptions_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QualityOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityOptions_DEFINED)
#include <Modloader/app/structs/QualityOptions__Fields.h>
#if defined(IL2CPP_STRUCT_QualityOptions__Fields_DEFINED)
#define IL2CPP_STRUCT_QualityOptions_DEFINED
struct QualityOptions__Class;
struct QualityOptions {
    struct QualityOptions__Class* klass;
    MonitorData* monitor;
    struct QualityOptions__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QualityOptions_FWDDECL)
#define IL2CPP_STRUCT_QualityOptions_FWDDECL
#include <Modloader/app/structs/QualityOptions__Class.h>
#endif
#undef IL2CPP_STRUCT_QualityOptions_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityOptions_DEFINED) && !defined(IL2CPP_STRUCT_QualityOptions_FWDDECL)
#include <Modloader/app/structs/QualityOptions.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QualityOptions.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
