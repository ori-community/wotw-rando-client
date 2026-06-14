#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LeaderboadData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LeaderboadData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboadData_DEFINED)
#include <Modloader/app/structs/LeaderboadData__Fields.h>
#if defined(IL2CPP_STRUCT_LeaderboadData__Fields_DEFINED)
#define IL2CPP_STRUCT_LeaderboadData_DEFINED
struct LeaderboadData__Class;
struct LeaderboadData {
    struct LeaderboadData__Class* klass;
    MonitorData* monitor;
    struct LeaderboadData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LeaderboadData_FWDDECL)
#define IL2CPP_STRUCT_LeaderboadData_FWDDECL
#include <Modloader/app/structs/LeaderboadData__Class.h>
#endif
#undef IL2CPP_STRUCT_LeaderboadData_INITIALIZING
#if !defined(IL2CPP_STRUCT_LeaderboadData_DEFINED) && !defined(IL2CPP_STRUCT_LeaderboadData_FWDDECL)
#include <Modloader/app/structs/LeaderboadData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LeaderboadData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
