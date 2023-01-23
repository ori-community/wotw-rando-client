#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Directory_SearchData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Directory_SearchData_INITIALIZING
#if !defined(IL2CPP_STRUCT_Directory_SearchData_DEFINED)
#include <Modloader/app/structs/Directory_SearchData__Fields.h>
#if defined(IL2CPP_STRUCT_Directory_SearchData__Fields_DEFINED)
#define IL2CPP_STRUCT_Directory_SearchData_DEFINED
struct Directory_SearchData__Class;
struct Directory_SearchData {
    struct Directory_SearchData__Class* klass;
    MonitorData* monitor;
    struct Directory_SearchData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Directory_SearchData_FWDDECL)
#define IL2CPP_STRUCT_Directory_SearchData_FWDDECL
#include <Modloader/app/structs/Directory_SearchData__Class.h>
#endif
#undef IL2CPP_STRUCT_Directory_SearchData_INITIALIZING
#if !defined(IL2CPP_STRUCT_Directory_SearchData_DEFINED) && !defined(IL2CPP_STRUCT_Directory_SearchData_FWDDECL)
#include <Modloader/app/structs/Directory_SearchData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Directory_SearchData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
