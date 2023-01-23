#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LegacyPressurePlate__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LegacyPressurePlate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyPressurePlate__Fields_DEFINED)
#include <Modloader/app/structs/LegacyPressurePlate_Target__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_LegacyPressurePlate_Target__Enum_DEFINED)
#define IL2CPP_STRUCT_LegacyPressurePlate__Fields_DEFINED
struct ActionMethod;
struct List_1_ICanActivatePressurePlate_;
struct LegacyPressurePlate__Fields {
    struct MonoBehaviour__Fields _;
    LegacyPressurePlate_Target__Enum Targets;

    struct ActionMethod* OnPressed;
    struct ActionMethod* OnReleased;
    struct List_1_ICanActivatePressurePlate_* m_pressing;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LegacyPressurePlate__Fields_FWDDECL)
#define IL2CPP_STRUCT_LegacyPressurePlate__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/List_1_ICanActivatePressurePlate_.h>
#endif
#undef IL2CPP_STRUCT_LegacyPressurePlate__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LegacyPressurePlate__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LegacyPressurePlate__Fields_FWDDECL)
#include <Modloader/app/structs/LegacyPressurePlate__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LegacyPressurePlate__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
