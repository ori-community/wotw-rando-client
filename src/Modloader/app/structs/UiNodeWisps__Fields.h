#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UiNodeWisps__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UiNodeWisps__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UiNodeWisps__Fields_DEFINED)
#include <Modloader/app/structs/InteractionNode__Fields.h>
#include <Modloader/app/structs/MenuScreenManager_Screens__Enum.h>
#if defined(IL2CPP_STRUCT_InteractionNode__Fields_DEFINED) && defined(IL2CPP_STRUCT_MenuScreenManager_Screens__Enum_DEFINED)
#define IL2CPP_STRUCT_UiNodeWisps__Fields_DEFINED
struct UiNodeWisps__Fields {
    struct InteractionNode__Fields _;
    bool Pause;
    MenuScreenManager_Screens__Enum Screen;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_UiNodeWisps__Fields_FWDDECL)
#define IL2CPP_STRUCT_UiNodeWisps__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_UiNodeWisps__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UiNodeWisps__Fields_DEFINED) && !defined(IL2CPP_STRUCT_UiNodeWisps__Fields_FWDDECL)
#include <Modloader/app/structs/UiNodeWisps__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UiNodeWisps__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
