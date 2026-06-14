#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_PositionTurbulence_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_PositionTurbulence_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionTurbulence_DEFINED)
#include <Modloader/app/structs/PositionTurbulence__Fields.h>
#if defined(IL2CPP_STRUCT_PositionTurbulence__Fields_DEFINED)
#define IL2CPP_STRUCT_PositionTurbulence_DEFINED
struct PositionTurbulence__Class;
struct PositionTurbulence {
    struct PositionTurbulence__Class* klass;
    MonitorData* monitor;
    struct PositionTurbulence__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_PositionTurbulence_FWDDECL)
#define IL2CPP_STRUCT_PositionTurbulence_FWDDECL
#include <Modloader/app/structs/PositionTurbulence__Class.h>
#endif
#undef IL2CPP_STRUCT_PositionTurbulence_INITIALIZING
#if !defined(IL2CPP_STRUCT_PositionTurbulence_DEFINED) && !defined(IL2CPP_STRUCT_PositionTurbulence_FWDDECL)
#include <Modloader/app/structs/PositionTurbulence.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/PositionTurbulence.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
