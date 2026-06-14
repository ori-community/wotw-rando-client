#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Image__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Image__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Image__StaticFields_DEFINED)
#define IL2CPP_STRUCT_Image__StaticFields_DEFINED
struct Material;
struct Vector2__Array;
struct Vector3__Array;
struct List_1_UnityEngine_UI_Image_;
struct Action_1_UnityEngine_U2D_SpriteAtlas_;
struct Image__StaticFields {
    struct Material* s_ETC1DefaultUI;
    struct Vector2__Array* s_VertScratch;
    struct Vector2__Array* s_UVScratch;
    struct Vector3__Array* s_Xy;
    struct Vector3__Array* s_Uv;
    struct List_1_UnityEngine_UI_Image_* m_TrackedTexturelessImages;
    bool s_Initialized;
    struct Action_1_UnityEngine_U2D_SpriteAtlas_* __f__mg_cache0;
};
#endif
#if !defined(IL2CPP_STRUCT_Image__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_Image__StaticFields_FWDDECL
#include <Modloader/app/structs/Action_1_UnityEngine_U2D_SpriteAtlas_.h>
#include <Modloader/app/structs/List_1_UnityEngine_UI_Image_.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Vector2__Array.h>
#include <Modloader/app/structs/Vector3__Array.h>
#endif
#undef IL2CPP_STRUCT_Image__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Image__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_Image__StaticFields_FWDDECL)
#include <Modloader/app/structs/Image__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Image__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
