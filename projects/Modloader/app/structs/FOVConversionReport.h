#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FOVConversionReport_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FOVConversionReport_INITIALIZING
#if !defined(IL2CPP_STRUCT_FOVConversionReport_DEFINED)
#include <Modloader/app/structs/FOVConversionReport__Fields.h>
#if defined(IL2CPP_STRUCT_FOVConversionReport__Fields_DEFINED)
#define IL2CPP_STRUCT_FOVConversionReport_DEFINED
struct FOVConversionReport__Class;
struct FOVConversionReport {
    struct FOVConversionReport__Class* klass;
    MonitorData* monitor;
    struct FOVConversionReport__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FOVConversionReport_FWDDECL)
#define IL2CPP_STRUCT_FOVConversionReport_FWDDECL
#include <Modloader/app/structs/FOVConversionReport__Class.h>
#endif
#undef IL2CPP_STRUCT_FOVConversionReport_INITIALIZING
#if !defined(IL2CPP_STRUCT_FOVConversionReport_DEFINED) && !defined(IL2CPP_STRUCT_FOVConversionReport_FWDDECL)
#include <Modloader/app/structs/FOVConversionReport.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FOVConversionReport.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
