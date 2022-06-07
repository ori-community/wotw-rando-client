#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::CartographerEntity {
    IL2CPP_REGISTER_METHOD(0x00B405E0, app::String *, get_DialogActorName, (app::CartographerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B40660, app::String *, get_InteractionActorName, (app::CartographerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B406E0, app::CartographerEntity *, get_Instance, ())
    IL2CPP_REGISTER_METHOD(0x00B40760, void, set_Instance, (app::CartographerEntity * value))
    IL2CPP_REGISTER_METHOD(0x00B407F0, void, Awake, (app::CartographerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B40810, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x00B40820, void, OnUpdate, (app::CartographerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B40920, void, UpdateAnimParameter, (app::CartographerEntity * this_ptr, app::MoonAnimator * character_animator))
    IL2CPP_REGISTER_METHOD(0x00B40B80, app::GameWorldArea *, get_CurrentArea, (app::CartographerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B40CF0, app::MessageProvider *, get_IntroMessageProvider, (app::CartographerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B40F30, app::MessageProvider *, get_NoSaleMessage, (app::CartographerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B40F60, app::MessageProvider *, get_SalesPitchMessage, (app::CartographerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B40F90, app::MessageProvider *, get_InsufficientFundsMessage, (app::CartographerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B40FC0, app::MessageProvider *, get_ThanksMessage, (app::CartographerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B40FF0, int32_t, get_MapCost, (app::CartographerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B41100, app::MoonAnimation *, get_PurchaseAnimation, (app::CartographerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B41170, bool, get_CanInteractWithOri, (app::CartographerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B41230, app::MoonAnimation *, get_IdleBreakupAnimation, (app::CartographerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B412C0, bool, get_CanEffectivelyStartInteraction, (app::CartographerEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00B41380, void, ctor, (app::CartographerEntity * this_ptr))
}
