#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConditionalDialogTransition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConditionalDialogTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalDialogTransition__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ConditionalDialogTransition__Fields_DEFINED
struct MoonReference_1_IDialogNode_;
struct Condition_1;
struct IDialogNode;
struct ConditionalDialogTransition__Fields {
    struct MonoBehaviour__Fields _;
    struct MoonReference_1_IDialogNode_* Destination;
    struct Condition_1* Condition;
    struct IDialogNode* m_resolvedDialogNode;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConditionalDialogTransition__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConditionalDialogTransition__Fields_FWDDECL
#include <Modloader/app/structs/Condition_1.h>
#include <Modloader/app/structs/IDialogNode.h>
#include <Modloader/app/structs/MoonReference_1_IDialogNode_.h>
#endif
#undef IL2CPP_STRUCT_ConditionalDialogTransition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConditionalDialogTransition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConditionalDialogTransition__Fields_FWDDECL)
#include <Modloader/app/structs/ConditionalDialogTransition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConditionalDialogTransition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
