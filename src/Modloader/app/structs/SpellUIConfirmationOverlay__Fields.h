#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SpellUIConfirmationOverlay__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SpellUIConfirmationOverlay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIConfirmationOverlay__Fields_DEFINED)
#include <Modloader/app/structs/MenuScreen__Fields.h>
#include <Modloader/app/structs/SpellUIConfirmationOverlay_Context__Enum.h>
#if defined(IL2CPP_STRUCT_MenuScreen__Fields_DEFINED) && defined(IL2CPP_STRUCT_SpellUIConfirmationOverlay_Context__Enum_DEFINED)
#define IL2CPP_STRUCT_SpellUIConfirmationOverlay__Fields_DEFINED
struct VerticalSpacer;
struct LegacyTransparencyAnimator;
struct GameObject;
struct SpellUIShardEquipStatus;
struct MessageProvider;
struct Action_1_SpellUIConfirmationOverlay_Selection_;
struct SpellUIConfirmationOverlay__Fields {
    struct MenuScreen__Fields _;
    struct VerticalSpacer* Spacer;
    struct LegacyTransparencyAnimator* FadeAnimator;
    struct GameObject* TextTitle;
    struct GameObject* TextDescription;
    struct SpellUIShardEquipStatus* EquipStatus;
    struct MessageProvider* MessageUpgradeShardTitle;
    struct MessageProvider* MessageMoveShardTitle;
    struct MessageProvider* MessageAddSocketTitle;
    SpellUIConfirmationOverlay_Context__Enum m_context;

    struct Action_1_SpellUIConfirmationOverlay_Selection_* OnSelected;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SpellUIConfirmationOverlay__Fields_FWDDECL)
#define IL2CPP_STRUCT_SpellUIConfirmationOverlay__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_SpellUIConfirmationOverlay_Selection_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LegacyTransparencyAnimator.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/SpellUIShardEquipStatus.h>
#include <Modloader/app/structs/VerticalSpacer.h>
#endif
#undef IL2CPP_STRUCT_SpellUIConfirmationOverlay__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SpellUIConfirmationOverlay__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SpellUIConfirmationOverlay__Fields_FWDDECL)
#include <Modloader/app/structs/SpellUIConfirmationOverlay__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SpellUIConfirmationOverlay__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
