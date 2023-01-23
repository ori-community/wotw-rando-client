#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_MistAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_MistAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MistAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionMethod__Fields.h>
#include <Modloader/app/structs/MistAction_ActionType__Enum.h>
#if defined(IL2CPP_STRUCT_ActionMethod__Fields_DEFINED) && defined(IL2CPP_STRUCT_MistAction_ActionType__Enum_DEFINED)
#define IL2CPP_STRUCT_MistAction__Fields_DEFINED
struct MistAction__Fields {
    struct ActionMethod__Fields _;
    MistAction_ActionType__Enum Action;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_MistAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_MistAction__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_MistAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_MistAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_MistAction__Fields_FWDDECL)
#include <Modloader/app/structs/MistAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/MistAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
