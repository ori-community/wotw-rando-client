#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IMoonShadingZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IMoonShadingZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonShadingZone_DEFINED)
#define IL2CPP_STRUCT_IMoonShadingZone_DEFINED
struct IMoonShadingZone__Class;
struct IMoonShadingZone {
    struct IMoonShadingZone__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_IMoonShadingZone_FWDDECL)
#define IL2CPP_STRUCT_IMoonShadingZone_FWDDECL
#include <Modloader/app/structs/IMoonShadingZone__Class.h>
#endif
#undef IL2CPP_STRUCT_IMoonShadingZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_IMoonShadingZone_DEFINED) && !defined(IL2CPP_STRUCT_IMoonShadingZone_FWDDECL)
#include <Modloader/app/structs/IMoonShadingZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IMoonShadingZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
