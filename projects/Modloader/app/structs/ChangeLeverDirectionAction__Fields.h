#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_ChangeLeverDirectionAction__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_ChangeLeverDirectionAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeLeverDirectionAction__Fields_DEFINED)
#include <Modloader/app/structs/ActionWithDuration__Fields.h>
#include <Modloader/app/structs/LeverDirections__Enum.h>
#if defined(IL2CPP_STRUCT_ActionWithDuration__Fields_DEFINED) && defined(IL2CPP_STRUCT_LeverDirections__Enum_DEFINED)
#define IL2CPP_STRUCT_ChangeLeverDirectionAction__Fields_DEFINED
struct LegacyLever;
struct ChangeLeverDirectionAction__Fields {
    struct ActionWithDuration__Fields _;
    struct LegacyLever* LegacyLever;
    LeverDirections__Enum NewLeverDirection;

    float _Duration_k__BackingField;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_ChangeLeverDirectionAction__Fields_FWDDECL)
#define IL2CPP_STRUCT_ChangeLeverDirectionAction__Fields_FWDDECL
#include <Modloader/app/structs/LegacyLever.h>
#endif
#undef IL2CPP_STRUCT_ChangeLeverDirectionAction__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_ChangeLeverDirectionAction__Fields_DEFINED) && !defined(IL2CPP_STRUCT_ChangeLeverDirectionAction__Fields_FWDDECL)
#include <Modloader/app/structs/ChangeLeverDirectionAction__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/ChangeLeverDirectionAction__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
