#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_LightCanvas_BindData__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_LightCanvas_BindData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_BindData__Fields_DEFINED)
#include <Modloader/app/structs/Vector4.h>
#if defined(IL2CPP_STRUCT_Vector4_DEFINED)
#define IL2CPP_STRUCT_LightCanvas_BindData__Fields_DEFINED
struct Texture2D;
struct __declspec(align(8)) LightCanvas_BindData__Fields {
    struct Vector4 AtlasUv;
    struct Vector4 AtlasMinMax;
    struct Texture2D* BindTexture;
    bool Flipped;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_LightCanvas_BindData__Fields_FWDDECL)
#define IL2CPP_STRUCT_LightCanvas_BindData__Fields_FWDDECL
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_LightCanvas_BindData__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_LightCanvas_BindData__Fields_DEFINED) && !defined(IL2CPP_STRUCT_LightCanvas_BindData__Fields_FWDDECL)
#include <Modloader/app/structs/LightCanvas_BindData__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/LightCanvas_BindData__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
