#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_AimCrosshair_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_AimCrosshair_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimCrosshair_DEFINED)
#include <Modloader/app/structs/AimCrosshair__Fields.h>
#if defined(IL2CPP_STRUCT_AimCrosshair__Fields_DEFINED)
#define IL2CPP_STRUCT_AimCrosshair_DEFINED
struct AimCrosshair__Class;
struct AimCrosshair {
    struct AimCrosshair__Class* klass;
    MonitorData* monitor;
    struct AimCrosshair__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_AimCrosshair_FWDDECL)
#define IL2CPP_STRUCT_AimCrosshair_FWDDECL
#include <Modloader/app/structs/AimCrosshair__Class.h>
#endif
#undef IL2CPP_STRUCT_AimCrosshair_INITIALIZING
#if !defined(IL2CPP_STRUCT_AimCrosshair_DEFINED) && !defined(IL2CPP_STRUCT_AimCrosshair_FWDDECL)
#include <Modloader/app/structs/AimCrosshair.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/AimCrosshair.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
