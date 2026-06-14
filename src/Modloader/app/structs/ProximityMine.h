#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ProximityMine_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ProximityMine_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProximityMine_DEFINED)
#include <Modloader/app/structs/ProximityMine__Fields.h>
#if defined(IL2CPP_STRUCT_ProximityMine__Fields_DEFINED)
#define IL2CPP_STRUCT_ProximityMine_DEFINED
struct ProximityMine__Class;
struct ProximityMine {
    struct ProximityMine__Class* klass;
    MonitorData* monitor;
    struct ProximityMine__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ProximityMine_FWDDECL)
#define IL2CPP_STRUCT_ProximityMine_FWDDECL
#include <Modloader/app/structs/ProximityMine__Class.h>
#endif
#undef IL2CPP_STRUCT_ProximityMine_INITIALIZING
#if !defined(IL2CPP_STRUCT_ProximityMine_DEFINED) && !defined(IL2CPP_STRUCT_ProximityMine_FWDDECL)
#include <Modloader/app/structs/ProximityMine.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ProximityMine.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
