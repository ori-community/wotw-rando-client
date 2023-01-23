#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_UI__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_UI__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UI__StaticFields_DEFINED)
#define IL2CPP_STRUCT_UI__StaticFields_DEFINED
struct MessageControllerB;
struct FaderB;
struct Vignette;
struct SeinUI;
struct MenuScreenManager;
struct UI__StaticFields {
    struct MessageControllerB* m_messageController;
    struct MessageControllerB* MessageController;
    struct FaderB* Fader;
    struct Vignette* Vignette;
    struct SeinUI* SeinUI;
    struct MenuScreenManager* m_sMenu;
};
#endif
#if !defined(IL2CPP_STRUCT_UI__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_UI__StaticFields_FWDDECL
#include <Modloader/app/structs/FaderB.h>
#include <Modloader/app/structs/MenuScreenManager.h>
#include <Modloader/app/structs/MessageControllerB.h>
#include <Modloader/app/structs/SeinUI.h>
#include <Modloader/app/structs/Vignette.h>
#endif
#undef IL2CPP_STRUCT_UI__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_UI__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_UI__StaticFields_FWDDECL)
#include <Modloader/app/structs/UI__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/UI__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
