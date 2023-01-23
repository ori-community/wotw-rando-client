#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MortarWormSettings_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MortarWormSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormSettings_DEFINED)
#include <Modloader/app/structs/MortarWormSettings__Fields.h>
#if defined(IL2CPP_STRUCT_MortarWormSettings__Fields_DEFINED)
#define IL2CPP_STRUCT_MortarWormSettings_DEFINED
struct MortarWormSettings__Class;
struct MortarWormSettings {
    struct MortarWormSettings__Class* klass;
    MonitorData* monitor;
    struct MortarWormSettings__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MortarWormSettings_FWDDECL)
#define IL2CPP_STRUCT_MortarWormSettings_FWDDECL
#include <Modloader/app/structs/MortarWormSettings__Class.h>
#endif
#undef IL2CPP_STRUCT_MortarWormSettings_INITIALIZING
#if !defined(IL2CPP_STRUCT_MortarWormSettings_DEFINED) && !defined(IL2CPP_STRUCT_MortarWormSettings_FWDDECL)
#include <Modloader/app/structs/MortarWormSettings.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MortarWormSettings.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
