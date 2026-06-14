#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PreloadData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PreloadData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreloadData_DEFINED)
#include <Modloader/app/structs/PreloadData__Fields.h>
#if defined(IL2CPP_STRUCT_PreloadData__Fields_DEFINED)
#define IL2CPP_STRUCT_PreloadData_DEFINED
struct PreloadData__Class;
struct PreloadData {
    struct PreloadData__Class* klass;
    MonitorData* monitor;
    struct PreloadData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PreloadData_FWDDECL)
#define IL2CPP_STRUCT_PreloadData_FWDDECL
#include <Modloader/app/structs/PreloadData__Class.h>
#endif
#undef IL2CPP_STRUCT_PreloadData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PreloadData_DEFINED) && !defined(IL2CPP_STRUCT_PreloadData_FWDDECL)
#include <Modloader/app/structs/PreloadData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PreloadData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
