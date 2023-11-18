#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LookupFilter3D__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LookupFilter3D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookupFilter3D__Fields_DEFINED)
#include <Modloader/app/structs/MonoBehaviour__Fields.h>
#if defined(IL2CPP_STRUCT_MonoBehaviour__Fields_DEFINED)
#define IL2CPP_STRUCT_LookupFilter3D__Fields_DEFINED
struct Texture2D;
struct Texture3D;
struct String;
struct Shader;
struct Material;
struct LookupFilter3D__Fields {
    struct MonoBehaviour__Fields _;
    struct Texture2D* LookupTexture;
    float Amount;
    bool ForceCompatibility;
    struct Texture3D* m_Lut3D;
    struct String* m_BaseTextureName;
    bool m_Use2DLut;
    struct Shader* Shader2D;
    struct Shader* Shader3D;
    struct Material* m_Material2D;
    struct Material* m_Material3D;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LookupFilter3D__Fields_FWDDECL)
#define IL2CPP_STRUCT_LookupFilter3D__Fields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Texture3D.h>
#endif
#undef IL2CPP_STRUCT_LookupFilter3D__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LookupFilter3D__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LookupFilter3D__Fields_FWDDECL)
#include <Modloader/app/structs/LookupFilter3D__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LookupFilter3D__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
