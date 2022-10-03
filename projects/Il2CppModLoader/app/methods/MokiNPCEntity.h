#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::MokiNPCEntity {
    IL2CPP_REGISTER_METHOD(0x01331490, app::String*, get_DialogActorName, (app::MokiNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01331510, app::String*, get_InteractionActorName, (app::MokiNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01331590, app::MoonAnimation*, get_IdleAnimation, (app::MokiNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x013316E0, void, set_IdleAnimation, (app::MokiNPCEntity * this_ptr, app::MoonAnimation* value))
    IL2CPP_REGISTER_METHOD(0x013316F0, bool, get_CanEffectivelyStartInteraction, (app::MokiNPCEntity * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004173E0, void, ctor, (app::MokiNPCEntity * this_ptr))
} // namespace app::classes::MokiNPCEntity
