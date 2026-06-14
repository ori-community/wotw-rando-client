#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ConfirmOrCancel__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ConfirmOrCancel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfirmOrCancel__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_ConfirmOrCancel__Fields_DEFINED
struct Action;
struct ActionMethod;
struct ConfirmOrCancel__Fields {
    struct MonoBehaviour__Fields _;
    struct Action* OnConfirm;
    struct Action* OnCancel;
    struct ActionMethod* OnConfirmAction;
    struct ActionMethod* OnCancelAction;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ConfirmOrCancel__Fields_FWDDECL)
#define IL2CPP_STRUCT_ConfirmOrCancel__Fields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/ActionMethod.h>
#endif
#undef IL2CPP_STRUCT_ConfirmOrCancel__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ConfirmOrCancel__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ConfirmOrCancel__Fields_FWDDECL)
#include <Modloader/app/structs/ConfirmOrCancel__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ConfirmOrCancel__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
