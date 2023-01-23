#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/InteractablePrefabSpawner.h>
#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/GameObject.h>

namespace app::classes::Moon::InteractablePrefabSpawner {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInteractionStart, (app::InteractablePrefabSpawner * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x01102E20, void, OnInteractionEnd, (app::InteractablePrefabSpawner * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x01102E70, app::GameObject*, InstantiatePrefab, (app::InteractablePrefabSpawner * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x01103070, void, OnAfterInstantiatePrefab, (app::InteractablePrefabSpawner * this_ptr, app::ICharacter* character, app::GameObject* prefab_instance))
    IL2CPP_REGISTER_METHOD(0x011031D0, app::GameObject*, GiveItemToCharacter, (app::GameObject * prefab, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, (app::InteractablePrefabSpawner * this_ptr))
} // namespace app::classes::Moon::InteractablePrefabSpawner
