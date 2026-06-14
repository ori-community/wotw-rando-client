#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MetaData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaData_DEFINED)
#include <Modloader/app/structs/MetaData__Fields.h>
#if defined(IL2CPP_STRUCT_MetaData__Fields_DEFINED)
#define IL2CPP_STRUCT_MetaData_DEFINED
struct MetaData__Class;
struct MetaData {
    struct MetaData__Class* klass;
    MonitorData* monitor;
    struct MetaData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MetaData_FWDDECL)
#define IL2CPP_STRUCT_MetaData_FWDDECL
#include <Modloader/app/structs/MetaData__Class.h>
#endif
#undef IL2CPP_STRUCT_MetaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_MetaData_DEFINED) && !defined(IL2CPP_STRUCT_MetaData_FWDDECL)
#include <Modloader/app/structs/MetaData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MetaData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
