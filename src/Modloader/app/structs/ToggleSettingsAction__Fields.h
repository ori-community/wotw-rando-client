#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ToggleSettingsAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ToggleSettingsAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleSettingsAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/ToggleSettingsAction_SettingType__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_ToggleSettingsAction_SettingType__Enum_DEFINED)
#define IL2CPP_STRUCT_ToggleSettingsAction__Fields_DEFINED
struct SoundProvider;
struct ToggleSettingsAction__Fields {
    struct ActionMethod__Fields _;
    ToggleSettingsAction_SettingType__Enum Setting;

    struct SoundProvider* OnSound;
    struct SoundProvider* OffSound;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ToggleSettingsAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ToggleSettingsAction__Fields_FWDDECL
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_ToggleSettingsAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ToggleSettingsAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ToggleSettingsAction__Fields_FWDDECL)
#include <Modloader/app/structs/ToggleSettingsAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ToggleSettingsAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
