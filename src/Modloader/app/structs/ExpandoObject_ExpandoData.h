#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExpandoObject_ExpandoData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExpandoObject_ExpandoData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObject_ExpandoData_DEFINED)
#include <Modloader/app/structs/ExpandoObject_ExpandoData__Fields.h>
#if defined(IL2CPP_STRUCT_ExpandoObject_ExpandoData__Fields_DEFINED)
#define IL2CPP_STRUCT_ExpandoObject_ExpandoData_DEFINED
struct ExpandoObject_ExpandoData__Class;
struct ExpandoObject_ExpandoData {
    struct ExpandoObject_ExpandoData__Class* klass;
    MonitorData* monitor;
    struct ExpandoObject_ExpandoData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExpandoObject_ExpandoData_FWDDECL)
#define IL2CPP_STRUCT_ExpandoObject_ExpandoData_FWDDECL
#include <Modloader/app/structs/ExpandoObject_ExpandoData__Class.h>
#endif
#undef IL2CPP_STRUCT_ExpandoObject_ExpandoData_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExpandoObject_ExpandoData_DEFINED) && !defined(IL2CPP_STRUCT_ExpandoObject_ExpandoData_FWDDECL)
#include <Modloader/app/structs/ExpandoObject_ExpandoData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExpandoObject_ExpandoData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
