#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponmasterScreen_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponmasterScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponmasterScreen_DEFINED)
#include <Modloader/app/structs/WeaponmasterScreen__Fields.h>
#if defined(IL2CPP_STRUCT_WeaponmasterScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_WeaponmasterScreen_DEFINED
struct WeaponmasterScreen__Class;
struct WeaponmasterScreen {
    struct WeaponmasterScreen__Class* klass;
    MonitorData* monitor;
    struct WeaponmasterScreen__Fields fields;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponmasterScreen_FWDDECL)
#define IL2CPP_STRUCT_WeaponmasterScreen_FWDDECL
#include <Modloader/app/structs/WeaponmasterScreen__Class.h>
#endif
#undef IL2CPP_STRUCT_WeaponmasterScreen_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponmasterScreen_DEFINED) && !defined(IL2CPP_STRUCT_WeaponmasterScreen_FWDDECL)
#include <Modloader/app/structs/WeaponmasterScreen.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponmasterScreen.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
