#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LaserPulsator_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LaserPulsator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserPulsator_DEFINED)
#include <Modloader/app/structs/LaserPulsator__Fields.h>
#if defined(IL2CPP_STRUCT_LaserPulsator__Fields_DEFINED)
#define IL2CPP_STRUCT_LaserPulsator_DEFINED
struct LaserPulsator__Class;
struct LaserPulsator {
    struct LaserPulsator__Class* klass;
    MonitorData* monitor;
    struct LaserPulsator__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LaserPulsator_FWDDECL)
#define IL2CPP_STRUCT_LaserPulsator_FWDDECL
#include <Modloader/app/structs/LaserPulsator__Class.h>
#endif
#undef IL2CPP_STRUCT_LaserPulsator_INITIALIZING
#if !defined(IL2CPP_STRUCT_LaserPulsator_DEFINED) && !defined(IL2CPP_STRUCT_LaserPulsator_FWDDECL)
#include <Modloader/app/structs/LaserPulsator.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LaserPulsator.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
