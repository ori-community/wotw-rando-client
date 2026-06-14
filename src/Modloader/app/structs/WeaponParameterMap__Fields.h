#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_WeaponParameterMap__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_WeaponParameterMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponParameterMap__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#if defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED)
#define IL2CPP_STRUCT_WeaponParameterMap__Fields_DEFINED
struct Event_1;
struct __declspec(align(8)) WeaponParameterMap__Fields {
    AbilityType__Enum AbilityType;

    struct Event_1* WeaponHitEvent;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_WeaponParameterMap__Fields_FWDDECL)
#define IL2CPP_STRUCT_WeaponParameterMap__Fields_FWDDECL
#include <Modloader/app/structs/Event_1.h>
#endif
#undef IL2CPP_STRUCT_WeaponParameterMap__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_WeaponParameterMap__Fields_DEFINED) && !defined(IL2CPP_STRUCT_WeaponParameterMap__Fields_FWDDECL)
#include <Modloader/app/structs/WeaponParameterMap__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/WeaponParameterMap__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
