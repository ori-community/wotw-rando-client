#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_Tile__Fields_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_Tile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tile__Fields_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/TileBase__Fields.h>
#include <Modloader/app/structs/TileFlags__Enum.h>
#include <Modloader/app/structs/Tile_ColliderType__Enum.h>
#if defined(IL2CPP_STRUCT_TileBase__Fields_DEFINED) && defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED) && defined(IL2CPP_STRUCT_TileFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_Tile_ColliderType__Enum_DEFINED)
#define IL2CPP_STRUCT_Tile__Fields_DEFINED
struct Sprite;
struct GameObject;
struct Tile__Fields {
    struct TileBase__Fields _;
    struct Sprite* m_Sprite;
    struct Color m_Color;
    struct Matrix4x4 m_Transform;
    struct GameObject* m_InstancedGameObject;
    TileFlags__Enum m_Flags;

    Tile_ColliderType__Enum m_ColliderType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_Tile__Fields_FWDDECL)
#define IL2CPP_STRUCT_Tile__Fields_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Sprite.h>
#endif
#undef IL2CPP_STRUCT_Tile__Fields_INITIALIZING
#if !defined(IL2CPP_STRUCT_Tile__Fields_DEFINED) && !defined(IL2CPP_STRUCT_Tile__Fields_FWDDECL)
#include <Modloader/app/structs/Tile__Fields.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/Tile__Fields.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
