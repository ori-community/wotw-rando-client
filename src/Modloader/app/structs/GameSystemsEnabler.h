#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GameSystemsEnabler_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GameSystemsEnabler_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSystemsEnabler_DEFINED)
#include <Modloader/app/structs/GameSystemsEnabler__Fields.h>
#if defined(IL2CPP_STRUCT_GameSystemsEnabler__Fields_DEFINED)
#define IL2CPP_STRUCT_GameSystemsEnabler_DEFINED
struct GameSystemsEnabler__Class;
struct GameSystemsEnabler {
    struct GameSystemsEnabler__Class* klass;
    MonitorData* monitor;
    struct GameSystemsEnabler__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GameSystemsEnabler_FWDDECL)
#define IL2CPP_STRUCT_GameSystemsEnabler_FWDDECL
#include <Modloader/app/structs/GameSystemsEnabler__Class.h>
#endif
#undef IL2CPP_STRUCT_GameSystemsEnabler_INITIALIZING
#if !defined(IL2CPP_STRUCT_GameSystemsEnabler_DEFINED) && !defined(IL2CPP_STRUCT_GameSystemsEnabler_FWDDECL)
#include <Modloader/app/structs/GameSystemsEnabler.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GameSystemsEnabler.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
