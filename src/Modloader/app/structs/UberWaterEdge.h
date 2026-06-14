#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UberWaterEdge_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UberWaterEdge_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterEdge_DEFINED)
#include <Modloader/app/structs/UberWaterEdge__Fields.h>
#if defined(IL2CPP_STRUCT_UberWaterEdge__Fields_DEFINED)
#define IL2CPP_STRUCT_UberWaterEdge_DEFINED
struct UberWaterEdge__Class;
struct UberWaterEdge {
    struct UberWaterEdge__Class* klass;
    MonitorData* monitor;
    struct UberWaterEdge__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UberWaterEdge_FWDDECL)
#define IL2CPP_STRUCT_UberWaterEdge_FWDDECL
#include <Modloader/app/structs/UberWaterEdge__Class.h>
#endif
#undef IL2CPP_STRUCT_UberWaterEdge_INITIALIZING
#if !defined(IL2CPP_STRUCT_UberWaterEdge_DEFINED) && !defined(IL2CPP_STRUCT_UberWaterEdge_FWDDECL)
#include <Modloader/app/structs/UberWaterEdge.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UberWaterEdge.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
