#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CharacterFactory.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/CharacterFactory_Characters__Enum.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Action.h>

namespace app::classes::CharacterFactory {
    IL2CPP_REGISTER_METHOD(0x0104FAD0, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x0104FB50, void, Awake, (app::CharacterFactory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnDestroy, (app::CharacterFactory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0104FBE0, app::GameObject*, SpawnCharacter, (app::CharacterFactory * this_ptr, app::CharacterFactory_Characters__Enum character, app::GameObject* prefab, app::Vector3 position, app::Action* after_load, bool asign_to_current))
    IL2CPP_REGISTER_METHODINFO(0x04740278, CharacterFactory_SpawnCharacter__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01050280, void, DestroyCharacter, (app::CharacterFactory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010505D0, void, DestroyKu, (app::CharacterFactory * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01050810, app::GameObject*, GetCharacterPrefab, (app::CharacterFactory * this_ptr, app::CharacterFactory_Characters__Enum character))
    IL2CPP_REGISTER_METHOD(0x010509A0, void, ctor, (app::CharacterFactory * this_ptr))
} // namespace app::classes::CharacterFactory
