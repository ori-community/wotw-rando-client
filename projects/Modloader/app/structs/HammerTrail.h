#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HammerTrail_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HammerTrail_INITIALIZING
#if !defined(IL2CPP_STRUCT_HammerTrail_DEFINED)
#include <Modloader/app/structs/HammerTrail__Fields.h>
#if defined(IL2CPP_STRUCT_HammerTrail__Fields_DEFINED)
#define IL2CPP_STRUCT_HammerTrail_DEFINED
struct HammerTrail__Class;
struct HammerTrail {
    struct HammerTrail__Class* klass;
    MonitorData* monitor;
    struct HammerTrail__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HammerTrail_FWDDECL)
#define IL2CPP_STRUCT_HammerTrail_FWDDECL
#include <Modloader/app/structs/HammerTrail__Class.h>
#endif
#undef IL2CPP_STRUCT_HammerTrail_INITIALIZING
#if !defined(IL2CPP_STRUCT_HammerTrail_DEFINED) && !defined(IL2CPP_STRUCT_HammerTrail_FWDDECL)
#include <Modloader/app/structs/HammerTrail.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HammerTrail.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
