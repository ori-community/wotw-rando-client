#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EnergyDebugMenuItem_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EnergyDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyDebugMenuItem_DEFINED)
#include <Modloader/app/structs/EnergyDebugMenuItem__Fields.h>
#if defined(IL2CPP_STRUCT_EnergyDebugMenuItem__Fields_DEFINED)
#define IL2CPP_STRUCT_EnergyDebugMenuItem_DEFINED
struct EnergyDebugMenuItem__Class;
struct EnergyDebugMenuItem {
    struct EnergyDebugMenuItem__Class* klass;
    MonitorData* monitor;
    struct EnergyDebugMenuItem__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EnergyDebugMenuItem_FWDDECL)
#define IL2CPP_STRUCT_EnergyDebugMenuItem_FWDDECL
#include <Modloader/app/structs/EnergyDebugMenuItem__Class.h>
#endif
#undef IL2CPP_STRUCT_EnergyDebugMenuItem_INITIALIZING
#if !defined(IL2CPP_STRUCT_EnergyDebugMenuItem_DEFINED) && !defined(IL2CPP_STRUCT_EnergyDebugMenuItem_FWDDECL)
#include <Modloader/app/structs/EnergyDebugMenuItem.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EnergyDebugMenuItem.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
