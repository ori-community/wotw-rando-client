#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_HasKeystonesCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_HasKeystonesCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasKeystonesCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/HasKeystonesCondition_ComparisonMode__Enum.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_HasKeystonesCondition_ComparisonMode__Enum_DEFINED)
#define IL2CPP_STRUCT_HasKeystonesCondition__Fields_DEFINED
struct MoonInt;
struct HasKeystonesCondition__Fields {
    struct Condition_1__Fields _;
    struct MoonInt* Count;
    HasKeystonesCondition_ComparisonMode__Enum Compare;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_HasKeystonesCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_HasKeystonesCondition__Fields_FWDDECL
#include <Modloader/app/structs/MoonInt.h>
#endif
#undef IL2CPP_STRUCT_HasKeystonesCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_HasKeystonesCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_HasKeystonesCondition__Fields_FWDDECL)
#include <Modloader/app/structs/HasKeystonesCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/HasKeystonesCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
