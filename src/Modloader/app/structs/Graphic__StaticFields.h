#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Graphic__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Graphic__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Graphic__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Graphic__StaticFields_DEFINED
struct Material;
struct Texture2D;
struct Mesh;
struct VertexHelper;
struct Graphic__StaticFields {
    struct Material* s_DefaultUI;
    struct Texture2D* s_WhiteTexture;
    struct Mesh* s_Mesh;
    struct VertexHelper* s_VertexHelper;
};
#endif
#if !defined(IL2CPP_STRUCT_Graphic__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Graphic__StaticFields_FWDDECL
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/VertexHelper.h>
#endif
#undef IL2CPP_STRUCT_Graphic__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Graphic__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Graphic__StaticFields_FWDDECL)
#include <Modloader/app/structs/Graphic__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Graphic__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
