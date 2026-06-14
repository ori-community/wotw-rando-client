#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FOVConversionReport_Issue_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FOVConversionReport_Issue_INITIALIZING
#if !defined(IL2CPP_STRUCT_FOVConversionReport_Issue_DEFINED)
#include <Modloader/app/structs/FOVConversionReport_Issue__Fields.h>
#if defined(IL2CPP_STRUCT_FOVConversionReport_Issue__Fields_DEFINED)
#define IL2CPP_STRUCT_FOVConversionReport_Issue_DEFINED
struct FOVConversionReport_Issue__Class;
struct FOVConversionReport_Issue {
    struct FOVConversionReport_Issue__Class* klass;
    MonitorData* monitor;
    struct FOVConversionReport_Issue__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FOVConversionReport_Issue_FWDDECL)
#define IL2CPP_STRUCT_FOVConversionReport_Issue_FWDDECL
#include <Modloader/app/structs/FOVConversionReport_Issue__Class.h>
#endif
#undef IL2CPP_STRUCT_FOVConversionReport_Issue_INITIALIZING
#if !defined(IL2CPP_STRUCT_FOVConversionReport_Issue_DEFINED) && !defined(IL2CPP_STRUCT_FOVConversionReport_Issue_FWDDECL)
#include <Modloader/app/structs/FOVConversionReport_Issue.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FOVConversionReport_Issue.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
