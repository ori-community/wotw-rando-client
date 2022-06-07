#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CageTextureUtility {
    IL2CPP_REGISTER_METHOD(0x01680D30, app::CageTextureUtility_PointaState__Enum, GetPointState_1, (app::Vector3 point, app::Texture2D * texture, app::Bounds bounds))
    IL2CPP_REGISTER_METHOD(0x01680E20, app::CageTextureUtility_PointaState__Enum, SampleTexture, (int32_t x, int32_t y, app::Texture2D * texture))
    IL2CPP_REGISTER_METHOD(0x01680EF0, app::CageTextureUtility_PointaState__Enum, GetPointState_2, (app::Vector3 point, app::Byte__Array * * map, int32_t widht, int32_t height, app::Bounds bounds))
    IL2CPP_REGISTER_METHOD(0x01681020, app::Vector2, WorldToUV, (app::Vector3 point, int32_t size_x, int32_t size_y, app::Bounds bounds))
    IL2CPP_REGISTER_METHOD(0x01681200, void, UpdateMap, (app::CageStructureTool * cage))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::CageTextureUtility * this_ptr))
}
