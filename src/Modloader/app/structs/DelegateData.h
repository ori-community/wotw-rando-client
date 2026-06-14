#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DelegateData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DelegateData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelegateData_DEFINED)
#include <Modloader/app/structs/DelegateData__Fields.h>
#if defined(IL2CPP_STRUCT_DelegateData__Fields_DEFINED)
#define IL2CPP_STRUCT_DelegateData_DEFINED
struct DelegateData__Class;
struct DelegateData {
    struct DelegateData__Class* klass;
    MonitorData* monitor;
    struct DelegateData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DelegateData_FWDDECL)
#define IL2CPP_STRUCT_DelegateData_FWDDECL
#include <Modloader/app/structs/DelegateData__Class.h>
#endif
#undef IL2CPP_STRUCT_DelegateData_INITIALIZING
#if !defined(IL2CPP_STRUCT_DelegateData_DEFINED) && !defined(IL2CPP_STRUCT_DelegateData_FWDDECL)
#include <Modloader/app/structs/DelegateData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DelegateData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
