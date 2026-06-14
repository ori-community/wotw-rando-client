#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BuyMapUIConfirmationOverlay__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BuyMapUIConfirmationOverlay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuyMapUIConfirmationOverlay__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED)
#define IL2CPP_STRUCT_BuyMapUIConfirmationOverlay__Fields_DEFINED
struct VerticalSpacer;
struct LegacyTransparencyAnimator;
struct GameObject;
struct MessageProvider;
struct Action_1_BuyMapUIConfirmationOverlay_Selection_;
struct BuyMapUIConfirmationOverlay__Fields {
    struct MenuScreen__Fields _;
    struct VerticalSpacer* Spacer;
    struct LegacyTransparencyAnimator* FadeAnimator;
    struct GameObject* TextTitle;
    struct GameObject* TextDescription;
    struct MessageProvider* MessageBuyMapTitle;
    struct Action_1_BuyMapUIConfirmationOverlay_Selection_* OnSelected;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BuyMapUIConfirmationOverlay__Fields_FWDDECL)
#define IL2CPP_STRUCT_BuyMapUIConfirmationOverlay__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_BuyMapUIConfirmationOverlay_Selection_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/VerticalSpacer.h>
#endif
#undef IL2CPP_STRUCT_BuyMapUIConfirmationOverlay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BuyMapUIConfirmationOverlay__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BuyMapUIConfirmationOverlay__Fields_FWDDECL)
#include <Modloader/app/structs/BuyMapUIConfirmationOverlay__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BuyMapUIConfirmationOverlay__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
