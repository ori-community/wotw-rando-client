#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_EquipmentRadialSelection_RadialItemVisual__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_EquipmentRadialSelection_RadialItemVisual__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentRadialSelection_RadialItemVisual__Fields_DEFINED)
#include <Modloader/app/structs/Vector2.h>
#if defined(IL2CPP_STRUCT_Vector2_DEFINED)
#define IL2CPP_STRUCT_EquipmentRadialSelection_RadialItemVisual__Fields_DEFINED
struct CleverMenuItem;
struct Transform;
struct Renderer__Array;
struct Dictionary_2_UnityEngine_Renderer_UnityEngine_Color_;
struct __declspec(align(8)) EquipmentRadialSelection_RadialItemVisual__Fields {
    struct CleverMenuItem* m_menuItem;
    struct Transform* m_root;
    struct Renderer__Array* m_renderers;
    struct Dictionary_2_UnityEngine_Renderer_UnityEngine_Color_* m_originalColors;
    float m_transparency;
    struct Vector2 m_center;
    struct Vector2 m_direction;
    float m_angle;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_EquipmentRadialSelection_RadialItemVisual__Fields_FWDDECL)
#define IL2CPP_STRUCT_EquipmentRadialSelection_RadialItemVisual__Fields_FWDDECL
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_Renderer_UnityEngine_Color_.h>
#include <Modloader/app/structs/Renderer__Array.h>
#include <Modloader/app/structs/Transform.h>
#endif
#undef IL2CPP_STRUCT_EquipmentRadialSelection_RadialItemVisual__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_EquipmentRadialSelection_RadialItemVisual__Fields_DEFINED) && !defined(IL2CPP_STRUCT_EquipmentRadialSelection_RadialItemVisual__Fields_FWDDECL)
#include <Modloader/app/structs/EquipmentRadialSelection_RadialItemVisual__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/EquipmentRadialSelection_RadialItemVisual__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
