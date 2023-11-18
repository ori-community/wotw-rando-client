#include <Modloader/app/il2cpp_internals.h>
#ifdef IL2CPP_STRUCT_TileData_INITIALIZING
#elif defined(IL2CPP_STRUCTS_INITIALIZING)
#define IL2CPP_STRUCT_TileData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TileData_DEFINED)
#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Matrix4x4.h>
#include <Modloader/app/structs/TileFlags__Enum.h>
#include <Modloader/app/structs/Tile_ColliderType__Enum.h>
#if defined(IL2CPP_STRUCT_Color_DEFINED) && defined(IL2CPP_STRUCT_Matrix4x4_DEFINED) && defined(IL2CPP_STRUCT_TileFlags__Enum_DEFINED) && defined(IL2CPP_STRUCT_Tile_ColliderType__Enum_DEFINED)
#define IL2CPP_STRUCT_TileData_DEFINED
struct Sprite;
struct GameObject;
struct TileData {
    struct Sprite* m_Sprite;
    struct Color m_Color;
    struct Matrix4x4 m_Transform;
    struct GameObject* m_GameObject;
    TileFlags__Enum m_Flags;

    Tile_ColliderType__Enum m_ColliderType;
};
#endif
#endif
#if !defined(IL2CPP_STRUCT_TileData_FWDDECL)
#define IL2CPP_STRUCT_TileData_FWDDECL
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/Sprite.h>
#endif
#undef IL2CPP_STRUCT_TileData_INITIALIZING
#if !defined(IL2CPP_STRUCT_TileData_DEFINED) && !defined(IL2CPP_STRUCT_TileData_FWDDECL)
#include <Modloader/app/structs/TileData.h>
#endif
#else
namespace app {
#define IL2CPP_STRUCTS_INITIALIZING
#include <Modloader/app/structs/TileData.h>
#undef IL2CPP_STRUCTS_INITIALIZING
} // namespace app
#endif
