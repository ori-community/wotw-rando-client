#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/LayerMask.h>
#include <Modloader/app/structs/Material.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/P3D_CoordType__Enum.h>
#include <Modloader/app/structs/P3D_Format__Enum.h>
#include <Modloader/app/structs/P3D_Matrix.h>
#include <Modloader/app/structs/P3D_Triangle.h>
#include <Modloader/app/structs/RaycastHit.h>
#include <Modloader/app/structs/Rect.h>
#include <Modloader/app/structs/Renderer.h>
#include <Modloader/app/structs/Shader.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/TextureFormat__Enum.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::P3D_Helper {
    IL2CPP_REGISTER_METHOD(0x03091AD0, app::TextureFormat__Enum, GetTextureFormat, app::P3D_Format__Enum format)
    IL2CPP_REGISTER_METHOD(0x03091B00, bool, IndexInMask, int32_t index, app::LayerMask mask)
    IL2CPP_REGISTER_METHOD(0x03091B20, app::Texture2D*, CreateTexture, int32_t width, int32_t height, app::TextureFormat__Enum format, bool mip_maps)
    IL2CPP_REGISTER_METHOD(0x03091CB0, void, ClearTexture, app::Texture2D* texture2_d, app::Color color, bool apply)
    IL2CPP_REGISTER_METHOD(0x03091E00, app::Material*, get_ClearMaterial, )
    IL2CPP_REGISTER_METHOD(0x03092030, app::Mesh*, GetMesh, app::GameObject* game_object, app::Mesh** baked_mesh)
    IL2CPP_REGISTER_METHOD(0x03092410, void, DestroyMesh, app::Mesh** mesh)
    IL2CPP_REGISTER_METHOD(0x030924E0, app::Material*, GetMaterial, app::GameObject* game_object, int32_t material_index)
    IL2CPP_REGISTER_METHOD(0x03092630, app::Material*, CloneMaterial, app::GameObject* game_object, int32_t material_index)
    IL2CPP_REGISTER_METHOD(0x030928F0, app::Material*, AddMaterial, app::Renderer* renderer, app::Shader* shader, int32_t material_index)
    IL2CPP_REGISTER_METHOD(0x03092C00, app::Rect, SplitHorizontal, app::Rect* rect, int32_t separation)
    IL2CPP_REGISTER_METHOD(0x03092C80, app::Rect, SplitVertical, app::Rect* rect, int32_t separation)
    IL2CPP_REGISTER_METHOD(0x03092D10, bool, Zero, float v)
    IL2CPP_REGISTER_METHOD(0x03092D20, float, Divide, float a, float b)
    IL2CPP_REGISTER_METHOD(0x03092D40, float, Reciprocal, float a)
    IL2CPP_REGISTER_METHOD(0x03092D60, float, GetUniformScale, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x03092DF0, app::Vector2, GetUV, app::RaycastHit hit, app::P3D_CoordType__Enum coord)
    IL2CPP_REGISTER_METHOD(0x03092E30, float, DampenFactor, float dampening, float elapsed)
    IL2CPP_REGISTER_METHOD(
        0x03092F00,
        app::Vector2,
        CalculatePixelFromCoord,
        app::Vector2 uv,
        app::Vector2 tiling,
        app::Vector2 offset,
        int32_t width,
        int32_t height
    )
    IL2CPP_REGISTER_METHOD(0x03093070, app::P3D_Matrix, CreateMatrix, app::Vector2 position, app::Vector2 size, float angle)
    IL2CPP_REGISTER_METHOD(0x03093370, float, Dampen, float current, float target, float dampening, float elapsed, float min_step)
    IL2CPP_REGISTER_METHOD(0x03093490, app::Vector3, Dampen3, app::Vector3 current, app::Vector3 target, float dampening, float elapsed, float min_step)
    IL2CPP_REGISTER_METHOD(
        0x03093630,
        bool,
        IntersectBarycentric,
        app::Vector3 start,
        app::Vector3 end,
        app::P3D_Triangle* triangle,
        app::Vector3* weights,
        float* distance01
    )
    IL2CPP_REGISTER_METHOD(0x03093C00, float, ClosestBarycentric_1, app::Vector3 point, app::P3D_Triangle* triangle, app::Vector3* weights)
    IL2CPP_REGISTER_METHOD(0x03094420, bool, ClosestBarycentric_2, app::Vector3 point, app::P3D_Triangle* triangle, app::Vector3* weights, float* distance_sqr)
    IL2CPP_REGISTER_METHOD(0x03094AB0, float, ClosestBarycentric_3, app::Vector2 point, app::Vector2 start, app::Vector2 end)
    IL2CPP_REGISTER_METHOD(0x03094C60, bool, PointLeftOfLine, app::Vector2 a, app::Vector2 b, app::Vector2 p)
    IL2CPP_REGISTER_METHOD(0x03094CC0, bool, PointRightOfLine, app::Vector2 a, app::Vector2 b, app::Vector2 p)
    IL2CPP_REGISTER_METHOD(0x03094D20, bool, IsWritableFormat, app::TextureFormat__Enum format)
    IL2CPP_REGISTER_METHOD(0x016A9980, app::Object*, Destroy_1, app::Object* o)
    IL2CPP_REGISTER_METHOD(0x016A9830, app::Object*, Clone_1, app::Object* o, bool keep_name)
    IL2CPP_REGISTER_METHOD(0x016A9980, app::GameObject*, Destroy_2, app::GameObject* o)
    IL2CPP_REGISTER_METHOD(0x016A9980, app::Material*, Destroy_3, app::Material* o)
    IL2CPP_REGISTER_METHOD(0x016A9980, app::Mesh*, Destroy_4, app::Mesh* o)
    IL2CPP_REGISTER_METHOD(0x016A9830, app::Material*, Clone_2, app::Material* o, bool keep_name)
} // namespace app::classes::P3D_Helper
