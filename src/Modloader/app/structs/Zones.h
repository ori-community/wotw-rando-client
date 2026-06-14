#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Zones_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Zones_INITIALIZING
#if !defined(IL2CPP_STRUCT_Zones_DEFINED)
#define IL2CPP_STRUCT_Zones_DEFINED
struct Zones__Class;
struct Zones {
    struct Zones__Class* klass;
    MonitorData* monitor;
};
#endif
#if !defined(IL2CPP_STRUCT_Zones_FWDDECL)
#define IL2CPP_STRUCT_Zones_FWDDECL
#include <Modloader/app/structs/Zones__Class.h>
#endif
#undef IL2CPP_STRUCT_Zones_INITIALIZING
#if !defined(IL2CPP_STRUCT_Zones_DEFINED) && !defined(IL2CPP_STRUCT_Zones_FWDDECL)
#include <Modloader/app/structs/Zones.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Zones.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
