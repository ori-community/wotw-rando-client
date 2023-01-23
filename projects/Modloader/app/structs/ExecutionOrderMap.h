#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ExecutionOrderMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ExecutionOrderMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionOrderMap_DEFINED)
#include <Modloader/app/structs/ExecutionOrderMap__Fields.h>
#if defined(IL2CPP_STRUCT_ExecutionOrderMap__Fields_DEFINED)
#define IL2CPP_STRUCT_ExecutionOrderMap_DEFINED
struct ExecutionOrderMap__Class;
struct ExecutionOrderMap {
    struct ExecutionOrderMap__Class* klass;
    MonitorData* monitor;
    struct ExecutionOrderMap__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ExecutionOrderMap_FWDDECL)
#define IL2CPP_STRUCT_ExecutionOrderMap_FWDDECL
#include <Modloader/app/structs/ExecutionOrderMap__Class.h>
#endif
#undef IL2CPP_STRUCT_ExecutionOrderMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_ExecutionOrderMap_DEFINED) && !defined(IL2CPP_STRUCT_ExecutionOrderMap_FWDDECL)
#include <Modloader/app/structs/ExecutionOrderMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ExecutionOrderMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
