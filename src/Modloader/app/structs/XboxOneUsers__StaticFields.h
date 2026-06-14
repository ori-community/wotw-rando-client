#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneUsers__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneUsers__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneUsers__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XboxOneUsers__StaticFields_DEFINED
struct Action_1_Int32_;
struct Action;
struct XboxOneUsers__StaticFields {
    struct Action_1_Int32_* _OnUserWillChange_k__BackingField;
    struct Action* _OnUserChanged_k__BackingField;
    struct Action* _OnUserPicked_k__BackingField;
    struct Action* _OnUserSignedOut_k__BackingField;
    struct Action* _OnLoginCancel_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneUsers__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XboxOneUsers__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Int32_.h>
#endif
#undef IL2CPP_STRUCT_XboxOneUsers__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneUsers__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneUsers__StaticFields_FWDDECL)
#include <Modloader/app/structs/XboxOneUsers__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneUsers__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
