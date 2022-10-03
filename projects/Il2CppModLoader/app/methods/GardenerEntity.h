#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::GardenerEntity {
    IL2CPP_REGISTER_METHOD(0x00416C40, app::ITimelineEntity*, get_CurrentProject, (app::GardenerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00416D80, app::MessageProvider*, get_FinishedProjectMessage, (app::GardenerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00416EB0, app::MoonAnimation*, get_TalkIdleAnimation, (app::GardenerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00416F20, app::GardenerEntity*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00416FA0, void, set_Instance, (app::GardenerEntity * value))
    IL2CPP_REGISTER_METHOD(0x00417030, void, Awake, (app::GardenerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417050, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00417060, app::String*, get_DialogActorName, (app::GardenerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004170E0, app::String*, get_InteractionActorName, (app::GardenerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417160, void, OnUpdate, (app::GardenerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417260, bool, get_CanEffectivelyStartInteraction, (app::GardenerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00417380, void, OnInteractionStart, (app::GardenerEntity * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x004173A0, void, OnInteractionEnd, (app::GardenerEntity * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x004173E0, void, ctor, (app::GardenerEntity * this_ptr))
} // namespace app::classes::GardenerEntity
