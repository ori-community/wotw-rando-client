#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoonDriverExecutionOrderMap_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoonDriverExecutionOrderMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonDriverExecutionOrderMap_DEFINED)
#define IL2CPP_STRUCT_IMoonDriverExecutionOrderMap_DEFINED
struct IMoonDriverExecutionOrderMap__Class;
struct IMoonDriverExecutionOrderMap {
    struct IMoonDriverExecutionOrderMap__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMoonDriverExecutionOrderMap_FWDDECL)
#define IL2CPP_STRUCT_IMoonDriverExecutionOrderMap_FWDDECL
#include <Modloader/app/structs/IMoonDriverExecutionOrderMap__Class.h>
#endif
#undef IL2CPP_STRUCT_IMoonDriverExecutionOrderMap_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonDriverExecutionOrderMap_DEFINED) && !defined(IL2CPP_STRUCT_IMoonDriverExecutionOrderMap_FWDDECL)
#include <Modloader/app/structs/IMoonDriverExecutionOrderMap.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoonDriverExecutionOrderMap.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
