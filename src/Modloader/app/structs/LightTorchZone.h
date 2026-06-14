#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightTorchZone_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightTorchZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightTorchZone_DEFINED)
#include <Modloader/app/structs/LightTorchZone__Fields.h>
#if defined(IL2CPP_STRUCT_LightTorchZone__Fields_DEFINED)
#define IL2CPP_STRUCT_LightTorchZone_DEFINED
struct LightTorchZone__Class;
struct LightTorchZone {
    struct LightTorchZone__Class* klass;
    MonitorData* monitor;
    struct LightTorchZone__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightTorchZone_FWDDECL)
#define IL2CPP_STRUCT_LightTorchZone_FWDDECL
#include <Modloader/app/structs/LightTorchZone__Class.h>
#endif
#undef IL2CPP_STRUCT_LightTorchZone_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightTorchZone_DEFINED) && !defined(IL2CPP_STRUCT_LightTorchZone_FWDDECL)
#include <Modloader/app/structs/LightTorchZone.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightTorchZone.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
