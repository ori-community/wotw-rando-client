#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PrefabAreaData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PrefabAreaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrefabAreaData_DEFINED)
#include <Modloader/app/structs/PrefabAreaData__Fields.h>
#if defined(IL2CPP_STRUCT_PrefabAreaData__Fields_DEFINED)
#define IL2CPP_STRUCT_PrefabAreaData_DEFINED
struct PrefabAreaData__Class;
struct PrefabAreaData {
    struct PrefabAreaData__Class* klass;
    MonitorData* monitor;
    struct PrefabAreaData__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PrefabAreaData_FWDDECL)
#define IL2CPP_STRUCT_PrefabAreaData_FWDDECL
#include <Modloader/app/structs/PrefabAreaData__Class.h>
#endif
#undef IL2CPP_STRUCT_PrefabAreaData_INITIALIZING
#if !defined(IL2CPP_STRUCT_PrefabAreaData_DEFINED) && !defined(IL2CPP_STRUCT_PrefabAreaData_FWDDECL)
#include <Modloader/app/structs/PrefabAreaData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PrefabAreaData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
