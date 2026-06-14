#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuildData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuildData_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildData_DEFINED)
#include <Modloader/app/structs/BuildData__Fields.h>
#if defined(IL2CPP_STRUCT_BuildData__Fields_DEFINED)
#define IL2CPP_STRUCT_BuildData_DEFINED
struct BuildData__Class;
struct BuildData {
    struct BuildData__Class* klass;
    MonitorData* monitor;
    struct BuildData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuildData_FWDDECL)
#define IL2CPP_STRUCT_BuildData_FWDDECL
#include <Modloader/app/structs/BuildData__Class.h>
#endif
#undef IL2CPP_STRUCT_BuildData_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuildData_DEFINED) && !defined(IL2CPP_STRUCT_BuildData_FWDDECL)
#include <Modloader/app/structs/BuildData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuildData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
