#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterFallMask_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterFallMask_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFallMask_DEFINED)
#include <Modloader/app/structs/WaterFallMask__Fields.h>
#if defined(IL2CPP_STRUCT_WaterFallMask__Fields_DEFINED)
#define IL2CPP_STRUCT_WaterFallMask_DEFINED
struct WaterFallMask__Class;
struct WaterFallMask {
    struct WaterFallMask__Class* klass;
    MonitorData* monitor;
    struct WaterFallMask__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WaterFallMask_FWDDECL)
#define IL2CPP_STRUCT_WaterFallMask_FWDDECL
#include <Modloader/app/structs/WaterFallMask__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterFallMask_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterFallMask_DEFINED) && !defined(IL2CPP_STRUCT_WaterFallMask_FWDDECL)
#include <Modloader/app/structs/WaterFallMask.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterFallMask.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
