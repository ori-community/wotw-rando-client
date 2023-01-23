#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TextMeshTorusRenderer__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TextMeshTorusRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshTorusRenderer__Fields_DEFINED)
#include <Modloader/app/structs/TextMeshRenderer__Fields.h>
#include <Modloader/app/structs/TorusRevolveAxis__Enum.h>
#if defined(IL2CPP_STRUCT_TextMeshRenderer__Fields_DEFINED) && defined(IL2CPP_STRUCT_TorusRevolveAxis__Enum_DEFINED)
#define IL2CPP_STRUCT_TextMeshTorusRenderer__Fields_DEFINED
struct TextMeshTorusSettings;
struct TextMeshTorusRenderer__Fields {
    struct TextMeshRenderer__Fields _;
    TorusRevolveAxis__Enum revolveAxis;

    float minorRadius;
    float majorRadius;
    struct TextMeshTorusSettings* settings;
    bool fetchedSettings;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TextMeshTorusRenderer__Fields_FWDDECL)
#define IL2CPP_STRUCT_TextMeshTorusRenderer__Fields_FWDDECL
#include <Modloader/app/structs/TextMeshTorusSettings.h>
#endif
#undef IL2CPP_STRUCT_TextMeshTorusRenderer__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_TextMeshTorusRenderer__Fields_DEFINED) && !defined(IL2CPP_STRUCT_TextMeshTorusRenderer__Fields_FWDDECL)
#include <Modloader/app/structs/TextMeshTorusRenderer__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TextMeshTorusRenderer__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
