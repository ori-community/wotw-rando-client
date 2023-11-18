#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterFall_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterFall_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFall_DEFINED)
#include <Modloader/app/structs/WaterFall__Fields.h>
#if defined(IL2CPP_STRUCT_WaterFall__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterFall_DEFINED
struct WaterFall__Class;
struct WaterFall {
    struct WaterFall__Class* klass;
    MonitorData* monitor;
    struct WaterFall__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterFall_FWDDECL)
#define IL2CPP_STRUCT_WaterFall_FWDDECL
#include <Modloader/app/structs/WaterFall__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterFall_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFall_DEFINED) && !defined(IL2CPP_STRUCT_WaterFall_FWDDECL)
#include <Modloader/app/structs/WaterFall.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterFall.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
