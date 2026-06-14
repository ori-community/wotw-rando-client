#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetBooleanAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetBooleanAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetBooleanAction__Fields_DEFINED)
#include <Modloader/app/structs/Action_1__Fields.h>
#include <Modloader/app/structs/SetBooleanAction_BoolSetModes__Enum.h>
#if defined(IL2CPP_STRUCT_Action_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_SetBooleanAction_BoolSetModes__Enum_DEFINED)
#define IL2CPP_STRUCT_SetBooleanAction__Fields_DEFINED
struct MoonBool;
struct SetBooleanAction__Fields {
    struct Action_1__Fields _;
    struct MoonBool* Variable;
    SetBooleanAction_BoolSetModes__Enum SetTo;

    bool WithChance;
    float Chance;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetBooleanAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetBooleanAction__Fields_FWDDECL
#include <Modloader/app/structs/MoonBool.h>
#endif
#undef IL2CPP_STRUCT_SetBooleanAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetBooleanAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetBooleanAction__Fields_FWDDECL)
#include <Modloader/app/structs/SetBooleanAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetBooleanAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
