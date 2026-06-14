#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ShowGetAbilityTextEntity__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ShowGetAbilityTextEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowGetAbilityTextEntity__Fields_DEFINED)
#include <Modloader/app/structs/EquipmentType__Enum.h>
#include <Modloader/app/structs/ShowTextEntity__Fields.h>
#if defined(IL2CPP_STRUCT_ShowTextEntity__Fields_DEFINED) && defined(IL2CPP_STRUCT_EquipmentType__Enum_DEFINED)
#define IL2CPP_STRUCT_ShowGetAbilityTextEntity__Fields_DEFINED
struct Renderer__Array;
struct ShowGetAbilityTextEntity__Fields {
    struct ShowTextEntity__Fields _;
    EquipmentType__Enum Ability;

    bool AllowEquipmentWheelWhileMovementIsDisabled;
    struct Renderer__Array* m_renderers;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ShowGetAbilityTextEntity__Fields_FWDDECL)
#define IL2CPP_STRUCT_ShowGetAbilityTextEntity__Fields_FWDDECL
#include <Modloader/app/structs/Renderer__Array.h>
#endif
#undef IL2CPP_STRUCT_ShowGetAbilityTextEntity__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ShowGetAbilityTextEntity__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ShowGetAbilityTextEntity__Fields_FWDDECL)
#include <Modloader/app/structs/ShowGetAbilityTextEntity__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ShowGetAbilityTextEntity__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
