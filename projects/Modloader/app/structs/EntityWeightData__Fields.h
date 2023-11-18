#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EntityWeightData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EntityWeightData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityWeightData__Fields_DEFINED)
#include <Modloader/app/structs/EntityWeightData_EntityWeightSettings.h>
#include <Modloader/app/structs/ScriptableObject__Fields.h>
#if defined(IL2CPP_STRUCT_ScriptableObject__Fields_DEFINED) && defined(IL2CPP_STRUCT_EntityWeightData_EntityWeightSettings_DEFINED)
#define IL2CPP_STRUCT_EntityWeightData__Fields_DEFINED
struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_;
struct EntityWeightData__Fields {
    struct ScriptableObject__Fields _;
    struct EntityWeightData_EntityWeightSettings Light;
    struct EntityWeightData_EntityWeightSettings LightAir;
    struct EntityWeightData_EntityWeightSettings Medium;
    struct EntityWeightData_EntityWeightSettings Heavy;
    struct EntityWeightData_EntityWeightSettings HeavyAir;
    struct Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_* Settings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EntityWeightData__Fields_FWDDECL)
#define IL2CPP_STRUCT_EntityWeightData__Fields_FWDDECL
#include <Modloader/app/structs/Dictionary_2_EntityWeightData_EntityWeight_EntityWeightData_EntityWeightSettings_.h>
#endif
#undef IL2CPP_STRUCT_EntityWeightData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EntityWeightData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EntityWeightData__Fields_FWDDECL)
#include <Modloader/app/structs/EntityWeightData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EntityWeightData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
