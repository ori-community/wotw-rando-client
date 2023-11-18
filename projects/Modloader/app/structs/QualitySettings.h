#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_QualitySettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_QualitySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualitySettings_DEFINED)
#include <Modloader/app/structs/QualitySettings__Fields.h>
#if defined(IL2CPP_STRUCT_QualitySettings__Fields_DEFINED)
#define IL2CPP_STRUCT_QualitySettings_DEFINED
struct QualitySettings__Class;
struct QualitySettings {
    struct QualitySettings__Class* klass;
    MonitorData* monitor;
    struct QualitySettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_QualitySettings_FWDDECL)
#define IL2CPP_STRUCT_QualitySettings_FWDDECL
#include <Modloader/app/structs/QualitySettings__Class.h>
#endif
#undef IL2CPP_STRUCT_QualitySettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_QualitySettings_DEFINED) && !defined(IL2CPP_STRUCT_QualitySettings_FWDDECL)
#include <Modloader/app/structs/QualitySettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/QualitySettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
