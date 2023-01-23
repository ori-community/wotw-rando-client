#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_GizmoHelper__StaticFields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_GizmoHelper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GizmoHelper__StaticFields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Vector3_DEFINED) && defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_GizmoHelper__StaticFields_DEFINED
struct GUIStyle;
struct Dictionary_2_UnityEngine_Bounds_System_Boolean_;
struct Camera;
struct GizmoHelper__StaticFields {
    struct Color RectangleFillColor;
    struct Color RectangleOutlineColor;
    struct Color RectangleSelectedFillColor;
    struct Color RectangleSelectedOutlineColor;
    struct Color m_color;
    struct GUIStyle* m_centeredWhiteBoldText;
    struct Dictionary_2_UnityEngine_Bounds_System_Boolean_* m_transformsCache;
    struct Camera* m_editorCamera;
    struct Vector3 m_lastCameraPosition;
    struct Vector2 m_previousDelta;
    struct Vector3 m_previousCameraPosition;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_GizmoHelper__StaticFields_FWDDECL)
#define IL2CPP_STRUCT_GizmoHelper__StaticFields_FWDDECL
#include <Modloader/app/structs/Camera.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_Bounds_System_Boolean_.h>
#include <Modloader/app/structs/GUIStyle.h>
#endif
#undef IL2CPP_STRUCT_GizmoHelper__StaticFields_INITIALIZING
#if !defined(IL2CPP_STRUCT_GizmoHelper__StaticFields_DEFINED) && !defined(IL2CPP_STRUCT_GizmoHelper__StaticFields_FWDDECL)
#include <Modloader/app/structs/GizmoHelper__StaticFields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/GizmoHelper__StaticFields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
