#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_FlammablesStateCondition__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_FlammablesStateCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlammablesStateCondition__Fields_DEFINED)
#include <Modloader/app/structs/Condition_1__Fields.h>
#include <Modloader/app/structs/Flammable_FlameState__Enum.h>
#if defined(IL2CPP_STRUCT_Condition_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_Flammable_FlameState__Enum_DEFINED)
#define IL2CPP_STRUCT_FlammablesStateCondition__Fields_DEFINED
struct Flammable__Array;
struct FlammablesStateCondition__Fields {
    struct Condition_1__Fields _;
    struct Flammable__Array* Flammables;
    Flammable_FlameState__Enum RequiredFlameState;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_FlammablesStateCondition__Fields_FWDDECL)
#define IL2CPP_STRUCT_FlammablesStateCondition__Fields_FWDDECL
#include <Modloader/app/structs/Flammable__Array.h>
#endif
#undef IL2CPP_STRUCT_FlammablesStateCondition__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_FlammablesStateCondition__Fields_DEFINED) && !defined(IL2CPP_STRUCT_FlammablesStateCondition__Fields_FWDDECL)
#include <Modloader/app/structs/FlammablesStateCondition__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/FlammablesStateCondition__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
