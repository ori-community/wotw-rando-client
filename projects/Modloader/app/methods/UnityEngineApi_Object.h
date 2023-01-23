#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Type__Array.h>
#include <Modloader/app/structs/Object_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Quaternion.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/TextRenderer.h>
#include <Modloader/app/structs/SaveSlotUI.h>
#include <Modloader/app/structs/Button_1.h>

namespace app::classes::UnityEngineApi_Object {
    IL2CPP_REGISTER_METHOD(0x03118A90, app::GameObject*, New_1, (app::String * name))
    IL2CPP_REGISTER_METHOD(0x03118C00, app::GameObject*, New_2, (app::String * name, app::Type__Array* components))
    IL2CPP_REGISTER_METHOD(0x03118CD0, void, FixScene, (app::Object_1 * o))
    IL2CPP_REGISTER_METHOD(0x0157FA50, app::Object*, Instantiate_1, (app::Object * prototype))
    IL2CPP_REGISTER_METHOD(0x0157FBE0, app::Object*, Instantiate_2, (app::Object * original, app::Vector3 position, app::Quaternion rotation, app::Transform* parent))
    IL2CPP_REGISTER_METHOD(0x0157FB10, app::Object*, Instantiate_3, (app::Object * original, app::Transform* parent))
    IL2CPP_REGISTER_METHOD(0x0157FA50, app::GameObject*, Instantiate_4, (app::GameObject * prototype))
    IL2CPP_REGISTER_METHODINFO(0x04781AC0, UnityEngineApi_Object_Instantiate_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157FA50, app::TextRenderer*, Instantiate_5, (app::TextRenderer * prototype))
    IL2CPP_REGISTER_METHODINFO(0x0473CEC0, UnityEngineApi_Object_Instantiate_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157FBE0, app::GameObject*, Instantiate_6, (app::GameObject * original, app::Vector3 position, app::Quaternion rotation, app::Transform* parent))
    IL2CPP_REGISTER_METHODINFO(0x04705E18, UnityEngineApi_Object_Instantiate_5__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157FA50, app::Object_1*, Instantiate_7, (app::Object_1 * prototype))
    IL2CPP_REGISTER_METHODINFO(0x0477CEA0, UnityEngineApi_Object_Instantiate_6__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157FB10, app::GameObject*, Instantiate_8, (app::GameObject * original, app::Transform* parent))
    IL2CPP_REGISTER_METHODINFO(0x0477B1D0, UnityEngineApi_Object_Instantiate_7__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157FA50, app::Transform*, Instantiate_9, (app::Transform * prototype))
    IL2CPP_REGISTER_METHODINFO(0x04745958, UnityEngineApi_Object_Instantiate_8__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157FA50, app::SaveSlotUI*, Instantiate_10, (app::SaveSlotUI * prototype))
    IL2CPP_REGISTER_METHODINFO(0x04756038, UnityEngineApi_Object_Instantiate_9__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0157FB10, app::Button_1*, Instantiate_11, (app::Button_1 * original, app::Transform* parent))
    IL2CPP_REGISTER_METHODINFO(0x0478E738, UnityEngineApi_Object_Instantiate_10__MethodInfo)
} // namespace app::classes::UnityEngineApi_Object
