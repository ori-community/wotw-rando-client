#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TreeData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TreeData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TreeData_DEFINED)
#include <Modloader/app/structs/TreeData__Fields.h>
#if defined(IL2CPP_STRUCT_TreeData__Fields_DEFINED)
#define IL2CPP_STRUCT_TreeData_DEFINED
struct TreeData__Class;
struct TreeData {
    struct TreeData__Class* klass;
    MonitorData* monitor;
    struct TreeData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TreeData_FWDDECL)
#define IL2CPP_STRUCT_TreeData_FWDDECL
#include <Modloader/app/structs/TreeData__Class.h>
#endif
#undef IL2CPP_STRUCT_TreeData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TreeData_DEFINED) && !defined(IL2CPP_STRUCT_TreeData_FWDDECL)
#include <Modloader/app/structs/TreeData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TreeData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
