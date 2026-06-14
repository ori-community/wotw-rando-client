#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WaterPoison_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WaterPoison_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoison_DEFINED)
#define IL2CPP_STRUCT_WaterPoison_DEFINED
struct WaterPoison__Class;
struct WaterPoison {
    struct WaterPoison__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_WaterPoison_FWDDECL)
#define IL2CPP_STRUCT_WaterPoison_FWDDECL
#include <Modloader/app/structs/WaterPoison__Class.h>
#endif
#undef IL2CPP_STRUCT_WaterPoison_INITIALIZING
#if !defined(IL2CPP_STRUCT_WaterPoison_DEFINED) && !defined(IL2CPP_STRUCT_WaterPoison_FWDDECL)
#include <Modloader/app/structs/WaterPoison.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WaterPoison.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
