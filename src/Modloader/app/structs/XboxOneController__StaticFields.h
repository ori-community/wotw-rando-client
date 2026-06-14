#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_XboxOneController__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_XboxOneController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneController__StaticFields_DEFINED)
#define IL2CPP_STRUCT_XboxOneController__StaticFields_DEFINED
struct Action;
struct Action_1_Int32_;
struct XboxOneController__StaticFields {
    struct Action* _OnLastControllerDisconnect_k__BackingField;
    struct Action* _OnActiveControllerDisconnect_k__BackingField;
    struct Action_1_Int32_* _OnWillSwitchController_k__BackingField;
};
#endif
#if !defined(IL2CPP_STRUCT_XboxOneController__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_XboxOneController__StaticFields_FWDDECL
#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/Action_1_Int32_.h>
#endif
#undef IL2CPP_STRUCT_XboxOneController__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_XboxOneController__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_XboxOneController__StaticFields_FWDDECL)
#include <Modloader/app/structs/XboxOneController__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/XboxOneController__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
