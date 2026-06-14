#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_BooleanCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_BooleanCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition__Fields.h>
#if defined(IL2CPP_STRUCT_Condition__Fields_DEFINED)
#define IL2CPP_STRUCT_BooleanCondition__Fields_DEFINED
struct MoonBool;
struct BooleanCondition__Fields {
    struct Condition__Fields _;
    struct MoonBool* ValueA;
    struct MoonBool* ValueB;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_BooleanCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_BooleanCondition__Fields_FWDDECL
#include <Modloader/app/structs/MoonBool.h>
#endif
#undef IL2CPP_STRUCT_BooleanCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_BooleanCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_BooleanCondition__Fields_FWDDECL)
#include <Modloader/app/structs/BooleanCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/BooleanCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
