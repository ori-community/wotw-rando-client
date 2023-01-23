#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QualityProfile_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QualityProfile_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityProfile_DEFINED)
#include <Modloader/app/structs/QualityProfile__Fields.h>
#if defined(IL2CPP_STRUCT_QualityProfile__Fields_DEFINED)
#define IL2CPP_STRUCT_QualityProfile_DEFINED
struct QualityProfile__Class;
struct QualityProfile {
    struct QualityProfile__Class* klass;
    MonitorData* monitor;
    struct QualityProfile__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QualityProfile_FWDDECL)
#define IL2CPP_STRUCT_QualityProfile_FWDDECL
#include <Modloader/app/structs/QualityProfile__Class.h>
#endif
#undef IL2CPP_STRUCT_QualityProfile_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualityProfile_DEFINED) && !defined(IL2CPP_STRUCT_QualityProfile_FWDDECL)
#include <Modloader/app/structs/QualityProfile.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QualityProfile.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
