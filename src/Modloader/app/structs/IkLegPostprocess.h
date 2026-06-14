#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IkLegPostprocess_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IkLegPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkLegPostprocess_DEFINED)
#include <Modloader/app/structs/IkLegPostprocess__Fields.h>
#if defined(IL2CPP_STRUCT_IkLegPostprocess__Fields_DEFINED)
#define IL2CPP_STRUCT_IkLegPostprocess_DEFINED
struct IkLegPostprocess__Class;
struct IkLegPostprocess {
    struct IkLegPostprocess__Class* klass;
    MonitorData* monitor;
    struct IkLegPostprocess__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IkLegPostprocess_FWDDECL)
#define IL2CPP_STRUCT_IkLegPostprocess_FWDDECL
#include <Modloader/app/structs/IkLegPostprocess__Class.h>
#endif
#undef IL2CPP_STRUCT_IkLegPostprocess_INITIALIZING
#if !defined(IL2CPP_STRUCT_IkLegPostprocess_DEFINED) && !defined(IL2CPP_STRUCT_IkLegPostprocess_FWDDECL)
#include <Modloader/app/structs/IkLegPostprocess.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IkLegPostprocess.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
