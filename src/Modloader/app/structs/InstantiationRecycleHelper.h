#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_InstantiationRecycleHelper_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_InstantiationRecycleHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiationRecycleHelper_DEFINED)
#include <Modloader/app/structs/InstantiationRecycleHelper__Fields.h>
#if defined(IL2CPP_STRUCT_InstantiationRecycleHelper__Fields_DEFINED)
#define IL2CPP_STRUCT_InstantiationRecycleHelper_DEFINED
struct InstantiationRecycleHelper__Class;
struct InstantiationRecycleHelper {
    struct InstantiationRecycleHelper__Class* klass;
    MonitorData* monitor;
    struct InstantiationRecycleHelper__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_InstantiationRecycleHelper_FWDDECL)
#define IL2CPP_STRUCT_InstantiationRecycleHelper_FWDDECL
#include <Modloader/app/structs/InstantiationRecycleHelper__Class.h>
#endif
#undef IL2CPP_STRUCT_InstantiationRecycleHelper_INITIALIZING
#if !defined(IL2CPP_STRUCT_InstantiationRecycleHelper_DEFINED) && !defined(IL2CPP_STRUCT_InstantiationRecycleHelper_FWDDECL)
#include <Modloader/app/structs/InstantiationRecycleHelper.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/InstantiationRecycleHelper.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
