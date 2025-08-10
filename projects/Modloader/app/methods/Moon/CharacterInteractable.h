#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CharacterInteractable.h>
#include <Modloader/app/structs/CharacterInteractableActivationMode__Enum.h>
#include <Modloader/app/structs/CharacterInteractableType__Enum.h>
#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/MessageProvider.h>

namespace app::classes::Moon::CharacterInteractable {
    IL2CPP_REGISTER_METHOD(0x004358D0, bool, get_IsSuspended, app::CharacterInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00447370, void, set_IsSuspended, app::CharacterInteractable* this_ptr, bool value)
    IL2CPP_REGISTER_METHOD(0x003FC830, app::CharacterInteractableType__Enum, get_InteractableType, app::CharacterInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC3B80, bool, CanInteractWithCharacter, app::CharacterInteractable* this_ptr, app::ICharacter* character)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInteractionStart, app::CharacterInteractable* this_ptr, app::ICharacter* character)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, InteractionUpdate, app::CharacterInteractable* this_ptr, app::ICharacter* character)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnInteractionEnd, app::CharacterInteractable* this_ptr, app::ICharacter* character)
    IL2CPP_REGISTER_METHOD(0x00417870, bool, ShouldFinishInteraction, app::CharacterInteractable* this_ptr, app::ICharacter* character)
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::CharacterInteractableActivationMode__Enum, get_ActivationMode, app::CharacterInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC3D00, app::Input_InputButtonProcessor*, get_ActivationButton, app::CharacterInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::MessageProvider*, get_InteractionMessageHint, app::CharacterInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC3DA0, void, OnEnable, app::CharacterInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00CC3E40, void, OnDisable, app::CharacterInteractable* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00444DD0, void, ctor, app::CharacterInteractable* this_ptr)
} // namespace app::classes::Moon::CharacterInteractable
