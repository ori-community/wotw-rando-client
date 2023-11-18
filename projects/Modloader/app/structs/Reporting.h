#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Reporting_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Reporting_INITIALIZING
#if !defined(IL2CPP_STRUCT_Reporting_DEFINED)
#define IL2CPP_STRUCT_Reporting_DEFINED
struct Reporting__Class;
struct Reporting {
    struct Reporting__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Reporting_FWDDECL)
#define IL2CPP_STRUCT_Reporting_FWDDECL
#include <Modloader/app/structs/Reporting__Class.h>
#endif
#undef IL2CPP_STRUCT_Reporting_INITIALIZING
#if !defined(IL2CPP_STRUCT_Reporting_DEFINED) && !defined(IL2CPP_STRUCT_Reporting_FWDDECL)
#include <Modloader/app/structs/Reporting.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Reporting.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
