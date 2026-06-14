#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextMeshTorusSettings_1__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextMeshTorusSettings_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshTorusSettings_1__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#include <Modloader/app/structs/TorusRevolveAxis__Enum_1.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_TorusRevolveAxis__Enum_1_DEFINED)
#define IL2CPP_STRUCT_TextMeshTorusSettings_1__Fields_DEFINED
struct TextMeshTorusSettings_1__Fields {
    struct MonoBehaviour__Fields _;
    TorusRevolveAxis__Enum_1 revolveAxis;

    float minorRadius;
    float majorRadius;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextMeshTorusSettings_1__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextMeshTorusSettings_1__Fields_FWDDECL
#endif
#undef IL2CPP_STRUCT_TextMeshTorusSettings_1__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshTorusSettings_1__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextMeshTorusSettings_1__Fields_FWDDECL)
#include <Modloader/app/structs/TextMeshTorusSettings_1__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextMeshTorusSettings_1__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
