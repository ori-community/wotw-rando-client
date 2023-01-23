#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SwitchActionSystem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SwitchActionSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchActionSystem__Fields_DEFINED)
#include <Modloader/app/structs/SaveSerialize__Fields.h>
#if defined(IL2CPP_STRUCT_SaveSerialize__Fields_DEFINED)
#define IL2CPP_STRUCT_SwitchActionSystem__Fields_DEFINED
struct ActionMethod;
struct List_1_UnityEngine_MonoBehaviour_;
struct List_1_ISwitch_;
struct SwitchActionSystem__Fields {
    struct SaveSerialize__Fields _;
    struct ActionMethod* AllSwitchesOnAction;
    struct ActionMethod* OnAllSwitchesOffAction;
    bool TriggerOnce;
    struct List_1_UnityEngine_MonoBehaviour_* SwitchesObjects;
    struct List_1_ISwitch_* m_switches;
    bool m_lastAllOn;
    bool m_lastAllOff;
    bool m_canTrigger;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SwitchActionSystem__Fields_FWDDECL)
#define IL2CPP_STRUCT_SwitchActionSystem__Fields_FWDDECL
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/List_1_ISwitch_.h>
#include <Modloader/app/structs/List_1_UnityEngine_MonoBehaviour_.h>
#endif
#undef IL2CPP_STRUCT_SwitchActionSystem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SwitchActionSystem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SwitchActionSystem__Fields_FWDDECL)
#include <Modloader/app/structs/SwitchActionSystem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SwitchActionSystem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
