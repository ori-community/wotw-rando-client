#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TitleScreenManager__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TitleScreenManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleScreenManager__StaticFields_DEFINED)
#define IL2CPP_STRUCT_TitleScreenManager__StaticFields_DEFINED
struct TitleScreenManager;
struct TitleScreenManager__StaticFields {
    struct TitleScreenManager* s_instance;
    bool ForceUnloadIntroLogosOnBoot;
    bool AlwaysShowFirstTimeQualitySettingsScreen;
};
#endif
#if !defined(IL2CPP_STRUCT_TitleScreenManager__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_TitleScreenManager__StaticFields_FWDDECL
#include <Modloader/app/structs/TitleScreenManager.h>
#endif
#undef IL2CPP_STRUCT_TitleScreenManager__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TitleScreenManager__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_TitleScreenManager__StaticFields_FWDDECL)
#include <Modloader/app/structs/TitleScreenManager__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TitleScreenManager__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
