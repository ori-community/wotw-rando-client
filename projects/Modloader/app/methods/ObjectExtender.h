#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CleverMenuItemSelectionManager.h>
#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/GoThroughPlatform.h>
#include <Modloader/app/structs/LightCanvas.h>
#include <Modloader/app/structs/MoonTimeline.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SceneRoot.h>
#include <Modloader/app/structs/SeinCharacter.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::ObjectExtender {
    IL2CPP_REGISTER_METHOD(0x0060E350, app::Component_1*, GetComponentInParents_1, app::GameObject* game_object, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x0060E3D0, app::Component_1*, GetComponentInParents_2, app::Transform* transform, app::Type* type)
    IL2CPP_REGISTER_METHOD(0x015F4D30, app::Object*, GetComponentInParents_3, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015F4CA0, app::Object*, GetComponentInParents_4, app::Component_1* component)
    IL2CPP_REGISTER_METHOD(0x015F4F80, app::Object*, GetComponentInParents_5, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x015F4D30, app::Object*, GetComponentInChildrenAndParents_1, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015F4CA0, app::Object*, GetComponentInChildrenAndParents_2, app::Component_1* component)
    IL2CPP_REGISTER_METHOD(0x015F4DB0, app::Object*, GetComponentInChildrenAndParents_3, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x015F4D30, app::Object*, GetComponentInParentsDontSuckTooMuch_1, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015F4CA0, app::Object*, GetComponentInParentsDontSuckTooMuch_2, app::Component_1* component)
    IL2CPP_REGISTER_METHOD(0x016A9610, app::Object*, GetComponentInParentsDontSuckTooMuch_3, app::Transform* transform)
    IL2CPP_REGISTER_METHOD(0x015F4CA0, app::Entity*, GetComponentInChildrenAndParents_4, app::Component_1* component)
    IL2CPP_REGISTER_METHOD(0x015F4CA0, app::MoonTimeline*, GetComponentInParents_6, app::Component_1* component)
    IL2CPP_REGISTER_METHOD(0x015F4CA0, app::GoThroughPlatform*, GetComponentInParents_7, app::Component_1* component)
    IL2CPP_REGISTER_METHOD(0x015F4CA0, app::LightCanvas*, GetComponentInParentsDontSuckTooMuch_4, app::Component_1* component)
    IL2CPP_REGISTER_METHOD(0x015F4CA0, app::Entity*, GetComponentInParents_8, app::Component_1* component)
    IL2CPP_REGISTER_METHOD(0x015F4CA0, app::SeinCharacter*, GetComponentInParents_9, app::Component_1* component)
    IL2CPP_REGISTER_METHOD(0x015F4D30, app::SceneRoot*, GetComponentInParentsDontSuckTooMuch_5, app::GameObject* game_object)
    IL2CPP_REGISTER_METHOD(0x015F4D30, app::CleverMenuItemSelectionManager*, GetComponentInParents_10, app::GameObject* game_object)
} // namespace app::classes::ObjectExtender
