#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Toggle__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Toggle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Toggle__Fields_DEFINED)
#include <Modloader/app/structs/Selectable__Fields.h>
#include <Modloader/app/structs/Toggle_ToggleTransition__Enum.h>
#if defined(IL2CPP_STRUCT_Selectable__Fields_DEFINED) && defined(IL2CPP_STRUCT_Toggle_ToggleTransition__Enum_DEFINED)
#define IL2CPP_STRUCT_Toggle__Fields_DEFINED
struct Graphic;
struct ToggleGroup;
struct Toggle_ToggleEvent;
struct Toggle__Fields {
    struct Selectable__Fields _;
    Toggle_ToggleTransition__Enum toggleTransition;

    struct Graphic* graphic;
    struct ToggleGroup* m_Group;
    struct Toggle_ToggleEvent* onValueChanged;
    bool m_IsOn;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Toggle__Fields_FWDDECL)
#define IL2CPP_STRUCT_Toggle__Fields_FWDDECL
#include <Modloader/app/structs/Graphic.h>
#include <Modloader/app/structs/ToggleGroup.h>
#include <Modloader/app/structs/Toggle_ToggleEvent.h>
#endif
#undef IL2CPP_STRUCT_Toggle__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Toggle__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Toggle__Fields_FWDDECL)
#include <Modloader/app/structs/Toggle__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Toggle__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
