#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_P3D_Brush__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_P3D_Brush__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Brush__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/P3D_BlendMode__Enum.h>
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED) && defined(IL2CPP_STRUCT_P3D_BlendMode__Enum_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED)
#define IL2CPP_STRUCT_P3D_Brush__Fields_DEFINED
struct Action_2_UnityEngine_RenderTexture_P3D_Rect_;
struct String;
struct Texture2D;
struct Object;
struct __declspec(align(8)) P3D_Brush__Fields {
    struct Action_2_UnityEngine_RenderTexture_P3D_Rect_* OnPrePaint;
    struct Action_2_UnityEngine_RenderTexture_P3D_Rect_* OnPostPaint;
    struct String* Name;
    float Opacity;
    float Angle;
    struct Vector2 Offset;
    struct Vector2 Size;
    P3D_BlendMode__Enum Blend;

    struct Texture2D* Shape;
    struct Color Color;
    struct Vector2 Direction;
    struct Texture2D* Detail;
    struct Vector2 DetailScale;
    struct Object* _extraData;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_P3D_Brush__Fields_FWDDECL)
#define IL2CPP_STRUCT_P3D_Brush__Fields_FWDDECL
#include <Modloader/app/structs/Action_2_UnityEngine_RenderTexture_P3D_Rect_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>
#endif
#undef IL2CPP_STRUCT_P3D_Brush__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_P3D_Brush__Fields_DEFINED) && !defined(IL2CPP_STRUCT_P3D_Brush__Fields_FWDDECL)
#include <Modloader/app/structs/P3D_Brush__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/P3D_Brush__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
