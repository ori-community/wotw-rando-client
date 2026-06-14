#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyGameObjectDisabler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyGameObjectDisabler_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyGameObjectDisabler_DEFINED)
#include <Modloader/app/structs/LegacyGameObjectDisabler__Fields.h>
#if defined(IL2CPP_STRUCT_LegacyGameObjectDisabler__Fields_DEFINED)
#define IL2CPP_STRUCT_LegacyGameObjectDisabler_DEFINED
struct LegacyGameObjectDisabler__Class;
struct LegacyGameObjectDisabler {
    struct LegacyGameObjectDisabler__Class* klass;
    MonitorData* monitor;
    struct LegacyGameObjectDisabler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyGameObjectDisabler_FWDDECL)
#define IL2CPP_STRUCT_LegacyGameObjectDisabler_FWDDECL
#include <Modloader/app/structs/LegacyGameObjectDisabler__Class.h>
#endif
#undef IL2CPP_STRUCT_LegacyGameObjectDisabler_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyGameObjectDisabler_DEFINED) && !defined(IL2CPP_STRUCT_LegacyGameObjectDisabler_FWDDECL)
#include <Modloader/app/structs/LegacyGameObjectDisabler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyGameObjectDisabler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
