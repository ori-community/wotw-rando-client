#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_VirtualMachineSummary_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_VirtualMachineSummary_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualMachineSummary_DEFINED)
#include <Modloader/app/structs/VirtualMachineSummary__Fields.h>
#if defined(IL2CPP_STRUCT_VirtualMachineSummary__Fields_DEFINED)
#define IL2CPP_STRUCT_VirtualMachineSummary_DEFINED
struct VirtualMachineSummary__Class;
struct VirtualMachineSummary {
    struct VirtualMachineSummary__Class* klass;
    MonitorData* monitor;
    struct VirtualMachineSummary__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_VirtualMachineSummary_FWDDECL)
#define IL2CPP_STRUCT_VirtualMachineSummary_FWDDECL
#include <Modloader/app/structs/VirtualMachineSummary__Class.h>
#endif
#undef IL2CPP_STRUCT_VirtualMachineSummary_INITIALIZING
#if !defined(IL2CPP_STRUCT_VirtualMachineSummary_DEFINED) && !defined(IL2CPP_STRUCT_VirtualMachineSummary_FWDDECL)
#include <Modloader/app/structs/VirtualMachineSummary.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/VirtualMachineSummary.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
