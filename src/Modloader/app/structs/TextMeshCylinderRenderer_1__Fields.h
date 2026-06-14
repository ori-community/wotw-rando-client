#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextMeshCylinderRenderer_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextMeshCylinderRenderer_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshCylinderRenderer_1__Fields_DEFINED)
#include <Modloader/app/structs/CylinderRevolveAxis__Enum_1.h>
#include <Modloader/app/structs/TextMeshRenderer_1__Fields.h>
#if defined(IL2CPP_STRUCT_TextMeshRenderer_1__Fields_DEFINED) && defined(IL2CPP_STRUCT_CylinderRevolveAxis__Enum_1_DEFINED)
#define IL2CPP_STRUCT_TextMeshCylinderRenderer_1__Fields_DEFINED
struct TextMeshCylinderSettings_1;
struct TextMeshCylinderRenderer_1__Fields {
    struct TextMeshRenderer_1__Fields _;
    CylinderRevolveAxis__Enum_1 revolveAxis;

    float radius;
    struct TextMeshCylinderSettings_1* settings;
    bool fetchedSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextMeshCylinderRenderer_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextMeshCylinderRenderer_1__Fields_FWDDECL
#include <Modloader/app/structs/TextMeshCylinderSettings_1.h>
#endif
#undef IL2CPP_STRUCT_TextMeshCylinderRenderer_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshCylinderRenderer_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextMeshCylinderRenderer_1__Fields_FWDDECL)
#include <Modloader/app/structs/TextMeshCylinderRenderer_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextMeshCylinderRenderer_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
