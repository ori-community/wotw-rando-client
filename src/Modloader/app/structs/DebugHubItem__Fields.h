#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_DebugHubItem__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_DebugHubItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHubItem__Fields_DEFINED)
#include <Modloader/app/structs/DebugHubItem_DebugHubItemLayout.h>
#include <Modloader/app/structs/Input_Button__Enum.h>
#if defined(IL2CPP_STRUCT_Input_Button__Enum_DEFINED) && defined(IL2CPP_STRUCT_DebugHubItem_DebugHubItemLayout_DEFINED)
#define IL2CPP_STRUCT_DebugHubItem__Fields_DEFINED
struct String;
struct Action;
struct Func_1_Boolean_;
struct __declspec(align(8)) DebugHubItem__Fields {
    struct String* _Name_k__BackingField;
    Input_Button__Enum _ButtonBinding_k__BackingField;

    bool _IsModal_k__BackingField;
    struct Action* _ToggleAction_k__BackingField;
    struct Func_1_Boolean_* _IsActiveFunc_k__BackingField;
    struct DebugHubItem_DebugHubItemLayout _Layout_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_DebugHubItem__Fields_FWDDECL)
#define IL2CPP_STRUCT_DebugHubItem__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Func_1_Boolean_.h>
#include <Modloader/app/structs/String.h>
#endif
#undef IL2CPP_STRUCT_DebugHubItem__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_DebugHubItem__Fields_DEFINED) && !defined(IL2CPP_STRUCT_DebugHubItem__Fields_FWDDECL)
#include <Modloader/app/structs/DebugHubItem__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/DebugHubItem__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
