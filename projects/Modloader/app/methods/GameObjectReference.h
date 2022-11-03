#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::GameObjectReference {
    IL2CPP_REGISTER_METHOD(0x003F8B20, app::GameObject*, GetReference, (app::GameObjectReference * game_object_reference))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::GameObjectReference * this_ptr, app::GameObject* game_object))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_GameObject, (app::GameObjectReference * this_ptr, app::GameObject* value))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::GameObject*, get_GameObject, (app::GameObjectReference * this_ptr))
    IL2CPP_REGISTER_METHOD(0x003F8B30, app::GameObjectReference*, MakeReference, (app::GameObject * game_object))
    IL2CPP_REGISTER_METHOD(0x003F8D00, void, ChangeReference, (app::GameObject * old_game_object, app::GameObject* new_game_object))
} // namespace app::classes::GameObjectReference
