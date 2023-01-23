#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetFloatAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetFloatAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetFloatAction__Fields_DEFINED)
#include <Modloader/app/structs/Action_1__Fields.h>
#include <Modloader/app/structs/OperationMethod__Enum.h>
#if defined(IL2CPP_STRUCT_Action_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_OperationMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_SetFloatAction__Fields_DEFINED
struct MoonFloat;
struct SetFloatAction__Fields {
    struct Action_1__Fields _;
    struct MoonFloat* Variable;
    OperationMethod__Enum Operation;

    struct MoonFloat* Value;
    bool RandomValue;
    struct MoonFloat* Min;
    struct MoonFloat* Max;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetFloatAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetFloatAction__Fields_FWDDECL
#include <Modloader/app/structs/MoonFloat.h>
#endif
#undef IL2CPP_STRUCT_SetFloatAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetFloatAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetFloatAction__Fields_FWDDECL)
#include <Modloader/app/structs/SetFloatAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetFloatAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
