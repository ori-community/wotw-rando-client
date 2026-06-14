#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpiritTurret_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpiritTurret_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritTurret_DEFINED)
#include <Modloader/app/structs/SpiritTurret__Fields.h>
#if defined(IL2CPP_STRUCT_SpiritTurret__Fields_DEFINED)
#define IL2CPP_STRUCT_SpiritTurret_DEFINED
struct SpiritTurret__Class;
struct SpiritTurret {
    struct SpiritTurret__Class* klass;
    MonitorData* monitor;
    struct SpiritTurret__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpiritTurret_FWDDECL)
#define IL2CPP_STRUCT_SpiritTurret_FWDDECL
#include <Modloader/app/structs/SpiritTurret__Class.h>
#endif
#undef IL2CPP_STRUCT_SpiritTurret_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpiritTurret_DEFINED) && !defined(IL2CPP_STRUCT_SpiritTurret_FWDDECL)
#include <Modloader/app/structs/SpiritTurret.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpiritTurret.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
