#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_OriInterestTriggerB__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_OriInterestTriggerB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriInterestTriggerB__Fields_DEFINED)
#include <Modloader/app/structs/OriInterestTriggerB_State__Enum.h>
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_OriInterestTriggerB_State__Enum_DEFINED)
#define IL2CPP_STRUCT_OriInterestTriggerB__Fields_DEFINED
struct ActionMethod;
struct Condition_1;
struct MessageProvider;
struct Transform;
struct MessageBox;
struct OriInterestTriggerB__Fields {
    struct SaveSerialize__Fields _;
    struct ActionMethod* HighlightAction;
    struct ActionMethod* UnhighlightAction;
    struct ActionMethod* ActivateAction;
    struct ActionMethod* AlreadyActivatedAction;
    struct Condition_1* Condition;
    bool RunOnce;
    bool IsSlot;
    struct MessageProvider* HintMessage;
    float OriDuration;
    struct Transform* OriTarget;
    struct MessageBox* m_hint;
    struct Transform* m_transform;
    bool m_activated;
    bool m_isHighlighted;
    bool UseButtonPress;
    OriInterestTriggerB_State__Enum CurrentState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_OriInterestTriggerB__Fields_FWDDECL)
#define IL2CPP_STRUCT_OriInterestTriggerB__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/MessageBox.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_OriInterestTriggerB__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_OriInterestTriggerB__Fields_DEFINED) && !defined(IL2CPP_STRUCT_OriInterestTriggerB__Fields_FWDDECL)
#include <Modloader/app/structs/OriInterestTriggerB__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/OriInterestTriggerB__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
