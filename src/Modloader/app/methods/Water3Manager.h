#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Color.h>
#include <Modloader/app/structs/Mesh.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/Texture2D.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Vector4.h>
#include <Modloader/app/structs/Water3Manager.h>

namespace app::classes::Water3Manager {
    IL2CPP_REGISTER_METHOD(0x02D76130, void, SetDisplacementHeightMap, app::Water3Manager* this_ptr, app::Texture2D* map, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02D76260, app::Texture2D*, GetDisplacementHeightMap, app::Water3Manager* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02D76270, app::Water3Manager*, Instance, )
    IL2CPP_REGISTER_METHOD(0x00A3C8D0, void, OnEnable, app::Water3Manager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D76450, void, Start, app::Water3Manager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D76590, void, Update, app::Water3Manager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D766F0, app::Color, GetMaterialColor, app::Water3Manager* this_ptr, int32_t name)
    IL2CPP_REGISTER_METHOD(0x02D76790, void, SetMaterialColor, app::Water3Manager* this_ptr, int32_t name, app::Color color)
    IL2CPP_REGISTER_METHOD(0x02D76810, app::Vector4, GetMaterialVector, app::Water3Manager* this_ptr, int32_t name)
    IL2CPP_REGISTER_METHOD(0x02D768B0, void, SetMaterialVector, app::Water3Manager* this_ptr, int32_t name, app::Vector4 vector)
    IL2CPP_REGISTER_METHOD(0x02D76960, app::Texture*, GetMaterialTexture, app::Water3Manager* this_ptr, int32_t the_name)
    IL2CPP_REGISTER_METHOD(0x02D769D0, void, SetMaterialTexture, app::Water3Manager* this_ptr, int32_t the_name, app::Texture* parameter)
    IL2CPP_REGISTER_METHOD(0x02D76A50, float, GetDisplaceMeshAmountAt, app::Water3Manager* this_ptr, app::Vector3 pos, app::Transform* t)
    IL2CPP_REGISTER_METHOD(0x02D76A90, void, FillWithGradiant, app::Water3Manager* this_ptr, app::Texture2D* tex)
    IL2CPP_REGISTER_METHOD(0x02D76C40, bool, DisplaceMesh, app::Water3Manager* this_ptr, app::Mesh* m, app::Transform* t)
    IL2CPP_REGISTER_METHOD(0x02D772A0, float, DisplaceMeshAmountAt, app::Water3Manager* this_ptr, app::Vector3 pos, app::Transform* t)
    IL2CPP_REGISTER_METHOD(0x02D77470, void, OnApplicationQuit, app::Water3Manager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02D77510, void, ctor, app::Water3Manager* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, )
} // namespace app::classes::Water3Manager
