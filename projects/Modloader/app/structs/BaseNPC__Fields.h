#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BaseNPC__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BaseNPC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseNPC__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED) && defined(IL2CPP_STRUCT_SuspendableMask__Enum_DEFINED)
#define IL2CPP_STRUCT_BaseNPC__Fields_DEFINED
struct MessageBox;
struct Action_1_MessageBox_HideAction_;
struct BaseNPC__Fields {
    struct SaveSerialize__Fields _;
    struct MessageBox* m_messageBox;
    struct Action_1_MessageBox_HideAction_* m_onMessageHide;
    struct MessageBox* m_npcScreen;
    bool m_ignoreOriListenAnimation;
    bool _IsSuspended_k__BackingField;
    SuspendableMask__Enum m_suspensionMask;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BaseNPC__Fields_FWDDECL)
#define IL2CPP_STRUCT_BaseNPC__Fields_FWDDECL
#include <Modloader/app/structs/Action_1_MessageBox_HideAction_.h>
#include <Modloader/app/structs/MessageBox.h>
#endif
#undef IL2CPP_STRUCT_BaseNPC__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BaseNPC__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BaseNPC__Fields_FWDDECL)
#include <Modloader/app/structs/BaseNPC__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BaseNPC__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
