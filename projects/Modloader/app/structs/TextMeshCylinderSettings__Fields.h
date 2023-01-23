#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextMeshCylinderSettings__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextMeshCylinderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshCylinderSettings__Fields_DEFINED)
#include <Modloader/app/structs/CylinderRevolveAxis__Enum.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_CylinderRevolveAxis__Enum_DEFINED)
#define IL2CPP_STRUCT_TextMeshCylinderSettings__Fields_DEFINED
struct TextMeshCylinderSettings__Fields {
    struct MonoBehaviour__Fields _;
    CylinderRevolveAxis__Enum revolveAxis;

    float radius;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextMeshCylinderSettings__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextMeshCylinderSettings__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TextMeshCylinderSettings__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshCylinderSettings__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextMeshCylinderSettings__Fields_FWDDECL)
#include <Modloader/app/structs/TextMeshCylinderSettings__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextMeshCylinderSettings__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
