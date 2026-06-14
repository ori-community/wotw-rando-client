#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SetVector3Action__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SetVector3Action__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetVector3Action__Fields_DEFINED)
#include <Modloader/app/structs/Action_1__Fields.h>
#include <Modloader/app/structs/OperationMethod__Enum.h>
#if defined(IL2CPP_STRUCT_Action_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_OperationMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_SetVector3Action__Fields_DEFINED
struct MoonVector3;
struct SetVector3Action__Fields {
    struct Action_1__Fields _;
    struct MoonVector3* Variable;
    OperationMethod__Enum Operation;

    struct MoonVector3* Value;
    bool RandomValue;
    struct MoonVector3* Min;
    struct MoonVector3* Max;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SetVector3Action__Fields_FWDDECL)
#define IL2CPP_STRUCT_SetVector3Action__Fields_FWDDECL
#include <Modloader/app/structs/MoonVector3.h>
#endif
#undef IL2CPP_STRUCT_SetVector3Action__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SetVector3Action__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SetVector3Action__Fields_FWDDECL)
#include <Modloader/app/structs/SetVector3Action__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SetVector3Action__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
