#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ICharacterInteractable.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/NPCEntity.h>
#include <Modloader/app/structs/NPCEntityPlaceholder.h>

namespace app::classes::NPCEntityPlaceholder {
    IL2CPP_REGISTER_METHOD(0x0087F600, app::ICharacterInteractable*, get_CharacterInteractable, (app::NPCEntityPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087F690, app::NPCEntity*, get_CurrentInstance, (app::NPCEntityPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087F780, app::GameObject*, get_CurrentInstanceRig, (app::NPCEntityPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087F8A0, bool, ShowNPCInteractionSettings, (app::NPCEntityPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087F8B0, bool, AttachToTransformSettings, (app::NPCEntityPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087F8C0, bool, ShowOffset, (app::NPCEntityPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087F8D0, void, OnDestroy, (app::NPCEntityPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087F8F0, void, Finalize, (app::NPCEntityPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087F980, void, MoonCleanup, (app::NPCEntityPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0087FA60, void, InstantiateFromPooledObj, (app::NPCEntityPlaceholder * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00880020, void, ctor, (app::NPCEntityPlaceholder * this_ptr))
} // namespace app::classes::NPCEntityPlaceholder
