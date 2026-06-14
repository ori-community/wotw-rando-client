#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LanguageChanger__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LanguageChanger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LanguageChanger__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LanguageChanger__Fields_DEFINED
struct CleverMenuItem;
struct CleverMenuItemSelectionManager;
struct SoundProvider;
struct LanguageChanger__Fields {
    struct MonoBehaviour__Fields _;
    struct CleverMenuItem* m_cleverMenuItem;
    struct CleverMenuItemSelectionManager* SelectionManager;
    struct SoundProvider* ChangeSound;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LanguageChanger__Fields_FWDDECL)
#define IL2CPP_STRUCT_LanguageChanger__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/SoundProvider.h>
#endif
#undef IL2CPP_STRUCT_LanguageChanger__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LanguageChanger__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LanguageChanger__Fields_FWDDECL)
#include <Modloader/app/structs/LanguageChanger__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LanguageChanger__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
