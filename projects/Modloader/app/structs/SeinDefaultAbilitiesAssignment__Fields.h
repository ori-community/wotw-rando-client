#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SeinDefaultAbilitiesAssignment__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SeinDefaultAbilitiesAssignment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDefaultAbilitiesAssignment__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED)
#define IL2CPP_STRUCT_SeinDefaultAbilitiesAssignment__Fields_DEFINED
struct SeinDefaultAbilitiesAssignment__Fields {
    struct MonoBehaviour__Fields _;
    AbilityType__Enum AbilityX;

    AbilityType__Enum AbilityY;

    AbilityType__Enum AbilityB;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SeinDefaultAbilitiesAssignment__Fields_FWDDECL)
#define IL2CPP_STRUCT_SeinDefaultAbilitiesAssignment__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_SeinDefaultAbilitiesAssignment__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SeinDefaultAbilitiesAssignment__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SeinDefaultAbilitiesAssignment__Fields_FWDDECL)
#include <Modloader/app/structs/SeinDefaultAbilitiesAssignment__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SeinDefaultAbilitiesAssignment__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
