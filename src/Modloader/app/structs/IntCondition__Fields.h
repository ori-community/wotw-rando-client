#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_IntCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_IntCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntCondition__Fields_DEFINED)
#include <Modloader/app/structs/CompareMethod__Enum.h>
#include <Modloader/app/structs/Condition__Fields.h>
#if defined(IL2CPP_STRUCT_Condition__Fields_DEFINED) && defined(IL2CPP_STRUCT_CompareMethod__Enum_DEFINED)
#define IL2CPP_STRUCT_IntCondition__Fields_DEFINED
struct MoonInt;
struct IntCondition__Fields {
    struct Condition__Fields _;
    struct MoonInt* Value;
    CompareMethod__Enum CheckType;

    struct MoonInt* CompareValue;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_IntCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_IntCondition__Fields_FWDDECL
#include <Modloader/app/structs/MoonInt.h>
#endif
#undef IL2CPP_STRUCT_IntCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_IntCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_IntCondition__Fields_FWDDECL)
#include <Modloader/app/structs/IntCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/IntCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
