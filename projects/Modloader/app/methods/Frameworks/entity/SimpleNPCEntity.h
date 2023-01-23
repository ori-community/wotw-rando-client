#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/SimpleNPCEntity.h>
#include <Modloader/app/structs/Sensor.h>
#include <Modloader/app/structs/CharacterInteractableType__Enum.h>
#include <Modloader/app/structs/ICharacter.h>
#include <Modloader/app/structs/Action_1_Boolean_.h>
#include <Modloader/app/structs/CharacterInteractableActivationMode__Enum.h>
#include <Modloader/app/structs/Input_InputButtonProcessor.h>
#include <Modloader/app/structs/MessageProvider.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/Vector3.h>

namespace app::classes::frameworks::entity::SimpleNPCEntity {
    IL2CPP_REGISTER_METHOD(0x00F5BA90, app::Vector2, get_EffectivePlayerAnchor, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047605F0, SimpleNPCEntity_get_EffectivePlayerAnchor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00CA2550, bool, get_IsInteracting, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00CA2560, void, set_IsInteracting, (app::SimpleNPCEntity * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00F5BED0, bool, get_IsInInteractionRange, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5C0E0, app::Sensor*, get_Sensor, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417920, app::CharacterInteractableType__Enum, get_InteractableType, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5C1B0, void, OnEnable, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5C250, void, OnDisable, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5C2F0, void, OnAwake, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5C300, bool, CanInteractWithCharacter, (app::SimpleNPCEntity * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x00F5C450, void, OnInteractionStart, (app::SimpleNPCEntity * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x00F5C730, void, MoveOriToAnchor, (app::SimpleNPCEntity * this_ptr, app::Action_1_Boolean_* on_finished))
    IL2CPP_REGISTER_METHOD(0x00F5CAB0, void, EnableCameraZone, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5CC10, void, DisableCameraZone, (app::SimpleNPCEntity * this_ptr, bool imediate))
    IL2CPP_REGISTER_METHOD(0x00F5CDD0, void, OnInteractionEffectivelyStart, (app::SimpleNPCEntity * this_ptr, bool arrived_to_destination))
    IL2CPP_REGISTER_METHODINFO(0x047928F8, SimpleNPCEntity_OnInteractionEffectivelyStart__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x00F5CEB0, void, FinishInteraction, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5CFC0, void, InteractionUpdate, (app::SimpleNPCEntity * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x00F5D190, void, OnInteractionEnd, (app::SimpleNPCEntity * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x00F5D270, bool, ShouldFinishInteraction, (app::SimpleNPCEntity * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x00420EE0, app::CharacterInteractableActivationMode__Enum, get_ActivationMode, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5D440, app::Input_InputButtonProcessor*, get_ActivationButton, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBB40, app::MessageProvider*, get_InteractionMessageHint, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_DialogActorName, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::MoonAnimator*, get_DialogActorAnimator, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5D4E0, app::Vector2, get_DialogActorPosition, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB9B0, app::String*, get_InteractionActorName, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB990, app::MoonAnimator*, get_InteractionActorAnimator, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0058E140, app::Vector3, get_InteractionActorPosition, (app::SimpleNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00F5D640, void, ctor, (app::SimpleNPCEntity * this_ptr))
} // namespace app::classes::frameworks::entity::SimpleNPCEntity
