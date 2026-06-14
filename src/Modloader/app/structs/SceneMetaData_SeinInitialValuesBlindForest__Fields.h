#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesBlindForest__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesBlindForest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesBlindForest__Fields_DEFINED)
#include <Modloader/app/structs/AbilityType__Enum.h>
#if defined(IL2CPP_STRUCT_AbilityType__Enum_DEFINED)
#define IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesBlindForest__Fields_DEFINED
struct SceneMetaData_SeinAbilities;
struct SceneMetaData_SeinWorldState;
struct __declspec(align(8)) SceneMetaData_SeinInitialValuesBlindForest__Fields {
    int32_t Level;
    int32_t Hearts;
    int32_t Energy;
    struct SceneMetaData_SeinAbilities* Abilities;
    struct SceneMetaData_SeinWorldState* World;
    AbilityType__Enum DefaultXButtonBinding;

    AbilityType__Enum DefaultYButtonBinding;

    AbilityType__Enum DefaultBButtonBinding;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesBlindForest__Fields_FWDDECL)
#define IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesBlindForest__Fields_FWDDECL
#include <Modloader/app/structs/SceneMetaData_SeinAbilities.h>
#include <Modloader/app/structs/SceneMetaData_SeinWorldState.h>
#endif
#undef IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesBlindForest__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesBlindForest__Fields_DEFINED) && !defined(IL2CPP_STRUCT_SceneMetaData_SeinInitialValuesBlindForest__Fields_FWDDECL)
#include <Modloader/app/structs/SceneMetaData_SeinInitialValuesBlindForest__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/SceneMetaData_SeinInitialValuesBlindForest__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
