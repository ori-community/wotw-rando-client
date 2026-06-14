#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Water3UnderwaterEffect__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Water3UnderwaterEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water3UnderwaterEffect__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_Water3UnderwaterEffect__Fields_DEFINED
struct Shader;
struct Water3;
struct Material;
struct Water3UnderwaterEffect__Fields {
    struct MonoBehaviour__Fields _;
    float m_UnderwaterColorFade;
    struct Shader* m_UnderwaterShader;
    struct Water3* m_Water;
    struct Color m_BlendColor;
    struct Material* m_UnderwaterMaterial;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Water3UnderwaterEffect__Fields_FWDDECL)
#define IL2CPP_STRUCT_Water3UnderwaterEffect__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Water3.h>
#endif
#undef IL2CPP_STRUCT_Water3UnderwaterEffect__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Water3UnderwaterEffect__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Water3UnderwaterEffect__Fields_FWDDECL)
#include <Modloader/app/structs/Water3UnderwaterEffect__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Water3UnderwaterEffect__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
