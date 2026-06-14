#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_RecorderMessageInputUI__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_RecorderMessageInputUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderMessageInputUI__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/RecorderMessageInputUI_ExitType__Enum.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_RecorderMessageInputUI_ExitType__Enum_DEFINED)
#define IL2CPP_STRUCT_RecorderMessageInputUI__Fields_DEFINED
struct String;
struct ActionMethod;
struct Action;
struct HashSet_1_Moon_ISuspendable_;
struct RecorderMessageInputUI__Fields {
    struct MonoBehaviour__Fields _;
    struct String* Text;
    struct ActionMethod* OnEnterAction;
    struct ActionMethod* OnExitAction;
    struct Action* OnExit;
    bool m_exitStarted;
    bool m_shouldFocusOnInputText;
    struct HashSet_1_Moon_ISuspendable_* m_suspendables;
    RecorderMessageInputUI_ExitType__Enum ExitReason;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_RecorderMessageInputUI__Fields_FWDDECL)
#define IL2CPP_STRUCT_RecorderMessageInputUI__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/HashSet_1_Moon_ISuspendable_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_RecorderMessageInputUI__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_RecorderMessageInputUI__Fields_DEFINED) && !defined(IL2CPP_STRUCT_RecorderMessageInputUI__Fields_FWDDECL)
#include <Modloader/app/structs/RecorderMessageInputUI__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/RecorderMessageInputUI__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
