#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HeatUpPlatform_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HeatUpPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeatUpPlatform_DEFINED)
#include <Modloader/app/structs/HeatUpPlatform__Fields.h>
#if defined(IL2CPP_STRUCT_HeatUpPlatform__Fields_DEFINED)
#define IL2CPP_STRUCT_HeatUpPlatform_DEFINED
struct HeatUpPlatform__Class;
struct HeatUpPlatform {
    struct HeatUpPlatform__Class* klass;
    MonitorData* monitor;
    struct HeatUpPlatform__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HeatUpPlatform_FWDDECL)
#define IL2CPP_STRUCT_HeatUpPlatform_FWDDECL
#include <Modloader/app/structs/HeatUpPlatform__Class.h>
#endif
#undef IL2CPP_STRUCT_HeatUpPlatform_INITIALIZING
#if !defined(IL2CPP_STRUCT_HeatUpPlatform_DEFINED) && !defined(IL2CPP_STRUCT_HeatUpPlatform_FWDDECL)
#include <Modloader/app/structs/HeatUpPlatform.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HeatUpPlatform.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
