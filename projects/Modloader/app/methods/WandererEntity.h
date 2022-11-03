#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::WandererEntity {
    IL2CPP_REGISTER_METHOD(0x008C6F10, app::WandererEntity*, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x008C6F90, void, set_Instance, (app::WandererEntity * value))
    IL2CPP_REGISTER_METHOD(0x008C7020, void, Awake, (app::WandererEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C7040, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x008C7050, void, Start, (app::WandererEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C7160, app::WandererEntity_WandererAnimationState__Enum, get_CurrentAnimState, (app::WandererEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C7170, app::MoonAnimation*, get_IdleBreakupAnimation, (app::WandererEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C7200, app::MoonAnimation*, get_PresentInAnimation, (app::WandererEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C7270, app::MoonAnimation*, get_PresentIdleAnimation, (app::WandererEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C72E0, app::MoonAnimation*, get_PresentOutAnimation, (app::WandererEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C7350, app::MoonAnimation*, get_IdleAnimation, (app::WandererEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C73C0, app::WandererNPC*, get_WandererNPC, (app::WandererEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C7480, app::WandererNPC_State__Enum, get_CurrentState, (app::WandererEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C7580, app::String*, get_DialogActorName, (app::WandererEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C7600, app::String*, get_InteractionActorName, (app::WandererEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C7680, bool, get_CanEffectivelyStartInteraction, (app::WandererEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x008C7750, bool, CanInteractWithCharacter, (app::WandererEntity * this_ptr, app::ICharacter* character))
    IL2CPP_REGISTER_METHOD(0x008C79B0, void, ctor, (app::WandererEntity * this_ptr))
} // namespace app::classes::WandererEntity
