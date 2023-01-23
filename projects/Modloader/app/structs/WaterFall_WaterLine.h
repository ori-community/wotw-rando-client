#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterFall_WaterLine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterFall_WaterLine_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFall_WaterLine_DEFINED)
#include <Modloader/app/structs/WaterFall_WaterLine__Fields.h>
#if defined(IL2CPP_STRUCT_WaterFall_WaterLine__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterFall_WaterLine_DEFINED
struct WaterFall_WaterLine__Class;
struct WaterFall_WaterLine {
    struct WaterFall_WaterLine__Class* klass;
    MonitorData* monitor;
    struct WaterFall_WaterLine__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterFall_WaterLine_FWDDECL)
#define IL2CPP_STRUCT_WaterFall_WaterLine_FWDDECL
#include <Modloader/app/structs/WaterFall_WaterLine__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterFall_WaterLine_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFall_WaterLine_DEFINED) && !defined(IL2CPP_STRUCT_WaterFall_WaterLine_FWDDECL)
#include <Modloader/app/structs/WaterFall_WaterLine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterFall_WaterLine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
